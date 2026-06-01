unsigned __int64 __fastcall sub_42C450(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rbp
  __m128i *v6; // rax
  __m128i v7; // xmm0
  _QWORD *v8; // rbp
  unsigned __int64 i; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __m128i v13; // [rsp+8h] [rbp-70h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-60h] BYREF
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __m128i v16; // [rsp+30h] [rbp-48h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v4 = a3[1];
  v17 = __readfsqword(0x28u);
  v15 = 0;
  v16 = 0u;
  v13.m128i_i64[0] = *a3;
  v6 = (__m128i *)operator new(0x18u);
  v7 = _mm_loadl_epi64(&v13);
  v6[1].m128i_i64[0] = a4;
  *(_QWORD *)&v15 = v6;
  *v6 = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)v4);
  v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_42B620, (__m128i)(unsigned __int64)sub_42DC00);
  if ( sub_42B620 )
  {
    v8 = *(_QWORD **)(a2 + 1672);
    for ( i = sub_631AD0(*v8, 19);
          i < sub_631AD0(*v8, 20);
          i = sub_3C1900(v8, i, v11, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_42B180, nullptr) )
    {
      v10 = sub_3BE900(v8, i, 0);
      v13.m128i_i64[1] = i;
      v14 = v10;
      if ( !v16.m128i_i64[0] )
        std::__throw_bad_function_call();
      if ( ((unsigned int (__fastcall *)(__int128 *, __int64, unsigned __int64 *, unsigned __int64 *))v16.m128i_i64[1])(
             &v15,
             a2,
             &v13.m128i_u64[1],
             &v14) )
      {
        break;
      }
      v11 = sub_631AD0(*v8, 20);
    }
    if ( v16.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v16.m128i_i64[0])(&v15, &v15, 3);
  }
  return v17 - __readfsqword(0x28u);
}
