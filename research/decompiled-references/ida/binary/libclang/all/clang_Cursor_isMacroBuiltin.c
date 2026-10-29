_BOOL8 __fastcall clang_Cursor_isMacroBuiltin(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        const __m128i a8)
{
  __m128i v8; // xmm0
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // r9d
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // [rsp+0h] [rbp-48h]
  __m128i si128; // [rsp+0h] [rbp-48h]
  _BYTE v21[24]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+38h] [rbp-10h]

  v8 = _mm_loadu_si128((const __m128i *)((char *)&a7 + 8));
  if ( (_DWORD)a7 == 501 )
  {
    *(_QWORD *)v21 = __PAIR64__(DWORD1(a7), 501);
    *(__m128i *)&v21[8] = v8;
    v22 = a8.m128i_i64[1];
    si128 = _mm_load_si128((const __m128i *)v21);
    v18 = sub_639FD0((_DWORD)a1, a2, a8.m128i_i32[2], DWORD1(a7), a5, a6, si128.m128i_i32[0], si128.m128i_i64[1]);
    if ( !v18 )
      return 0;
    v12 = *(_QWORD *)(v18 + 16);
  }
  else
  {
    if ( (_DWORD)a7 != 502 )
      return 0;
    a1 = v21;
    *(_QWORD *)v21 = __PAIR64__(DWORD1(a7), 502);
    v22 = a8.m128i_i64[1];
    *(__m128i *)&v21[8] = v8;
    v12 = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, _QWORD, __int64, __int64))sub_63A030)(
            v21,
            a2,
            a8.m128i_i64[1],
            DWORD1(a7),
            a5,
            a6);
  }
  if ( !v12 )
    return 0;
  v19 = _mm_loadu_si128((const __m128i *)&a7);
  v15 = _mm_loadu_si128(&a8);
  v16 = sub_63A2F0(
          (_DWORD)a1,
          a2,
          v10,
          v11,
          v13,
          v14,
          v19.m128i_i32[0],
          v19.m128i_i32[2],
          v15.m128i_i32[0],
          v15.m128i_i64[1]);
  v17 = sub_601340(*(_QWORD **)(v16 + 64), v12);
  if ( !v17 )
    return 0;
  return (*(_BYTE *)(v17 + 36) & 0x10) != 0;
}

