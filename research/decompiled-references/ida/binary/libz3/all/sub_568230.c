__int64 *__fastcall sub_568230(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edx
  __m128 v4; // xmm0

  v2 = sub_186B270(0x48u);
  *(_QWORD *)v2 = off_1C51278;
  *(_QWORD *)(v2 + 48) = a2;
  v3 = *(_DWORD *)(a2 + 64);
  *(_QWORD *)(v2 + 40) = off_1C67A68;
  v4 = _mm_loadh_ps((const double *)(a2 + 88));
  *(_QWORD *)(v2 + 56) = v2;
  *(_DWORD *)(v2 + 32) = v3;
  *(_QWORD *)(v2 + 64) = a2 + 40;
  *a1 = v2;
  *(_DWORD *)(v2 + 8) = 1;
  *(__m128 *)(v2 + 16) = v4;
  return a1;
}

