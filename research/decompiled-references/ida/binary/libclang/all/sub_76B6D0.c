__int64 __fastcall sub_76B6D0(__int64 a1)
{
  char v1; // al

  v1 = ((**(_DWORD **)(a1 + 16) >> 14) | (**(_DWORD **)(a1 + 24) >> 14)) & 0x1D;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0 )
    v1 = ((**(_DWORD **)(a1 + 16) >> 14) | (**(_DWORD **)(a1 + 24) >> 14)) & 0x1D | 2;
  return v1 & 0x1B;
}

