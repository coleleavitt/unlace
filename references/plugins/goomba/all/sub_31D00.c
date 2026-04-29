__int64 __fastcall sub_31D00(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r8
  int v6; // ecx
  __int64 v7; // r9

  if ( a2 > 0x40 )
  {
    sub_31CE0();
    return sub_31D60();
  }
  else
  {
    v4 = 0;
    if ( a2 )
    {
      v4 = 0;
      v6 = 0;
      do
      {
        while ( a4 != *(_DWORD *)(a1 + 8) || a3 != *(_QWORD *)a1 )
        {
          ++v6;
          a1 += 16;
          if ( (_DWORD)a2 == v6 )
            return v4;
        }
        a1 += 16;
        v7 = 1LL << v6++;
        v4 |= v7;
      }
      while ( (_DWORD)a2 != v6 );
    }
    return v4;
  }
}
