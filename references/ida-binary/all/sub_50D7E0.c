unsigned __int64 __fastcall sub_50D7E0(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        double a4,
        double a5,
        __m128 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rcx
  int v12; // esi
  __m128i v13; // xmm4
  __int64 v14; // rbx
  volatile signed __int32 *v15; // rax
  bool v16; // bl
  const __m128i *v17; // r14
  __int64 v18; // rsi
  const __m128i *v19; // rbp
  unsigned __int64 v20; // rsi
  __int64 v21; // rsi
  __m128i *v22; // rdx
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __int64 v25; // rax
  const __m128i *v26; // r15
  __m128i v27; // xmm0
  __int64 v28; // rdx
  void *v29; // r14
  __int64 v30; // rbx
  __int64 v31; // rcx
  volatile signed __int32 **v32; // rcx
  volatile signed __int32 *v33; // rdx
  void *v34; // rdi
  __int64 v35; // rsi
  __int8 *v36; // rax
  void *v37; // r14
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 n; // r12
  volatile signed __int32 *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rcx
  const __m128i **v50; // rcx
  __int64 v51; // rax
  __int64 *v52; // rbp
  const __m128i *v53; // rax
  __int64 *v54; // rsi
  __int64 *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __m128i v59; // xmm0
  __int64 v60; // rsi
  volatile signed __int32 **v61; // rcx
  __int64 v62; // r15
  __int64 v63; // rdi
  __int64 j; // rbp
  volatile signed __int32 *v65; // rax
  void *v66; // rdi
  const __m128i **v67; // rax
  __int64 *v68; // rsi
  volatile signed __int32 **v69; // r15
  volatile signed __int32 **k; // rcx
  volatile signed __int32 *v71; // rax
  volatile signed __int32 *v72; // rdi
  const __m128i *v73; // rcx
  __int64 v74; // rsi
  const __m128i *v75; // rsi
  volatile signed __int32 *v76; // rcx
  __int64 v77; // rbp
  __int64 m; // r15
  volatile signed __int32 *v79; // rax
  void *v80; // rdi
  __m128i v81; // xmm7
  __int64 v82; // rax
  __int64 v84; // rdi
  __int64 v85; // rcx
  __m128i *v86; // rdx
  __m128i v87; // xmm0
  __int64 v88; // rax
  __m128i v89; // [rsp+0h] [rbp-98h] BYREF
  __int64 v90; // [rsp+10h] [rbp-88h]
  volatile signed __int32 **v91; // [rsp+18h] [rbp-80h]
  __int64 v92; // [rsp+20h] [rbp-78h]
  __int64 *v93; // [rsp+28h] [rbp-70h]
  const __m128i *v94; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v95; // [rsp+38h] [rbp-60h]
  const __m128i **i; // [rsp+40h] [rbp-58h]
  const __m128i *v97; // [rsp+48h] [rbp-50h] BYREF
  const __m128i *v98; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v99; // [rsp+58h] [rbp-40h]

  v10 = a1->m128i_i64[0];
  v99 = __readfsqword(0x28u);
  if ( v10 )
  {
    v12 = *(_DWORD *)v10;
    v13 = _mm_loadu_si128(a3);
    v14 = a3[1].m128i_i64[0];
    v89 = v13;
    v15 = (volatile signed __int32 *)v13.m128i_i64[0];
    v90 = v14;
    if ( v12 <= 1 )
    {
      if ( a1[1].m128i_i64[0] == a2 )
      {
        a9 = a1->m128i_i64[1];
        v20 = (v10 + 31) & 0xFFFFFFFFFFFFFFF0LL;
        if ( a2 != *(_QWORD *)(v10 + 8) - 0xAAAAAAAAAAAAAAABLL * ((__int64)(a9 - v20) >> 3) )
        {
          v86 = (__m128i *)(a9 + 24 * a2);
          v86[1].m128i_i64[0] = v14;
          *v86 = v13;
          if ( v13.m128i_i64[0] )
            _InterlockedAdd((volatile signed __int32 *)v13.m128i_i64[0], 1u);
          goto LABEL_17;
        }
        if ( a2 )
        {
          if ( !v13.m128i_i64[0] )
            goto LABEL_7;
          goto LABEL_4;
        }
      }
      else
      {
        if ( a2 )
        {
          if ( !v13.m128i_i64[0] )
            goto LABEL_7;
          goto LABEL_4;
        }
        a9 = a1->m128i_i64[1];
        v20 = (v10 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      }
      if ( v20 == a9 )
        goto LABEL_3;
      v21 = v90;
      *(__m128i *)(a9 - 24) = _mm_load_si128(&v89);
      *(_QWORD *)(a9 - 8) = v21;
      if ( v13.m128i_i64[0] )
        _InterlockedAdd((volatile signed __int32 *)v13.m128i_i64[0], 1u);
      a1->m128i_i64[1] -= 24;
LABEL_17:
      ++a1[1].m128i_i64[0];
      return v99 - __readfsqword(0x28u);
    }
  }
LABEL_3:
  a6 = (__m128)_mm_loadu_si128(a3);
  v90 = a3[1].m128i_i64[0];
  v15 = (volatile signed __int32 *)a6.m128_u64[0];
  v89 = (__m128i)a6;
  if ( a6.m128_u64[0] )
  {
LABEL_4:
    _InterlockedAdd(v15, 1u);
    v10 = a1->m128i_i64[0];
  }
  v16 = a2 == 0 && a1[1].m128i_i64[0] != 0;
  if ( v16 )
  {
    if ( !v10 || *(int *)v10 > 1 )
      goto LABEL_46;
    v17 = (const __m128i *)a1->m128i_i64[1];
    v84 = (__int64)v17->m128i_i64 - ((v10 + 31) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v84 > 0 )
      goto LABEL_47;
    v18 = a1[1].m128i_i64[0];
    v47 = 0xAAAAAAAAAAAAAAABLL * (v84 >> 3);
    a9 = *(_QWORD *)(v10 + 8) - v18;
    if ( (__int64)(a9 - v47) <= 0 || (v48 = 2 * v18, 3 * v18 >= *(_QWORD *)(v10 + 8)) )
    {
LABEL_46:
      sub_503800(a1, 1, 1, 0, a8, a9, a4, a5, a6);
      v17 = (const __m128i *)a1->m128i_i64[1];
      goto LABEL_47;
    }
    v19 = (const __m128i *)a1->m128i_i64[1];
    v85 = (a9 - 1) / 2;
    if ( v85 < 0 )
      v85 = 0;
    v49 = v85 + 1;
LABEL_53:
    v17 = (const __m128i *)((char *)v19 + 24 * (v49 - v47));
    if ( v18 && v17 != v19 && v19 && v17 )
    {
      if ( v17 < v19 )
      {
        sub_50D4C0(v19, v18, (const __m128i *)((char *)v19 + 24 * (v49 - v47)));
      }
      else
      {
        v50 = &v94;
        v98 = nullptr;
        v51 = v18 + v48;
        i = &v94;
        v52 = &v19->m128i_i64[v51];
        v53 = (const __m128i *)((char *)v17 + v51 * 8);
        v94 = v53;
        v95 = v52;
        v97 = v53;
        if ( v17 >= (const __m128i *)v52 )
        {
          v93 = v52;
          v54 = (__int64 *)v17;
        }
        else
        {
          v93 = (__int64 *)v17;
          v54 = v52;
        }
        if ( v54 != (__int64 *)v53 )
        {
          v55 = v52 - 3;
          do
          {
            v52 = v55;
            v56 = *v55;
            *v52 = 0;
            v53[-2].m128i_i64[1] = v56;
            v57 = v52[1];
            v52[1] = 0;
            v53[-1].m128i_i64[0] = v57;
            v58 = v52[2];
            v52[2] = 0;
            v53[-1].m128i_i64[1] = v58;
            v55 = v52 - 3;
            v53 = (const __m128i *)((char *)v94 - 24);
            v94 = v53;
          }
          while ( v54 != (__int64 *)v53 );
          v95 = v52;
          v50 = i;
        }
        v98 = *v50;
        for ( i = &v98; v17 != v53; v94 = v53 )
        {
          v59 = _mm_loadu_si128((const __m128i *)(v52 - 3));
          v60 = *(v52 - 1);
          *(v52 - 1) = 0;
          *(_OWORD *)(v52 - 3) = 0;
          v61 = (volatile signed __int32 **)v53[-2].m128i_i64[1];
          v62 = v53[-1].m128i_i64[0];
          v63 = v53[-1].m128i_i64[1];
          *(__m128i *)((char *)v53 - 24) = v59;
          v53[-1].m128i_i64[1] = v60;
          if ( v61 )
          {
            if ( !_InterlockedSub((volatile signed __int32 *)v61, 1u) )
            {
              for ( j = v62 + 96 * v63; j != v62; v62 += 96 )
              {
                v65 = *(volatile signed __int32 **)(v62 + 56);
                if ( v65 && !_InterlockedSub(v65, 1u) )
                {
                  v66 = *(void **)(v62 + 56);
                  v91 = v61;
                  free(v66);
                  v61 = v91;
                }
              }
              free(v61);
            }
            v52 = v95;
          }
          v52 -= 3;
          v95 = v52;
          v53 = (const __m128i *)((char *)v94 - 24);
        }
        v67 = &v97;
        i = &v97;
        if ( v52 != v93 )
        {
          do
          {
            v68 = v52;
            v52 += 3;
            if ( *v68 && !_InterlockedSub((volatile signed __int32 *)*v68, 1u) )
            {
              v69 = (volatile signed __int32 **)v68[1];
              for ( k = &v69[12 * v68[2]]; k != v69; v69 += 12 )
              {
                v71 = v69[7];
                if ( v71 && !_InterlockedSub(v71, 1u) )
                {
                  v72 = v69[7];
                  v92 = (__int64)v68;
                  v91 = k;
                  free((void *)v72);
                  k = v91;
                }
              }
              free((void *)*v68);
            }
          }
          while ( v93 != v52 );
          v67 = i;
        }
        v73 = *v67;
        if ( v97 < *v67 )
        {
          v74 = 1;
        }
        else
        {
          v74 = -1;
          if ( v97 == *v67 )
            goto LABEL_99;
        }
        v92 = -24 * v74;
        do
        {
          *v67 = (const __m128i *)((char *)v73 + v92);
          v67 = i;
          v75 = *i;
          v76 = (volatile signed __int32 *)(*i)[-2].m128i_i64[1];
          if ( v76 )
          {
            if ( !_InterlockedSub(v76, 1u) )
            {
              v77 = v75[-1].m128i_i64[0];
              for ( m = v77 + 96 * v75[-1].m128i_i64[1]; m != v77; v77 += 96 )
              {
                v79 = *(volatile signed __int32 **)(v77 + 56);
                if ( v79 && !_InterlockedSub(v79, 1u) )
                {
                  v80 = *(void **)(v77 + 56);
                  v91 = (volatile signed __int32 **)v75;
                  free(v80);
                }
              }
              free((void *)v75[-2].m128i_i64[1]);
            }
            v67 = i;
          }
          v73 = *v67;
        }
        while ( *v67 != v97 );
      }
    }
LABEL_99:
    a1->m128i_i64[1] = (__int64)v17;
    if ( !v16 )
      goto LABEL_9;
LABEL_47:
    v43 = v90;
    *(const __m128i *)((char *)&v17[-2] + 8) = _mm_load_si128(&v89);
    v17[-1].m128i_i64[1] = v43;
    a1->m128i_i64[1] -= 24;
    ++a1[1].m128i_i64[0];
    return v99 - __readfsqword(0x28u);
  }
  if ( !v10 )
  {
    sub_503800(a1, 0, 1, 0, a8, a9, a4, a5, a6);
    v19 = (const __m128i *)a1->m128i_i64[1];
    v18 = a1[1].m128i_i64[0];
    goto LABEL_19;
  }
LABEL_7:
  if ( *(int *)v10 <= 1 )
  {
    v44 = a1->m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      v19 = (const __m128i *)a1->m128i_i64[1];
      v45 = *(_QWORD *)(v44 + 8);
      v18 = a1[1].m128i_i64[0];
      v46 = (__int64)v19->m128i_i64 - ((v44 + 31) & 0xFFFFFFFFFFFFFFF0LL);
      v47 = 0xAAAAAAAAAAAAAAABLL * (v46 >> 3);
      if ( (__int64)(v45 - v18 - v47) > 0 )
        goto LABEL_19;
      if ( v46 > 0 )
      {
        v48 = 2 * v18;
        if ( 3 * v18 < 2 * v45 )
        {
          v16 = 0;
          v49 = 0;
          goto LABEL_53;
        }
      }
    }
  }
  sub_503800(a1, 0, 1, 0, a8, a9, a4, a5, a6);
  v17 = (const __m128i *)a1->m128i_i64[1];
LABEL_9:
  v18 = a1[1].m128i_i64[0];
  v19 = v17;
LABEL_19:
  v22 = (__m128i *)((char *)v19 + 24 * v18);
  v23 = a2 + 1 - v18;
  v93 = (__int64 *)(v18 + 1);
  if ( v18 - a2 <= 0 )
  {
    if ( v23 )
    {
      v81 = _mm_load_si128(&v89);
      v22[1].m128i_i64[0] = v90;
      v82 = (__int64)v93;
      *v22 = v81;
      a1->m128i_i64[1] = (__int64)v19;
      a1[1].m128i_i64[0] = v82;
      return v99 - __readfsqword(0x28u);
    }
    v87 = _mm_loadu_si128((__m128i *)((char *)v22 - 24));
    v88 = v22[-1].m128i_i64[1];
    v22[-1].m128i_i64[1] = 0;
    *(__m128i *)((char *)&v22[-2] + 8) = 0;
    v22[1].m128i_i64[0] = v88;
    *v22 = v87;
  }
  else
  {
    v24 = _mm_loadu_si128((__m128i *)((char *)v22 - 24));
    v25 = v22[-1].m128i_i64[1];
    v22[-1].m128i_i64[1] = 0;
    *(__m128i *)((char *)&v22[-2] + 8) = 0;
    v22[1].m128i_i64[0] = v25;
    *v22 = v24;
    if ( v23 )
    {
      v26 = v22 - 3;
      v92 = (__int64)&v22[-3].m128i_i64[3 * v23];
      do
      {
        v27 = _mm_loadu_si128(v26);
        v28 = v26[1].m128i_i64[0];
        v26[1].m128i_i64[0] = 0;
        v29 = (void *)v26[1].m128i_i64[1];
        v30 = v26[2].m128i_i64[0];
        *v26 = 0;
        v31 = v26[2].m128i_i64[1];
        *(__m128i *)((char *)v26 + 24) = v27;
        v26[2].m128i_i64[1] = v28;
        if ( v29 && !_InterlockedSub((volatile signed __int32 *)v29, 1u) )
        {
          v32 = (volatile signed __int32 **)(v30 + 96 * v31);
          if ( (volatile signed __int32 **)v30 != v32 )
          {
            do
            {
              v33 = *(volatile signed __int32 **)(v30 + 56);
              if ( v33 && !_InterlockedSub(v33, 1u) )
              {
                v34 = *(void **)(v30 + 56);
                v91 = v32;
                free(v34);
                v32 = v91;
              }
              v30 += 96;
            }
            while ( v32 != (volatile signed __int32 **)v30 );
          }
          free(v29);
        }
        v26 = (const __m128i *)((char *)v26 - 24);
      }
      while ( (const __m128i *)v92 != v26 );
    }
  }
  v35 = v90;
  v36 = &v19->m128i_i8[24 * a2];
  v37 = *(void **)v36;
  v38 = *((_QWORD *)v36 + 1);
  *(__m128i *)v36 = _mm_load_si128(&v89);
  v39 = *((_QWORD *)v36 + 2);
  *((_QWORD *)v36 + 2) = v35;
  if ( v37 && !_InterlockedSub((volatile signed __int32 *)v37, 1u) )
  {
    for ( n = v38 + 96 * v39; n != v38; v38 += 96 )
    {
      v41 = *(volatile signed __int32 **)(v38 + 56);
      if ( v41 && !_InterlockedSub(v41, 1u) )
        free(*(void **)(v38 + 56));
    }
    free(v37);
  }
  v42 = (__int64)v93;
  a1->m128i_i64[1] = (__int64)v19;
  a1[1].m128i_i64[0] = v42;
  return v99 - __readfsqword(0x28u);
}
