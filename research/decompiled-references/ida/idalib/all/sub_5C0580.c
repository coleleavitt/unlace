unsigned __int64 __fastcall sub_5C0580(const __m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // zf
  __int8 *v4; // rbx
  __m128i v5; // xmm0
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  __m128i v9; // xmm0
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  __m128i v12; // [rsp+10h] [rbp-38h] BYREF
  __int64 v13; // [rsp+20h] [rbp-28h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v2 = a1[2].m128i_i64[0];
  v3 = *(_QWORD *)(a2 + 16) == 0;
  v11 = _mm_loadu_si128(a1);
  v13 = v2;
  v12 = _mm_loadu_si128(a1 + 1);
  if ( v3 )
LABEL_6:
    std::__throw_bad_function_call();
  v4 = &a1[-3].m128i_i8[8];
  while ( (*(int (__fastcall **)(__int64, __m128i *, __int8 *))(a2 + 24))(a2, &v11, v4) < 0 )
  {
    v5 = _mm_loadu_si128((const __m128i *)v4);
    v6 = *((_QWORD *)v4 + 4);
    v4 -= 40;
    *((__m128i *)v4 + 5) = v5;
    v7 = _mm_loadu_si128((const __m128i *)(v4 + 56));
    *((_QWORD *)v4 + 14) = v6;
    *((__m128i *)v4 + 6) = v7;
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_6;
  }
  v8 = v13;
  *(__m128i *)(v4 + 40) = _mm_load_si128(&v11);
  v9 = _mm_load_si128(&v12);
  *((_QWORD *)v4 + 9) = v8;
  *(__m128i *)(v4 + 56) = v9;
  return v14 - __readfsqword(0x28u);
}
