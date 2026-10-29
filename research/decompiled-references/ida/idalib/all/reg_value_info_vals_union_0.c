__int64 __fastcall reg_value_info_vals_union_0(const __m128i **a1, __int64 a2)
{
  const __m128i *v2; // rax
  const __m128i *v3; // rbx
  const __m128i *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  const __m128i *i; // r10
  unsigned int v9; // r13d
  const __m128i *v10; // rbp
  const __m128i *v11; // r15
  const __m128i *v12; // r14
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rcx
  char *v17; // rsi
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  __int64 v22; // r11
  unsigned __int64 v23; // rdx
  size_t v24; // rax
  const __m128i *v25; // rsi
  const __m128i *v26; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int32 v29; // r8d
  __m128i *v30; // rax
  __int64 v31; // rax
  __int32 v32; // r12d
  char *v33; // rsi
  __m128i *v34; // rax
  char *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r8
  signed __int64 v38; // r14
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // rax
  size_t v41; // rdx
  char *v42; // rbp
  __int64 j; // r10
  __m128i v44; // xmm0
  const __m128i **v45; // rax
  const __m128i *v46; // rbx
  __m128i v47; // xmm0
  __m128i *v48; // rdi
  const __m128i **v49; // r15
  __m128i v50; // xmm0
  char *v51; // rdi
  __int64 v53; // r12
  signed __int64 v54; // r14
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r12
  __int64 v57; // r15
  size_t v58; // rdx
  char *v59; // r15
  const __m128i *v60; // r9
  __m128i v61; // xmm0
  unsigned int v62; // eax
  unsigned __int64 v63; // r12
  size_t v64; // rdx
  __int64 v65; // rbx
  char *v66; // rbx
  __int64 v67; // rdx
  __m128i v68; // xmm0
  __m128i v69; // [rsp+0h] [rbp-98h] BYREF
  const __m128i *v70; // [rsp+18h] [rbp-80h]
  __m128i v71; // [rsp+20h] [rbp-78h] BYREF
  __int64 v72; // [rsp+30h] [rbp-68h]
  const __m128i **v73; // [rsp+38h] [rbp-60h]
  void *v74; // [rsp+40h] [rbp-58h] BYREF
  __int128 v75; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v76; // [rsp+58h] [rbp-40h]

  v2 = a1[1];
  v3 = *(const __m128i **)a2;
  v73 = a1;
  v76 = __readfsqword(0x28u);
  v4 = *a1;
  v75 = 0;
  v74 = nullptr;
  v5 = (__int64)&v4->m128i_i64[3 * (_QWORD)v2];
  v6 = *(_QWORD *)(a2 + 8);
  v69.m128i_i64[0] = v5;
  v7 = 24 * v6;
  i = (const __m128i *)((char *)v3 + v7);
  LOBYTE(v9) = v4 != (const __m128i *)v5;
  if ( &v3->m128i_i8[v7] == (__int8 *)v3 )
    return (unsigned __int8)v9;
  if ( v4 == (const __m128i *)v5 )
  {
    if ( i != v3 )
    {
      v55 = 0xAAAAAAAAAAAAAAABLL * (v7 >> 3);
      if ( !v55 )
      {
        v36 = v75;
        v35 = nullptr;
        v9 = 2;
        v37 = 24 * v75;
        goto LABEL_54;
      }
      v10 = v4;
      v35 = nullptr;
      v54 = 0;
      v53 = 0;
      v9 = 0;
      goto LABEL_84;
    }
    return (unsigned __int8)v9;
  }
  v10 = v4;
  v11 = v4;
  v9 = 0;
  v12 = nullptr;
  while ( 1 )
  {
    v13 = v3->m128i_u64[1];
    if ( v12 )
    {
      if ( v12 != v3 && *(_OWORD *)v12 >= *(unsigned __int128 *)v3 )
      {
        if ( !under_debugger )
          interr(2908);
LABEL_95:
        BUG();
      }
    }
    else
    {
      v12 = v3;
    }
    v14 = v10->m128i_u64[1];
    if ( v13 >= v14 )
    {
      if ( v14 < v13 )
      {
        if ( v9 - 2 > 1 )
        {
          v9 = 1;
          goto LABEL_13;
        }
        v15 = v10->m128i_i64[0];
        goto LABEL_38;
      }
      v15 = v10->m128i_i64[0];
      if ( v3->m128i_i64[0] >= (unsigned __int64)v10->m128i_i64[0] )
      {
        if ( v9 - 2 > 1 )
        {
          if ( v15 < v3->m128i_i64[0] )
          {
            if ( !v9 )
              v9 = 1;
            goto LABEL_13;
          }
          goto LABEL_12;
        }
LABEL_38:
        v31 = v75;
        v32 = v10[1].m128i_i32[0];
        v33 = (char *)v74;
        if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
        {
          v72 = v15;
          v71.m128i_i64[1] = (__int64)v4;
          v71.m128i_i64[0] = v14;
          v70 = i;
          v74 = (void *)qvector_reserve(&v74, v74, v75 + 1, 24);
          v33 = (char *)v74;
          v15 = v72;
          v31 = v75;
          v4 = (const __m128i *)v71.m128i_i64[1];
          v14 = v71.m128i_i64[0];
          i = v70;
        }
        v34 = (__m128i *)&v33[24 * v31];
        *v34 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v14);
        v34[1].m128i_i32[0] = v32;
        *(_QWORD *)&v75 = v75 + 1;
        if ( *(_OWORD *)v10 < *(unsigned __int128 *)v3 )
        {
          if ( v9 == 2 )
            v9 = 3;
          goto LABEL_13;
        }
LABEL_12:
        v3 = (const __m128i *)((char *)v3 + 24);
LABEL_13:
        v10 = (const __m128i *)((char *)v10 + 24);
        goto LABEL_14;
      }
    }
    v16 = *((_QWORD *)&v75 + 1);
    v17 = (char *)v74;
    if ( v9 > 1 )
    {
      v20 = v75;
    }
    else
    {
      v18 = (char *)v10 - (char *)v4;
      v19 = 0xAAAAAAAAAAAAAAABLL * ((&i->m128i_i8[(char *)v10 - (char *)v4] - (__int8 *)v3) >> 3);
      if ( *((_QWORD *)&v75 + 1) < v19 )
      {
        v71.m128i_i64[1] = (__int64)v4;
        v71.m128i_i64[0] = (__int64)i;
        v70 = (const __m128i *)((char *)v10 - (char *)v4);
        v74 = (void *)qvector_reserve(&v74, v74, v19, 24);
        v16 = *((_QWORD *)&v75 + 1);
        v17 = (char *)v74;
        v4 = (const __m128i *)v71.m128i_i64[1];
        i = (const __m128i *)v71.m128i_i64[0];
        v18 = (__int64)v70;
      }
      v20 = v75;
      v21 = 0xAAAAAAAAAAAAAAABLL * (v18 >> 3);
      if ( v21 )
      {
        v22 = 24 * v75;
        v23 = v75 - 0x5555555555555555LL * (v18 >> 3);
        v24 = 0;
        if ( v16 < v23 )
        {
          v72 = 24 * v75;
          v71.m128i_i64[1] = (__int64)v4;
          v71.m128i_i64[0] = (__int64)i;
          v70 = (const __m128i *)v18;
          v74 = (void *)qvector_reserve(&v74, v17, v23, 24);
          v17 = (char *)v74;
          v22 = v72;
          v4 = (const __m128i *)v71.m128i_i64[1];
          i = (const __m128i *)v71.m128i_i64[0];
          v18 = (__int64)v70;
          v24 = 24 * v75 - v72;
        }
        v71.m128i_i64[1] = (__int64)v4;
        v71.m128i_i64[0] = (__int64)i;
        v70 = (const __m128i *)&v17[v22];
        memmove(&v70->m128i_i8[v18], v70, v24);
        v4 = (const __m128i *)v71.m128i_i64[1];
        v25 = v70;
        v26 = (const __m128i *)v71.m128i_i64[1];
        i = (const __m128i *)v71.m128i_i64[0];
        if ( (const __m128i *)v71.m128i_i64[1] != v10 )
        {
          do
          {
            v27 = _mm_loadu_si128(v26);
            v26 = (const __m128i *)((char *)v26 + 24);
            v25 = (const __m128i *)((char *)v25 + 24);
            *(__m128i *)((char *)v25 - 24) = v27;
            v25[-1].m128i_i64[1] = v26[-1].m128i_i64[1];
          }
          while ( v10 != v26 );
        }
        v16 = *((_QWORD *)&v75 + 1);
        v17 = (char *)v74;
        v20 = v21 + v75;
        *(_QWORD *)&v75 = v21 + v75;
      }
      v13 = v3->m128i_u64[1];
      v9 = 2 - ((v9 == 0) - 1);
    }
    v28 = _mm_loadl_epi64(v3);
    v29 = v3[1].m128i_i32[0];
    if ( v16 < v20 + 1 )
    {
      LODWORD(v72) = v3[1].m128i_i32[0];
      v71.m128i_i64[1] = (__int64)v4;
      v70 = i;
      v71.m128i_i64[0] = v28.m128i_i64[0];
      v74 = (void *)qvector_reserve(&v74, v17, v20 + 1, 24);
      v17 = (char *)v74;
      v29 = v72;
      v20 = v75;
      v4 = (const __m128i *)v71.m128i_i64[1];
      v28 = _mm_loadl_epi64(&v71);
      i = v70;
    }
    v3 = (const __m128i *)((char *)v3 + 24);
    v30 = (__m128i *)&v17[24 * v20];
    *v30 = _mm_unpacklo_epi64(v28, (__m128i)v13);
    v30[1].m128i_i32[0] = v29;
    *(_QWORD *)&v75 = v75 + 1;
LABEL_14:
    if ( (const __m128i *)v69.m128i_i64[0] == v10 )
      break;
    if ( i == v3 )
      goto LABEL_74;
    if ( v11 )
    {
      if ( v11 != v10 && *(_OWORD *)v11 >= *(unsigned __int128 *)v10 )
      {
        if ( !under_debugger )
          interr(2907);
        goto LABEL_95;
      }
    }
    else
    {
      v11 = v10;
    }
  }
  if ( i == v3 )
  {
LABEL_74:
    v62 = v9 - 2;
    if ( (const __m128i *)v69.m128i_i64[0] == v10 )
    {
      if ( v62 <= 1 )
      {
        v36 = v75;
        goto LABEL_60;
      }
      v51 = (char *)v74;
    }
    else
    {
      v51 = (char *)v74;
      v9 = 1;
      if ( v62 <= 1 )
      {
        v36 = v75;
        v63 = 0xAAAAAAAAAAAAAAABLL * ((v69.m128i_i64[0] - (__int64)v10) >> 3);
        if ( v63 )
        {
          v64 = 0;
          v65 = 24 * v75;
          if ( *((_QWORD *)&v75 + 1) < v63 + (unsigned __int64)v75 )
          {
            v74 = (void *)qvector_reserve(&v74, v74, v63 + v75, 24);
            v51 = (char *)v74;
            v64 = 24 * v75 - v65;
          }
          v66 = &v51[v65];
          memmove(&v66[v69.m128i_i64[0] - (_QWORD)v10], v66, v64);
          v67 = v69.m128i_i64[0];
          do
          {
            v68 = _mm_loadu_si128(v10);
            v10 = (const __m128i *)((char *)v10 + 24);
            v66 += 24;
            *(__m128i *)(v66 - 24) = v68;
            *((_QWORD *)v66 - 1) = v10[-1].m128i_i64[1];
          }
          while ( (const __m128i *)v67 != v10 );
          v9 = 3;
          v36 = v63 + v75;
          *(_QWORD *)&v75 = v63 + v75;
        }
        else
        {
          v9 = 3;
        }
        goto LABEL_60;
      }
    }
LABEL_63:
    if ( v51 )
    {
      *(_QWORD *)&v75 = 0;
      qfree(v51);
    }
    return v9;
  }
  v35 = (char *)v74;
  if ( v9 > 1 )
  {
    v36 = v75;
    v37 = 24 * v75;
    goto LABEL_54;
  }
  v53 = (char *)v10 - (char *)v4;
  v54 = (char *)v10 - (char *)v4;
  v55 = 0xAAAAAAAAAAAAAAABLL * ((&i->m128i_i8[(char *)v10 - (char *)v4] - (__int8 *)v3) >> 3);
  if ( *((_QWORD *)&v75 + 1) < v55 )
  {
LABEL_84:
    v70 = v4;
    v69.m128i_i64[0] = (__int64)i;
    v74 = (void *)qvector_reserve(&v74, v35, v55, 24);
    v4 = v70;
    v35 = (char *)v74;
    i = (const __m128i *)v69.m128i_i64[0];
  }
  v36 = v75;
  v56 = 0xAAAAAAAAAAAAAAABLL * (v53 >> 3);
  v57 = 24 * v75;
  v37 = 24 * v75;
  if ( v56 )
  {
    v58 = 0;
    if ( *((_QWORD *)&v75 + 1) < v56 + (unsigned __int64)v75 )
    {
      v69.m128i_i64[0] = (__int64)i;
      v70 = v4;
      v74 = (void *)qvector_reserve(&v74, v35, v56 + v75, 24);
      v35 = (char *)v74;
      v4 = v70;
      i = (const __m128i *)v69.m128i_i64[0];
      v58 = 24 * v75 - v57;
    }
    v59 = &v35[v57];
    v70 = v4;
    v69.m128i_i64[0] = (__int64)i;
    memmove(&v59[v54], v59, v58);
    v60 = v70;
    for ( i = (const __m128i *)v69.m128i_i64[0]; v10 != v60; *((_QWORD *)v59 - 1) = v60[-1].m128i_i64[1] )
    {
      v61 = _mm_loadu_si128(v60);
      v60 = (const __m128i *)((char *)v60 + 24);
      v59 += 24;
      *(__m128i *)(v59 - 24) = v61;
    }
    v35 = (char *)v74;
    v36 = v56 + v75;
    *(_QWORD *)&v75 = v36;
    v37 = 24 * v36;
  }
  v9 += 2;
