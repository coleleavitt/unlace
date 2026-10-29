/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9E8A8
// Address: 0x000000000009E8A8

//----- (000000000009E8A8) ----------------------------------------------------
void *__fastcall sub_9E8A8(__int64 a1, unsigned __int8 a2, __int64 *a3, char a4)
{
  _OWORD *v8; // x1
  void *v9; // x0
  void *v10; // x20
  void *v11; // x8
  __int64 v12; // x9
  __int64 v13; // x10
  void *v14; // x0
  __int64 v15; // x8
  void *v16; // x0
  void (*v17)(const char *, ...); // x8
  const char *v18; // x1
  void *ptr; // [xsp+8h] [xbp-78h] BYREF
  __int64 v21; // [xsp+10h] [xbp-70h]
  __int64 v22; // [xsp+18h] [xbp-68h]
  __int128 v23; // [xsp+20h] [xbp-60h]
  __int64 v24; // [xsp+30h] [xbp-50h]
  __int64 v25; // [xsp+38h] [xbp-48h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a3[1] )
    goto LABEL_8;
LABEL_2:
  if ( (unsigned int)sub_A5940(a1, a3) )
  {
LABEL_14:
    if ( *(_BYTE *)(a1 + 68) )
      v17 = (void (*)(const char *, ...))sub_39FA0;
    else
      v17 = (void (*)(const char *, ...))sub_A84C8;
    if ( *(_QWORD *)(a1 + 24) )
      v18 = *(const char **)(a1 + 16);
    else
      v18 = &byte_F154B;
    v17("%s\n", v18);
    goto LABEL_27;
  }
  if ( (a4 & 1) == 0 )
  {
    if ( *(_BYTE *)(*a3 + 4) == 52 )
      qexit((pthread_mutex_t *)((char *)&dword_0 + 1), v8);
    while ( 1 )
    {
LABEL_8:
      v9 = sub_A5CFC(a1, a2);
      if ( !v9 )
        goto LABEL_14;
      v10 = v9;
      switch ( *((_BYTE *)v9 + 4) )
      {
        case 0:
          goto LABEL_28;
        case 1:
          sub_93558((_BYTE *)a1, "rpc: remote did not understand our request");
          goto LABEL_26;
        case 2:
          sub_93558((_BYTE *)a1, "rpc: no remote memory");
          goto LABEL_26;
        case 6:
          sub_39FA0((__int64)"rpc: user cancelled the operation\n");
          goto LABEL_26;
        default:
          if ( !*(_BYTE *)(a1 + 69) )
          {
            sub_A84C8("Exploit packet has been detected and ignored\n");
LABEL_26:
            qfree(v10);
            goto LABEL_27;
          }
          (*(void (__fastcall **)(void **__return_ptr, __int64, void *))(*(_QWORD *)a1 + 56LL))(&ptr, a1, v9);
          v11 = ptr;
          v12 = v21;
          v13 = v22;
          ptr = nullptr;
          v21 = 0;
          v22 = 0;
          *(_QWORD *)&v23 = v11;
          *((_QWORD *)&v23 + 1) = v12;
          v24 = v13;
          v14 = (void *)*a3;
          if ( *a3 )
          {
            a3[1] = 0;
            qfree(v14);
            v15 = v24;
            v16 = ptr;
            *(_OWORD *)a3 = v23;
            a3[2] = v15;
            if ( v16 )
            {
              v21 = 0;
              qfree(v16);
              ptr = nullptr;
              v22 = 0;
            }
          }
          else
          {
            *a3 = (__int64)v11;
            a3[1] = v12;
            a3[2] = v13;
          }
          qfree(v10);
          if ( a3[1] )
            goto LABEL_2;
          break;
      }
    }
  }
LABEL_27:
  v10 = nullptr;
LABEL_28:
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)a1 + 64LL))(a1, v10);
  return v10;
}
// 9EA98: variable 'v8' is possibly undefined
// 0: using guessed type int dword_0;
// F154B: using guessed type char byte_F154B;
