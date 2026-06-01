__int64 __fastcall clang_getCursorPrettyPrinted(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r14
  __m128i v21; // xmm0
  __m128i v22; // [rsp+0h] [rbp-138h]
  __m128i v23; // [rsp+0h] [rbp-138h]
  __int64 *v24; // [rsp+20h] [rbp-118h] BYREF
  int v25; // [rsp+28h] [rbp-110h]
  __int128 v26; // [rsp+30h] [rbp-108h]
  __int64 v27; // [rsp+40h] [rbp-F8h]
  char v28; // [rsp+48h] [rbp-F0h]
  int v29; // [rsp+4Ch] [rbp-ECh]
  void **p_ptr; // [rsp+50h] [rbp-E8h]
  void *ptr; // [rsp+60h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-D0h]
  _BYTE v33[192]; // [rsp+78h] [rbp-C0h] BYREF

  v8 = a1;
  if ( (unsigned int)clang_Cursor_isNull(
                       a1,
                       a2,
                       a3,
                       a4,
                       a5,
                       a6,
                       (__int128)_mm_loadu_si128((const __m128i *)&a7),
                       (__int128)_mm_loadu_si128((const __m128i *)&a8))
    || (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
  {
    return sub_690460();
  }
  v22 = _mm_loadu_si128((const __m128i *)&a7);
  v13 = sub_63A250(a1, a2, (int)a7 - 1, v9, v10, v11, v22.m128i_i32[0], v22.m128i_i64[1]);
  if ( !v13 )
    return sub_690460();
  v28 = 0;
  ptr = v33;
  v24 = (__int64 *)&off_49DA340;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v25 = 2;
  v29 = 1;
  v27 = 0;
  p_ptr = &ptr;
  v26 = 0;
  sub_2623850(&v24, 0, 0, 0, v14, v15);
  if ( !a1 )
  {
    v23 = _mm_loadu_si128((const __m128i *)&a7);
    v21 = _mm_loadu_si128((const __m128i *)&a8);
    v8 = sub_63A2D0(
           (unsigned int)&v24,
           0,
           v16,
           v17,
           v18,
           v19,
           v23.m128i_i32[0],
           v23.m128i_i32[2],
           v21.m128i_i32[0],
           v21.m128i_i64[1])
       + 17304;
  }
  sub_7C80A0(v13, &v24, v8, 0, 0);
  v20 = sub_6905C0(*p_ptr, (size_t)p_ptr[1]);
  v24 = &qword_4A6EA70[2];
  sub_2623770(&v24);
  if ( ptr != v33 )
    free(ptr);
  return v20;
}

