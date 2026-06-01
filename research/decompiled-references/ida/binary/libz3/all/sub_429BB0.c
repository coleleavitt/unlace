void __fastcall sub_429BB0(__int64 *a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbp

  if ( a3 <= 0xFFFE )
  {
    while ( 1 )
    {
      v5 = a1[7];
      if ( v5 )
      {
        if ( a3 < *(_DWORD *)(v5 - 4) )
          break;
      }
      sub_428A80((__int64)a1);
    }
    v6 = *a1;
    v7 = sub_15E1B70(*a1);
    v8 = v7;
    if ( v7 )
    {
      ++*(_DWORD *)(v7 + 8);
      sub_428900(a1, v7, a4);
      if ( (*(_DWORD *)(v8 + 8))-- == 1 )
        sub_15D7BC0(v6, v8);
    }
    else
    {
      sub_428900(a1, 0, a4);
    }
  }
  else
  {
    sub_428900(a1, a2, a4);
  }
}