LABEL_54:
  v38 = (char *)i - (char *)v3;
  v39 = 0xAAAAAAAAAAAAAAABLL * (((char *)i - (char *)v3) >> 3);
  if ( v39 )
  {
    v40 = v39 + v36;
    v41 = 0;
    if ( *((_QWORD *)&v75 + 1) < v40 )
    {
      v69.m128i_i64[0] = (__int64)i;
      v70 = (const __m128i *)v37;
      v74 = (void *)qvector_reserve(&v74, v35, v40, 24);
      v35 = (char *)v74;
      v37 = (__int64)v70;
      i = (const __m128i *)v69.m128i_i64[0];
      v41 = 24 * v75 - (_QWORD)v70;
    }
    v42 = &v35[v37];
    v69.m128i_i64[0] = (__int64)i;
    memmove(&v35[v37 + v38], &v35[v37], v41);
    for ( j = v69.m128i_i64[0]; (const __m128i *)j != v3; *((_QWORD *)v42 - 1) = v3[-1].m128i_i64[1] )
    {
      v44 = _mm_loadu_si128(v3);
      v3 = (const __m128i *)((char *)v3 + 24);
      v42 += 24;
      *(__m128i *)(v42 - 24) = v44;
    }
    v36 = v39 + v75;
    *(_QWORD *)&v75 = v39 + v75;
  }
LABEL_60:
  if ( !v36 )
  {
    if ( !under_debugger )
      interr(2909);
    goto LABEL_95;
  }
  v45 = v73;
  v46 = (const __m128i *)v74;
  v74 = nullptr;
  v47 = (__m128i)_mm_loadh_ps((const double *)&v75 + 1);
  v48 = (__m128i *)*v73;
  v75 = 0;
  if ( v48 )
  {
    v49 = v73;
    v69 = v47;
    v73[1] = nullptr;
    qfree(v48);
    v50 = _mm_load_si128(&v69);
    *v49 = v46;
    v51 = (char *)v74;
    *(__m128i *)(v49 + 1) = v50;
    goto LABEL_63;
  }
  *v73 = v46;
  *(__m128i *)(v45 + 1) = v47;
  return v9;
}
