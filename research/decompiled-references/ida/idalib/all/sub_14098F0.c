unsigned __int64 __fastcall sub_14098F0(__m128i *a1, __m128i *a2, __m128i *a3)
{
  __int64 *v3; // rbx
  unsigned __int64 i; // rsi
  __int64 v5; // rsi
  __int64 v6; // r12
  __m128i *v7; // r15
  __m128i *v8; // rbx
  __m128i *v9; // r14
  __m128i *v10; // r13
  size_t v11; // rax
  __m128i *v12; // rax
  size_t v13; // rax
  __m128i *v14; // rbp
  __int64 v15; // rax
  __m128i *v16; // rax
  __m128i *v17; // rax
  __m128i *v18; // rax
  __m128i *v19; // rdi
  __int64 v20; // rdx
  __m128i *v21; // rdi
  __int64 v22; // rcx
  __m128i *v23; // rdi
  __int64 v24; // rcx
  __m128i *v25; // rdi
  __m128i *v26; // rax
  __m128i *v27; // rcx
  size_t v28; // rdx
  size_t v29; // rdx
  size_t v30; // rdx
  size_t v31; // rdx
  __m128i *v32; // rax
  __int8 *v33; // rcx
  char *v34; // rsi
  __int64 *v35; // r13
  __m128i *v36; // rbp
  __int64 v37; // r12
  void *v38; // r15
  void *v39; // r14
  size_t v40; // rax
  __m128i *v41; // rax
  size_t v42; // rax
  __int64 *v43; // rbx
  __int64 v44; // rax
  __int64 *v45; // rax
  _BYTE *v46; // rax
  __int64 *v47; // rax
  __m128i *v48; // rdi
  __int64 v49; // rdx
  _BYTE *v50; // rax
  void *v51; // rdx
  __int64 *v52; // rdi
  _BYTE *v53; // rax
  __int64 v54; // rdi
  __int64 *v55; // rdi
  _BYTE *v56; // rax
  __int64 v57; // rdi
  void *v58; // rdi
  __m128i *v59; // rax
  __m128i *v60; // rdi
  size_t v61; // rdx
  size_t v62; // rdx
  size_t v63; // rdx
  size_t v64; // rdx
  __int64 v65; // rax
  __m128i *v67; // rbp
  __int64 *v68; // rsi
  __m128i *v69; // rdi
  __int64 v70; // [rsp+8h] [rbp-C0h]
  __int64 v71; // [rsp+10h] [rbp-B8h]
  __int64 v72; // [rsp+18h] [rbp-B0h] BYREF
  signed __int64 v73; // [rsp+20h] [rbp-A8h]
  __m128i *v74; // [rsp+28h] [rbp-A0h]
  void **v75; // [rsp+30h] [rbp-98h]
  unsigned __int64 v76; // [rsp+38h] [rbp-90h]
  void *v77; // [rsp+40h] [rbp-88h] BYREF
  size_t v78; // [rsp+48h] [rbp-80h]
  __m128i v79; // [rsp+50h] [rbp-78h]
  void *v80; // [rsp+60h] [rbp-68h]
  size_t n; // [rsp+68h] [rbp-60h]
  __m128i v82; // [rsp+70h] [rbp-58h]
  __int64 v83; // [rsp+80h] [rbp-48h]

  v3 = (__int64 *)a2;
  v74 = a1;
  if ( a1 == a2 )
    return (unsigned __int64)a3;
  if ( a2 == a3 )
    return (unsigned __int64)a1;
  v75 = &v77;
  v76 = (unsigned __int64)a1->m128i_u64 + (char *)a3 - (char *)a2;
  v73 = 0x8E38E38E38E38E39LL * (((char *)a3 - (char *)a1) >> 3);
  if ( 0x8E38E38E38E38E39LL * (((char *)a2 - (char *)a1) >> 3) == v73
                                                                - 0x8E38E38E38E38E39LL
                                                                * (((char *)a2 - (char *)a1) >> 3) )
  {
    v67 = a1;
    v76 = (unsigned __int64)&a1[4].m128i_u64[((unsigned __int64)((char *)&a2[-5].m128i_u64[1] - (char *)a1) >> 3) + 1];
    do
    {
      v68 = v3;
      v69 = v67;
      v67 = (__m128i *)((char *)v67 + 72);
      v3 += 9;
      sub_14097C0(v69, v68);
    }
    while ( v67 != (__m128i *)v76 );
    return v76;
  }
  v71 = 0x8E38E38E38E38E39LL * (((char *)a2 - (char *)a1) >> 3);
  for ( i = 0x8E38E38E38E38E39LL * (((char *)a3 - (char *)a1) >> 3); ; i = v70 )
  {
    v5 = i - v71;
    v70 = v5;
    if ( v71 < v5 )
      break;
    v33 = &v74->m128i_i8[72 * v73];
    v34 = &v33[-72 * v5];
    v74 = (__m128i *)&v33[-72 * v70];
    if ( v71 <= 0 )
      goto LABEL_116;
    v35 = (__int64 *)(v33 - 24);
    v36 = (__m128i *)(v34 - 24);
    v37 = 0;
    v38 = v75 + 2;
    v39 = v75 + 6;
    do
    {
      v59 = (__m128i *)v36[-3].m128i_i64[0];
      v60 = v36 - 2;
      v77 = v38;
      if ( v59 == &v36[-2] )
      {
        v79 = _mm_loadu_si128(v36 - 2);
      }
      else
      {
        v77 = v59;
        v79.m128i_i64[0] = v36[-2].m128i_i64[0];
      }
      v40 = v36[-3].m128i_u64[1];
      v36[-3].m128i_i64[0] = (__int64)v60;
      v36[-3].m128i_i64[1] = 0;
      v78 = v40;
      v41 = (__m128i *)v36[-1].m128i_i64[0];
      v36[-2].m128i_i8[0] = 0;
      v80 = v39;
      if ( v41 == v36 )
      {
        v82 = _mm_loadu_si128(v36);
      }
      else
      {
        v80 = v41;
        v82.m128i_i64[0] = v36->m128i_i64[0];
      }
      v42 = v36[-1].m128i_u64[1];
      v36[-1].m128i_i64[0] = (__int64)v36;
      v43 = v35 - 4;
      v36[-1].m128i_i64[1] = 0;
      n = v42;
      v44 = v36[1].m128i_i64[0];
      v36->m128i_i8[0] = 0;
      v83 = v44;
      v45 = (__int64 *)*(v35 - 6);
      if ( v45 == v35 - 4 )
      {
        v64 = *(v35 - 5);
        if ( v64 )
        {
          if ( v64 == 1 )
            v36[-2].m128i_i8[0] = *((_BYTE *)v35 - 32);
          else
            memcpy(v60, v35 - 4, v64);
          v64 = *(v35 - 5);
        }
        v65 = v36[-3].m128i_i64[0];
        v36[-3].m128i_i64[1] = v64;
        *(_BYTE *)(v65 + v64) = 0;
      }
      else
      {
        v36[-3].m128i_i64[0] = (__int64)v45;
        v36[-3].m128i_i64[1] = *(v35 - 5);
        v36[-2].m128i_i64[0] = *(v35 - 4);
        *(v35 - 6) = (__int64)v43;
      }
      v46 = (_BYTE *)*(v35 - 6);
      *(v35 - 5) = 0;
      *v46 = 0;
      v47 = (__int64 *)*(v35 - 2);
      v48 = (__m128i *)v36[-1].m128i_i64[0];
      if ( v47 == v35 )
      {
        v63 = *(v35 - 1);
        if ( v63 )
        {
          if ( v63 == 1 )
            v48->m128i_i8[0] = *(_BYTE *)v35;
          else
            memcpy(v48, v35, v63);
          v48 = (__m128i *)v36[-1].m128i_i64[0];
          v63 = *(v35 - 1);
        }
        v36[-1].m128i_i64[1] = v63;
        v48->m128i_i8[v63] = 0;
      }
      else
      {
        if ( v48 == v36 )
        {
          v36[-1].m128i_i64[0] = (__int64)v47;
          v36[-1].m128i_i64[1] = *(v35 - 1);
          v36->m128i_i64[0] = *v35;
        }
        else
        {
          v36[-1].m128i_i64[0] = (__int64)v47;
          v49 = v36->m128i_i64[0];
          v36[-1].m128i_i64[1] = *(v35 - 1);
          v36->m128i_i64[0] = *v35;
          if ( v48 )
          {
            *(v35 - 2) = (__int64)v48;
            *v35 = v49;
            goto LABEL_73;
          }
        }
        *(v35 - 2) = (__int64)v35;
      }
LABEL_73:
      v50 = (_BYTE *)*(v35 - 2);
      *(v35 - 1) = 0;
      *v50 = 0;
      v51 = v77;
      v36[1].m128i_i64[0] = v35[2];
      v52 = (__int64 *)*(v35 - 6);
      v53 = v52;
      if ( v51 == v38 )
      {
        v62 = v78;
        if ( v78 )
        {
          if ( v78 == 1 )
            *(_BYTE *)v52 = v79.m128i_i8[0];
          else
            memcpy(v52, v38, v78);
          v62 = v78;
          v52 = (__int64 *)*(v35 - 6);
        }
        *(v35 - 5) = v62;
        *((_BYTE *)v52 + v62) = 0;
        v53 = v77;
      }
      else
      {
        if ( v52 == v43 )
        {
          v72 = v79.m128i_i64[0];
          *(v35 - 6) = (__int64)v51;
          *(__m128 *)(v35 - 5) = _mm_loadh_ps((const double *)&v72);
        }
        else
        {
          v72 = v79.m128i_i64[0];
          v54 = *(v35 - 4);
          *(v35 - 6) = (__int64)v51;
          *(__m128 *)(v35 - 5) = _mm_loadh_ps((const double *)&v72);
          if ( v53 )
          {
            v77 = v53;
            v79.m128i_i64[0] = v54;
            goto LABEL_77;
          }
        }
        v77 = v38;
        v53 = v38;
      }
LABEL_77:
      v78 = 0;
      *v53 = 0;
      v55 = (__int64 *)*(v35 - 2);
      v56 = v55;
      if ( v80 == v39 )
      {
        v61 = n;
        if ( n )
        {
          if ( n == 1 )
            *(_BYTE *)v55 = v82.m128i_i8[0];
          else
            memcpy(v55, v39, n);
          v61 = n;
          v55 = (__int64 *)*(v35 - 2);
        }
        *(v35 - 1) = v61;
        *((_BYTE *)v55 + v61) = 0;
        v56 = v80;
      }
      else
      {
        if ( v55 == v35 )
        {
          v72 = v82.m128i_i64[0];
          *(v35 - 2) = (__int64)v80;
          *(__m128 *)(v35 - 1) = _mm_loadh_ps((const double *)&v72);
        }
        else
        {
          v72 = v82.m128i_i64[0];
          v57 = *v35;
          *(v35 - 2) = (__int64)v80;
          *(__m128 *)(v35 - 1) = _mm_loadh_ps((const double *)&v72);
          if ( v56 )
          {
            v80 = v56;
            v82.m128i_i64[0] = v57;
            goto LABEL_81;
          }
        }
        v80 = v39;
        v56 = v39;
      }
LABEL_81:
      n = 0;
      *v56 = 0;
      v58 = v80;
      v35[2] = v83;
      if ( v58 != v39 )
        operator delete(v58);
      if ( v77 != v38 )
        operator delete(v77);
      ++v37;
      v35 -= 9;
      v36 = (__m128i *)((char *)v36 - 72);
    }
    while ( v71 != v37 );
    v74 = (__m128i *)((char *)v74 - 72 * v71);
LABEL_116:
    v71 = v73 % v70;
    if ( !(v73 % v70) )
      return v76;
LABEL_61:
    v73 = v70;
  }
  if ( v5 <= 0 )
    goto LABEL_59;
  v6 = 0;
  v7 = (__m128i *)((char *)v74 + 72 * v71 + 48);
  v8 = v74 + 3;
  v9 = (__m128i *)(v75 + 2);
  v10 = (__m128i *)(v75 + 6);
  while ( 2 )
  {
    v26 = (__m128i *)v8[-3].m128i_i64[0];
    v27 = v8 - 2;
    v77 = v9;
    if ( v26 == &v8[-2] )
    {
      v79 = _mm_loadu_si128(v8 - 2);
    }
    else
    {
      v77 = v26;
      v79.m128i_i64[0] = v8[-2].m128i_i64[0];
    }
    v11 = v8[-3].m128i_u64[1];
    v8[-3].m128i_i64[0] = (__int64)v27;
    v8[-3].m128i_i64[1] = 0;
    v78 = v11;
    v12 = (__m128i *)v8[-1].m128i_i64[0];
    v8[-2].m128i_i8[0] = 0;
    v80 = v10;
    if ( v12 == v8 )
    {
      v82 = _mm_loadu_si128(v8);
    }
    else
    {
      v80 = v12;
      v82.m128i_i64[0] = v8->m128i_i64[0];
    }
    v13 = v8[-1].m128i_u64[1];
    v8[-1].m128i_i64[0] = (__int64)v8;
    v14 = v7 - 2;
    v8[-1].m128i_i64[1] = 0;
    n = v13;
    v15 = v8[1].m128i_i64[0];
    v8->m128i_i8[0] = 0;
    v83 = v15;
    v16 = (__m128i *)v7[-3].m128i_i64[0];
    if ( v16 == &v7[-2] )
    {
      v31 = v7[-3].m128i_u64[1];
      if ( v31 )
      {
        if ( v31 == 1 )
        {
          v8[-2].m128i_i8[0] = v7[-2].m128i_i8[0];
          v31 = v7[-3].m128i_u64[1];
        }
        else
        {
          v32 = (__m128i *)memcpy(&v8[-2], &v7[-2], v31);
          v31 = v7[-3].m128i_u64[1];
          v27 = v32;
        }
      }
      v8[-3].m128i_i64[1] = v31;
      v27->m128i_i8[v31] = 0;
      v17 = (__m128i *)v7[-3].m128i_i64[0];
    }
    else
    {
      v8[-3].m128i_i64[0] = (__int64)v16;
      v8[-3].m128i_i64[1] = v7[-3].m128i_i64[1];
      v8[-2].m128i_i64[0] = v7[-2].m128i_i64[0];
      v17 = v7 - 2;
      v7[-3].m128i_i64[0] = (__int64)v14;
    }
    v7[-3].m128i_i64[1] = 0;
    v17->m128i_i8[0] = 0;
    v18 = (__m128i *)v7[-1].m128i_i64[0];
    v19 = (__m128i *)v8[-1].m128i_i64[0];
    if ( v18 == v7 )
    {
      v30 = v7[-1].m128i_u64[1];
      if ( v30 )
      {
        if ( v30 == 1 )
          v19->m128i_i8[0] = v7->m128i_i8[0];
        else
          memcpy(v19, v7, v30);
        v30 = v7[-1].m128i_u64[1];
        v19 = (__m128i *)v8[-1].m128i_i64[0];
      }
      v8[-1].m128i_i64[1] = v30;
      v19->m128i_i8[v30] = 0;
      v19 = (__m128i *)v7[-1].m128i_i64[0];
    }
    else
    {
      if ( v19 == v8 )
      {
        v8[-1].m128i_i64[0] = (__int64)v18;
        v8[-1].m128i_i64[1] = v7[-1].m128i_i64[1];
        v8->m128i_i64[0] = v7->m128i_i64[0];
      }
      else
      {
        v8[-1].m128i_i64[0] = (__int64)v18;
        v20 = v8->m128i_i64[0];
        v8[-1].m128i_i64[1] = v7[-1].m128i_i64[1];
        v8->m128i_i64[0] = v7->m128i_i64[0];
        if ( v19 )
        {
          v7[-1].m128i_i64[0] = (__int64)v19;
          v7->m128i_i64[0] = v20;
          goto LABEL_17;
        }
      }
      v7[-1].m128i_i64[0] = (__int64)v7;
      v19 = v7;
    }
LABEL_17:
    v7[-1].m128i_i64[1] = 0;
    v19->m128i_i8[0] = 0;
    v8[1].m128i_i64[0] = v7[1].m128i_i64[0];
    v21 = (__m128i *)v7[-3].m128i_i64[0];
    if ( v77 == v9 )
    {
      v29 = v78;
      if ( v78 )
      {
        if ( v78 == 1 )
          v21->m128i_i8[0] = v79.m128i_i8[0];
        else
          memcpy(v21, v9, v78);
        v29 = v78;
        v21 = (__m128i *)v7[-3].m128i_i64[0];
      }
      v7[-3].m128i_i64[1] = v29;
      v21->m128i_i8[v29] = 0;
      v21 = (__m128i *)v77;
    }
    else
    {
      if ( v21 == v14 )
      {
        v72 = v79.m128i_i64[0];
        v7[-3].m128i_i64[0] = (__int64)v77;
        *(__m128 *)((char *)&v7[-3] + 8) = _mm_loadh_ps((const double *)&v72);
      }
      else
      {
        v72 = v79.m128i_i64[0];
        v22 = v7[-2].m128i_i64[0];
        v7[-3].m128i_i64[0] = (__int64)v77;
        *(__m128 *)((char *)&v7[-3] + 8) = _mm_loadh_ps((const double *)&v72);
        if ( v21 )
        {
          v77 = v21;
          v79.m128i_i64[0] = v22;
          goto LABEL_21;
        }
      }
      v77 = v9;
      v21 = v9;
    }
LABEL_21:
    v78 = 0;
    v21->m128i_i8[0] = 0;
    v23 = (__m128i *)v7[-1].m128i_i64[0];
    if ( v80 == v10 )
    {
      v28 = n;
      if ( n )
      {
        if ( n == 1 )
          v23->m128i_i8[0] = v82.m128i_i8[0];
        else
          memcpy(v23, v10, n);
        v28 = n;
        v23 = (__m128i *)v7[-1].m128i_i64[0];
      }
      v7[-1].m128i_i64[1] = v28;
      v23->m128i_i8[v28] = 0;
      v23 = (__m128i *)v80;
    }
    else
    {
      if ( v23 == v7 )
      {
        v72 = v82.m128i_i64[0];
        v7[-1].m128i_i64[0] = (__int64)v80;
        *(__m128 *)((char *)&v7[-1] + 8) = _mm_loadh_ps((const double *)&v72);
      }
      else
      {
        v72 = v82.m128i_i64[0];
        v24 = v7->m128i_i64[0];
        v7[-1].m128i_i64[0] = (__int64)v80;
        *(__m128 *)((char *)&v7[-1] + 8) = _mm_loadh_ps((const double *)&v72);
        if ( v23 )
        {
          v80 = v23;
          v82.m128i_i64[0] = v24;
          goto LABEL_25;
        }
      }
      v80 = v10;
      v23 = v10;
    }
LABEL_25:
    n = 0;
    v23->m128i_i8[0] = 0;
    v25 = (__m128i *)v80;
    v7[1].m128i_i64[0] = v83;
    if ( v25 != v10 )
      operator delete(v25);
    if ( v77 != v9 )
      operator delete(v77);
    ++v6;
    v7 = (__m128i *)((char *)v7 + 72);
    v8 = (__m128i *)((char *)v8 + 72);
    if ( v5 != v6 )
      continue;
    break;
  }
  v74 = (__m128i *)((char *)v74 + 72 * v5);
LABEL_59:
  if ( v73 % v71 )
  {
    v70 = v71;
    v71 -= v73 % v71;
    goto LABEL_61;
  }
  return v76;
}
