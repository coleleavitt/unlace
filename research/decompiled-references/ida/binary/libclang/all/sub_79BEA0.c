__int64 __fastcall sub_79BEA0(__int64 *a1, __int64 a2, char a3)
{
  __int64 *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rcx

  v3 = &a1[a2];
  v4 = 0;
  v5 = 0;
  if ( v3 != a1 )
  {
    if ( a3 )
    {
      do
      {
        v9 = *a1;
        if ( (*(_BYTE *)(*a1 + 28) & 0x7Fu) - 47 > 2 )
        {
          if ( v4 )
          {
            *(_QWORD *)(v4 + 8) = v9 | *(_QWORD *)(v4 + 8) & 7LL;
            v4 = v9;
          }
          else
          {
            v4 = *a1;
            v5 = *a1;
          }
        }
        ++a1;
      }
      while ( a1 != v3 );
    }
    else
    {
      v6 = *a1;
      while ( 1 )
      {
        ++a1;
        v5 = v6;
        if ( v3 == a1 )
          break;
        while ( 1 )
        {
          v7 = v6;
          v6 = *a1;
          if ( !v7 )
            break;
          ++a1;
          *(_QWORD *)(v7 + 8) = v6 | *(_QWORD *)(v7 + 8) & 7LL;
          if ( v3 == a1 )
            return v5;
        }
      }
    }
  }
  return v5;
}

