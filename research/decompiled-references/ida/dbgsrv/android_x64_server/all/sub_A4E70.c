/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4E70
// Address: 0x00000000000A4E70

//----- (00000000000A4E70) ----------------------------------------------------
void *__fastcall sub_A4E70(__int64 a1, char a2, __int64 *a3, char a4)
{
  void *v7; // rax
  void *v8; // rbx
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  void *v12; // rdi
  __int64 v13; // rax
  void *v14; // rdi
  void (*v15)(char *, ...); // rcx
  const char *v16; // rsi
  void *ptr; // [rsp+8h] [rbp-70h] BYREF
  __int128 v19; // [rsp+10h] [rbp-68h]
  unsigned __int128 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+30h] [rbp-48h]
  unsigned __int64 v22; // [rsp+40h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  if ( !a3[1] )
    goto LABEL_8;
  while ( 2 )
  {
    if ( (unsigned int)sub_AA6D0(a1, a3) )
    {
LABEL_14:
      if ( *(_BYTE *)(a1 + 68) )
      {
        v15 = (void (*)(char *, ...))sub_390A0;
        if ( *(_QWORD *)(a1 + 24) )
          goto LABEL_16;
      }
      else
      {
        v15 = (void (*)(char *, ...))sub_AD470;
        if ( *(_QWORD *)(a1 + 24) )
        {
LABEL_16:
          v16 = *(const char **)(a1 + 16);
LABEL_20:
          v8 = nullptr;
          v15("%s\n", v16);
          goto LABEL_26;
        }
      }
      v16 = s1;
      goto LABEL_20;
    }
    if ( (a4 & 1) != 0 )
      goto LABEL_25;
    if ( *(_BYTE *)(*a3 + 4) == 52 )
      qexit(1);
LABEL_8:
    v7 = sub_AAA50(a1, a2);
    if ( !v7 )
      goto LABEL_14;
    v8 = v7;
    switch ( *((_BYTE *)v7 + 4) )
    {
      case 0:
        goto LABEL_26;
      case 1:
        sub_9AE30((_BYTE *)a1, "rpc: remote did not understand our request");
        goto LABEL_24;
      case 2:
        sub_9AE30((_BYTE *)a1, "rpc: no remote memory");
        goto LABEL_24;
      case 6:
        sub_390A0((int)"rpc: user cancelled the operation\n");
        goto LABEL_24;
      default:
        if ( *(_BYTE *)(a1 + 69) )
        {
          (*(void (__fastcall **)(void **, __int64, void *))(*(_QWORD *)a1 + 56LL))(&ptr, a1, v7);
          v9 = ptr;
          v10 = v19;
          v20 = __PAIR128__(v19, (unsigned __int64)ptr);
          ptr = nullptr;
          v11 = *((_QWORD *)&v19 + 1);
          v21 = *((_QWORD *)&v19 + 1);
          v19 = 0;
          v12 = (void *)*a3;
          if ( *a3 )
          {
            a3[1] = 0;
            qfree(v12);
            v13 = v21;
            v14 = ptr;
            *(_OWORD *)a3 = v20;
            a3[2] = v13;
            if ( v14 )
            {
              *(_QWORD *)&v19 = 0;
              qfree(v14);
              ptr = nullptr;
              *((_QWORD *)&v19 + 1) = 0;
            }
          }
          else
          {
            *a3 = (__int64)v9;
            a3[1] = v10;
            a3[2] = v11;
          }
          qfree(v8);
          if ( a3[1] )
            continue;
          goto LABEL_8;
        }
        sub_AD470("Exploit packet has been detected and ignored\n");
LABEL_24:
        qfree(v8);
LABEL_25:
        v8 = nullptr;
LABEL_26:
        (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)a1 + 64LL))(a1, v8);
        return v8;
    }
  }
}
