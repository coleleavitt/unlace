__int64 __fastcall sub_23E7E0(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __m128i *v7; // rax

  v4 = j__qalloc_or_throw(64, a2, a3, a4);
  *(_QWORD *)v4 = -1;
  *(_QWORD *)(v4 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_OWORD *)(v4 + 24) = 0;
  sub_255630(v4);
  *(_QWORD *)v4 = -1;
  *(_DWORD *)(v4 + 8) = 62;
  v7 = (__m128i *)j__qalloc_or_throw(20, a2, v5, v6);
  *v7 = _mm_loadu_si128(a1);
  v7[1].m128i_i32[0] = a1[1].m128i_i32[0];
  *(_QWORD *)(v4 + 24) = v7;
  copy_tinfo_t();
  return v4;
}
