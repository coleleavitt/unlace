unsigned __int64 __fastcall sub_415E30(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 i; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  const char *v8; // rdi
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  int v11; // eax
  const char *v12; // rdi
  int v13; // r13d
  int v14; // eax
  const char *v15; // rdi
  int v16; // eax
  const char *v17; // rdi
  __int64 v18; // r13
  __m128i v19; // xmm1
  __int64 v20; // rax
  __m128i v21; // xmm2
  __int64 v22; // rdi
  const char *v23; // rdi
  unsigned __int64 j; // rbp
  const char *v25; // rdi
  int v26; // eax
  const char *v27; // rdi
  const char *v28; // rdi
  int v29; // eax
  const char *v30; // rdi
  __m128i v31; // xmm4
  const char *v32; // r13
  __int64 v33; // rax
  __m128i v34; // xmm0
  const char *v35; // rdi
  const char *v36; // rdi
  __m128i v37; // xmm5
  int v38; // eax
  const char *v39; // rdi
  __int64 v40; // rax
  __m128i v41; // xmm1
  __int64 v42; // rdx
  const char *v43; // r13
  __int64 v44; // r12
  __int64 v45; // rax
  __m128i v46; // xmm0
  const char *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r13
  __m128i v53; // xmm1
  __int64 v54; // rbx
  __m128i v55; // xmm2
  __int64 v56; // rdi
  const char *v58; // rdi
  int v59; // eax
  const char *v60; // rdi
  int v61; // ebp
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r13
  __m128i v68; // xmm0
  __int64 v69; // rbp
  __m128i v70; // xmm2
  __int64 v71; // rdi
  __int64 v72; // rdi
  const char *v73; // rdi
  int v74; // eax
  const char *v75; // rdi
  int v76; // r13d
  int v77; // eax
  __m128i v78; // xmm7
  __int64 v79; // rbp
  __m128i v80; // xmm1
  __int64 v81; // rdi
  __int64 v82; // rdi
  __m128i v83; // xmm7
  const char *v84; // r13
  __m128i v85; // xmm1
  __int64 v86; // rdi
  const char *v87; // rdi
  __m128i v88; // xmm7
  __m128i v89; // xmm1
  __int64 v90; // rax
  __m128i v91; // [rsp+0h] [rbp-98h] BYREF
  __m128i v92; // [rsp+10h] [rbp-88h] BYREF
  __m128i v93; // [rsp+20h] [rbp-78h] BYREF
  __int64 v94; // [rsp+38h] [rbp-60h]
  __int64 v95; // [rsp+40h] [rbp-58h] BYREF
  __m128i v96; // [rsp+48h] [rbp-50h]
  unsigned __int64 v97; // [rsp+58h] [rbp-40h]

  v94 = a3;
  v97 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) > 384 )
  {
    for ( i = a2; ; i = v10 )
    {
      v6 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 3);
      v7 = v6 >> 1;
      if ( !v94 )
        break;
      --v94;
      v8 = &s1;
      v9 = a1 + 24 * v7;
      v10 = a1 + 24;
      if ( *(_QWORD *)(a1 + 32) )
        v8 = *(const char **)(a1 + 24);
      v11 = strtol(v8, nullptr, 10);
      v12 = &s1;
      v13 = v11;
      if ( *(_QWORD *)(v9 + 8) )
        v12 = *(const char **)v9;
      v14 = strtol(v12, nullptr, 10);
      v15 = &s1;
      if ( v13 >= v14 )
      {
        if ( *(_QWORD *)(a1 + 32) )
          v15 = *(const char **)(a1 + 24);
        v38 = strtol(v15, nullptr, 10);
        v39 = &s1;
        if ( *(_QWORD *)(i - 16) )
          v39 = *(const char **)(i - 24);
        if ( v38 >= (int)strtol(v39, nullptr, 10) )
        {
          v73 = &s1;
          if ( *(_QWORD *)(v9 + 8) )
            v73 = *(const char **)v9;
          v74 = strtol(v73, nullptr, 10);
          v75 = &s1;
          v76 = v74;
          if ( *(_QWORD *)(i - 16) )
            v75 = *(const char **)(i - 24);
          v77 = strtol(v75, nullptr, 10);
          v78 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          v92.m128i_i64[0] = *(_QWORD *)a1;
          v91 = v78;
          *(_QWORD *)a1 = 0;
          *(_OWORD *)(a1 + 8) = 0;
          if ( v76 >= v77 )
          {
            v84 = *(const char **)v9;
            v85 = _mm_loadu_si128((const __m128i *)(v9 + 8));
            *(_OWORD *)(v9 + 8) = 0;
            *(_QWORD *)v9 = 0;
            v86 = *(_QWORD *)a1;
            if ( *(_QWORD *)a1 )
            {
              *(_QWORD *)(a1 + 8) = 0;
              v93 = v85;
              qfree(v86, nullptr);
              v85 = _mm_load_si128(&v93);
            }
            *(_QWORD *)a1 = v84;
            *(__m128i *)(a1 + 8) = v85;
            v87 = *(const char **)v9;
            if ( *(_QWORD *)v9 )
            {
              *(_QWORD *)(v9 + 8) = 0;
              qfree(v87, nullptr);
            }
            v88 = _mm_load_si128(&v91);
            *(_QWORD *)v9 = v92.m128i_i64[0];
            *(__m128i *)(v9 + 8) = v88;
          }
          else
          {
            v79 = *(_QWORD *)(i - 24);
            v80 = _mm_loadu_si128((const __m128i *)(i - 16));
            *(_QWORD *)(i - 24) = 0;
            *(_OWORD *)(i - 16) = 0;
            v81 = *(_QWORD *)a1;
            if ( *(_QWORD *)a1 )
            {
              *(_QWORD *)(a1 + 8) = 0;
              v93 = v80;
              qfree(v81, nullptr);
              v80 = _mm_load_si128(&v93);
            }
            *(_QWORD *)a1 = v79;
            *(__m128i *)(a1 + 8) = v80;
            v82 = *(_QWORD *)(i - 24);
            if ( v82 )
            {
              *(_QWORD *)(i - 16) = 0;
              qfree(v82, nullptr);
            }
            v83 = _mm_load_si128(&v91);
            *(_QWORD *)(i - 24) = v92.m128i_i64[0];
            *(__m128i *)(i - 16) = v83;
          }
        }
        else
        {
          v40 = *(_QWORD *)a1;
          v41 = _mm_loadu_si128((const __m128i *)(a1 + 32));
          v42 = *(_QWORD *)(a1 + 24);
          *(__m128i *)(a1 + 32) = _mm_loadu_si128((const __m128i *)(a1 + 8));
          *(_QWORD *)a1 = v42;
          *(_QWORD *)(a1 + 24) = v40;
          *(__m128i *)(a1 + 8) = v41;
        }
      }
      else
      {
        if ( *(_QWORD *)(v9 + 8) )
          v15 = *(const char **)v9;
        v16 = strtol(v15, nullptr, 10);
        v17 = &s1;
        if ( *(_QWORD *)(i - 16) )
          v17 = *(const char **)(i - 24);
        if ( v16 >= (int)strtol(v17, nullptr, 10) )
        {
          v58 = &s1;
          if ( *(_QWORD *)(a1 + 32) )
            v58 = *(const char **)(a1 + 24);
          v59 = strtol(v58, nullptr, 10);
          v60 = &s1;
          v61 = v59;
          if ( *(_QWORD *)(i - 16) )
            v60 = *(const char **)(i - 24);
          v62 = strtol(v60, nullptr, 10);
          v67 = *(_QWORD *)a1;
          v68 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          if ( v61 >= v62 )
          {
            v89 = _mm_loadu_si128((const __m128i *)(a1 + 32));
            v90 = *(_QWORD *)(a1 + 24);
            *(__m128i *)(a1 + 32) = v68;
            *(_QWORD *)(a1 + 24) = v67;
            *(_QWORD *)a1 = v90;
            *(__m128i *)(a1 + 8) = v89;
          }
          else
          {
            *(_QWORD *)a1 = 0;
            *(_OWORD *)(a1 + 8) = 0;
            v69 = *(_QWORD *)(i - 24);
            v70 = _mm_loadu_si128((const __m128i *)(i - 16));
            *(_QWORD *)(i - 24) = 0;
            *(_OWORD *)(i - 16) = 0;
            v71 = *(_QWORD *)a1;
            if ( *(_QWORD *)a1 )
            {
              *(_QWORD *)(a1 + 8) = 0;
              qfree(v71, nullptr, v63, v64, v65, v66, *(_OWORD *)&v68, *(_OWORD *)&v70);
              v70 = _mm_load_si128(&v92);
              v68 = _mm_load_si128(&v91);
            }
            *(_QWORD *)a1 = v69;
            *(__m128i *)(a1 + 8) = v70;
            v72 = *(_QWORD *)(i - 24);
            if ( v72 )
            {
              *(_QWORD *)(i - 16) = 0;
              v91 = v68;
              qfree(v72, nullptr);
              v68 = _mm_load_si128(&v91);
            }
            *(_QWORD *)(i - 24) = v67;
            *(__m128i *)(i - 16) = v68;
          }
        }
        else
        {
          v18 = *(_QWORD *)a1;
          v19 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          *(_QWORD *)a1 = 0;
          *(_OWORD *)(a1 + 8) = 0;
          v20 = *(_QWORD *)v9;
          v21 = _mm_loadu_si128((const __m128i *)(v9 + 8));
          *(_QWORD *)v9 = 0;
          *(_OWORD *)(v9 + 8) = 0;
          v22 = *(_QWORD *)a1;
          if ( *(_QWORD *)a1 )
          {
            *(_QWORD *)(a1 + 8) = 0;
            v91.m128i_i64[0] = v20;
            v93 = v21;
            v92 = v19;
            qfree(v22, nullptr);
            v21 = _mm_load_si128(&v93);
            v19 = _mm_load_si128(&v92);
            v20 = v91.m128i_i64[0];
          }
          *(_QWORD *)a1 = v20;
          *(__m128i *)(a1 + 8) = v21;
          v23 = *(const char **)v9;
          if ( *(_QWORD *)v9 )
          {
            *(_QWORD *)(v9 + 8) = 0;
            v91 = v19;
            qfree(v23, nullptr);
            v19 = _mm_load_si128(&v91);
          }
          *(_QWORD *)v9 = v18;
          *(__m128i *)(v9 + 8) = v19;
        }
      }
      for ( j = i; ; *(__m128i *)(j + 8) = v37 )
      {
        while ( 1 )
        {
          v25 = &s1;
          if ( *(_QWORD *)(v10 + 8) )
            v25 = *(const char **)v10;
          v26 = strtol(v25, nullptr, 10);
          v27 = &s1;
          if ( *(_QWORD *)(a1 + 8) )
            v27 = *(const char **)a1;
          if ( v26 >= (int)strtol(v27, nullptr, 10) )
            break;
          v10 += 24LL;
        }
        do
        {
          j -= 24LL;
          v28 = &s1;
          if ( *(_QWORD *)(a1 + 8) )
            v28 = *(const char **)a1;
          v29 = strtol(v28, nullptr, 10);
          v30 = &s1;
          if ( *(_QWORD *)(j + 8) )
            v30 = *(const char **)j;
        }
        while ( v29 < (int)strtol(v30, nullptr, 10) );
        if ( v10 >= j )
          break;
        v31 = _mm_loadu_si128((const __m128i *)(v10 + 8));
        v32 = *(const char **)v10;
        *(_QWORD *)v10 = 0;
        *(_OWORD *)(v10 + 8) = 0;
        v33 = *(_QWORD *)j;
        v34 = _mm_loadu_si128((const __m128i *)(j + 8));
        *(_QWORD *)j = 0;
        *(_OWORD *)(j + 8) = 0;
        v35 = *(const char **)v10;
        v91 = v31;
        if ( v35 )
        {
          *(_QWORD *)(v10 + 8) = 0;
          v92.m128i_i64[0] = v33;
          v93 = v34;
          qfree(v35, nullptr);
          v34 = _mm_load_si128(&v93);
          v33 = v92.m128i_i64[0];
        }
        *(_QWORD *)v10 = v33;
        *(__m128i *)(v10 + 8) = v34;
        v36 = *(const char **)j;
        if ( *(_QWORD *)j )
        {
          *(_QWORD *)(j + 8) = 0;
          qfree(v36, nullptr);
        }
        v37 = _mm_load_si128(&v91);
        *(_QWORD *)j = v32;
        v10 += 24LL;
      }
      sub_415E30(v10, i, v94);
      v3 = v10 - a1;
      if ( (__int64)(v10 - a1) <= 384 )
        return v97 - __readfsqword(0x28u);
    }
    v43 = (const char *)(v7 - 1);
    v44 = a1 + 24 * v7 - 24;
    while ( 1 )
    {
      v45 = *(_QWORD *)v44;
      *(_QWORD *)v44 = 0;
      v46 = _mm_loadu_si128((const __m128i *)(v44 + 8));
      v47 = v43;
      *(_OWORD *)(v44 + 8) = 0;
      v95 = v45;
      v96 = v46;
      sub_414BD0(a1, v43, v6, (__int64)&v95);
      if ( v95 )
        qfree(v95, v43);
      v44 -= 24;
      if ( !v43 )
        break;
      --v43;
    }
    while ( (__int64)(i - a1) > 24 )
    {
      v52 = *(_QWORD *)(i - 24);
      v53 = _mm_loadu_si128((const __m128i *)(i - 16));
      i -= 24LL;
      *(_QWORD *)i = 0;
      *(_OWORD *)(i + 8) = 0;
      v54 = *(_QWORD *)a1;
      v55 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v56 = *(_QWORD *)i;
      if ( *(_QWORD *)i )
      {
        *(_QWORD *)(i + 8) = 0;
        qfree(v56, v47, v48, v49, v50, v51, *(_OWORD *)&v53, *(_OWORD *)&v55);
        v55 = _mm_load_si128(&v92);
        v53 = _mm_load_si128(&v91);
      }
      *(_QWORD *)i = v54;
      *(__m128i *)(i + 8) = v55;
      v47 = nullptr;
      v95 = v52;
      v96 = v53;
      sub_414BD0(a1, nullptr, 0xAAAAAAAAAAAAAAABLL * ((__int64)(i - a1) >> 3), (__int64)&v95);
      if ( v95 )
        qfree(v95, nullptr);
    }
  }
  return v97 - __readfsqword(0x28u);
}
