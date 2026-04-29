char __fastcall sub_1A500(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  char result; // al
  _QWORD *v5; // rax
  _QWORD *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdx

  v3 = *(_QWORD *)(a1[3] + 16LL) & a2;
  if ( v3 < a1[52] )
    return 0;
  result = 0;
  if ( v3 < a1[53] )
  {
    v5 = (_QWORD *)a1[41];
    if ( !v5 )
      goto LABEL_10;
    v7 = a1 + 40;
    do
    {
      while ( 1 )
      {
        v8 = v5[2];
        v9 = v5[3];
        if ( v5[4] < v3 )
          break;
        v7 = v5;
        v5 = (_QWORD *)v5[2];
        if ( !v8 )
          goto LABEL_8;
      }
      v5 = (_QWORD *)v5[3];
    }
    while ( v9 );
LABEL_8:
    if ( v7 != a1 + 40 && v3 >= v7[4] )
    {
      if ( a3 )
        copy_tinfo_t();
      return *((_BYTE *)v7 + 40) != 0;
    }
    else
    {
LABEL_10:
      sub_FE10((__int64)a1, 0xCu, 0, 0);
      create_data();
      return sub_15CE0(a1, v3, a3);
    }
  }
  return result;
}
