__int64 __fastcall sub_B3FAC0(__int64 a1, int a2)
{
  __int64 result; // rax

  result = (**(_DWORD **)(a1 + 16) >> 14) & 0x13;
  if ( a2 == 1 )
    return (**(_DWORD **)(a1 + 16) >> 14) & 0x11 | 0xAu;
  return result;
}

