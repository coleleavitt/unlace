__m128i *sub_27FD0()
{
  __m128i *v0; // rax
  __m128i *v1; // rbx
  void *v2; // rax
  void *v3; // rbp
  char *v4; // rax
  __m128i si128; // xmm0

  v0 = (__m128i *)malloc(0x540u);
  if ( !v0 )
    return nullptr;
  v0[2].m128i_i32[3] = 2;
  v1 = v0;
  v2 = malloc(0x50u);
  v3 = v2;
  if ( !v2 )
  {
LABEL_7:
    free(v1);
    return nullptr;
  }
  *((_BYTE *)v2 + 8) = 0;
  v1[76].m128i_i64[1] = (__int64)v2;
  v4 = (char *)malloc(0x6F50u);
  if ( !v4 )
  {
    free(v3);
    goto LABEL_7;
  }
  *((_DWORD *)v4 + 25) = 2;
  v1[5] = 0;
  v1[6] = 0;
  v1[7] = 0;
  v1[8] = 0;
  v1[9] = 0;
  v1[10] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_6BF90);
  *((_QWORD *)v4 + 5) = 0;
  *(_QWORD *)(v4 + 92) = 0x4000000;
  v1[76].m128i_i64[0] = (__int64)v4;
  v1[3].m128i_i8[0] = 0;
  v1->m128i_i64[0] = 0;
  v1[2].m128i_i64[0] = 0;
  v1[11] = si128;
  return v1;
}

