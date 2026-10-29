_QWORD *__fastcall sub_A93410(_QWORD *a1, _QWORD *a2, const void *a3, __int64 a4, _BYTE *a5)
{
  size_t v6; // r14
  const __m128i *v9; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  void *v13; // rdi
  unsigned int v14; // ebx
  const __m128i *v15; // r15
  const __m128i *v16; // rbx
  int v17; // r14d
  const __m128i *v18; // rdi
  __m128i v20; // [rsp+10h] [rbp-78h] BYREF
  __int64 v21; // [rsp+20h] [rbp-68h]
  __m128i v22; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+40h] [rbp-48h]

  v6 = 24 * a4;
  v9 = (const __m128i *)(a1 + 2);
  a1[1] = 0x1000000000LL;
  v11 = 0xAAAAAAAAAAAAAAABLL * ((24 * a4) >> 3);
  *a1 = a1 + 2;
  LODWORD(v12) = 0;
  v13 = a1 + 2;
  if ( v11 > 0x10 )
  {
    sub_22134E0(a1, v9, 0xAAAAAAAAAAAAAAABLL * ((24 * a4) >> 3), 24);
    v12 = *((unsigned int *)a1 + 2);
    v9 = (const __m128i *)*a1;
    v13 = (void *)(*a1 + 24 * v12);
  }
  if ( v6 )
  {
    memcpy(v13, a3, v6);
    v9 = (const __m128i *)*a1;
    LODWORD(v12) = *((_DWORD *)a1 + 2);
  }
  v14 = v12 + v11;
  *((_DWORD *)a1 + 2) = v14;
  v15 = (const __m128i *)((char *)v9 + 24 * v14);
  if ( v15 == v9 )
  {
    LOBYTE(v17) = 0;
  }
  else
  {
    v16 = v9;
    v17 = 0;
    do
    {
      v22 = _mm_loadu_si128(v16);
      v23 = v16[1].m128i_i64[0];
      sub_A92E70(&v20, a2, v16);
      v18 = v16;
      v16 = (const __m128i *)((char *)v16 + 24);
      *(const __m128i *)((char *)&v16[-2] + 8) = _mm_loadu_si128(&v20);
      v16[-1].m128i_i64[1] = v21;
      v17 |= sub_EF9EB0(v18, &v22) ^ 1;
    }
    while ( v15 != v16 );
  }
  *a5 |= v17;
  return a1;
}

