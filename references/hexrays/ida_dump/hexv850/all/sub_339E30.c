unsigned __int64 __fastcall sub_339E30(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // r12
  __int64 v5; // r13
  unsigned __int64 v6; // r15
  const char *v7; // rbx
  char *v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rcx
  __m128i v13; // xmm7
  __int64 v14; // rax
  __m128 v15; // xmm0
  unsigned __int64 v16; // r14
  const char *v17; // rdi
  const char *v18; // rbx
  const char *v19; // rsi
  const char *v20; // rbx
  __m128 v21; // xmm3
  const char *v22; // r12
  __m128i v23; // xmm0
  const char *v24; // rdi
  const char *v25; // rdi
  __m128i v26; // xmm5
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  double v32; // r13
  __m128i si128; // xmm1
  __int64 v34; // rbx
  __m128i v35; // xmm2
  __int64 v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rbx
  int v41; // eax
  __int64 v42; // rdx
  __m128i v43; // xmm7
  double v44; // r14
  _OWORD *v45; // rbx
  __int64 *v46; // rax
  char *v47; // r13
  __m128i v48; // xmm1
  __int64 v49; // rdi
  char *v50; // rdi
  __int64 v51; // rax
  __m128i v52; // xmm6
  __m128i v53; // xmm6
  unsigned __int64 v54; // rax
  __int64 *v55; // rdx
  __int64 v56; // r12
  __m128i v57; // xmm1
  __int64 v58; // rdi
  unsigned __int64 v59; // rax
  __int64 v60; // rdi
  unsigned __int64 v61; // rax
  __m128i v62; // xmm7
  __int64 v63; // rax
  __m128 v64; // xmm0
  unsigned __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rbx
  __m128i v68; // xmm1
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdi
  unsigned __int64 v72; // rax
  __m128i v73; // xmm6
  char *v74; // rbx
  __m128i v75; // xmm1
  __int64 v76; // rdi
  __int64 v77; // rax
  char *v78; // rdi
  __int64 v79; // rax
  __m128i v80; // xmm6
  char *s2[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 *v82; // [rsp+10h] [rbp-88h]
  __int64 *v83; // [rsp+18h] [rbp-80h]
  char *v84[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v85; // [rsp+30h] [rbp-68h]
  char *v86; // [rsp+38h] [rbp-60h]
  double v87; // [rsp+40h] [rbp-58h] BYREF
  __m128i v88; // [rsp+48h] [rbp-50h]
  unsigned __int64 v89; // [rsp+58h] [rbp-40h]

  v82 = (__int64 *)a1;
  v83 = (__int64 *)a2;
  v85 = a3;
  v89 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) <= 384 )
    return v89 - __readfsqword(0x28u);
  if ( !v85 )
  {
LABEL_30:
    v28 = (unsigned __int64)v83;
    v29 = (__int64)v82;
    sub_339C20((__int64)v82, (unsigned __int64)v83, (unsigned __int64)v83);
    if ( (__int64)(v28 - v29) > 24 )
    {
      do
      {
        v30 = (__int64)v82;
        v83 -= 3;
        v31 = (unsigned __int64)v83;
        v32 = *(double *)v83;
        si128 = _mm_loadu_si128((const __m128i *)(v83 + 1));
        *v83 = 0;
        *(_OWORD *)(v31 + 8) = 0;
        v34 = *(_QWORD *)v30;
        v35 = _mm_loadu_si128((const __m128i *)(v30 + 8));
        *(_QWORD *)v30 = 0;
        *(_OWORD *)(v30 + 8) = 0;
        v36 = *(_QWORD *)v31;
        if ( *(_QWORD *)v31 )
        {
          *(_QWORD *)(v31 + 8) = 0;
          *(__m128i *)v84 = si128;
          *(__m128i *)s2 = v35;
          qfree(v36);
          si128 = _mm_load_si128((const __m128i *)v84);
          v35 = _mm_load_si128((const __m128i *)s2);
        }
        v37 = (unsigned __int64)v83;
        v38 = (__int64)v82;
        v87 = v32;
        *v83 = v34;
        v39 = v37 - v38;
        *(__m128i *)(v37 + 8) = v35;
        v88 = si128;
        sub_334C10(v38, 0, 0xAAAAAAAAAAAAAAABLL * ((__int64)(v37 - v38) >> 3), (char *)&v87);
        if ( v87 != 0.0 )
          qfree(*(_QWORD *)&v87);
      }
      while ( v39 > 24 );
    }
    return v89 - __readfsqword(0x28u);
  }
  while ( 2 )
  {
    --v85;
    v4 = &v82[((__int64)(0xAAAAAAAAAAAAAAABLL * (v3 >> 3)) >> 1)
            + ((0xAAAAAAAAAAAAAAABLL * (v3 >> 3)) & 0xFFFFFFFFFFFFFFFELL)];
    v5 = v82[4];
    v6 = (unsigned __int64)(v82 + 3);
    if ( v4[1] )
    {
      v7 = s1;
      s2[0] = (char *)*v4;
      if ( !v5 )
        goto LABEL_6;
    }
    else
    {
      if ( !v5 )
      {
        if ( !*(v83 - 2) )
        {
          v53 = _mm_loadu_si128((const __m128i *)(v82 + 1));
          v44 = *(double *)v82;
          v45 = v82 + 1;
          s2[0] = (char *)s1;
          *(__m128i *)v84 = v53;
          if ( strcmp(s1, s1) >= 0 )
            goto LABEL_43;
          goto LABEL_50;
        }
        v7 = s1;
        s2[0] = (char *)s1;
        goto LABEL_40;
      }
      s2[0] = (char *)s1;
    }
    v7 = (const char *)v82[3];
LABEL_6:
    v8 = (char *)s1;
    if ( strcmp(v7, s2[0]) < 0 )
    {
      if ( *(v83 - 2) )
        v8 = (char *)*(v83 - 3);
      v84[0] = v8;
      v9 = strcmp(s2[0], v8);
      v10 = (__int64)v82;
      v11 = *v82;
      *(__m128i *)s2 = _mm_loadu_si128((const __m128i *)(v82 + 1));
      if ( v9 < 0 )
      {
        *v82 = 0;
        *(_OWORD *)(v10 + 8) = 0;
        v74 = (char *)*v4;
        v75 = _mm_loadu_si128((const __m128i *)(v4 + 1));
        *v4 = 0;
        *(_OWORD *)(v4 + 1) = 0;
        v76 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 )
        {
          *(_QWORD *)(v10 + 8) = 0;
          *(__m128i *)v84 = v75;
          qfree(v76);
          v75 = _mm_load_si128((const __m128i *)v84);
        }
        v77 = (__int64)v82;
        *v82 = (__int64)v74;
        *(__m128i *)(v77 + 8) = v75;
        v78 = (char *)*v4;
        if ( *v4 )
        {
          v4[1] = 0;
          qfree(v78);
        }
        v79 = (__int64)v82;
        v80 = _mm_load_si128((const __m128i *)s2);
        *v4 = v11;
        *(__m128i *)(v4 + 1) = v80;
        v5 = *(_QWORD *)(v79 + 8);
      }
      else if ( strcmp(v7, v84[0]) < 0 )
      {
        v65 = (unsigned __int64)v83;
        v66 = (__int64)v82;
        *v82 = 0;
        *(_OWORD *)(v66 + 8) = 0;
        v67 = *(_QWORD *)(v65 - 24);
        v68 = _mm_loadu_si128((const __m128i *)(v65 - 16));
        *(_QWORD *)(v65 - 24) = 0;
        *(_OWORD *)(v65 - 16) = 0;
        v69 = *(_QWORD *)v66;
        if ( *(_QWORD *)v66 )
        {
          *(_QWORD *)(v66 + 8) = 0;
          *(__m128i *)v84 = v68;
          qfree(v69);
          v68 = _mm_load_si128((const __m128i *)v84);
        }
        v70 = (__int64)v82;
        *v82 = v67;
        *(__m128i *)(v70 + 8) = v68;
        v71 = *(v83 - 3);
        if ( v71 )
        {
          *(v83 - 2) = 0;
          qfree(v71);
        }
        v72 = (unsigned __int64)v83;
        v73 = _mm_load_si128((const __m128i *)s2);
        *(v83 - 3) = v11;
        *(__m128i *)(v72 - 16) = v73;
        v5 = v82[1];
      }
      else
      {
        v12 = (__int64)v82;
        v13 = _mm_load_si128((const __m128i *)s2);
        v14 = v82[3];
        v15 = _mm_loadh_ps((const double *)v82 + 5);
        v82[3] = v11;
        *(__m128 *)(v12 + 8) = v15;
        *(_QWORD *)v12 = v14;
        *(__m128i *)(v12 + 32) = v13;
      }
      goto LABEL_12;
    }
    if ( *(v83 - 2) )
LABEL_40:
      v8 = (char *)*(v83 - 3);
    v86 = v8;
    v41 = strcmp(v7, v8);
    v42 = (__int64)v82;
    v43 = _mm_loadu_si128((const __m128i *)(v82 + 1));
    v44 = *(double *)v82;
    v45 = v82 + 1;
    *(__m128i *)v84 = v43;
    if ( v41 >= 0 )
    {
      if ( strcmp(s2[0], v86) >= 0 )
      {
LABEL_43:
        v46 = v82;
        *v82 = 0;
        *v45 = 0;
        v47 = (char *)*v4;
        v48 = _mm_loadu_si128((const __m128i *)(v4 + 1));
        *v4 = 0;
        *(_OWORD *)(v4 + 1) = 0;
        v49 = *v46;
        if ( *v46 )
        {
          v46[1] = 0;
          *(__m128i *)s2 = v48;
          qfree(v49);
          v48 = _mm_load_si128((const __m128i *)s2);
        }
        *v82 = (__int64)v47;
        *v45 = v48;
        v50 = (char *)*v4;
        if ( *v4 )
        {
          v4[1] = 0;
          qfree(v50);
        }
        v51 = (__int64)v82;
        v52 = _mm_load_si128((const __m128i *)v84);
        *(double *)v4 = v44;
        *(__m128i *)(v4 + 1) = v52;
        v5 = *(_QWORD *)(v51 + 8);
        goto LABEL_12;
      }
LABEL_50:
      v54 = (unsigned __int64)v83;
      v55 = v82;
      *v82 = 0;
      *v45 = 0;
      v56 = *(_QWORD *)(v54 - 24);
      v57 = _mm_loadu_si128((const __m128i *)(v54 - 16));
      *(_QWORD *)(v54 - 24) = 0;
      *(_OWORD *)(v54 - 16) = 0;
      v58 = *v55;
      if ( *v55 )
      {
        v55[1] = 0;
        *(__m128i *)s2 = v57;
        qfree(v58);
        v57 = _mm_load_si128((const __m128i *)s2);
      }
      *v82 = v56;
      v59 = (unsigned __int64)v83;
      *v45 = v57;
      v60 = *(_QWORD *)(v59 - 24);
      if ( v60 )
      {
        *(_QWORD *)(v59 - 16) = 0;
        qfree(v60);
      }
      v61 = (unsigned __int64)v83;
      v62 = _mm_load_si128((const __m128i *)v84);
      *((double *)v83 - 3) = v44;
      *(__m128i *)(v61 - 16) = v62;
      v5 = v82[1];
      goto LABEL_12;
    }
    v63 = v82[3];
    *((double *)v82 + 3) = v44;
    v64 = _mm_loadh_ps((const double *)(v42 + 40));
    *(__m128i *)(v42 + 32) = v43;
    *(_QWORD *)v42 = v63;
    *(__m128 *)(v42 + 8) = v64;
LABEL_12:
    v16 = (unsigned __int64)v83;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v5 )
        {
          v17 = s1;
          v18 = (const char *)*v82;
          if ( !*(_QWORD *)(v6 + 8) )
            goto LABEL_14;
          goto LABEL_18;
        }
        v18 = s1;
        if ( !*(_QWORD *)(v6 + 8) )
          break;
