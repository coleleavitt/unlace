__int64 __fastcall sub_5B5F00(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned __int64 *v6; // rax
  __int64 (__fastcall *v7)(unsigned __int64 *, unsigned __int64, int); // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
  if ( v5 == sub_3DB7B0 )
    v6 = a2 + 2;
  else
    v6 = (unsigned __int64 *)v5((__int64)a2);
  if ( a3 < *v6 || a3 >= v6[1] )
    return a1;
  v7 = *(__int64 (__fastcall **)(unsigned __int64 *, unsigned __int64, int))(*a2 + 40);
  if ( v7 != sub_5B3560 )
  {
    v13 = v7(a2, a3, 0);
LABEL_14:
    if ( a3 == v13 )
      sub_35A790((char **)a1);
    return a1;
  }
  if ( a2[10] )
  {
    v8 = (_QWORD *)a2[7];
    v9 = a2 + 6;
    if ( v8 )
    {
      v10 = a2 + 6;
      do
      {
        while ( 1 )
        {
          v11 = v8[2];
          v12 = v8[3];
          if ( v8[4] < a3 )
            break;
          v10 = v8;
          v8 = (_QWORD *)v8[2];
          if ( !v11 )
            goto LABEL_12;
        }
        v8 = (_QWORD *)v8[3];
      }
      while ( v12 );
LABEL_12:
      if ( v9 != v10 )
      {
        v13 = v10[4];
        goto LABEL_14;
      }
    }
  }
  return a1;
}
