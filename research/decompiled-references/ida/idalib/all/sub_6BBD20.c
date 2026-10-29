unsigned __int64 __fastcall sub_6BBD20(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  __m128i *v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  __m128i *v11; // rax
  __int64 j; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __m128i *v17; // r14
  unsigned __int64 v18; // rdx
  __m128i *v19; // rax
  __int64 v20; // rsi
  __int64 k; // rax
  __m128i *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r14
  __int64 v25; // r9
  __m128i *v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rsi
  __m128i *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __m128i v34; // xmm0
  bool v35; // cf
  __int64 v36; // rcx
  __int64 v37; // rsi
  __m128i *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i v41; // xmm0
  __int64 v42; // rsi
  __m128i *v43; // rdi
  __int64 v44; // rax
  __m128i *v45; // rdx
  __m128i v46; // xmm0
  __int64 v47; // rsi
  __m128i *v48; // rdi
  __int64 v49; // rax
  __m128i *v50; // rdx
  __m128i v51; // xmm0
  __int64 v52; // rbp
  __m128i *v53; // rdi
  __int64 v54; // rax
  __m128i *v55; // rdx
  __m128i v56; // xmm0
  unsigned __int64 v57; // r12
  __m128i *v58; // rbp
  __int64 v59; // rax
  __int64 v60; // r13
  unsigned __int64 v61; // rdx
  __int64 v62; // rsi
  char v63; // al
  char *v64; // rbp
  char *v65; // r13
  const char *v66; // r14
  char *v67; // r12
  unsigned __int64 v68; // rdi
  __m128i *v70; // rax
  __int64 v71; // rsi
  __m128i *v72; // rdi
  __int64 v73; // rax
  __m128i *v74; // rdx
  __m128i v75; // xmm0
  __int64 v76; // r12
  __m128i *v77; // rdi
  __int64 v78; // rax
  __m128i *v79; // rdx
  __m128i v80; // xmm0
  __int64 v81; // r14
  __m128i *v82; // rdi
  __int64 v83; // rax
  __m128i *v84; // rdx
  __m128i v85; // xmm0
  int v86[2]; // [rsp+0h] [rbp-E0h]
  __m128i *v87; // [rsp+0h] [rbp-E0h]
  int v88[2]; // [rsp+0h] [rbp-E0h]
  int v89[2]; // [rsp+0h] [rbp-E0h]
  int v90[2]; // [rsp+0h] [rbp-E0h]
  __int64 v91; // [rsp+8h] [rbp-D8h]
  __m128i *v92; // [rsp+8h] [rbp-D8h]
  __int64 v93; // [rsp+8h] [rbp-D8h]
  char v94; // [rsp+10h] [rbp-D0h]
  __int64 i; // [rsp+18h] [rbp-C8h]
  _QWORD *v97; // [rsp+30h] [rbp-B0h]
  unsigned __int64 v98; // [rsp+38h] [rbp-A8h] BYREF
  unsigned __int64 v99; // [rsp+40h] [rbp-A0h] BYREF
  void *v100; // [rsp+48h] [rbp-98h] BYREF
  __int128 v101; // [rsp+50h] [rbp-90h]
  void *ptr; // [rsp+68h] [rbp-78h] BYREF
  __int128 v103; // [rsp+70h] [rbp-70h]
  __m128i v104; // [rsp+88h] [rbp-58h] BYREF
  unsigned __int64 v105; // [rsp+A0h] [rbp-40h]

  v105 = __readfsqword(0x28u);
  v3 = *a1;
  v101 = 0;
  v100 = nullptr;
  v97 = *(_QWORD **)(v3 + 1672);
  for ( i = sub_6CAC50(*(_QWORD *)(v3 + 1872), a2); ; i = sub_6CACB0(*(_QWORD *)(*a1 + 1872), a2) )
  {
    v99 = -1;
    if ( i == -1 )
    {
      v99 = sub_3BDD60(v97, a2);
    }
    else
    {
      v4 = sub_3BDD60(v97, a2);
      v5 = *a1;
      v104.m128i_i64[0] = v4;
      v6 = sub_7BE710(&v104, v5, i, 109) - 1;
      v7 = (__m128i *)v100;
      v8 = v101;
      v104.m128i_i8[8] = 0;
      v99 = v6;
      v9 = *((_QWORD *)&v101 + 1);
      v104.m128i_i64[0] = v6;
      v10 = v101 + 1;
      if ( &v104 < v100 || &v104 >= (__m128i *)((char *)v100 + 16 * *((_QWORD *)&v101 + 1)) )
      {
        if ( *((_QWORD *)&v101 + 1) < v10 )
        {
          v7 = (__m128i *)qvector_reserve(&v100, 0, v10, 16);
          v52 = *((_QWORD *)&v101 + 1);
          *((_QWORD *)&v101 + 1) = v9;
          v53 = (__m128i *)v100;
          v54 = v101 - 1;
          if ( (__int64)v101 - 1 >= 0 )
          {
            v55 = v7;
            do
            {
              v56 = _mm_loadu_si128(v53);
              ++v55;
              ++v53;
              v55[-1] = v56;
              v35 = v54-- == 0;
            }
            while ( !v35 );
            v53 = (__m128i *)v100;
          }
          qfree(v53);
          v100 = v7;
          v8 = v101;
          *((_QWORD *)&v101 + 1) = v52;
        }
        v7[v8] = _mm_load_si128(&v104);
      }
      else
      {
        if ( *((_QWORD *)&v101 + 1) < v10 )
        {
          v7 = (__m128i *)qvector_reserve(&v100, 0, v10, 16);
          v71 = *((_QWORD *)&v101 + 1);
          *((_QWORD *)&v101 + 1) = v9;
          v72 = (__m128i *)v100;
          v73 = v101 - 1;
          if ( (__int64)v101 - 1 >= 0 )
          {
            v74 = v7;
            do
            {
              v75 = _mm_loadu_si128(v72);
              ++v74;
              ++v72;
              v74[-1] = v75;
              v35 = v73-- == 0;
            }
            while ( !v35 );
            v72 = (__m128i *)v100;
          }
          qfree(v72);
          v8 = v101;
          v100 = v7;
          *((_QWORD *)&v101 + 1) = v71;
        }
        v11 = &v7[v8];
        v11->m128i_i64[0] = v6;
        v11->m128i_i8[8] = 0;
      }
      *(_QWORD *)&v101 = v101 + 1;
    }
    for ( j = sub_7BEB80(&v99, *a1, 69); ; j = sub_7BEBF0(&v99, *a1, v13, 69) )
    {
      v13 = j;
      v14 = sub_7BE710(&v99, *a1, j, 69);
      v15 = v14 - 1;
      ptr = (void *)(v14 - 1);
      if ( v14 )
      {
        v16 = v101;
        v17 = (__m128i *)v100;
        v104.m128i_i64[0] = v15;
        v104.m128i_i8[8] = 1;
        v18 = v101 + 1;
        if ( &v104 < v100 || &v104 >= (__m128i *)((char *)v100 + 16 * *((_QWORD *)&v101 + 1)) )
        {
          if ( *((_QWORD *)&v101 + 1) < v18 )
          {
            *(_QWORD *)v89 = *((_QWORD *)&v101 + 1);
            v17 = (__m128i *)qvector_reserve(&v100, 0, v18, 16);
            v42 = *((_QWORD *)&v101 + 1);
            v43 = (__m128i *)v100;
            *((_QWORD *)&v101 + 1) = *(_QWORD *)v89;
            v44 = v101 - 1;
            if ( (__int64)v101 - 1 >= 0 )
            {
              v45 = v17;
              do
              {
                v46 = _mm_loadu_si128(v43);
                ++v45;
                ++v43;
                v45[-1] = v46;
                v35 = v44-- == 0;
              }
              while ( !v35 );
              v43 = (__m128i *)v100;
            }
            qfree(v43);
            v16 = v101;
            v100 = v17;
            *((_QWORD *)&v101 + 1) = v42;
          }
          v17[v16] = _mm_load_si128(&v104);
        }
        else
        {
          if ( *((_QWORD *)&v101 + 1) < v18 )
          {
            v93 = *((_QWORD *)&v101 + 1);
            *(_QWORD *)v90 = v15;
            v17 = (__m128i *)qvector_reserve(&v100, 0, v18, 16);
            v47 = *((_QWORD *)&v101 + 1);
            v48 = (__m128i *)v100;
            v49 = v101 - 1;
            *((_QWORD *)&v101 + 1) = v93;
            if ( (__int64)v101 - 1 >= 0 )
            {
              v50 = v17;
              do
              {
                v51 = _mm_loadu_si128(v48);
                ++v50;
                ++v48;
                v50[-1] = v51;
                v35 = v49-- == 0;
              }
              while ( !v35 );
              v48 = (__m128i *)v100;
            }
            qfree(v48);
            v16 = v101;
            v100 = v17;
            v15 = *(_QWORD *)v90;
            *((_QWORD *)&v101 + 1) = v47;
          }
          v19 = &v17[v16];
          v19->m128i_i64[0] = v15;
          v19->m128i_i8[8] = 1;
        }
        v20 = *a1;
        *(_QWORD *)&v101 = v101 + 1;
        for ( k = sub_7BEB80(&ptr, v20, 115); ; k = sub_7BEBF0(&ptr, v23, v24, 115) )
        {
          v24 = k;
          if ( k == -1 )
            break;
          v25 = sub_7BE710(&ptr, *a1, k, 115) - 1;
          v26 = (__m128i *)v100;
          v27 = v101;
          v104.m128i_i8[8] = 1;
          v104.m128i_i64[0] = v25;
          v28 = v101 + 1;
          if ( &v104 < v100 || &v104 >= (__m128i *)((char *)v100 + 16 * *((_QWORD *)&v101 + 1)) )
          {
            if ( *((_QWORD *)&v101 + 1) < v28 )
            {
              *(_QWORD *)v86 = *((_QWORD *)&v101 + 1);
              v29 = qvector_reserve(&v100, 0, v28, 16);
              v30 = *((_QWORD *)&v101 + 1);
              v31 = (__m128i *)v100;
              *((_QWORD *)&v101 + 1) = *(_QWORD *)v86;
              v32 = v101 - 1;
              if ( (__int64)v101 - 1 >= 0 )
              {
                v33 = v29;
                do
                {
                  v34 = _mm_loadu_si128(v31);
                  v33 += 16;
                  ++v31;
                  *(__m128i *)(v33 - 16) = v34;
                  v35 = v32-- == 0;
                }
                while ( !v35 );
                v31 = (__m128i *)v100;
              }
              v87 = (__m128i *)v29;
              qfree(v31);
              v26 = v87;
              v27 = v101;
              v100 = v87;
              *((_QWORD *)&v101 + 1) = v30;
            }
            v26[v27] = _mm_load_si128(&v104);
          }
          else
          {
            if ( *((_QWORD *)&v101 + 1) < v28 )
            {
              v91 = *((_QWORD *)&v101 + 1);
              *(_QWORD *)v88 = v25;
              v36 = qvector_reserve(&v100, 0, v28, 16);
              v37 = *((_QWORD *)&v101 + 1);
              v38 = (__m128i *)v100;
              v39 = v101 - 1;
              *((_QWORD *)&v101 + 1) = v91;
              if ( (__int64)v101 - 1 >= 0 )
              {
                v40 = v36;
                do
                {
                  v41 = _mm_loadu_si128(v38);
                  v40 += 16;
                  ++v38;
                  *(__m128i *)(v40 - 16) = v41;
                  v35 = v39-- == 0;
                }
                while ( !v35 );
                v38 = (__m128i *)v100;
              }
              v92 = (__m128i *)v36;
              qfree(v38);
              v26 = v92;
              v27 = v101;
              v25 = *(_QWORD *)v88;
              v100 = v92;
              *((_QWORD *)&v101 + 1) = v37;
            }
            v22 = &v26[v27];
            v22->m128i_i64[0] = v25;
            v22->m128i_i8[8] = 1;
          }
          v23 = *a1;
          *(_QWORD *)&v101 = v101 + 1;
        }
      }
      if ( v13 == -1 )
        break;
    }
    if ( i == -1 )
      break;
  }
  v98 = sub_3BDD60(v97, a2);
  v57 = v98;
  v58 = (__m128i *)v100;
  v104.m128i_i64[0] = v98;
  v59 = v101;
  v104.m128i_i8[8] = 1;
  v60 = *((_QWORD *)&v101 + 1);
  v61 = v101 + 1;
  if ( &v104 >= v100 && &v104 < (__m128i *)((char *)v100 + 16 * *((_QWORD *)&v101 + 1)) )
  {
    if ( *((_QWORD *)&v101 + 1) < v61 )
    {
      v58 = (__m128i *)qvector_reserve(&v100, 0, v61, 16);
      v81 = *((_QWORD *)&v101 + 1);
      *((_QWORD *)&v101 + 1) = v60;
      v82 = (__m128i *)v100;
      v83 = v101 - 1;
      if ( (__int64)v101 - 1 >= 0 )
      {
        v84 = v58;
        do
        {
          v85 = _mm_loadu_si128(v82);
          ++v84;
          ++v82;
          v84[-1] = v85;
          v35 = v83-- == 0;
        }
        while ( !v35 );
        v82 = (__m128i *)v100;
      }
      qfree(v82);
      v100 = v58;
      v59 = v101;
      *((_QWORD *)&v101 + 1) = v81;
    }
    v70 = &v58[v59];
    v70->m128i_i64[0] = v57;
    v70->m128i_i8[8] = 1;
  }
  else
  {
    if ( *((_QWORD *)&v101 + 1) < v61 )
    {
      v58 = (__m128i *)qvector_reserve(&v100, 0, v61, 16);
      v76 = *((_QWORD *)&v101 + 1);
      *((_QWORD *)&v101 + 1) = v60;
      v77 = (__m128i *)v100;
      v78 = v101 - 1;
      if ( (__int64)v101 - 1 >= 0 )
      {
        v79 = v58;
        do
        {
          v80 = _mm_loadu_si128(v77);
          ++v79;
          ++v77;
          v79[-1] = v80;
          v35 = v78-- == 0;
        }
        while ( !v35 );
        v77 = (__m128i *)v100;
      }
      qfree(v77);
      v100 = v58;
      v59 = v101;
      *((_QWORD *)&v101 + 1) = v76;
    }
    v58[v59] = _mm_load_si128(&v104);
  }
  v62 = *a1;
  *(_QWORD *)&v101 = v101 + 1;
  v63 = sub_7BE710(&v98, v62, -5, 65);
  v64 = (char *)v100;
  v94 = (v63 & 2) != 0;
  v65 = (char *)v100 + 16 * v101;
  if ( v65 != v100 )
  {
    while ( 1 )
    {
      v68 = *(_QWORD *)v64;
      ptr = nullptr;
      v103 = 0;
      v99 = v68;
      netnode_get_name(v68, &ptr);
      if ( v64[8] )
      {
        sub_7BF370(v64, *a1, 65);
        sub_7BF370(v64, *a1, 69);
        sub_7BF370(v64, *a1, 69);
        sub_7BF370(v64, *a1, 115);
        sub_7BF370(v64, *a1, 83);
      }
      else
      {
        sub_7BF0F0((int)v64);
      }
      if ( (unsigned __int64)v103 > 1 )
        break;
LABEL_75:
      if ( ptr )
      {
        *(_QWORD *)&v103 = 0;
        qfree(ptr);
      }
      v64 += 16;
      if ( v65 == v64 )
        goto LABEL_82;
    }
    v66 = (const char *)ptr;
    if ( (unsigned __int64)(v103 - 1) > 2
      && *(_BYTE *)ptr == 36
      && *((_BYTE *)ptr + 1) == 36
      && *((_BYTE *)ptr + 2) == 32 )
    {
      ptr = nullptr;
      v103 = 0;
    }
    else
    {
      sub_6B9740(v104.m128i_i64, (const char *)ptr);
      v67 = (char *)v104.m128i_i64[0];
      if ( !v104.m128i_i64[1] )
      {
        v66 = haystack;
        goto LABEL_71;
      }
      v66 = (const char *)v104.m128i_i64[0];
    }
    v67 = (char *)v66;
LABEL_71:
    netnode_check(&v104, v66, 0, 0);
    if ( v104.m128i_i64[0] != -1 )
      sub_7BF0F0((int)&v104);
    sub_7BF170(&v99, *a1, v66, 0);
    if ( v67 )
      qfree(v67);
    goto LABEL_75;
  }
LABEL_82:
  sub_6BBC80(a1, a2, 1, v94);
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    qfree(v100);
  }
  return v105 - __readfsqword(0x28u);
}
