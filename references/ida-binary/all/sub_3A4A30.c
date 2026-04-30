unsigned __int64 __fastcall sub_3A4A30(const __m128i **a1, int *a2, char *a3, unsigned int a4)
{
  char *v7; // rsi
  __m128i *v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm0
  const __m128i *v11; // rbx
  __int64 v12; // rax
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  __int64 v15; // rdx
  __m128i v16; // xmm1
  const __m128i *v17; // rax
  __int64 v18; // rdi
  __m128i v19; // xmm0
  int v20; // eax
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-98h] BYREF
  __m128i v24; // [rsp+8h] [rbp-90h]
  __int64 v25; // [rsp+18h] [rbp-80h]
  __m128i v26; // [rsp+20h] [rbp-78h] BYREF
  __int64 v27; // [rsp+30h] [rbp-68h]
  __m128i v28; // [rsp+38h] [rbp-60h] BYREF
  __int64 v29; // [rsp+48h] [rbp-50h]
  __int16 v30; // [rsp+50h] [rbp-48h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v30 = 0;
  v7 = a3;
  v23 = 0;
  v25 = 0;
  v27 = 0;
  v29 = -1;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  describe_tlc_ordinal(&v23, a3, a4);
  v8 = (__m128i *)*a1;
  v9 = (*a1)->m128i_i64[0];
  v10 = _mm_loadu_si128((const __m128i *)&(*a1)->m128i_u64[1]);
  v8->m128i_i64[0] = v23;
  v23 = v9;
  *(__m128i *)((char *)v8 + 8) = v24;
  v11 = *a1;
  v24 = v10;
  if ( HIBYTE(v30) )
  {
    v7 = (char *)v11[1].m128i_i64[1];
    if ( v11[2].m128i_i64[1] <= 5uLL )
    {
      v22 = qvector_reserve(&v11[1].m128i_u64[1], v7, 6, 1);
      v11[1].m128i_i64[1] = v22;
      v7 = (char *)v22;
    }
    v11[2].m128i_i64[0] = 6;
    *(_DWORD *)v7 = 1869771333;
    v7[4] = 114;
    *(_BYTE *)(v11[1].m128i_i64[1] + 5) = 0;
    v11 = *a1;
  }
  else if ( v29 != -1 )
  {
    v7 = "%08X";
    sub_169A50(&v11[1].m128i_i64[1], (__int64)"%08X", v29);
    v11 = *a1;
    if ( (a3[112] & 2) != 0 )
      goto LABEL_4;
LABEL_15:
    v7 = (char *)"%u";
    sub_169A50(v11[3].m128i_i64, (__int64)"%u", a4);
    v11 = *a1;
    goto LABEL_4;
  }
  if ( (a3[112] & 2) == 0 )
    goto LABEL_15;
LABEL_4:
  v12 = v11[4].m128i_i64[1];
  v13 = _mm_load_si128(&v26);
  v14 = _mm_loadu_si128(v11 + 5);
  v11[4].m128i_i64[1] = v25;
  v15 = v27;
  v11[5] = v13;
  v16 = _mm_loadu_si128(&v28);
  v25 = v12;
  v17 = *a1;
  v26 = v14;
  v18 = v17[6].m128i_i64[0];
  v19 = _mm_loadu_si128((const __m128i *)((char *)v17 + 104));
  v17[6].m128i_i64[0] = v15;
  *(__m128i *)((char *)v17 + 104) = v16;
  v27 = v18;
  v28 = v19;
  if ( a2 )
  {
    v20 = sub_3A4200((__int64)&v23);
    v18 = v27;
    if ( v20 >= 0 )
      *a2 = v20;
  }
  if ( v18 )
  {
    v28.m128i_i64[0] = 0;
    *(double *)v19.m128i_i64 = qfree(v18, v7);
  }
  if ( v25 )
  {
    v26.m128i_i64[0] = 0;
    *(double *)v19.m128i_i64 = qfree(v25, v7, *(double *)v19.m128i_i64);
  }
  if ( v23 )
  {
    v24.m128i_i64[0] = 0;
    qfree(v23, v7, *(double *)v19.m128i_i64);
  }
  return v31 - __readfsqword(0x28u);
}
