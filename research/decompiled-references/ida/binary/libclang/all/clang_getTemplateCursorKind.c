__int64 __fastcall clang_getTemplateCursorKind(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rax
  unsigned __int8 v9; // dl
  __int64 result; // rax
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rbx
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // r9
  __m128i v20; // [rsp+0h] [rbp-48h]
  __m128i v21; // [rsp+0h] [rbp-48h]
  __m128i v22; // [rsp+0h] [rbp-48h]
  _DWORD v23[10]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)a7 <= 0x1F )
  {
    if ( (unsigned int)a7 > 0x1D )
    {
      v21 = _mm_loadu_si128((const __m128i *)&a7);
      v11 = sub_63A250(a1, a2, a3, a4, a5, a6, v21.m128i_i32[0], v21.m128i_i64[1]);
      v16 = v11;
      if ( v11 )
      {
        if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 66 <= 6 )
        {
          v22 = _mm_loadu_si128((const __m128i *)&a7);
          v17 = _mm_loadu_si128((const __m128i *)&a8);
          v18 = sub_63A300(
                  a1,
                  a2,
                  v12,
                  v13,
                  v14,
                  v15,
                  v22.m128i_i32[0],
                  v22.m128i_i32[2],
                  v17.m128i_i32[0],
                  v17.m128i_i64[1]);
          sub_639160(v23, *(_QWORD *)(v16 + 48), v18, 0, 1, v19);
          return v23[0];
        }
      }
    }
    return 71;
  }
  if ( (_DWORD)a7 != 32 )
    return 71;
  v20 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = sub_63A250(a1, a2, a3, a4, a5, a6, v20.m128i_i32[0], v20.m128i_i64[1]);
  if ( !v8 || (*(_BYTE *)(v8 + 28) & 0x7F) != 0x3B )
    return 71;
  v9 = *(_BYTE *)(v8 + 73) >> 5;
  if ( v9 == 2 )
    return 3;
  result = 2;
  if ( v9 > 2u )
  {
    result = 4;
    if ( v9 != 3 )
      return 71;
  }
  return result;
}

