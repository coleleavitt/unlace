__int64 __fastcall clang_Type_visitFields(
        unsigned int (__fastcall *a1)(__int64, unsigned __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __m128i v9; // xmm0
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // r13
  __m128i si128; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-88h]
  __m128i v27; // [rsp+0h] [rbp-88h]
  __m128i v28; // [rsp+20h] [rbp-68h] BYREF
  __m128i v29; // [rsp+40h] [rbp-48h] BYREF
  __m128i v30[3]; // [rsp+50h] [rbp-38h] BYREF

  v9 = _mm_loadu_si128((const __m128i *)&a7);
  clang_getTypeDeclaration((__int64)&v28, a2, a3, a4, a5, a6, v9.m128i_i32[0], v9.m128i_i64[1], a8);
  v10 = v28.m128i_u32[0];
  if ( (unsigned int)clang_isInvalid(v28.m128i_u32[0]) )
    return 0;
  v26 = _mm_load_si128(&v28);
  v16 = sub_63A250(v10, a2, v11, v12, v13, v14, v26.m128i_i32[0], v26.m128i_i64[1]);
  if ( !v16 )
    return 0;
  if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 56 > 3 )
    return 0;
  if ( *(char *)(v16 + 28) < 0 )
    return 0;
  v17 = sub_78B3D0(v16);
  if ( !v17 || *(char *)(v17 + 28) < 0 )
    return 0;
  v18 = sub_7868A0(v17);
  if ( v18 )
  {
    v19 = a8;
LABEL_10:
    sub_639160((__int64)&v29, v18, v19, 0, 1u);
    v27 = _mm_load_si128(&v29);
    si128 = _mm_load_si128(v30);
    if ( a1(a2, v18, v21, v22, v23, v24, v27.m128i_i64[0], v27.m128i_i64[1], si128.m128i_i64[0], si128.m128i_i64[1]) )
    {
      while ( 1 )
      {
        v25 = *(_QWORD *)(v18 + 8);
        v18 = v25 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v25 <= 7 )
          break;
        if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 47 <= 2 )
          goto LABEL_10;
      }
    }
  }
  return 1;
}

