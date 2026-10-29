__int64 __fastcall clang_getOverloadedDecl(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rbp
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v25; // rsi
  __int16 v26; // ax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __m128i v29; // [rsp+0h] [rbp-38h]
  __m128i v30; // [rsp+0h] [rbp-38h]
  __m128i v31; // [rsp+10h] [rbp-28h]

  if ( (_DWORD)a7 != 49
    || a2 >= (unsigned int)clang_getNumOverloadedDecls(
                             a1,
                             a2,
                             a3,
                             a4,
                             a5,
                             a6,
                             (__int128)_mm_loadu_si128((const __m128i *)&a7),
                             (__int128)_mm_loadu_si128((const __m128i *)&a8)) )
  {
    goto LABEL_2;
  }
  v29 = _mm_loadu_si128((const __m128i *)&a7);
  v31 = _mm_loadu_si128((const __m128i *)&a8);
  v13 = sub_63A300(a1, a2, v9, v10, v11, v12, v29.m128i_i32[0], v29.m128i_i32[2], v31.m128i_i32[0], v31.m128i_i64[1]);
  v30 = _mm_loadu_si128((const __m128i *)&a7);
  v18 = sub_63A220(
          a1,
          a2,
          v14,
          v15,
          v16,
          v17,
          v30.m128i_i32[0],
          v30.m128i_i64[1],
          _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
  v20 = v18 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v18 )
  {
LABEL_7:
    if ( (*(_BYTE *)(v20 + 28) & 0x7F) == 0x4E )
    {
      v22 = a2 - 1LL;
      v23 = *(_QWORD *)(v20 + 48) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a2 )
      {
        do
        {
          v23 = *(_QWORD *)(v23 + 72);
          if ( v23 )
          {
            if ( (*(_BYTE *)(v23 + 28) & 0x7Fu) - 51 >= 2 )
              v23 = 0;
          }
        }
        while ( v22-- != 0 );
      }
      v25 = *(_QWORD *)(v23 + 64);
      goto LABEL_14;
    }
LABEL_2:
    sub_638F50(a1, 70, 0);
    return a1;
  }
  v21 = v18 & 6;
  if ( !v21 )
  {
    if ( v20 )
    {
      v26 = *(_WORD *)v20;
      v27 = v20 + 80;
      v28 = v20 + 64;
      if ( (v26 & 0x1FF) != 0x19 )
        v28 = v27;
      v25 = *(_QWORD *)(v28 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_14;
    }
    goto LABEL_7;
  }
  if ( v21 != 4 || !v20 )
    goto LABEL_7;
  v25 = *(_QWORD *)(v20 + 8LL * a2 + 8);
LABEL_14:
  sub_639160(a1, v25, v13, 0, 1, v19);
  return a1;
}

