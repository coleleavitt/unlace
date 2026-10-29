__int64 (__fastcall **__fastcall sub_966710(__int64 a1, __int64 a2, int a3))()
{
  __m128 v4; // xmm0

  *(_DWORD *)(a1 + 8) = a3;
  v4 = _mm_loadh_ps((const double *)(a2 + 104));
  *(_QWORD *)a1 = off_1C70148;
  *(__m128 *)(a1 + 16) = v4;
  *(_DWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 52) = 1;
  *(_OWORD *)(a1 + 32) = 0;
  return off_1C70148;
}

