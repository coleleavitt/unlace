__int64 __fastcall clang_getIBOutletCollectionType(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v11; // rbp
  __m128i v12; // xmm0
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __m128i v18; // [rsp+0h] [rbp-38h]
  __m128i v19; // [rsp+0h] [rbp-38h]

  v18 = _mm_loadu_si128((const __m128i *)&a7);
  if ( (_DWORD)a7 == 403 )
  {
    v11 = sub_63A2C0(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            v18.m128i_i32[0],
            v18.m128i_i32[2],
            _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
    v19 = _mm_loadu_si128((const __m128i *)&a7);
    v12 = _mm_loadu_si128((const __m128i *)&a8);
    v17 = sub_63A300(a1, a2, v13, v14, v15, v16, v19.m128i_i32[0], v19.m128i_i32[2], v12.m128i_i32[0], v12.m128i_i64[1]);
    sub_690DD0(a1, **(_QWORD **)(v11 + 40), v17);
  }
  else
  {
    v8 = _mm_loadu_si128((const __m128i *)&a8);
    v9 = sub_63A300(a1, a2, a3, a4, a5, a6, v18.m128i_i32[0], v18.m128i_i32[2], v8.m128i_i32[0], v8.m128i_i64[1]);
    sub_690DD0(a1, 0, v9);
  }
  return a1;
}

