_OWORD *__fastcall sub_BDC6E0(__m128 *a1, __int64 a2)
{
  __m128 *v2; // r14
  __int64 v3; // r12
  __int64 v4; // rax
  _OWORD *result; // rax

  v2 = a1 + 1;
  v3 = 1;
  *a1 = _mm_loadh_ps((const double *)(a2 + 104));
  do
  {
    v4 = sub_186B270(0x80u);
    v2->m128_u64[0] = v4;
    v2 = (__m128 *)((char *)v2 + 24);
    v2[-1].m128_u64[0] = 8;
    v2[-1].m128_i32[2] = 0;
    *(_QWORD *)v4 = 0;
    *(_BYTE *)(v4 + 8) = 0;
    *(_QWORD *)(v4 + 16) = 0;
    *(_BYTE *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 32) = 0;
    *(_BYTE *)(v4 + 40) = 0;
    *(_QWORD *)(v4 + 48) = 0;
    *(_BYTE *)(v4 + 56) = 0;
    *(_QWORD *)(v4 + 64) = 0;
    *(_BYTE *)(v4 + 72) = 0;
    *(_QWORD *)(v4 + 80) = 0;
    *(_BYTE *)(v4 + 88) = 0;
    *(_QWORD *)(v4 + 96) = 0;
    *(_BYTE *)(v4 + 104) = 0;
    *(_QWORD *)(v4 + 112) = 0;
    *(_BYTE *)(v4 + 120) = 0;
  }
  while ( v3-- != 0 );
  result = (_OWORD *)sub_186B270(0x80u);
  a1[4].m128_u64[0] = (unsigned __int64)result;
  a1[4].m128_u64[1] = 8;
  a1[5].m128_i32[0] = 0;
  a1[5].m128_i32[2] = 0;
  a1[6].m128_u64[0] = 0;
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

