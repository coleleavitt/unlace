/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000658D0
// Address: 0x00000001000658D0

//----- (00000001000658D0) ----------------------------------------------------
void *__fastcall sub_1000658D0(__int64 a1, char a2, __va_list_tag *a3, char a4)
{
  __int64 v5; // rbx
  void *v6; // rax
  void *v7; // r14
  __int128 v8; // kr00_16
  void *v9; // r13
  void *v10; // rdi
  void *v11; // rdi
  void (*v12)(char *, ...); // rcx
  const char *v13; // rsi
  __int128 v17; // [rsp+18h] [rbp-48h] BYREF
  void *v18; // [rsp+28h] [rbp-38h]

  v5 = a1;
  while ( 2 )
  {
    if ( a3->overflow_arg_area )
    {
      if ( !(unsigned int)sub_10006B030(v5, (__int64 *)a3) )
      {
        if ( (a4 & 1) != 0 )
          goto LABEL_30;
        if ( *(_BYTE *)(*(_QWORD *)&a3->gp_offset + 4LL) == 52 )
        {
          qexit(1, a3);
          BUG();
        }
        goto LABEL_8;
      }
      if ( *(_BYTE *)(v5 + 68) )
      {
        v12 = (void (*)(char *, ...))sub_100000AE0;
        if ( *(_QWORD *)(v5 + 24) )
          goto LABEL_24;
      }
      else
      {
        v12 = (void (*)(char *, ...))sub_10006D810;
        if ( *(_QWORD *)(v5 + 24) )
        {
LABEL_24:
          v13 = *(const char **)(v5 + 16);
          goto LABEL_29;
        }
      }
      v13 = _s1;
      goto LABEL_29;
    }
LABEL_8:
    v6 = sub_10006B380(v5, a2);
    v7 = v6;
    if ( !v6 )
    {
      if ( *(_BYTE *)(v5 + 68) )
      {
        v12 = (void (*)(char *, ...))sub_100000AE0;
        if ( *(_QWORD *)(v5 + 24) )
          goto LABEL_16;
      }
      else
      {
        v12 = (void (*)(char *, ...))sub_10006D810;
        if ( *(_QWORD *)(v5 + 24) )
        {
LABEL_16:
          v13 = *(const char **)(v5 + 16);
LABEL_29:
          v12("%s\n", v13);
          goto LABEL_30;
        }
      }
      v13 = _s1;
      goto LABEL_29;
    }
    switch ( *((_BYTE *)v6 + 4) )
    {
      case 0:
        goto LABEL_31;
      case 1:
        sub_10005B170((_BYTE *)v5, "rpc: remote did not understand our request");
        goto LABEL_21;
      case 2:
        sub_10005B170((_BYTE *)v5, "rpc: no remote memory");
        goto LABEL_21;
      case 6:
        sub_100000AE0((int)"rpc: user cancelled the operation\n");
        goto LABEL_21;
      default:
        if ( *(_BYTE *)(v5 + 69) )
        {
          (*(void (__fastcall **)(__int128 *, __int64, void *))(*(_QWORD *)v5 + 56LL))(&v17, v5, v6);
          v8 = v17;
          v17 = 0;
          v9 = v18;
          v18 = nullptr;
          v10 = *(void **)&a3->gp_offset;
          if ( *(_QWORD *)&a3->gp_offset )
          {
            a3->overflow_arg_area = nullptr;
            qfree(v10);
            v11 = (void *)v17;
            *(_OWORD *)&a3->gp_offset = v8;
            a3->reg_save_area = v9;
            if ( v11 )
            {
              *((_QWORD *)&v17 + 1) = 0;
              qfree(v11);
            }
          }
          else
          {
            *(_OWORD *)&a3->gp_offset = v8;
            a3->reg_save_area = v9;
          }
          qfree(v7);
          v5 = a1;
          continue;
        }
        sub_10006D810("Exploit packet has been detected and ignored\n");
LABEL_21:
        qfree(v7);
LABEL_30:
        v7 = nullptr;
LABEL_31:
        (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 64LL))(v5, v7);
        return v7;
    }
  }
}
