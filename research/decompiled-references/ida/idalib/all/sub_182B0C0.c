__int64 __fastcall sub_182B0C0(__int64 *a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5, __m128i a6, double a7)
{
  char v7; // al

  v7 = *(_BYTE *)(a2 + 58);
  if ( (v7 & 1) != 0 )
    return 1;
  if ( (v7 & 0x40) == 0 )
    return sub_182A7E0(a1, a2, a3, a4, a5, a6, a7);
  *a3 = (unsigned __int8)(*(_WORD *)(a2 + 58) >> 7);
  return 0;
}
