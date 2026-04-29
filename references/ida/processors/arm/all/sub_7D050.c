void __fastcall sub_7D050(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rsi

  v1 = a1[78];
  if ( v1 )
  {
    v2 = v1 + 40LL * *(_QWORD *)(v1 - 8);
    if ( v1 == v2 )
    {
      v4 = 0;
    }
    else
    {
      do
      {
        v3 = v2;
        v2 -= 40;
        clear_tinfo_t();
      }
      while ( a1[78] != v2 );
      v4 = 40LL * *(_QWORD *)(v3 - 48);
    }
    operator delete[]((void *)(v2 - 8), v4 + 8);
  }
  v5 = a1[80];
  a1[78] = 0;
  a1[79] = 0;
  if ( v5 )
  {
    v6 = v5 + 40LL * *(_QWORD *)(v5 - 8);
    if ( v5 == v6 )
    {
      v8 = 0;
    }
    else
    {
      do
      {
        v7 = v6;
        v6 -= 40;
        clear_tinfo_t();
      }
      while ( a1[80] != v6 );
      v8 = 40LL * *(_QWORD *)(v7 - 48);
    }
    operator delete[]((void *)(v6 - 8), v8 + 8);
  }
  a1[80] = 0;
  a1[81] = 0;
}
