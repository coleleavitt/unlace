__m128i *__fastcall sub_B39990(__int64 a1, __int64 a2, unsigned int a3, const void *a4)
{
  __m128i *v6; // rbp
  unsigned __int64 v7; // rax
  bool v8; // al
  __int64 v10; // rdx
  int v11; // r15d
  size_t v12; // r15
  __m128i *v13; // rax

  v6 = *(__m128i **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 16) < a3 )
  {
    v11 = 2 * a3;
    if ( v6 )
      sub_186B220(*(void **)(a1 + 24));
    *(_DWORD *)(a1 + 16) = v11;
    v12 = (unsigned int)(8 * v11 + 112);
    v13 = (__m128i *)sub_186B270(v12);
    *(_QWORD *)(a1 + 24) = v13;
    v6 = v13;
    memset(v13, 0, v12);
    v7 = *(_QWORD *)(a1 + 8);
    v6[1].m128i_i64[0] = (__int64)v6;
    v6[2].m128i_i8[13] |= 1u;
    v6[2].m128i_i32[0] = 1;
    v6[2].m128i_i32[2] = -1;
    *v6 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)(unsigned __int64)v6);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 8);
  }
  if ( a2 != *(_QWORD *)(v7 + 16) )
    v6[2].m128i_i32[2] = -1;
  *(_QWORD *)(v7 + 16) = a2;
  *(_DWORD *)(v7 + 24) = a3;
  v8 = 0;
  if ( a3 == 2 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    if ( v10 )
      v8 = (*(_BYTE *)(v10 + 17) & 8) != 0;
  }
  v6[2].m128i_i8[12] = v6[2].m128i_i8[12] & 0xDF | (32 * v8);
  memcpy(&v6[7], a4, 8LL * a3);
  return v6;
}

