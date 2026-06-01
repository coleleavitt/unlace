__int64 __fastcall sub_1B3060(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  _BOOL4 v6; // eax

  v5 = 0;
  if ( a1 > 0x3FF )
  {
    v5 = 1;
    if ( a1 > 0x7FF )
    {
      v5 = 2;
      if ( a1 > 0xBFF )
      {
        v5 = 3;
        if ( a1 > 0xCFF )
        {
          v5 = 4;
          if ( a1 > 0xDFF )
            v5 = a1 < 0xF00 ? 5 : 10;
        }
      }
    }
  }
  v6 = 0;
  if ( a1 >= *(_QWORD *)(a3 + 136) )
    v6 = a1 < *(_QWORD *)(a3 + 144);
  return sub_340F90(a3, v6, v5);
}
