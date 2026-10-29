char *__fastcall sub_B77B60(__int64 a1, _QWORD *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v6; // ax
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v10; // r13
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbp
  const __m128i *v14; // rcx
  const __m128i *v15; // rdx
  __m128i v16; // xmm0
  char *result; // rax
  __m128i v18; // xmm1

  v6 = a4;
  v7 = 16 * a4;
  v8 = v7;
  v10 = *(_QWORD *)(a1 + 128);
  v11 = (32 * (v6 & 0x7FFF)) | *(_DWORD *)(v10 + 104) & 0xFFF0001F;
  *(_DWORD *)(v10 + 104) = v11;
  *(_WORD *)(v10 + 106) = BYTE2(v11) & 0xF;
  v12 = a2[294];
  a2[304] += v7;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[295] >= (unsigned __int64)(v7 + v13) && v12 )
    a2[294] = v7 + v13;
  else
    v13 = sub_962430((__int64)(a2 + 294), v7, v7, 3, a5, a6);
  sub_B73090(v10, (__int64)a2, v13);
  v14 = (const __m128i *)((char *)a3 + v8);
  if ( &a3->m128i_i8[v8] != (__int8 *)a3 )
  {
    v15 = a3;
    do
    {
      while ( (v15->m128i_i8[0] & 1) == 0 )
      {
        *(_WORD *)(v10 + 106) += 16;
        v16 = _mm_loadu_si128(v15++);
        v13 += 16;
        *(__m128i *)(v13 - 16) = v16;
        if ( v14 == v15 )
          goto LABEL_8;
      }
      v18 = _mm_loadu_si128(v15++);
      v13 += 16;
      *(__m128i *)(v13 - 16) = v18;
    }
    while ( v14 != v15 );
  }
LABEL_8:
  result = *(char **)(a1 + 128);
  if ( !result
    || (result[10] & 0x20) == 0
    || (result[104] & 0x18) != 0
    || (*((_DWORD *)result + 26) & 0xFFFE0) != 0
    || (result = *(char **)(sub_B685F0(a1) + 2320), result[1] >= 0) )
  {
    *(_BYTE *)(v10 + 4) |= 0x10u;
  }
  return result;
}

