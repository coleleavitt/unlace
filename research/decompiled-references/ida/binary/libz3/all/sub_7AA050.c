__int64 __fastcall sub_7AA050(
        _QWORD *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  char **v7; // rbp
  char **v8; // rbp
  char **v9; // rbp
  char **exception; // rbp
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rbp
  _QWORD *v19; // r14
  unsigned int *v20; // rax
  unsigned int v21; // eax
  unsigned int *v22; // r15
  unsigned int v23; // ebx
  __int64 v24; // rax
  unsigned int v25; // r9d
  size_t v26; // rsi
  unsigned int v27; // r13d
  unsigned int *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rcx
  unsigned int *v32; // rax
  unsigned int *v33; // r14
  unsigned int *v34; // rbx
  unsigned int v35; // ecx
  int v36; // edi
  __int64 v37; // rax
  unsigned int v38; // ecx
  unsigned int v39; // r9d
  size_t v40; // rsi
  unsigned int v41; // ebp
  unsigned int *v42; // rax
  __int32 v43; // eax
  const __m128i *v44; // rbp
  const __m128i *v45; // r13
  _QWORD *v46; // rax
  __m128i *v47; // rdx
  __m128i v48; // xmm2
  __m128i v49; // xmm0
  _QWORD *v50; // r15
  unsigned int v51; // eax
  __int64 v52; // rdx
  unsigned int v53; // ebx
  size_t v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // r8
  __m128i v59; // kr10_16
  unsigned __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rdx
  int v65; // eax
  _QWORD *v66; // rbp
  __int64 v67; // rdx
  unsigned int **v68; // rax
  unsigned int *v69; // rbx
  _QWORD *v71; // rax
  unsigned int v72; // ebx
  unsigned int v73; // eax
  unsigned int v74; // ebx
  unsigned int v75; // eax
  __int64 v76; // rax
  _QWORD *v77; // rbx
  _DWORD *v78; // r13
  __int64 v79; // rax
  _QWORD *v80; // rdx
  __int64 v81; // rdi
  _QWORD *v82; // rax
  _QWORD *v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // rsi
  __int64 v86; // rsi
  __int64 v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // rdi
  void *v94; // rdi
  __int32 v95; // ecx
  _QWORD *v96; // rax
  const __m128i *v98; // [rsp+0h] [rbp-C8h]
  unsigned int v99; // [rsp+0h] [rbp-C8h]
  _QWORD *v100; // [rsp+0h] [rbp-C8h]
  __m128i v101; // [rsp+8h] [rbp-C0h] BYREF
  __m128i v102; // [rsp+18h] [rbp-B0h] BYREF
  unsigned int *v103; // [rsp+28h] [rbp-A0h]
  __int64 v104[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v105; // [rsp+60h] [rbp-68h] BYREF
  int v106; // [rsp+88h] [rbp-40h]

  v11 = a2;
  v13 = a1[10];
  v101.m128i_i64[0] = a5;
  v14 = *(_QWORD *)(v13 + 1720);
  v101.m128i_i64[1] = a6;
  if ( v14 )
  {
    v15 = *a7;
    if ( (unsigned int)v15 < *(_DWORD *)(v14 - 4) )
    {
      v16 = *(_QWORD *)(v14 + 8 * v15);
      if ( v16 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4LL * (unsigned int)(2 * *(_DWORD *)(v16 + 28))) == 1 )
          return 0;
      }
    }
  }
  v17 = a1[59];
  if ( v17 )
    *(_DWORD *)(v17 - 4) = 0;
  if ( !(_DWORD)v11 )
  {
    v33 = nullptr;
    v103 = (unsigned int *)a1[9];
    v102.m128i_i32[0] = a7[2];
    v43 = v102.m128i_i32[0] + 1;
    goto LABEL_24;
  }
  v102.m128i_i64[0] = v11;
  v18 = a3;
  v19 = &a3[v11];
  do
  {
    while ( 1 )
    {
      v21 = sub_7E5090(a1, *v18);
      v22 = (unsigned int *)a1[59];
      v23 = v21;
      if ( !v22 )
      {
        v71 = (_QWORD *)sub_186B270(0x10u);
        v22 = (unsigned int *)(v71 + 1);
        *v71 = 2;
        a1[59] = v71 + 1;
        v20 = (unsigned int *)(v71 + 1);
        goto LABEL_10;
      }
      v24 = *(v22 - 1);
      if ( (_DWORD)v24 == *(v22 - 2) )
        break;
      v20 = &v22[v24];
LABEL_10:
      ++v18;
      *v20 = v23;
      ++*(v22 - 1);
      if ( v19 == v18 )
        goto LABEL_16;
    }
    v25 = (unsigned int)(3 * v24 + 1) >> 1;
    v26 = 4 * v25 + 8;
    v27 = v25;
    if ( 4 * (int)v24 + 8 >= (unsigned int)v26 || (unsigned int)v24 >= v25 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v105, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v105);
      sub_233E40((__int64)&v105);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    ++v18;
    v28 = (unsigned int *)sub_186B300(v22 - 2, v26);
    v22 = v28 + 2;
    *v28 = v27;
    v29 = v28[1];
    a1[59] = v22;
    v22[v29] = v23;
    ++*(v22 - 1);
  }
  while ( v19 != v18 );
