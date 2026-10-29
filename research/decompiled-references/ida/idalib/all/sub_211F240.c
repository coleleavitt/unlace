char *__fastcall sub_211F240(char **a1, __int64 a2, __int64 a3)
{
  const __m128i *v4; // rbx
  char *v5; // rbp
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // rax
  __m128i v13; // xmm5
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  const __m128i *v20; // rax
  __int64 v21; // rdx
  const __m128i *v22; // rcx
  const __m128i *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  const __m128i *v29; // rcx
  const __m128i *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  const __m128i *v33; // rcx
  const __m128i *v34; // rax
  __m128i v35; // xmm2
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  const __m128i *v40; // rcx
  const __m128i *v41; // r14
  unsigned __int64 *v42; // rdi
  void *v43; // rdi
  char *result; // rax
  __int64 v45; // [rsp+0h] [rbp-58h] BYREF
  char *v46; // [rsp+8h] [rbp-50h]
  __int64 v47; // [rsp+10h] [rbp-48h]
  __int64 v48; // [rsp+18h] [rbp-40h]

  v4 = (const __m128i *)a1[1];
  v5 = *a1;
  v6 = a2 - (_QWORD)*a1;
  if ( !(0x4EC4EC4EC4EC4EC5LL * (((char *)v4 - *a1) >> 3)) )
  {
    v7 = 1;
    goto LABEL_36;
  }
  v7 = 0x9D89D89D89D89D8ALL * ((a1[1] - *a1) >> 3);
  v8 = -16;
  if ( 0x4EC4EC4EC4EC4EC5LL * (((char *)v4 - *a1) >> 3) > 0x9D89D89D89D89D8ALL * (((char *)v4 - *a1) >> 3)
    || v7 > 0x276276276276276LL )
  {
    goto LABEL_3;
  }
  if ( v7 )
  {
LABEL_36:
    v8 = 104 * v7;
LABEL_3:
    v48 = a3;
    v47 = a2;
    v45 = v6;
    v9 = operator new(v8);
    v6 = v45;
    v10 = v9;
    a3 = v48;
    v46 = (char *)(v9 + v8);
    v11 = v9 + 104;
    goto LABEL_4;
  }
  v11 = 104;
  v10 = 0;
  v46 = nullptr;
LABEL_4:
  v12 = v10 + v6;
  v13 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v14 = *(_QWORD *)(a3 + 72);
  *(_QWORD *)v12 = *(_QWORD *)a3;
  v15 = *(_QWORD *)(a3 + 24);
  *(__m128i *)(v12 + 8) = v13;
  *(_QWORD *)(v12 + 24) = v15;
  *(_BYTE *)(v12 + 32) = *(_BYTE *)(a3 + 32);
  *(_QWORD *)(v12 + 40) = *(_QWORD *)(a3 + 40);
  v16 = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 48) = 0;
  *(_QWORD *)(v12 + 48) = v16;
  v17 = *(_QWORD *)(a3 + 56);
  *(_QWORD *)(a3 + 56) = 0;
  *(_QWORD *)(v12 + 56) = v17;
  v18 = *(_QWORD *)(a3 + 64);
  *(_QWORD *)(a3 + 64) = 0;
  *(_QWORD *)(v12 + 64) = v18;
  *(_QWORD *)(v12 + 72) = v10 + v6 + 88;
  if ( v14 == a3 + 88 )
  {
    *(__m128i *)(v12 + 88) = _mm_loadu_si128((const __m128i *)(a3 + 88));
  }
  else
  {
    *(_QWORD *)(v12 + 72) = v14;
    *(_QWORD *)(v12 + 88) = *(_QWORD *)(a3 + 88);
  }
  v19 = *(_QWORD *)(a3 + 80);
  *(_QWORD *)(a3 + 72) = a3 + 88;
  *(_QWORD *)(a3 + 80) = 0;
  *(_QWORD *)(v12 + 80) = v19;
  *(_BYTE *)(a3 + 88) = 0;
  if ( (char *)a2 != v5 )
  {
    v20 = (const __m128i *)(v5 + 88);
    v21 = v10;
    while ( 1 )
    {
      *(_QWORD *)v21 = v20[-6].m128i_i64[1];
      *(__m128i *)(v21 + 8) = _mm_loadu_si128(v20 - 5);
      *(_QWORD *)(v21 + 24) = v20[-4].m128i_i64[0];
      *(_BYTE *)(v21 + 32) = v20[-4].m128i_i8[8];
      v24 = v20[-3].m128i_i64[0];
      *(_QWORD *)(v21 + 56) = 0;
      *(_QWORD *)(v21 + 64) = 0;
      *(_QWORD *)(v21 + 48) = 0;
      *(_QWORD *)(v21 + 40) = v24;
      *(_QWORD *)(v21 + 48) = v20[-3].m128i_i64[1];
      v25 = v20[-2].m128i_i64[0];
      v20[-3].m128i_i64[1] = 0;
      v26 = *(_QWORD *)(v21 + 56);
      *(_QWORD *)(v21 + 56) = v25;
      v27 = v20[-2].m128i_i64[1];
      v20[-2].m128i_i64[0] = v26;
      v28 = *(_QWORD *)(v21 + 64);
      *(_QWORD *)(v21 + 64) = v27;
      v20[-2].m128i_i64[1] = v28;
      *(_QWORD *)(v21 + 72) = v21 + 88;
      v29 = (const __m128i *)v20[-1].m128i_i64[0];
      if ( v29 == v20 )
      {
        *(__m128i *)(v21 + 88) = _mm_loadu_si128(v20);
      }
      else
      {
        *(_QWORD *)(v21 + 72) = v29;
        *(_QWORD *)(v21 + 88) = v20->m128i_i64[0];
      }
      v21 += 104;
      *(_QWORD *)(v21 - 24) = v20[-1].m128i_i64[1];
      v22 = (const __m128i *)((char *)v20 + 104);
      v20[-1].m128i_i64[0] = (__int64)v20;
      v23 = v20 + 1;
      v23[-2].m128i_i64[1] = 0;
      v23[-1].m128i_i8[0] = 0;
      if ( (const __m128i *)a2 == v23 )
        break;
      v20 = v22;
    }
    v11 = v10
        + 104 * (((0xEC4EC4EC4EC4EC5LL * ((unsigned __int64)(a2 - 104 - (_QWORD)v5) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 2);
  }
  v30 = (const __m128i *)(a2 + 88);
  v31 = v11;
  if ( (const __m128i *)a2 != v4 )
  {
    while ( 1 )
    {
      v35 = _mm_loadu_si128(v30 - 5);
      *(_QWORD *)v31 = v30[-6].m128i_i64[1];
      v36 = v30[-4].m128i_i64[0];
      *(__m128i *)(v31 + 8) = v35;
      *(_QWORD *)(v31 + 24) = v36;
      *(_BYTE *)(v31 + 32) = v30[-4].m128i_i8[8];
      *(_QWORD *)(v31 + 40) = v30[-3].m128i_i64[0];
      v37 = v30[-3].m128i_i64[1];
      v30[-3].m128i_i64[1] = 0;
      *(_QWORD *)(v31 + 48) = v37;
      v38 = v30[-2].m128i_i64[0];
      v30[-2].m128i_i64[0] = 0;
      *(_QWORD *)(v31 + 56) = v38;
      v39 = v30[-2].m128i_i64[1];
      v30[-2].m128i_i64[1] = 0;
      *(_QWORD *)(v31 + 64) = v39;
      *(_QWORD *)(v31 + 72) = v31 + 88;
      v40 = (const __m128i *)v30[-1].m128i_i64[0];
      if ( v30 == v40 )
      {
        *(__m128i *)(v31 + 88) = _mm_loadu_si128(v30);
      }
      else
      {
        *(_QWORD *)(v31 + 72) = v40;
        v32 = v30->m128i_i64[0];
        v30[-1].m128i_i64[0] = (__int64)v30;
        *(_QWORD *)(v31 + 88) = v32;
      }
      *(_QWORD *)(v31 + 80) = v30[-1].m128i_i64[1];
      v30[-1].m128i_i64[1] = 0;
      v33 = (const __m128i *)((char *)v30 + 104);
      v34 = v30 + 1;
      v31 += 104;
      v34[-1].m128i_i8[0] = 0;
      if ( v4 == v34 )
        break;
      v30 = v33;
    }
    v11 += 104 * (((0xEC4EC4EC4EC4EC5LL * (((unsigned __int64)&v4[-6] - a2 - 8) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1);
  }
  v41 = (const __m128i *)v5;
  if ( v5 != (char *)v4 )
  {
    do
    {
      while ( 1 )
      {
        v42 = (unsigned __int64 *)v41[4].m128i_i64[1];
        if ( v42 != &v41[5].m128i_u64[1] )
          operator delete(v42);
        v43 = (void *)v41[3].m128i_i64[0];
        if ( !v43 )
          break;
        operator delete(v43);
        v41 = (const __m128i *)((char *)v41 + 104);
        if ( v4 == v41 )
          goto LABEL_27;
      }
      v41 = (const __m128i *)((char *)v41 + 104);
    }
    while ( v41 != v4 );
  }
LABEL_27:
  if ( v5 )
    operator delete(v5);
  v45 = v11;
  result = v46;
  a1[2] = v46;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v45);
  return result;
}
