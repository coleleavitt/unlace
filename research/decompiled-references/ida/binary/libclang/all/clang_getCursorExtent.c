_QWORD *__fastcall clang_getCursorExtent(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  int v8; // edx
  int v9; // ecx
  unsigned __int64 v10; // rbp
  int v11; // r8d
  int v12; // r9d
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v16; // [rsp+0h] [rbp-48h]
  unsigned __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  char v18; // [rsp+28h] [rbp-20h]

  v10 = sub_5FD3D0(
          (int)a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          (__int128)_mm_loadu_si128((const __m128i *)&a7),
          (__int128)_mm_loadu_si128((const __m128i *)&a8));
  if ( HIDWORD(v10) && (_DWORD)v10 )
  {
    v16 = _mm_loadu_si128((const __m128i *)&a7);
    v14 = _mm_loadu_si128((const __m128i *)&a8);
    v15 = sub_63A2D0(
            (_DWORD)a1,
            a2,
            v8,
            v9,
            v11,
            v12,
            v16.m128i_i32[0],
            v16.m128i_i32[2],
            v14.m128i_i32[0],
            v14.m128i_i64[1]);
    v17 = v10;
    v18 = 1;
    sub_602210(a1, *(_QWORD *)(v15 + 2152), *(_QWORD *)(v15 + 2160), (__int64)&v17);
    return a1;
  }
  else
  {
    clang_getNullRange(a1);
    return a1;
  }
}

