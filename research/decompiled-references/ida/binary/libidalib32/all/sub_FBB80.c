__int64 __fastcall sub_FBB80(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 *v3; // rbp
  __int64 v4; // rax
  __m128i v5; // xmm1
  __int64 result; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm0

  sub_917D0(a1);
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)a1 = &off_236560;
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  linearray_t_ctr();
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  linearray_t_ctr();
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 8;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  v1 = operator new(0x40u);
  v2 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 240) = v1;
  v3 = (__int64 *)(v1 + ((4 * v2 - 4) & 0xFFFFFFFFFFFFFFF8LL));
  v4 = operator new(0x190u);
  *v3 = v4;
  v5 = (__m128i)(unsigned __int64)v4;
  result = v4 + 400;
  v7 = _mm_unpacklo_epi64(v5, v5);
  *(_DWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)(unsigned __int64)v3);
  *(_WORD *)(a1 + 328) = 0;
  *(__m128i *)(a1 + 256) = v7;
  *(__m128i *)(a1 + 272) = v8;
  *(__m128i *)(a1 + 288) = v7;
  *(__m128i *)(a1 + 304) = v8;
  return result;
}

