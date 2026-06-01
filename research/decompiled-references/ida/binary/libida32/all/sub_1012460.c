__int64 __fastcall sub_1012460(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = 1;
  if ( a2 <= 0x10 )
  {
    result = 0;
    if ( ((1LL << a2) & 0x1493F) == 0 )
    {
      if ( ((1LL << a2) & 0x2000) != 0 )
        return *(_BYTE *)(a1 + 640) ^ 1u;
      else
        return ((1LL << a2) & 0x8000) == 0 ? 1 : 3;
    }
  }
  return result;
}