LABEL_16:
  v103 = (unsigned int *)a1[9];
  ++a7[2];
  v30 = (_QWORD *)sub_186B270(0x10u);
  v31 = v102.m128i_i64[0];
  *v30 = 2;
  v32 = (unsigned int *)(v30 + 1);
  v33 = v32;
  v34 = &v22[v31];
  while ( 1 )
  {
    v35 = *v22++;
    *v32 = v35;
    v36 = *(v33 - 1);
    v37 = (unsigned int)(v36 + 1);
    *(v33 - 1) = v37;
    if ( v34 == v22 )
      break;
    v38 = *(v33 - 2);
    if ( v38 == (_DWORD)v37 )
    {
      v39 = (3 * v38 + 1) >> 1;
      v40 = 4 * v39 + 8;
      v41 = v39;
      if ( 4 * v36 + 12 >= (unsigned int)v40 || v38 >= v39 )
      {
        v9 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v105, "Overflow encountered when expanding vector");
        *v9 = (char *)off_1C63128;
        sub_2333C0(v9 + 1, &v105);
        sub_233E40((__int64)&v105);
        __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (unsigned int *)sub_186B300(v33 - 2, v40);
      v33 = v42 + 2;
      *v42 = v41;
      v32 = &v42[v42[1] + 2];
    }
    else
    {
      v32 = &v33[v37];
    }
  }
  v43 = a7[2];
