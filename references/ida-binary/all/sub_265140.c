char *__fastcall sub_265140(__int64 a1)
{
  __m128i *v1; // r15
  char *v2; // rax
  __m128i v3; // xmm3
  char *v4; // rcx
  __m128i v5; // xmm2
  unsigned __int8 v6; // r12
  __int64 v7; // rbx
  const char *v8; // rsi
  char *v9; // rdi
  int v10; // eax
  bool v11; // sf
  unsigned __int8 v12; // al
  __int64 v13; // rdi
  __int64 v14; // r14
  __m128i v15; // xmm0
  __int8 v16; // al
  __int64 v17; // rdi
  __int64 v18; // rbx
  __m128i v19; // xmm0
  __int8 v20; // al
  __int64 v21; // rdi
  __m128i v22; // xmm4
  __int64 v23; // rdi
  __int16 v24; // ax
  char *result; // rax
  __m128i si128; // xmm5
  __m128i v27; // [rsp+0h] [rbp-88h] BYREF
  char *s1; // [rsp+10h] [rbp-78h]
  char *v29; // [rsp+18h] [rbp-70h]
  char *v30; // [rsp+20h] [rbp-68h]
  __int16 v31; // [rsp+2Eh] [rbp-5Ah]
  __m128i v32; // [rsp+30h] [rbp-58h] BYREF
  __m128i v33[4]; // [rsp+40h] [rbp-48h] BYREF

  v1 = (__m128i *)a1;
  v2 = *(char **)a1;
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  *(_QWORD *)a1 = 0;
  v4 = *(char **)(a1 + 32);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  *(_OWORD *)(a1 + 40) = 0;
  s1 = v2;
  LOWORD(v2) = *(_WORD *)(a1 + 24);
  v30 = v4;
  v6 = *(_BYTE *)(a1 + 24);
  v31 = (__int16)v2;
  *(_QWORD *)(a1 + 32) = 0;
  if ( !v3.m128i_i64[0] )
    v4 = (char *)&::s1;
  *(_OWORD *)(a1 + 8) = 0;
  v7 = *(_QWORD *)(a1 - 48);
  v32 = v5;
  v29 = v4;
  v33[0] = v3;
  if ( !v7 )
    goto LABEL_18;
LABEL_4:
  v8 = (const char *)v1[-4].m128i_i64[1];
  v9 = (char *)&::s1;
  if ( v5.m128i_i64[0] )
LABEL_5:
    v9 = s1;
  v10 = strcmp(v9, v8);
  v11 = v10 < 0;
  if ( v10 )
    goto LABEL_12;
  while ( 1 )
  {
    v12 = v1[-2].m128i_u8[0];
    if ( v6 < v12 )
      goto LABEL_13;
    if ( v12 < v6 )
      break;
    v8 = &::s1;
    if ( v1[-1].m128i_i64[0] )
      v8 = (const char *)v1[-2].m128i_i64[1];
    v11 = strcmp(v29, v8) < 0;
LABEL_12:
    if ( !v11 )
      break;
LABEL_13:
    v13 = v1->m128i_i64[0];
    v14 = v1[-4].m128i_i64[1];
    v15 = (__m128i)_mm_loadh_ps((const double *)&v1[-3].m128i_i64[1]);
    v1[-4].m128i_i64[1] = 0;
    v1[-3] = 0;
    if ( v13 )
    {
      v1->m128i_i64[1] = 0;
      v27 = v15;
      qfree(v13, v8);
      v15 = _mm_load_si128(&v27);
    }
    v16 = v1[-2].m128i_i8[0];
    v17 = v1[2].m128i_i64[0];
    v1->m128i_i64[0] = v14;
    v18 = v1[-2].m128i_i64[1];
    *(__m128i *)((char *)v1 + 8) = v15;
    v19 = _mm_loadu_si128(v1 - 1);
    v1[1].m128i_i8[8] = v16;
    v20 = v1[-2].m128i_i8[1];
    v1[-2].m128i_i64[1] = 0;
    v1[1].m128i_i8[9] = v20;
    v1[-1] = 0;
    if ( v17 )
    {
      v1[2].m128i_i64[1] = 0;
      v27 = v19;
      qfree(v17, v8);
      v19 = _mm_load_si128(&v27);
    }
    v1[2].m128i_i64[0] = v18;
    v1 = (__m128i *)((char *)v1 - 56);
    v1[6] = v19;
    if ( v1[-3].m128i_i64[0] )
      goto LABEL_4;
LABEL_18:
    v8 = &::s1;
    if ( v5.m128i_i64[0] )
      goto LABEL_5;
  }
  v21 = v1->m128i_i64[0];
  if ( v1->m128i_i64[0] )
  {
    v1->m128i_i64[1] = 0;
    qfree(v21, v8);
  }
  v22 = _mm_load_si128(&v32);
  v23 = v1[2].m128i_i64[0];
  v1->m128i_i64[0] = (__int64)s1;
  v24 = v31;
  *(__m128i *)((char *)v1 + 8) = v22;
  v1[1].m128i_i16[4] = v24;
  if ( v23 )
  {
    v1[2].m128i_i64[1] = 0;
    qfree(v23, v8);
  }
  result = v30;
  si128 = _mm_load_si128(v33);
  v1[2].m128i_i64[0] = (__int64)v30;
  *(__m128i *)((char *)v1 + 40) = si128;
  return result;
}
