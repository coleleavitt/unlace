__int64 __fastcall sub_57A80(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v6; // rcx
  __m128i *v7; // r13
  __int64 v8; // rbx
  __m128i *v9; // rbp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __m128i *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdi
  const __m128i *v15; // rax
  __int16 v16; // si
  __m128i v17; // xmm0
  __m128i *v18; // rdx
  unsigned int v19; // ebp
  __int64 v20; // rdi
  unsigned int v21; // eax
  __int64 i; // rdx
  const char *v23; // rsi
  __int64 v24; // r8
  __int16 v25; // ax
  __m128 v26; // xmm0
  _WORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v37; // r14
  unsigned __int64 v38; // r9
  __int64 *v39; // r8
  unsigned __int16 v40; // r13
  __int64 v41; // rdx
  __int64 v42; // r10
  int v43; // ecx
  __int64 v44; // r15
  _WORD *v45; // rcx
  __int64 v46; // rdx
  __m128 v47; // xmm0
  __int64 v48; // rcx
  const char *v49; // rdx
  const __m128i *v50; // rdx
  __m128i v51; // xmm0
  __int64 v52; // rdi
  __int64 v53; // rcx
  __int16 v54; // ax
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // r9
  int v57; // ecx
  __int64 v58; // rdx
  const char *v59; // r10
  unsigned __int64 v60; // rax
  __int64 v61; // r8
  char *v62; // rdx
  unsigned __int64 v63; // rax
  unsigned int v64; // ecx
  char *v65; // rax
  __int64 v66; // r13
  unsigned __int64 v67; // r15
  __int64 v68; // r8
  unsigned __int64 v69; // rax
  char *v70; // rdx
  unsigned __int64 v71; // rax
  __int64 v72; // rcx
  unsigned __int16 v73; // bp
  __int64 v74; // r10
  __int64 v75; // r14
  int v76; // ecx
  __int64 v77; // rdx
  __int16 v78; // dx
  __int64 v79; // [rsp+8h] [rbp-60h]
  __int64 v80; // [rsp+8h] [rbp-60h]
  __int64 v81; // [rsp+10h] [rbp-58h] BYREF
  __m128 v82; // [rsp+18h] [rbp-50h]
  unsigned __int64 v83; // [rsp+28h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 184) <= 1u || (unsigned __int8)getinf_flag(3, 4) )
    return 0;
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(__m128i **)(a1 + 176);
  v8 = 24 * v6;
  v9 = (__m128i *)((char *)v7 + 24 * v6);
  if ( v9 == v7 )
    goto LABEL_13;
  v10 = 0xAAAAAAAAAAAAAAABLL * (v8 >> 3);
  if ( v10 )
  {
    _BitScanReverse64(&v11, v10);
    sub_57810(*(_QWORD *)(a1 + 176), (__m128i *)((char *)v7 + 24 * v6), 2LL * (int)v11, v6, v2, v3);
    if ( v8 > 384 )
    {
      v12 = v7 + 24;
      sub_544A0(v7, v7 + 24);
      do
      {
        v13 = v12->m128i_i64[0];
        v14 = v12->m128i_i64[1];
        v15 = (__m128i *)((char *)v12 - 24);
        v16 = v12[1].m128i_i16[0];
        if ( v12->m128i_i64[0] >= v12[-2].m128i_i64[1] )
        {
          v18 = v12;
        }
        else
        {
          do
          {
            v17 = _mm_loadu_si128(v15);
            v15[2].m128i_i64[1] = v15[1].m128i_i64[0];
            v18 = (__m128i *)v15;
            v15 = (const __m128i *)((char *)v15 - 24);
            v15[3] = v17;
          }
          while ( v13 < v15->m128i_i64[0] );
        }
        v12 = (__m128i *)((char *)v12 + 24);
        v18->m128i_i64[0] = v13;
        v18->m128i_i64[1] = v14;
        v18[1].m128i_i16[0] = v16;
      }
      while ( v9 != v12 );
      goto LABEL_12;
    }
  }
  else
  {
    sub_57810(*(_QWORD *)(a1 + 176), (__m128i *)((char *)v7 + 24 * v6), -2, v6, v2, v3);
  }
  sub_544A0(v7, v9);
LABEL_12:
  v6 = *(_QWORD *)(a1 + 184);
LABEL_13:
  v81 = 0;
  v82 = 0;
  v19 = v6 - 1;
  if ( (int)v6 - 1 < 0 )
    return 0;
  v20 = *(_QWORD *)(a1 + 176);
  v21 = 3 * v19;
  for ( i = v20 + 24LL * v19; ; i -= 24 )
  {
    LOBYTE(v21) = *(_WORD *)(i + 16) == 10 || *(_WORD *)(i + 16) == 43;
    if ( (_BYTE)v21 )
      break;
    if ( --v19 == -1 )
      return v21;
  }
  v23 = (const char *)(int)v19;
  v4 = v21;
  v24 = v20 + 24LL * (int)v19;
  v25 = *(_WORD *)(v24 + 16);
  if ( v25 == 10 )
  {
    v27 = (_WORD *)(v20 + 16);
    v28 = 0;
    if ( v19 )
    {
      while ( *v27 != 43 )
      {
        ++v28;
        v27 += 12;
        if ( v28 == v19 )
          goto LABEL_74;
      }
      if ( v19 == v28 )
      {
LABEL_74:
        v24 = v20 + 24LL * (int)v19;
        v28 = v19;
        v78 = *(_WORD *)(v24 + 16);
        goto LABEL_30;
      }
      if ( *(_QWORD *)(a1 + 200) == -1 )
        goto LABEL_33;
      v24 = v20 + 24LL * (int)v28;
      v78 = *(_WORD *)(v24 + 16);
    }
    else
    {
      v78 = *(_WORD *)(v20 + 16);
      v24 = *(_QWORD *)(a1 + 176);
    }
LABEL_30:
    if ( v78 != 43 )
    {
      if ( v78 != 10 )
        goto LABEL_19;
      v19 = v28;
LABEL_33:
      v29 = *(_QWORD *)v24;
      v30 = *(_QWORD *)(v24 + 8);
      v23 = nullptr;
      v31 = 1;
      goto LABEL_34;
    }
    v19 = v28;
  }
  else if ( v25 != 43 )
  {
LABEL_19:
    v81 = *(_QWORD *)(a1 + 176);
    v26 = _mm_loadh_ps((const double *)(a1 + 192));
    *(_QWORD *)(a1 + 176) = 0;
    *(_QWORD *)(a1 + 184) = 0;
    *(_QWORD *)(a1 + 192) = 0;
    v82 = v26;
    goto LABEL_20;
  }
  v33 = *(_QWORD *)v24;
  v34 = *(_QWORD *)(v24 + 8);
  v81 = qvector_reserve(&v81, 0, 1, 24);
  v35 = v81 + 24 * v82.m128_u64[0];
  *(_QWORD *)v35 = v33;
  *(_QWORD *)(v35 + 8) = v34;
  *(_WORD *)(v35 + 16) = 43;
  v32 = ++v82.m128_u64[0];
  if ( v19-- == 0 )
  {
LABEL_68:
    v20 = *(_QWORD *)(a1 + 176);
    v23 = (const char *)v81;
LABEL_69:
    v38 = v82.m128_u64[1];
    goto LABEL_50;
  }
  v37 = 24LL * (int)v19;
  while ( 1 )
  {
    v20 = *(_QWORD *)(a1 + 176);
    v23 = (const char *)v81;
    v38 = v82.m128_u64[1];
    v39 = (__int64 *)(v20 + v37);
    v40 = *(_WORD *)(v20 + v37 + 16);
    if ( (unsigned __int16)(v40 - 36) > 7u )
      break;
    v41 = 24 * v32;
    v42 = v81 + 24 * v32 - 24;
    v43 = *(unsigned __int16 *)(v42 + 16);
    if ( (unsigned __int16)(v43 - 36) > 7u )
      break;
    if ( v40 >= (unsigned __int16)v43 )
      break;
    v44 = *v39;
    if ( *(_QWORD *)v42 != *v39 + 8 * (v43 - v40) )
      break;
    v60 = v32 + 1;
    v61 = v39[1];
    if ( v82.m128_u64[1] < v60 )
    {
      v79 = v61;
      v81 = qvector_reserve(&v81, v81, v60, 24);
      v23 = (const char *)v81;
      v61 = v79;
      v41 = 24 * v82.m128_u64[0];
    }
    v62 = (char *)&v23[v41];
    --v19;
    v37 -= 24;
    *(_QWORD *)v62 = v44;
    *((_QWORD *)v62 + 1) = v61;
    v63 = v82.m128_u64[0];
    *((_WORD *)v62 + 8) = v40;
    v32 = v63 + 1;
    v82.m128_u64[0] = v32;
    if ( v19 == -1 )
      goto LABEL_68;
  }
  v45 = (_WORD *)(v20 + 24LL * (int)v19 + 16);
  while ( (unsigned __int16)(*v45 - 36) <= 7u )
  {
    --v19;
    v45 -= 12;
    if ( v19 == -1 )
      goto LABEL_50;
  }
  v46 = v20 + 24LL * (int)v19;
  if ( *(_WORD *)(v46 + 16) == 10 )
  {
    v29 = *(_QWORD *)v46;
    v30 = *(_QWORD *)(v46 + 8);
    v31 = v32 + 1;
    if ( v82.m128_u64[1] >= v32 + 1 )
    {
LABEL_76:
      v64 = v19 - 1;
      v65 = (char *)&v23[24 * v32];
      *(_QWORD *)v65 = v29;
      *((_QWORD *)v65 + 1) = v30;
      *((_WORD *)v65 + 8) = 10;
      v32 = ++v82.m128_u64[0];
      if ( v19 )
      {
        v66 = 24LL * (int)v64;
        v67 = 24 * ((int)v64 - (unsigned __int64)v64);
        while ( 1 )
        {
          v20 = *(_QWORD *)(a1 + 176);
          v23 = (const char *)v81;
          v77 = 24 * v32;
          v72 = v81 + 24 * v32 - 24;
          v73 = *(_WORD *)(v20 + v66 + 16);
          v74 = *(_QWORD *)v72;
          v75 = *(_QWORD *)(v20 + v66);
          v76 = *(unsigned __int16 *)(v72 + 16);
          if ( (unsigned __int16)(v73 - 3) <= 7u )
          {
            if ( (unsigned __int16)(v76 - 3) > 7u )
            {
              if ( (unsigned __int16)(v76 - 36) > 7u || v74 != v75 + 4 * (11 - v73) + (__int64)(8 * v76 - 288) )
                goto LABEL_69;
            }
            else if ( v73 >= (unsigned __int16)v76 || v74 != v75 + 4 * (v76 - v73) )
            {
              goto LABEL_69;
            }
          }
          else if ( (unsigned __int16)(v73 - 36) > 7u
                 || (unsigned __int16)(v76 - 36) > 7u
                 || v73 >= (unsigned __int16)v76
                 || v74 != v75 + 8 * (v76 - v73) )
          {
            goto LABEL_69;
          }
          v68 = *(_QWORD *)(v20 + v66 + 8);
          v69 = v32 + 1;
          if ( v82.m128_u64[1] < v69 )
          {
            v80 = *(_QWORD *)(v20 + v66 + 8);
            v81 = qvector_reserve(&v81, v81, v69, 24);
            v23 = (const char *)v81;
            v68 = v80;
            v77 = 24 * v82.m128_u64[0];
          }
          v70 = (char *)&v23[v77];
          *(_QWORD *)v70 = v75;
          *((_QWORD *)v70 + 1) = v68;
          v71 = v82.m128_u64[0];
          *((_WORD *)v70 + 8) = v73;
          v32 = v71 + 1;
          v82.m128_u64[0] = v32;
          if ( v66 == v67 )
            break;
          v66 -= 24;
        }
        v20 = *(_QWORD *)(a1 + 176);
        v23 = (const char *)v81;
        v38 = v82.m128_u64[1];
      }
      else
      {
        v20 = *(_QWORD *)(a1 + 176);
        v23 = (const char *)v81;
        v38 = v82.m128_u64[1];
      }
      goto LABEL_50;
    }
LABEL_34:
    v81 = qvector_reserve(&v81, v23, v31, 24);
    v23 = (const char *)v81;
    v32 = v82.m128_u64[0];
    goto LABEL_76;
  }
LABEL_50:
  v47 = _mm_loadh_ps((const double *)(a1 + 192));
  *(_QWORD *)(a1 + 176) = v23;
  *(_QWORD *)(a1 + 184) = v32;
  *(_QWORD *)(a1 + 192) = v38;
  v81 = v20;
  v82 = v47;
  if ( v32 > 1 )
  {
    v48 = 24 * v32;
    v49 = &v23[24 * v32];
    if ( v49 == v23 )
    {
      v48 = 0;
    }
    else
    {
      v50 = (const __m128i *)(v49 - 24);
      if ( v23 < (const char *)v50 )
      {
        do
        {
          v51 = _mm_loadu_si128(v50);
          v52 = *(_QWORD *)v23;
          v50 = (const __m128i *)((char *)v50 - 24);
          v23 += 24;
          v53 = *((_QWORD *)v23 - 2);
          v54 = *((_WORD *)v23 - 4);
          *(__m128i *)(v23 - 24) = v51;
          *((_QWORD *)v23 - 1) = v50[2].m128i_i64[1];
          v50[1].m128i_i64[1] = v52;
          v50[2].m128i_i64[0] = v53;
          v50[2].m128i_i16[4] = v54;
        }
        while ( v23 < (const char *)v50 );
        v32 = *(_QWORD *)(a1 + 184);
        v23 = *(const char **)(a1 + 176);
        v48 = 24 * v32;
      }
    }
    if ( *(_WORD *)&v23[v48 - 8] == 10 )
    {
      *(_QWORD *)(a1 + 200) = -1;
      v20 = v81;
    }
    else
    {
      v55 = *(_QWORD *)(a1 + 200);
      v20 = v81;
      if ( v55 != -1 && v32 )
      {
        v56 = -1;
        v57 = 0;
        v58 = 0;
        do
        {
          v59 = &v23[24 * v58];
          if ( (unsigned __int16)(*((_WORD *)v59 + 8) - 36) <= 7u )
          {
            if ( v56 == -1 )
            {
              v56 = *((_QWORD *)v59 + 1);
            }
            else if ( v56 > *((_QWORD *)v59 + 1) )
            {
              v56 = *((_QWORD *)v59 + 1);
            }
          }
          v58 = ++v57;
        }
        while ( v57 < v32 );
        if ( v56 < v55 )
          *(_QWORD *)(a1 + 200) = -1;
      }
    }
    goto LABEL_21;
  }
LABEL_20:
  v4 = 0;
LABEL_21:
  if ( v20 )
  {
    v82.m128_u64[0] = 0;
    qfree(v20, v23);
  }
  return v4;
}
