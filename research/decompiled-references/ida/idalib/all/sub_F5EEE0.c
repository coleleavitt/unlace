__int64 __fastcall sub_F5EEE0(__int64 *a1, const __m128i *a2, __int64 a3)
{
  const __m128i *v3; // r8
  unsigned __int64 v6; // rbp
  __int64 v7; // r9
  __int64 v8; // r15
  __int64 v9; // r12
  char v10; // di
  unsigned int v11; // ebx
  __int64 v12; // rdx
  unsigned int v13; // r13d
  __int64 i; // rax
  unsigned __int64 v15; // r11
  __int64 v16; // r10
  __int64 *v17; // r12
  __int64 v18; // rcx
  char *v19; // rdi
  char *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rdi
  __int64 *v25; // rbp
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  _BYTE *v30; // r9
  _BYTE *v31; // rdi
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rax
  _BYTE *v35; // rcx
  __int64 v36; // rax
  _BYTE *v37; // rdi
  _BYTE *v38; // rcx
  __int64 v40; // rcx
  unsigned __int8 v41; // si
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i v44; // xmm0
  const __m128i *v45; // rbx
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __m128i *v49; // rax
  __int64 v50; // rsi
  __int64 v51; // [rsp+8h] [rbp-70h]
  __int64 v52; // [rsp+8h] [rbp-70h]
  __int64 v53; // [rsp+8h] [rbp-70h]
  __int64 v54; // [rsp+8h] [rbp-70h]
  __int64 v55; // [rsp+8h] [rbp-70h]
  unsigned __int64 v56; // [rsp+10h] [rbp-68h]
  __int64 v57; // [rsp+10h] [rbp-68h]
  __int64 v58; // [rsp+10h] [rbp-68h]
  __int64 v59; // [rsp+10h] [rbp-68h]
  const __m128i *v60; // [rsp+18h] [rbp-60h]
  const __m128i *v61; // [rsp+18h] [rbp-60h]
  const __m128i *v62; // [rsp+18h] [rbp-60h]
  const __m128i *v63; // [rsp+18h] [rbp-60h]
  _BYTE v64[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v65; // [rsp+28h] [rbp-50h]
  __m128i v66; // [rsp+30h] [rbp-48h]

  v3 = a2;
  v6 = a1[1];
  v7 = a2->m128i_i64[1];
  v8 = *((unsigned int *)a1 + 18);
  v9 = a2->m128i_u8[0];
  v10 = *((_BYTE *)&off_23FF9F8 + v9);
  if ( !v6 )
  {
    if ( v7 )
    {
      v18 = a1[8];
      v17 = a1 + 8;
      v15 = *((unsigned int *)a1 + 19);
      v16 = 0;
      v11 = 0;
      v21 = v18;
    }
    else
    {
      if ( !(_DWORD)v8 )
      {
        v32 = a1[2];
        v33 = 1;
        goto LABEL_35;
      }
      v16 = 0;
      v11 = 0;
      v18 = a1[8];
LABEL_60:
      v17 = a1 + 8;
      v21 = v18;
      v15 = *((unsigned int *)a1 + 19);
    }
LABEL_20:
    v23 = 8 * v16;
    v24 = 8LL * (unsigned int)v8;
    v25 = (__int64 *)(v18 + 8 * v16);
    v26 = (unsigned int)v8 + 1LL;
    v27 = (_QWORD *)(v18 + v24);
    if ( v25 == (__int64 *)(v18 + v24) )
    {
      if ( v15 < v26 )
      {
        v63 = v3;
        v59 = v16;
        v55 = v7;
        sub_2237220(v17, a1 + 10, v26, 8);
        v18 = a1[8];
        v3 = v63;
        v16 = v59;
        v7 = v55;
      }
      *(_QWORD *)(v18 + 8LL * (unsigned int)(*((_DWORD *)a1 + 18))++) = v7;
    }
    else
    {
      if ( v15 < v26 )
      {
        v62 = v3;
        v58 = v16;
        v54 = v7;
        sub_2237220(v17, a1 + 10, v26, 8);
        v21 = a1[8];
        v3 = v62;
        v16 = v58;
        v24 = 8LL * *((unsigned int *)a1 + 18);
        LODWORD(v8) = *((_DWORD *)a1 + 18);
        v25 = (__int64 *)(v21 + v23);
        v7 = v54;
        v27 = (_QWORD *)(v21 + v24);
      }
      *v27 = *(_QWORD *)(v21 + v24 - 8);
      v28 = a1[8];
      if ( v28 + v24 - 8 - (__int64)v25 > 0 )
      {
        v61 = v3;
        v57 = v16;
        v52 = v7;
        memmove(
          (void *)(v28 + v24 - 8 * ((v28 + v24 - 8 - (__int64)v25) >> 3)),
          (const void *)(-8 * ((v28 + v24 - 8 - (__int64)v25) >> 3) + v28 + v24 - 8),
          v28 + v24 - 8 - (_QWORD)v25);
        v7 = v52;
        v16 = v57;
        v3 = v61;
      }
      *((_DWORD *)a1 + 18) = v8 + 1;
      *v25 = v7;
    }
    v6 = a1[1];
    LOBYTE(v9) = v3->m128i_i8[0];
    v12 = *a1;
    v29 = v6;
LABEL_27:
    v30 = (_BYTE *)(v12 + v16);
    v31 = (_BYTE *)(v12 + v6);
    v32 = a1[2];
    v33 = v6 + 1;
    if ( v12 + v16 != v12 + v6 )
    {
      if ( v33 > v32 )
      {
        v53 = v16;
        sub_2236E10(a1, a1 + 3, v6 + 1, 1);
        v12 = *a1;
        v29 = a1[1];
        v31 = (_BYTE *)(*a1 + v29);
        v33 = v29 + 1;
        v30 = (_BYTE *)(*a1 + v53);
      }
      v34 = v29 - 1;
      v35 = (_BYTE *)(v12 + v34);
      v36 = v34 - v11;
      *v31 = *v35;
      v37 = &v31[-v36];
      v38 = &v35[-v36];
      if ( v36 > 0 )
      {
        do
        {
          v37[v36 - 1] = v38[v36 - 1];
          --v36;
        }
        while ( v36 );
      }
      a1[1] = v33;
      *v30 = v9;
      return 1;
    }
LABEL_35:
    if ( v33 > v32 )
    {
      sub_2236E10(a1, a1 + 3, v33, 1);
      v6 = a1[1];
    }
    *(_BYTE *)(*a1 + v6) = v9;
    ++a1[1];
    return 1;
  }
  v11 = v6;
  v12 = *a1;
  if ( !(_DWORD)v8 )
  {
    if ( !v7 )
    {
      v29 = v6;
      v40 = 0;
      while ( 1 )
      {
        v41 = *(_BYTE *)(v12 + v40);
        if ( (_BYTE)v9 == v41 )
          return 1;
        if ( v10 == v41 )
          goto LABEL_54;
        if ( (unsigned __int8)v9 < v41 && v11 > (unsigned int)v40 )
          v11 = v40;
        if ( v6 == ++v40 )
        {
          v16 = v11;
          goto LABEL_27;
        }
      }
    }
    v13 = v6;
    for ( i = 0; i != v6; ++i )
    {
      if ( (unsigned __int8)v9 < *(_BYTE *)(v12 + i) && v13 > (unsigned int)i )
        v13 = i;
    }
    v15 = *((unsigned int *)a1 + 19);
    v16 = v13;
    v17 = a1 + 8;
    if ( v6 > v15 )
    {
      sub_2237220(a1 + 8, a1 + 10, v6, 8);
      v8 = *((unsigned int *)a1 + 18);
      v15 = *((unsigned int *)a1 + 19);
      v3 = a2;
      v16 = v13;
    }
    v18 = a1[8];
    v19 = (char *)(v18 + 8 * v8);
    v20 = (char *)(v18 + 8 * v6);
    v21 = v18;
    if ( v19 != v20 )
    {
      v60 = v3;
      v56 = v15;
      v51 = v16;
      memset(v19, 0, 8 * ((unsigned __int64)(v20 - 8 - v19) >> 3) + 8);
      v18 = a1[8];
      v3 = v60;
      v15 = v56;
      v16 = v51;
      v21 = v18;
    }
    *((_DWORD *)a1 + 18) = v6;
    LODWORD(v8) = v6;
    v7 = v3->m128i_i64[1];
    v11 = v13;
    goto LABEL_20;
  }
  v22 = 0;
  if ( v7 )
  {
    do
    {
      if ( (unsigned __int8)v9 < *(_BYTE *)(v12 + v22) && v11 > (unsigned int)v22 )
        v11 = v22;
      ++v22;
    }
    while ( v6 != v22 );
    v18 = a1[8];
    v15 = *((unsigned int *)a1 + 19);
    v16 = v11;
    v17 = a1 + 8;
    v21 = v18;
    goto LABEL_20;
  }
  v18 = a1[8];
  v42 = 0;
  while ( 1 )
  {
    v41 = *(_BYTE *)(v12 + v42);
    if ( !*(_QWORD *)(v18 + 8 * v42) )
    {
      if ( (_BYTE)v9 == v41 )
        return 1;
      if ( v10 == v41 )
        break;
    }
    if ( (unsigned int)v42 < v11 && (unsigned __int8)v9 < v41 )
      v11 = v42;
    if ( v6 == ++v42 )
    {
      v16 = v11;
      goto LABEL_60;
    }
  }
LABEL_54:
  v43 = *(unsigned int *)(a3 + 8);
  v44 = _mm_loadu_si128(v3);
  v64[0] = v41;
  v45 = (const __m128i *)v64;
  v46 = *(_QWORD *)a3;
  v47 = *(unsigned int *)(a3 + 12);
  v65 = 0;
  v48 = v43 + 1;
  v66 = v44;
  v49 = (__m128i *)(v46 + 32 * v43);
  if ( v48 > v47 )
  {
    v50 = a3 + 16;
    if ( v46 > (unsigned __int64)v64 || v49 <= (__m128i *)v64 )
    {
      sub_2237220(a3, v50, v48, 32);
      v49 = (__m128i *)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
    }
    else
    {
      sub_2237220(a3, v50, v48, 32);
      v45 = (const __m128i *)&v64[*(_QWORD *)a3 - v46];
      v49 = (__m128i *)(32LL * *(unsigned int *)(a3 + 8) + *(_QWORD *)a3);
    }
  }
  *v49 = _mm_loadu_si128(v45);
  v49[1] = _mm_loadu_si128(v45 + 1);
  ++*(_DWORD *)(a3 + 8);
  return 0;
}
