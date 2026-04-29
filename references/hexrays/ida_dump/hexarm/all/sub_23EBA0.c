__int64 __fastcall sub_23EBA0(const __m128i *a1, __int64 a2)
{
  __int64 v2; // rbx
  __m128i *v3; // rax

  v2 = j__qalloc_or_throw(64);
  *(_QWORD *)v2 = -1;
  *(_QWORD *)(v2 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v2 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  sub_2559F0(v2);
  *(_QWORD *)v2 = -1;
  *(_DWORD *)(v2 + 8) = 62;
  v3 = (__m128i *)j__qalloc_or_throw(20);
  *v3 = _mm_loadu_si128(a1);
  v3[1].m128i_i32[0] = a1[1].m128i_i32[0];
  *(_QWORD *)(v2 + 24) = v3;
  copy_tinfo_t(v2 + 48, a2);
  return v2;
}
