__int64 __fastcall clang_getCursorLinkage(int a1, int a2, __int64 a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 result; // rax
  __int64 v8; // rax
  __m128i v9; // [rsp+0h] [rbp-28h]

  if ( (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
    return 0;
  v9 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = sub_63A250(a1, a2, (int)a7 - 1, a4, a5, a6, v9.m128i_i32[0], v9.m128i_i64[1]);
  if ( !v8 || (*(_BYTE *)(v8 + 28) & 0x7Fu) - 16 > 0x3E )
    return 0;
  switch ( (unsigned __int8)sub_78CBC0(v8) )
  {
    case 1u:
    case 4u:
      result = 1;
      break;
    case 2u:
      result = 2;
      break;
    case 3u:
      result = 3;
      break;
    case 5u:
    case 6u:
      result = 4;
      break;
    default:
      return 0;
  }
  return result;
}

