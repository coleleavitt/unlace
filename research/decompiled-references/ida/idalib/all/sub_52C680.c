__int64 *__fastcall sub_52C680(unsigned __int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // xmm0_8
  __m128i *v4; // rax
  __m128i si128; // xmm1
  __m128i v6; // xmm0
  __m128i v8; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v8.m128i_i32[3] = 203;
  v1 = (__int64 *)operator new(8u);
  v2 = operator new(0x38u);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1672) + 8LL);
  *(_OWORD *)(v2 + 24) = 0;
  *(_QWORD *)v2 = &unk_2BFA3E8;
  *(_DWORD *)(v2 + 8) = 4;
  *(_QWORD *)(v2 + 16) = 0;
  v8.m128i_i64[0] = v3;
  v4 = (__m128i *)qvector_reserve(v2 + 16, 0, 17, 1);
  *(_QWORD *)(v2 + 16) = v4;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7B30);
  *(_QWORD *)(v2 + 24) = 17;
  v6 = _mm_loadl_epi64(&v8);
  *v4 = si128;
  *(_BYTE *)(*(_QWORD *)(v2 + 16) + 16LL) = 0;
  *(_QWORD *)v2 = &off_2B2DDE0;
  *(__m128i *)(v2 + 40) = _mm_unpacklo_epi64(v6, (__m128i)a1);
  *v1 = sub_428210((__int64)v1, v2, &v8.m128i_u32[3]);
  return v1;
}
