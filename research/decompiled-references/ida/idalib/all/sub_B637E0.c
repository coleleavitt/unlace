__int64 __fastcall sub_B637E0(__int64 a1)
{
  __int64 result; // rax

  result = (**(_DWORD **)(a1 + 24) >> 14) & 0x1B;
  if ( ((**(_DWORD **)(a1 + 24) >> 14) & 4) != 0 )
    return (**(_DWORD **)(a1 + 24) >> 14) & 0x13 | 8u;
  return result;
}
