_QWORD *__fastcall sub_4F2D20(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  std::__future_base::_Result_base *v3; // r12
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  __m128i v6; // xmm1
  __int64 v7; // rax
  __m128i v8; // xmm1

  v2 = operator new(0x78u);
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 8) = 0x100000001LL;
  *(_QWORD *)v2 = off_2B037B8;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 16) = &unk_2BD0EF0;
  v3 = (std::__future_base::_Result_base *)operator new(0x38u);
  std::__future_base::_Result_base::_Result_base(v3);
  v4 = _mm_loadh_ps((const double *)(a2 + 40));
  *((_BYTE *)v3 + 48) = 0;
  v5 = _mm_loadh_ps((const double *)(a2 + 56));
  *(__m128 *)(v2 + 48) = v4;
  *(__m128 *)(v2 + 64) = v5;
  v6 = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *(_QWORD *)v3 = &off_2B036D8;
  *(_QWORD *)(v2 + 16) = &off_2B03770;
  v7 = *(_QWORD *)(a2 + 80);
  *(__m128i *)(v2 + 80) = v6;
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 88));
  *(_OWORD *)(a2 + 48) = 0;
  *(_OWORD *)(a2 + 88) = 0;
  *(_QWORD *)(v2 + 96) = v7;
  *a1 = v2 + 16;
  a1[1] = v2;
  *(__m128i *)(v2 + 104) = v8;
  return a1;
}

