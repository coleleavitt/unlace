__int64 __fastcall sub_76BAC0(__int64 a1)
{
  __int64 result; // rax

  result = (**(_DWORD **)(a1 + 32) >> 14) & 0x1B;
  if ( ((**(_DWORD **)(a1 + 32) >> 14) & 4) != 0 )
    return (**(_DWORD **)(a1 + 32) >> 14) & 0x13 | 8u;
  return result;
}

