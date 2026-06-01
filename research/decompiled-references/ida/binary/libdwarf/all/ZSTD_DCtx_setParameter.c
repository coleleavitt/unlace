__int64 __fastcall ZSTD_DCtx_setParameter(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  int v4; // ebp

  result = -60;
  if ( !*(_DWORD *)(a1 + 30236) )
  {
    v4 = a3;
    if ( a2 == 1002 )
    {
      if ( (unsigned int)sub_64190(1002, a3) )
      {
        *(_DWORD *)(a1 + 30108) = v4;
        return 0;
      }
    }
    else if ( a2 > 0x3EA )
    {
      if ( a2 != 1004 )
      {
        if ( a2 < 0x3EC )
        {
          if ( !(unsigned int)sub_64190(1003, a3) )
            return -42;
          result = *(_QWORD *)(a1 + 30168);
          if ( !result )
          {
            *(_DWORD *)(a1 + 30224) = v4;
            return result;
          }
        }
        else if ( a2 == 1005 )
        {
          if ( !a3 || (unsigned int)sub_64190(1005, a3) )
          {
            *(_DWORD *)(a1 + 30232) = v4;
            return 0;
          }
          return -42;
        }
        return -40;
      }
      if ( (unsigned int)sub_64190(1004, a3) )
      {
        *(_DWORD *)(a1 + 30228) = v4 != 0;
        return 0;
      }
    }
    else
    {
      if ( a2 != 1000 )
      {
        if ( a2 > 0x3E8 )
        {
          if ( (unsigned int)sub_64190(1001, a3) )
          {
            *(_DWORD *)(a1 + 30320) = v4;
            return 0;
          }
          return -42;
        }
        if ( a2 == 100 )
        {
          if ( !a3 )
            v4 = 27;
          if ( (unsigned int)sub_64190(100, v4) )
          {
            *(_QWORD *)(a1 + 30264) = 1LL << v4;
            return 0;
          }
          return -42;
        }
        return -40;
      }
      if ( (unsigned int)sub_64190(1000, a3) )
      {
        *(_DWORD *)(a1 + 30104) = v4;
        return 0;
      }
    }
    return -42;
  }
  return result;
}

