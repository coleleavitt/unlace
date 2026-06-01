__int64 __fastcall clang_Cursor_getTemplateArgumentKind(
        unsigned int a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rbp
  unsigned __int64 CursorKind; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int *v18; // rax
  __m128i v19; // [rsp+20h] [rbp-38h]
  __m128i v20; // [rsp+30h] [rbp-28h]

  v8 = *((_QWORD *)&a7 + 1);
  v19 = _mm_loadu_si128((const __m128i *)&a7);
  v20 = _mm_loadu_si128((const __m128i *)&a8);
  CursorKind = clang_getCursorKind(a1, a2, a3, a4, a5, a6, v19.m128i_i32[0]);
  if ( (unsigned int)CursorKind > 0x20 )
    return 9;
  v14 = 0xFFFFFFFEFFFFFEEBLL;
  if ( _bittest64((const __int64 *)&v14, CursorKind) || !v8 )
    return 9;
  v15 = *(_BYTE *)(v8 + 28) & 0x7F;
  v16 = (unsigned int)(v15 - 32);
  if ( (unsigned int)v16 <= 5 )
  {
    v17 = sub_780F50(v8, a2, v16, v10, v11, v12, v19.m128i_i64[0], v19.m128i_i64[1], v20.m128i_i64[0], v20.m128i_i64[1]);
    if ( v17 )
    {
      v18 = *(unsigned int **)(v17 + 24);
      if ( a1 < *v18 )
        goto LABEL_9;
    }
    return 9;
  }
  if ( (unsigned int)(v15 - 58) > 1 )
    return 9;
  v18 = *(unsigned int **)(v8 + 168);
  if ( a1 >= *v18 )
    return 9;
LABEL_9:
  switch ( v18[6 * a1 + 2] & 0x7FFFFFFF )
  {
    case 0u:
      result = 0;
      break;
    case 1u:
      result = 1;
      break;
    case 2u:
      result = 2;
      break;
    case 3u:
      result = 3;
      break;
    case 4u:
      result = 4;
      break;
    case 6u:
      result = 5;
      break;
    case 7u:
      result = 6;
      break;
    case 8u:
      result = 7;
      break;
    case 9u:
      result = 8;
      break;
    default:
      return 9;
  }
  return result;
}

