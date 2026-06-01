unsigned __int64 __fastcall sub_2F6740(__int64 *a1)
{
  __int64 v1; // rbx
  __m128i v2; // xmm1
  __m128i v3; // xmm0
  __int64 v4; // rax
  __m128i v5; // xmm1
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // r12
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // r12
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 v19; // r12
  __m128i v20; // xmm0
  const char *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // r12
  __int64 v24; // rbp
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // rbx
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __int64 v30; // rbx
  __m128i v31; // xmm0
  __int64 v32; // rdi
  double v33; // xmm0_8
  __m128i v34; // xmm1
  __int64 v35; // rbx
  __m128i v36; // xmm1
  __int64 v37; // rdi
  __m128i v39; // [rsp+0h] [rbp-98h] BYREF
  __int64 v40; // [rsp+10h] [rbp-88h] BYREF
  __m128i v41; // [rsp+18h] [rbp-80h] BYREF
  __int64 v42; // [rsp+28h] [rbp-70h]
  __m128i v43; // [rsp+30h] [rbp-68h] BYREF
  __int64 v44; // [rsp+40h] [rbp-58h]
  __m128i v45; // [rsp+48h] [rbp-50h] BYREF
  __int64 v46; // [rsp+58h] [rbp-40h]
  __m128i v47; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-20h]

  v1 = (__int64)(a1 - 12);
  v2 = _mm_loadu_si128((const __m128i *)a1 + 2);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  v48 = __readfsqword(0x28u);
  v4 = *a1;
  *a1 = 0;
  v43 = v2;
  v41 = v3;
  v45 = _mm_loadu_si128((const __m128i *)(a1 + 7));
  v5 = _mm_loadu_si128((const __m128i *)a1 + 5);
  *(_OWORD *)(a1 + 1) = 0;
  *((_OWORD *)a1 + 2) = 0;
  v40 = v4;
  v6 = a1[3];
  *(_OWORD *)(a1 + 7) = 0;
  v42 = v6;
  v7 = a1[6];
  a1[3] = 0;
  v44 = v7;
  v8 = a1[9];
  a1[6] = 0;
  v46 = v8;
  a1[9] = 0;
  v47 = v5;
  *((_OWORD *)a1 + 5) = 0;
  while ( 1 )
  {
    v21 = (const char *)v1;
    if ( !(unsigned __int8)sub_2E3DE0((__int64)&v40, v1) )
      break;
    v9 = *(_QWORD *)(v1 + 96);
    v10 = *(_QWORD *)v1;
    *(_QWORD *)v1 = 0;
    v11 = _mm_loadu_si128((const __m128i *)(v1 + 8));
    *(_OWORD *)(v1 + 8) = 0;
    if ( v9 )
    {
      *(_QWORD *)(v1 + 104) = 0;
      v39 = v11;
      qfree(v9, (const char *)v1);
      v11 = _mm_load_si128(&v39);
    }
    v12 = *(_QWORD *)(v1 + 120);
    *(_QWORD *)(v1 + 96) = v10;
    *(__m128i *)(v1 + 104) = v11;
    v13 = *(_QWORD *)(v1 + 24);
    v14 = _mm_loadu_si128((const __m128i *)(v1 + 32));
    *(_QWORD *)(v1 + 24) = 0;
    *(_OWORD *)(v1 + 32) = 0;
    if ( v12 )
    {
      *(_QWORD *)(v1 + 128) = 0;
      v39 = v14;
      qfree(v12, (const char *)v1);
      v14 = _mm_load_si128(&v39);
    }
    v15 = *(_QWORD *)(v1 + 144);
    *(_QWORD *)(v1 + 120) = v13;
    *(__m128i *)(v1 + 128) = v14;
    v16 = *(_QWORD *)(v1 + 48);
    v17 = _mm_loadu_si128((const __m128i *)(v1 + 56));
    *(_QWORD *)(v1 + 48) = 0;
    *(_OWORD *)(v1 + 56) = 0;
    if ( v15 )
    {
      *(_QWORD *)(v1 + 152) = 0;
      v39 = v17;
      qfree(v15, (const char *)v1);
      v17 = _mm_load_si128(&v39);
    }
    v18 = *(_QWORD *)(v1 + 168);
    *(_QWORD *)(v1 + 144) = v16;
    *(__m128i *)(v1 + 152) = v17;
    v19 = *(_QWORD *)(v1 + 72);
    v20 = _mm_loadu_si128((const __m128i *)(v1 + 80));
    *(_QWORD *)(v1 + 72) = 0;
    *(_OWORD *)(v1 + 80) = 0;
    if ( v18 )
    {
      *(_QWORD *)(v1 + 176) = 0;
      v39 = v20;
      qfree(v18, (const char *)v1);
      v20 = _mm_load_si128(&v39);
    }
    *(_QWORD *)(v1 + 168) = v19;
    v1 -= 96;
    *(__m128i *)(v1 + 272) = v20;
  }
  v22 = *(_QWORD *)(v1 + 96);
  v23 = v40;
  v24 = v1 + 96;
  v40 = 0;
  v25 = _mm_loadu_si128(&v41);
  v41 = 0;
  if ( v22 )
  {
    *(_QWORD *)(v1 + 104) = 0;
    v39 = v25;
    qfree(v22, (const char *)v1);
    v25 = _mm_load_si128(&v39);
  }
  v26 = *(_QWORD *)(v1 + 120);
  v27 = v42;
  *(__m128i *)(v24 + 8) = v25;
  *(_QWORD *)v24 = v23;
  v28 = _mm_load_si128(&v43);
  v42 = 0;
  v43 = 0;
  if ( v26 )
  {
    *(_QWORD *)(v24 + 32) = 0;
    v39 = v28;
    qfree(v26, v21);
    v28 = _mm_load_si128(&v39);
  }
  v29 = *(_QWORD *)(v24 + 48);
  *(_QWORD *)(v24 + 24) = v27;
  *(__m128i *)(v24 + 32) = v28;
  v30 = v44;
  v31 = _mm_loadu_si128(&v45);
  v44 = 0;
  v45 = 0;
  if ( v29 )
  {
    *(_QWORD *)(v24 + 56) = 0;
    v39 = v31;
    qfree(v29, v21);
    v31 = _mm_load_si128(&v39);
  }
  v32 = *(_QWORD *)(v24 + 72);
  *(__m128i *)(v24 + 56) = v31;
  v33 = 0.0;
  v34 = _mm_load_si128(&v47);
  *(_QWORD *)(v24 + 48) = v30;
  v35 = v46;
  v47 = 0;
  v46 = 0;
  if ( v32 )
  {
    *(_QWORD *)(v24 + 80) = 0;
    v39 = v34;
    v33 = qfree(v32, v21);
    v36 = _mm_load_si128(&v39);
    v37 = v46;
    *(_QWORD *)(v24 + 72) = v35;
    *(__m128i *)(v24 + 80) = v36;
    if ( v37 )
    {
      v47.m128i_i64[0] = 0;
      v33 = qfree(v37, v21, v33);
    }
  }
  else
  {
    *(_QWORD *)(v24 + 72) = v35;
    *(__m128i *)(v24 + 80) = v34;
  }
  if ( v44 )
  {
    v45.m128i_i64[0] = 0;
    v33 = qfree(v44, v21, v33);
  }
  if ( v42 )
  {
    v43.m128i_i64[0] = 0;
    v33 = qfree(v42, v21, v33);
  }
  if ( v40 )
  {
    v41.m128i_i64[0] = 0;
    qfree(v40, v21, v33);
  }
  return v48 - __readfsqword(0x28u);
}
