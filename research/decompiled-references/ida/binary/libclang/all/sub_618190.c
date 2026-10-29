__int64 __fastcall sub_618190(__m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __m128i v7; // xmm0
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 result; // rax
  __m128i v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h] BYREF

  v3 = sub_79C190(a2);
  v7 = _mm_loadu_si128(a1 + 6);
  a1[6].m128i_i64[1] = 0;
  v13 = v3;
  v8 = v3;
  a1[6].m128i_i64[0] = (__int64)&v13;
  v12 = v7;
  if ( !v3 )
  {
LABEL_6:
    a1[6] = _mm_load_si128(&v12);
    return 0;
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
      v9 = *(_QWORD *)(v9 + 8);
    if ( v9 != a2
      || (*(_BYTE *)(a2 + 8) & 0x7Fu) - 19 <= 1
      && (*(_BYTE *)(v8 + 28) & 0x7F) == 0x10
      && (*(_BYTE *)(v8 + 58) & 0x10) != 0 )
    {
      goto LABEL_5;
    }
    result = sub_617B10(a1, v8, v9, v4, v5, v6);
    v4 = (unsigned int)result;
    LOWORD(v4) = BYTE1(result);
    if ( BYTE1(result) )
      break;
    v8 = v13;
LABEL_5:
    v10 = *(_QWORD *)(v8 + 8);
    v8 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v10 <= 7 )
      goto LABEL_6;
  }
  a1[6] = _mm_load_si128(&v12);
  return result;
}

