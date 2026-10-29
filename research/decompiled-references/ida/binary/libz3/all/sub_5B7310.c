_OWORD *__fastcall sub_5B7310(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  _OWORD *v5; // rax
  _QWORD *v6; // rax
  _OWORD *v7; // rax
  _OWORD *result; // rax
  __m128 v9; // xmm0

  *(_QWORD *)(a1 + 8) = 0x100002710LL;
  *(_QWORD *)a1 = &off_1C52498;
  v4 = *a2;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 40) = a2 + 82;
  *(_QWORD *)(a1 + 48) = v4;
  *(_QWORD *)(a1 + 56) = 0;
  v5 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 64) = v5;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = 8;
  *(_QWORD *)(a1 + 88) = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v6 = (_QWORD *)sub_186B270(0x100u);
  *v6 = 0;
  v6[2] = 0;
  v6[4] = 0;
  v6[6] = 0;
  v6[8] = 0;
  v6[10] = 0;
  v6[12] = 0;
  v6[14] = 0;
  v6[16] = 0;
  v6[18] = 0;
  v6[20] = 0;
  v6[22] = 0;
  v6[24] = 0;
  v6[26] = 0;
  v6[28] = 0;
  v6[30] = 0;
  *(_QWORD *)(a1 + 96) = v6;
  *(_QWORD *)(a1 + 104) = 8;
  *(_DWORD *)(a1 + 112) = 0;
  v7 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 120) = v7;
  *(_QWORD *)(a1 + 128) = 8;
  *(_DWORD *)(a1 + 136) = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  result = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 144) = result;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  v9 = _mm_loadh_ps((const double *)(a1 + 32));
  *(_QWORD *)(a1 + 152) = 8;
  *(_DWORD *)(a1 + 160) = 0;
  *(__m128 *)(a1 + 168) = v9;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  return result;
}

