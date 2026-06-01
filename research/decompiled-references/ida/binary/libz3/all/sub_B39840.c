__int64 __fastcall sub_B39840(int *a1)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rax
  __m128i *v5; // rdx
  void *v6; // rdi
  __m128i v7; // xmm1
  unsigned int v8; // ecx
  __m128i v10; // xmm0

  *a1 = 0;
  v2 = sub_186B270(0x20u);
  v3 = *a1;
  *(_OWORD *)(v2 + 16) = 0;
  *((_QWORD *)a1 + 1) = v2;
  *(_DWORD *)(v2 + 24) = v3;
  *((_QWORD *)a1 + 3) = 0;
  a1[4] = 5;
  *(_OWORD *)v2 = 0;
  v4 = sub_186B270(0x98u);
  *((_QWORD *)a1 + 3) = v4;
  v5 = (__m128i *)v4;
  v6 = (void *)((v4 + 32) & 0xFFFFFFFFFFFFFFF8LL);
  *(_QWORD *)(v4 + 24) = 0;
  v7 = (__m128i)(unsigned __int64)v4;
  *(_QWORD *)(v4 + 144) = 0;
  v8 = v4 - (_DWORD)v6 + 152;
  memset(v6, 0, 8LL * (v8 >> 3));
  v5[1].m128i_i64[0] = (__int64)v5;
  v5[2].m128i_i32[0] = 1;
  v10 = _mm_loadl_epi64((const __m128i *)(a1 + 2));
  v5[2].m128i_i32[2] = -1;
  v5[2].m128i_i8[13] |= 1u;
  *v5 = _mm_unpacklo_epi64(v10, v7);
  return 0;
}

