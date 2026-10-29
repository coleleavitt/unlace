__int8 *__fastcall sub_1FF3E10(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15
  __m128i *v8; // rax
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  __int64 m128i_i64; // r12
  __m128i *v12; // r14
  __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  _QWORD *v16; // r13
  _BYTE *v17; // rsi
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  __m128i *v20; // r15
  __m128i *v21; // rbp
  __m128i si128; // xmm0
  void **v23; // rsi
  __int8 *result; // rax
  unsigned __int64 v25; // r12
  __m128i *v26; // rax
  __int64 v27; // rax
  __m128i *v28; // r10
  __m128i *v29; // r9
  unsigned __int64 v30; // rax
  _BYTE *v31; // rsi
  __int64 v32; // rdx
  void *v33; // rdi
  __m128i *v34; // r13
  signed __int64 v35; // rdx
  __int64 v36; // rsi
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r14
  __m128i *v41; // r15
  __m128 v42; // xmm0
  __m128i v43; // xmm0
  void **v44; // rsi
  char *m128i_i8; // rax
  char *v46; // rsi
  __int64 v47; // rdx
  char *v48; // rdi
  char *v49; // rcx
  char *v50; // r8
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  char *v55; // r8
  char *v56; // r8
  char *v57; // r8
  __m128i *v58; // r12
  char *v59; // rdi
  char *v60; // rdi
  void **v61; // r14
  void **v62; // r15
  char *v63; // rdi
  __m128 v64; // xmm0
  __m128 v65; // [rsp+0h] [rbp-E8h] BYREF
  void **v66; // [rsp+18h] [rbp-D0h]
  __m128i v67; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v68; // [rsp+30h] [rbp-B8h] BYREF
  __m128i *v69; // [rsp+38h] [rbp-B0h]
  __int64 v70; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v71; // [rsp+48h] [rbp-A0h]
  __int64 v72; // [rsp+50h] [rbp-98h] BYREF
  __int64 v73; // [rsp+58h] [rbp-90h]
  __int16 v74; // [rsp+70h] [rbp-78h]
  void *v75; // [rsp+80h] [rbp-68h] BYREF
  __int64 v76; // [rsp+88h] [rbp-60h]
  __int16 v77; // [rsp+A0h] [rbp-48h]

  v4 = a3;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  *a1 = &off_2BE4C80;
  v70 = a2;
  v66 = &v75;
  sub_1FF31C0(&v75);
  v8 = (__m128i *)operator new(0x20u);
  v9 = v75;
  v10 = v76;
  m128i_i64 = (__int64)v8[2].m128i_i64;
  v12 = v8;
  v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
  v65.m128_u64[0] = (unsigned __int64)&v8[1];
  sub_1FF3350(v8, v9, (__int64)&v9[v10]);
  if ( v75 != v66 + 2 )
    operator delete(v75);
  v13 = 32 * a4;
  v14 = a3 + 32 * a4;
  if ( a3 == v14 )
  {
    v67.m128i_i64[0] = m128i_i64;
    v20 = v12;
  }
  else
  {
    v15 = v13 >> 5;
    if ( v13 >> 5 )
    {
      if ( v15 > 0x7FFFFFFFFFFFFFELL )
        std::__throw_length_error("vector::_M_range_insert");
      v25 = 2 * (v15 + 1);
      v26 = (__m128i *)operator new(v25 * 16);
      v20 = v26;
      v26->m128i_i64[0] = (__int64)v26[1].m128i_i64;
      if ( v65.m128_u64[0] == v12->m128i_i64[0] )
      {
        v26[1] = _mm_loadu_si128(v12 + 1);
      }
      else
      {
        v26->m128i_i64[0] = v12->m128i_i64[0];
        v26[1].m128i_i64[0] = v12[1].m128i_i64[0];
      }
      v27 = v12->m128i_i64[1];
      v12[1].m128i_i8[0] = 0;
      v28 = v20 + 2;
      v12->m128i_i64[1] = 0;
      v29 = v20 + 2;
      v20->m128i_i64[1] = v27;
      v12->m128i_i64[0] = v65.m128_u64[0];
      v30 = a3;
      do
      {
        v31 = *(_BYTE **)v30;
        v69 = v28;
        v29->m128i_i64[0] = (__int64)v29[1].m128i_i64;
        v32 = *(_QWORD *)(v30 + 8);
        v68 = v30;
        v67.m128i_i64[0] = (__int64)v29;
        sub_1FF3350(v29, v31, (__int64)&v31[v32]);
        v28 = v69;
        v30 = v68 + 32;
        v29 = (__m128i *)(v67.m128i_i64[0] + 32);
      }
      while ( v14 != v68 + 32 );
      v33 = (void *)v12->m128i_i64[0];
      v67.m128i_i64[0] = (__int64)v69[2].m128i_i64 + ((v14 - a3 - 32) & 0xFFFFFFFFFFFFFFE0LL);
      if ( (void *)v65.m128_u64[0] != v33 )
        operator delete(v33);
      m128i_i64 = (__int64)v20[v25].m128i_i64;
      operator delete(v12);
      v21 = (__m128i *)a1[2];
      if ( v21 != (__m128i *)a1[3] )
        goto LABEL_9;
      goto LABEL_18;
    }
    v16 = (_QWORD *)m128i_i64;
    do
    {
      v17 = *(_BYTE **)v4;
      v18 = *(_QWORD *)(v4 + 8);
      v19 = v16;
      *v16 = v16 + 2;
      v4 += 32LL;
      v16 += 4;
      v65.m128_u64[0] = v13;
      sub_1FF3350(v19, v17, (__int64)&v17[v18]);
      v13 = v65.m128_u64[0];
    }
    while ( v14 != v4 );
    v20 = v12;
    v67.m128i_i64[0] = m128i_i64 + v65.m128_u64[0];
  }
  v21 = (__m128i *)a1[2];
  if ( v21 != (__m128i *)a1[3] )
  {
LABEL_9:
    v74 = 261;
    v77 = 261;
    v72 = 0;
    v65 = _mm_loadh_ps((const double *)v67.m128i_i64);
    v73 = 0;
    v75 = nullptr;
    v76 = 0;
    sub_2253560(v21, v70);
    sub_2253560(&v21[2], &v72);
    si128 = _mm_load_si128((const __m128i *)&v65);
    v21[5].m128i_i64[0] = m128i_i64;
    v23 = v66;
    v21[4] = si128;
    sub_2253560(&v21[5].m128i_u64[1], v23);
    v21[8].m128i_i64[0] = 0;
    v21[7].m128i_i64[1] = (__int64)&v21[8].m128i_i64[1];
    v21[8].m128i_i8[8] = 0;
    a1[2] += 152LL;
    return &v21[8].m128i_i8[8];
  }
LABEL_18:
  v34 = (__m128i *)a1[1];
  v35 = (char *)v21 - (char *)v34;
  v36 = ((char *)v21 - (char *)v34) >> 3;
  if ( 0x86BCA1AF286BCA1BLL * v36 )
  {
    v37 = 0xD79435E50D79436LL * v36;
    if ( 0x86BCA1AF286BCA1BLL * v36 > 0xD79435E50D79436LL * v36 )
    {
      v38 = -112;
    }
    else
    {
      v38 = -112;
      if ( v37 <= 0x1AF286BCA1AF286LL )
      {
        if ( !v37 )
        {
          v68 = 152;
          v71 = 0;
          v65.m128_u64[0] = 0;
          goto LABEL_22;
        }
        v38 = 16 * v36;
      }
    }
  }
  else
  {
    v38 = 152;
  }
  v68 = v38;
  v39 = operator new(v38);
  v35 = (char *)v21 - (char *)v34;
  v65.m128_u64[0] = v39;
  v71 = v39 + v68;
  v68 = v39 + 152;
LABEL_22:
  v40 = v65.m128_u64[0];
  v69 = v20;
  v74 = 261;
  v72 = 0;
  v41 = (__m128i *)(v65.m128_u64[0] + v35);
  v42 = _mm_loadh_ps((const double *)v67.m128i_i64);
  v77 = 261;
  v67 = (__m128i)v42;
  v73 = 0;
  v75 = nullptr;
  v76 = 0;
  sub_2253560(v65.m128_u64[0] + v35, v70);
  sub_2253560(&v41[2], &v72);
  v43 = _mm_load_si128(&v67);
  v41[5].m128i_i64[0] = m128i_i64;
  v44 = v66;
  v41[4] = v43;
  sub_2253560(&v41[5].m128i_u64[1], v44);
  v41[8].m128i_i64[0] = 0;
  v41[7].m128i_i64[1] = (__int64)&v41[8].m128i_i64[1];
  v41[8].m128i_i8[8] = 0;
  if ( v21 != v34 )
  {
    m128i_i8 = v34[1].m128i_i8;
    v46 = &v34[6].m128i_i8[8];
    v47 = v40;
    v48 = &v34[8].m128i_i8[8];
    v49 = v34[3].m128i_i8;
    while ( 1 )
    {
      *(_QWORD *)v47 = v47 + 16;
      v57 = *((char **)m128i_i8 - 2);
      if ( v57 == m128i_i8 )
      {
        *(__m128i *)(v47 + 16) = _mm_loadu_si128((const __m128i *)m128i_i8);
      }
      else
      {
        *(_QWORD *)v47 = v57;
        *(_QWORD *)(v47 + 16) = *(_QWORD *)m128i_i8;
      }
      *(_QWORD *)(v47 + 8) = *((_QWORD *)m128i_i8 - 1);
      *((_QWORD *)m128i_i8 - 2) = m128i_i8;
      *((_QWORD *)m128i_i8 - 1) = 0;
      *m128i_i8 = 0;
      *(_QWORD *)(v47 + 32) = v47 + 48;
      v50 = *((char **)m128i_i8 + 2);
      if ( v50 == v49 )
      {
        *(__m128i *)(v47 + 48) = _mm_loadu_si128((const __m128i *)m128i_i8 + 2);
      }
      else
      {
        *(_QWORD *)(v47 + 32) = v50;
        *(_QWORD *)(v47 + 48) = *((_QWORD *)m128i_i8 + 4);
      }
      *(_QWORD *)(v47 + 40) = *((_QWORD *)m128i_i8 + 3);
      m128i_i8[32] = 0;
      *((_QWORD *)m128i_i8 + 2) = v49;
      *((_QWORD *)m128i_i8 + 3) = 0;
      *(_OWORD *)(v47 + 64) = 0;
      *(_QWORD *)(v47 + 80) = 0;
      *(_QWORD *)(v47 + 64) = *((_QWORD *)m128i_i8 + 6);
      v51 = *((_QWORD *)m128i_i8 + 7);
      *((_QWORD *)m128i_i8 + 6) = 0;
      v52 = *(_QWORD *)(v47 + 72);
      *(_QWORD *)(v47 + 72) = v51;
      v53 = *((_QWORD *)m128i_i8 + 8);
      *((_QWORD *)m128i_i8 + 7) = v52;
      v54 = *(_QWORD *)(v47 + 80);
      *(_QWORD *)(v47 + 80) = v53;
      *((_QWORD *)m128i_i8 + 8) = v54;
      *(_QWORD *)(v47 + 88) = v47 + 104;
      v55 = *((char **)m128i_i8 + 9);
      if ( v55 == v46 )
      {
        *(__m128i *)(v47 + 104) = _mm_loadu_si128((const __m128i *)(m128i_i8 + 88));
      }
      else
      {
        *(_QWORD *)(v47 + 88) = v55;
        *(_QWORD *)(v47 + 104) = *((_QWORD *)m128i_i8 + 11);
      }
      *(_QWORD *)(v47 + 96) = *((_QWORD *)m128i_i8 + 10);
      *((_QWORD *)m128i_i8 + 9) = v46;
      *((_QWORD *)m128i_i8 + 10) = 0;
      m128i_i8[88] = 0;
      *(_QWORD *)(v47 + 120) = v47 + 136;
      v56 = *((char **)m128i_i8 + 13);
      if ( v56 == v48 )
      {
        *(__m128i *)(v47 + 136) = _mm_loadu_si128((const __m128i *)(m128i_i8 + 120));
      }
      else
      {
        *(_QWORD *)(v47 + 120) = v56;
        *(_QWORD *)(v47 + 136) = *((_QWORD *)m128i_i8 + 15);
      }
      v47 += 152;
      v46 += 152;
      v49 += 152;
      *(_QWORD *)(v47 - 24) = *((_QWORD *)m128i_i8 + 14);
      *((_QWORD *)m128i_i8 + 13) = v48;
      v48 += 152;
      *((_QWORD *)m128i_i8 + 14) = 0;
      m128i_i8[120] = 0;
      if ( v21 == (__m128i *)(m128i_i8 + 136) )
        break;
      m128i_i8 += 152;
    }
    v58 = v34;
    v68 = v65.m128_u64[0]
        + 152 * ((0x6BCA1AF286BCA1BLL * ((unsigned __int64)(m128i_i8 - 16 - (char *)v34) >> 3)) & 0x1FFFFFFFFFFFFFFFLL)
        + 304;
    do
    {
      while ( 1 )
      {
        v59 = (char *)v58[7].m128i_i64[1];
        if ( v59 != (char *)&v58[8].m128i_u64[1] )
          operator delete(v59);
        v60 = (char *)v58[5].m128i_i64[1];
        if ( v60 != (char *)&v58[6].m128i_u64[1] )
          operator delete(v60);
        v61 = (void **)v58[4].m128i_i64[1];
        v62 = (void **)v58[4].m128i_i64[0];
        if ( v61 != v62 )
        {
          do
          {
            while ( *v62 != v62 + 2 )
            {
              operator delete(*v62);
              v62 += 4;
              if ( v62 == v61 )
                goto LABEL_49;
            }
            v62 += 4;
          }
          while ( v61 != v62 );
LABEL_49:
          v62 = (void **)v58[4].m128i_i64[0];
        }
        if ( v62 )
          operator delete(v62);
        v63 = (char *)v58[2].m128i_i64[0];
        if ( v63 != (char *)&v58[3] )
          operator delete(v63);
        if ( (__m128i *)v58->m128i_i64[0] == &v58[1] )
          break;
        operator delete((void *)v58->m128i_i64[0]);
        v58 = (__m128i *)((char *)v58 + 152);
        if ( v21 == v58 )
          goto LABEL_56;
      }
      v58 = (__m128i *)((char *)v58 + 152);
    }
    while ( v21 != v58 );
  }
LABEL_56:
  if ( v34 )
    operator delete(v34);
  result = (__int8 *)v71;
  v64 = _mm_loadh_ps((const double *)&v68);
  a1[3] = v71;
  *(__m128 *)(a1 + 1) = v64;
  return result;
}
