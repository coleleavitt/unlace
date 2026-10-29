void __fastcall sub_644F0(__int64 *a1, int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  int v5; // r12d
  _QWORD *v6; // rax
  unsigned __int64 v7; // rsi

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_383060(50317);
    BUG();
  }
  if ( a2 )
  {
    v3 = a2;
    v4 = a1[1];
    if ( v3 < v4 )
    {
      if ( (a2 & 0x3F) != 0 )
      {
        v5 = 0;
        do
        {
          if ( (v3 & 0x80000000) == 0LL && (int)v3 < v4 && (*(_QWORD *)(*a1 + 8LL * ((int)v3 >> 6)) & (1LL << v3)) != 0 )
          {
            sub_63DE0(a1, v5);
            v6 = (_QWORD *)(*a1 + 8LL * (v5 >> 6));
            if ( (*v6 & (1LL << v5)) == 0 )
              *v6 |= 1LL << v5;
          }
          else
          {
            sub_64340(a1, v5);
          }
          v4 = a1[1];
          ++v3;
          ++v5;
        }
        while ( v3 < v4 );
        sub_643C0(a1, v4 - a2);
      }
      else
      {
        v7 = v4 - v3;
        a1[1] = v7;
        memmove((void *)*a1, (const void *)(*a1 + 8LL * (a2 >> 6)), 8 * (v7 >> 6));
      }
    }
    else
    {
      a1[1] = 0;
    }
  }
}
