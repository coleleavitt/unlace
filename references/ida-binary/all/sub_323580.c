__int64 __fastcall sub_323580(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  int data_elsize; // ebp
  int v10; // eax
  double v11; // xmm4_8
  double v12; // xmm5_8
  int v13; // esi
  int v14; // eax

  if ( (WORD4(xmmword_8CC820) & 0x600) != 0x400
    || (DWORD2(xmmword_8CC820) & 0xE0000000) != 0x80000000LL && (DWORD2(xmmword_8CC820) & 0xF0000000) != 0x40000000 )
  {
    return sub_322D80(xmmword_8CC810, a1, a2, a3, a4, a5, a6, a7, a8);
  }
  data_elsize = get_data_elsize(xmmword_8CC810, *((_QWORD *)&xmmword_8CC820 + 1), 0);
  v10 = nbits(xmmword_8CC810);
  v13 = v10 + 14;
  v14 = v10 + 7;
  if ( v14 >= 0 )
    v13 = v14;
  return sub_31AE10(xmmword_8CC810, data_elsize * (v13 >> 3), a1, a2, a3, a4, v11, v12, a7, a8);
}
