__int64 __fastcall sub_3995F0(__int64 a1, const double *a2)
{
  double v2; // rax
  __m128 v3; // xmm0
  __int64 result; // rax

  v2 = *a2;
  *(_QWORD *)a1 = qword_1C65108;
  *(double *)(a1 + 8) = v2;
  sub_399470((__int64 *)(a1 + 16), "bmc");
  v3 = _mm_loadh_ps(a2);
  *(_QWORD *)a1 = &off_1C4E2E0;
  *(_QWORD *)(a1 + 64) = 0;
  *(__m128 *)(a1 + 48) = v3;
  sub_63D370(a1 + 72, a2);
  result = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 328) = result;
  *(_QWORD *)(a1 + 344) = result;
  *(_QWORD *)(a1 + 352) = a2 + 82;
  *(_QWORD *)(a1 + 360) = 0;
  return result;
}

