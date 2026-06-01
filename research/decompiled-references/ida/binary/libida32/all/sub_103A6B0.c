__int64 __fastcall sub_103A6B0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = 1;
  if ( a2 <= 0x15 )
  {
    result = 0;
    v3 = 1LL << a2;
    if ( ((1LL << a2) & 0x23E041) == 0 )
    {
      result = 2;
      if ( (v3 & 0xE) == 0 )
      {
        result = 1;
        if ( (v3 & 0x10) != 0 )
        {
          result = 2;
          if ( *(_DWORD *)(a1 + 248) == 3 )
            return 2 * (unsigned int)(*(_DWORD *)(a1 + 252) != 36);
        }
      }
    }
  }
  return result;
}