LABEL_24:
  v106 = -1;
  a7[2] = v43 + 1;
  if ( a4 )
  {
    v44 = (const __m128i *)v101.m128i_i64[1];
    v45 = (const __m128i *)v101.m128i_i64[0];
    v102.m128i_i64[0] = *(_QWORD *)v101.m128i_i64[0];
    v101.m128i_i64[0] = *(_QWORD *)v101.m128i_i64[1];
    v46 = (_QWORD *)sub_186B270(0x28u);
    v47 = (__m128i *)(v46 + 1);
    v48 = _mm_loadl_epi64(&v101);
    v49 = _mm_loadl_epi64(&v102);
    *v46 = 2;
    v50 = v46 + 1;
    v51 = 1;
    v98 = (const __m128i *)((char *)v45 + 8 * a4);
    while ( 1 )
    {
      v45 = (const __m128i *)((char *)v45 + 8);
      v44 = (const __m128i *)((char *)v44 + 8);
      *v47 = _mm_unpacklo_epi64(v49, v48);
      *((_DWORD *)v50 - 1) = v51;
      if ( v98 == v45 )
        break;
      v49 = _mm_loadl_epi64(v45);
      v48 = _mm_loadl_epi64(v44);
      if ( *((_DWORD *)v50 - 2) == v51 )
      {
        v53 = (3 * v51 + 1) >> 1;
        v54 = 16 * v53 + 8;
        if ( 16 * v51 + 8 >= (unsigned int)v54 || v51 >= v53 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v104, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v104);
          sub_233E40((__int64)v104);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v101.m128i_i64[1] = v48.m128i_i64[0];
        v101.m128i_i64[0] = v49.m128i_i64[0];
        v55 = sub_186B270(v54);
        v56 = *((unsigned int *)v50 - 1);
        v57 = v55;
        v58 = v55 + 8;
        v59 = v101;
        *(_DWORD *)(v55 + 4) = v56;
        v60 = 0;
        v61 = 16 * v56;
        if ( v61 )
        {
          do
          {
            *(__m128i *)(v57 + v60 + 8) = _mm_loadu_si128((const __m128i *)&v50[v60 / 8]);
            v60 += 16LL;
          }
          while ( v61 != v60 );
        }
        v101.m128i_i64[1] = v58;
        v101.m128i_i64[0] = v57;
        v102 = v59;
        sub_186B220(v50 - 1);
        v63 = v101.m128i_i64[1];
        v62 = v101.m128i_i64[0];
        v49 = _mm_loadl_epi64(&v102);
        v48 = _mm_loadl_epi64((const __m128i *)&v102.m128i_u64[1]);
        *(_DWORD *)v101.m128i_i64[0] = v53;
        v64 = *(unsigned int *)(v62 + 4);
        v50 = (_QWORD *)v63;
        v65 = v64;
        v47 = (__m128i *)(v63 + 16 * v64);
        v51 = v65 + 1;
      }
      else
      {
        v52 = v51++;
        v47 = (__m128i *)&v50[2 * v52];
      }
    }
  }
  else
  {
    v50 = nullptr;
  }
  v66 = (_QWORD *)a1[54];
  if ( v66 )
  {
    v67 = *((unsigned int *)v66 - 1);
    if ( (_DWORD)v67 == *((_DWORD *)v66 - 2) )
    {
      v72 = 3 * v67 + 1;
      v73 = v72 & 0xFFFFFFFE;
      v74 = v72 >> 1;
      v101.m128i_i32[0] = v74;
      v75 = 16 * (v74 + v73) + 8;
      if ( 48 * (int)v67 + 8 >= v75 || (unsigned int)v67 >= v74 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v104, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v104);
        sub_233E40((__int64)v104);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v76 = sub_186B270(v75);
      v77 = (_QWORD *)a1[54];
      v78 = (_DWORD *)v76;
      v66 = (_QWORD *)(v76 + 8);
      if ( v77 )
      {
        v79 = *((unsigned int *)v77 - 1);
        v80 = v66;
        v81 = 3 * v79;
        v78[1] = v79;
        v82 = v77;
        v83 = &v77[2 * v81];
        if ( v83 != v77 )
        {
          do
          {
            v84 = *v82;
            *v82 = 0;
            v82 += 6;
            v80 += 6;
            *(v80 - 6) = v84;
            *(v80 - 4) = *(v82 - 4);
            v85 = *(v82 - 5);
            *(v82 - 5) = 0;
            *(v80 - 5) = v85;
            v86 = *(v82 - 3);
            *(v82 - 3) = 0;
            *(v80 - 3) = v86;
            v87 = *(v82 - 2);
            *(v82 - 2) = 0;
            *(v80 - 2) = v87;
            *((_DWORD *)v80 - 2) = *((_DWORD *)v82 - 2);
          }
          while ( v83 != v82 );
        }
        v88 = *((unsigned int *)v77 - 1);
        if ( (_DWORD)v88 )
        {
          v100 = &v77[6 * v88];
          do
          {
            while ( 1 )
            {
              v89 = v77[4];
              if ( v89 )
                sub_186B220((void *)(v89 - 8));
              v90 = v77[3];
              if ( v90 )
                sub_186B220((void *)(v90 - 8));
              v91 = v77[1];
              if ( v91 )
              {
                v92 = v77[2];
                if ( (*(_DWORD *)(v91 + 8))-- == 1 )
                  sub_15D7BC0(v92, v91);
              }
              if ( !*v77 )
                break;
              v94 = (void *)(*v77 - 8LL);
              v77 += 6;
              sub_186B220(v94);
              if ( v77 == v100 )
                goto LABEL_58;
            }
            v77 += 6;
          }
          while ( v77 != v100 );
LABEL_58:
          v77 = (_QWORD *)a1[54];
        }
        sub_186B220(v77 - 1);
        v68 = (unsigned int **)&v66[6 * (unsigned int)v78[1]];
      }
      else
      {
        *(_DWORD *)(v76 + 4) = 0;
        v68 = (unsigned int **)(v76 + 8);
      }
      v95 = v101.m128i_i32[0];
      a1[54] = v66;
      *v78 = v95;
    }
    else
    {
      v68 = (unsigned int **)&v66[6 * v67];
    }
  }
  else
  {
    v96 = (_QWORD *)sub_186B270(0x68u);
    v66 = v96 + 1;
    *v96 = 2;
    a1[54] = v96 + 1;
    v68 = (unsigned int **)(v96 + 1);
  }
  v69 = v103;
  *v68 = v33;
  v68[3] = (unsigned int *)v50;
  v68[2] = v69;
  v68[4] = nullptr;
  v68[1] = a7;
  *((_DWORD *)v68 + 10) = -1;
  ++*((_DWORD *)v66 - 1);
  v99 = a7[2];
  a7[2] = v99 - 1;
  if ( v99 == 1 )
    sub_15D7BC0(v103, a7);
  return 1;
}

