char *__fastcall sub_E779D0(const __m128i *a1, const __m128i *a2, char *a3, __int64 a4, char **a5)
{
  const __m128i *v6; // r15
  __int64 v7; // rdx
  const __m128i *v9; // rbp
  __int64 v10; // rbx
  char *v11; // r11
  const __m128i *v12; // rbp
  char *v14; // r14
  __m128i v15; // xmm0
  __int64 v16; // rax
  char *v17; // rsi
  void *v18; // rbx
  void *v19; // rdi
  size_t v20; // rdx
  __int64 v21; // rdx
  const __m128i *v22; // r13
  const __m128i *v23; // rcx
  __int64 v24; // rdx
  const __m128i *v25; // r14
  char *v26; // r8
  const __m128i *v27; // rdi
  const __m128i *v28; // rbx
  __int64 v29; // r12
  char *result; // rax
  const __m128i *v31; // rcx
  char *v32; // [rsp+8h] [rbp-80h]
  const __m128i *v33; // [rsp+10h] [rbp-78h]
  __int64 v34; // [rsp+18h] [rbp-70h]
  __int64 v35; // [rsp+20h] [rbp-68h]
  __int64 v36; // [rsp+30h] [rbp-58h]
  void *v38; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v39[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = a1;
  v7 = ((char *)a2 - (char *)a1) >> 3;
  v9 = a2;
  v10 = a4;
  v11 = *a5;
  if ( 2 * a4 <= v7 )
  {
    v36 = 2 * a4;
    v12 = a1;
    v34 = 16 * a4;
    v35 = -8 * a4;
    v14 = a3;
    do
    {
      v33 = v12;
      v12 = (const __m128i *)((char *)v12 + v34);
      v22 = (const __m128i *)((char *)v12 + v35);
      if ( !v11 )
      {
        v23 = a2;
        v6 = v12;
        v9 = v23;
        v38 = nullptr;
        a3 = sub_E77780(v33, v22, v22, v6, v14, &v38);
        v24 = ((char *)v9 - (char *)v6) >> 3;
        if ( v36 <= v24 )
        {
          v25 = v6;
          v26 = a3;
          do
          {
            v27 = v25;
            v38 = nullptr;
            v25 = (const __m128i *)((char *)v25 + v34);
            a3 = sub_E77780(
                   v27,
                   (const __m128i *)((char *)v25 + v35),
                   (const __m128i *)((char *)v25 + v35),
                   v25,
                   v26,
                   &v38);
            v26 = a3;
            v7 = ((char *)v9 - (char *)v25) >> 3;
          }
          while ( v36 <= v7 );
          v11 = nullptr;
          v10 = a4;
          v6 = v25;
          goto LABEL_12;
        }
        if ( v24 > a4 )
          v24 = a4;
        v28 = (const __m128i *)((char *)v6 + 8 * v24);
        goto LABEL_21;
      }
      v15 = _mm_loadl_epi64((const __m128i *)(v11 - 8));
      v16 = sub_186B270((unsigned int)_mm_cvtsi128_si32(v15) + 8LL);
      v17 = *a5;
      v18 = (void *)v16;
      v19 = (void *)(v16 + 8);
      *(_QWORD *)v16 = v15.m128i_i64[0];
      if ( v17 )
      {
        v20 = *((unsigned int *)v17 - 1);
        if ( v20 <= 1 )
        {
          if ( v20 == 1 )
            *(_BYTE *)(v16 + 8) = *v17;
        }
        else
        {
          v19 = memmove(v19, v17, v20);
        }
      }
      v38 = v19;
      v14 = sub_E77780(v33, v22, v22, v12, v14, &v38);
      sub_186B220(v18);
      v11 = *a5;
      v21 = ((char *)a2 - (char *)v12) >> 3;
    }
    while ( v36 <= v21 );
    v31 = a2;
    v6 = v12;
    a3 = v14;
    v9 = v31;
    if ( v21 > a4 )
      v21 = a4;
    v28 = (const __m128i *)((char *)v6 + 8 * v21);
    if ( v11 )
      goto LABEL_15;
    goto LABEL_21;
  }
LABEL_12:
  if ( v7 > v10 )
    v7 = v10;
  v28 = (const __m128i *)((char *)v6 + 8 * v7);
  if ( !v11 )
  {
LABEL_21:
    v39[0] = 0;
    return sub_E77780(v6, v28, v28, v9, a3, v39);
  }
LABEL_15:
  v32 = a3;
  v39[0] = 0;
  sub_C7B020(v39, a5);
  v29 = v39[0];
  result = sub_E77780(v6, v28, v28, v9, v32, v39);
  if ( v29 )
    return (char *)sub_186B220((void *)(v29 - 8));
  return result;
}

