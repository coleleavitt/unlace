__int64 __fastcall sub_1C329E0(__int64 a1, __int64 a2, __m128i a3, double a4)
{
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x20 )
    sub_18CFB60(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 4), a3, a4);
  return sub_1C328B0(a1, a2);
}
