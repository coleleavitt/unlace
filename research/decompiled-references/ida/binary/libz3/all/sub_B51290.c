_OWORD *__fastcall sub_B51290(__m128 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  _OWORD *result; // rax

  *a1 = _mm_loadh_ps((const double *)(a2 + 104));
  sub_B51110((__int64)&a1[1], a2);
  v2 = a1->m128_u64[1];
  a1[6].m128_u64[0] = 0;
  a1[6].m128_u64[1] = 0;
  a1[5].m128_u64[1] = v2;
  v3 = sub_186B270(0x100u);
  *(_QWORD *)v3 = 0;
  *(_QWORD *)(v3 + 8) = 0;
  *(_BYTE *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 40) = 0;
  *(_BYTE *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 64) = 0;
  *(_QWORD *)(v3 + 72) = 0;
  *(_BYTE *)(v3 + 80) = 0;
  *(_QWORD *)(v3 + 96) = 0;
  *(_QWORD *)(v3 + 104) = 0;
  *(_BYTE *)(v3 + 112) = 0;
  *(_QWORD *)(v3 + 128) = 0;
  *(_QWORD *)(v3 + 136) = 0;
  *(_BYTE *)(v3 + 144) = 0;
  *(_QWORD *)(v3 + 160) = 0;
  *(_QWORD *)(v3 + 168) = 0;
  *(_BYTE *)(v3 + 176) = 0;
  *(_QWORD *)(v3 + 192) = 0;
  *(_QWORD *)(v3 + 200) = 0;
  *(_BYTE *)(v3 + 208) = 0;
  *(_QWORD *)(v3 + 224) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_BYTE *)(v3 + 240) = 0;
  a1[7].m128_u64[1] = v3;
  a1[8].m128_u64[0] = 8;
  a1[8].m128_i32[2] = 0;
  result = (_OWORD *)sub_186B270(0x80u);
  a1[9].m128_u64[0] = (unsigned __int64)result;
  a1[9].m128_u64[1] = 8;
  a1[10].m128_i32[0] = 0;
  a1[11].m128_u64[0] = 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  return result;
}