LABEL_18:
        v17 = *(const char **)v6;
LABEL_14:
        if ( strcmp(v17, v18) >= 0 )
          goto LABEL_19;
        v6 += 24LL;
      }
      do
      {
LABEL_19:
        v16 -= 24LL;
        v19 = s1;
        if ( *(_QWORD *)(v16 + 8) )
          v19 = *(const char **)v16;
      }
      while ( strcmp(v18, v19) < 0 );
      if ( v6 >= v16 )
        break;
      v20 = *(const char **)v6;
      *(_QWORD *)v6 = 0;
      v21 = _mm_loadh_ps((const double *)(v6 + 16));
      *(_OWORD *)(v6 + 8) = 0;
      v22 = *(const char **)v16;
      v23 = _mm_loadu_si128((const __m128i *)(v16 + 8));
      *(_QWORD *)v16 = 0;
      *(_OWORD *)(v16 + 8) = 0;
      v24 = *(const char **)v6;
      *(__m128 *)s2 = v21;
      if ( v24 )
      {
        *(_QWORD *)(v6 + 8) = 0;
        *(__m128i *)v84 = v23;
        qfree(v24);
        v23 = _mm_load_si128((const __m128i *)v84);
      }
      *(_QWORD *)v6 = v22;
      *(__m128i *)(v6 + 8) = v23;
      v25 = *(const char **)v16;
      if ( *(_QWORD *)v16 )
      {
        *(_QWORD *)(v16 + 8) = 0;
        qfree(v25);
      }
      v26 = _mm_load_si128((const __m128i *)s2);
      v27 = (__int64)v82;
      *(_QWORD *)v16 = v20;
      v6 += 24LL;
      *(__m128i *)(v16 + 8) = v26;
      v5 = *(_QWORD *)(v27 + 8);
    }
    sub_339E30(v6, v83, v85);
    v3 = v6 - (_QWORD)v82;
    if ( (__int64)(v6 - (_QWORD)v82) > 384 )
    {
      v83 = (__int64 *)v6;
      if ( !v85 )
        goto LABEL_30;
      continue;
    }
    return v89 - __readfsqword(0x28u);
  }
}
