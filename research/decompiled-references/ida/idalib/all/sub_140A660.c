__int64 __fastcall sub_140A660(
        char *a1,
        char *a2,
        char *a3,
        char *a4,
        __int64 a5,
        unsigned __int8 (__fastcall *a6)(char *, char *))
{
  char *v6; // r15
  char *v9; // rbp
  __int64 v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rdi
  _QWORD *v15; // rsi
  __int64 v16; // r13
  unsigned __int64 v17; // r12
  _QWORD *v18; // rsi
  __int64 v19; // r14
  unsigned __int64 v20; // r12
  _QWORD *v21; // rsi

  v6 = a1;
  v9 = a3;
  if ( a3 != a4 && a1 != a2 )
  {
    do
    {
      v13 = a5 + 32;
      if ( a6(v9, v6) )
      {
        v11 = a5;
        a5 += 72;
        sub_A0AAD0(v11, v9);
        v12 = v9 + 32;
        v9 += 72;
        sub_A0AAD0(v13, v12);
        *(_QWORD *)(a5 - 8) = *((_QWORD *)v9 - 1);
        if ( a2 == v6 )
          break;
      }
      else
      {
        v14 = a5;
        a5 += 72;
        sub_A0AAD0(v14, v6);
        v15 = v6 + 32;
        v6 += 72;
        sub_A0AAD0(v13, v15);
        *(_QWORD *)(a5 - 8) = *((_QWORD *)v6 - 1);
        if ( a2 == v6 )
          break;
      }
    }
    while ( a4 != v9 );
  }
  v16 = a2 - v6;
  v17 = 0x8E38E38E38E38E39LL * (v16 >> 3);
  if ( v16 > 0 )
  {
    do
    {
      sub_A0AAD0(a5, v6);
      v18 = v6 + 32;
      v6 += 72;
      sub_A0AAD0(a5 + 32, v18);
      a5 += 72;
      *(_QWORD *)(a5 - 8) = *((_QWORD *)v6 - 1);
      --v17;
    }
    while ( v17 );
  }
  v19 = a4 - v9;
  v20 = 0x8E38E38E38E38E39LL * (v19 >> 3);
  if ( v19 > 0 )
  {
    do
    {
      sub_A0AAD0(a5, v9);
      v21 = v9 + 32;
      v9 += 72;
      sub_A0AAD0(a5 + 32, v21);
      a5 += 72;
      *(_QWORD *)(a5 - 8) = *((_QWORD *)v9 - 1);
      --v20;
    }
    while ( v20 );
  }
  return a5;
}
