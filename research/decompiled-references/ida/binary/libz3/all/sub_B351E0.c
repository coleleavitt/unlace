__int64 __fastcall sub_B351E0(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7)
{
  char **exception; // rbp
  __int64 v8; // rdx
  char **v9; // r14
  __int64 v10; // rdx
  char **v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned int *v20; // rsi
  __int64 v21; // rax
  _DWORD *v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 *v26; // r14
  unsigned int v27; // eax
  _DWORD *v28; // rbp
  __int64 v29; // rsi
  __int64 v30; // rdx
  unsigned int v31; // ebx
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rdx
  const __m128i *v35; // r13
  _QWORD *v36; // rax
  __m128i *v37; // rdx
  __m128i v38; // xmm2
  __m128i v39; // xmm0
  const __m128i *v40; // r14
  _QWORD *v41; // rbx
  unsigned int v42; // eax
  __int64 v43; // rdx
  unsigned int v44; // r15d
  size_t v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // r8
  __m128i v50; // kr00_16
  unsigned __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rdx
  int v56; // eax
  _QWORD *v57; // r15
  __int64 v58; // rdx
  __m128i *v59; // rax
  __m128i v60; // xmm3
  unsigned int v61; // ebx
  __m128 v62; // xmm0
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rdi
  bool v65; // zf
  unsigned int v67; // esi
  unsigned int v68; // eax
  unsigned int v69; // esi
  unsigned int v70; // eax
  _DWORD *v71; // r12
  _QWORD *v72; // r13
  __int64 v73; // rax
  _DWORD *v74; // rdx
  __int64 v75; // rdi
  _QWORD *v76; // rax
  _QWORD *v77; // rdi
  __int64 v78; // rsi
  __int64 v79; // rsi
  __int64 v80; // rsi
  __int64 v81; // rsi
  __int64 v82; // rax
  _QWORD *v83; // r14
  __int64 v84; // rdi
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rdi
  void *v88; // rdi
  _QWORD *v89; // rax
  __m128i v90; // [rsp+8h] [rbp-D0h] BYREF
  __m128i v91; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v92; // [rsp+28h] [rbp-B0h]
  __m128 v93; // [rsp+30h] [rbp-A8h] BYREF
  __m128 v94; // [rsp+40h] [rbp-98h] BYREF
  __int64 v95[4]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v96; // [rsp+70h] [rbp-68h] BYREF
  int v97; // [rsp+98h] [rbp-40h]

  v13 = a4;
  v16 = a2;
  v92 = a1;
  v90.m128i_i64[1] = a5;
  v94 = _mm_loadh_ps((const double *)(a1 + 24));
  if ( a7 )
    ++*(_DWORD *)(a7 + 8);
  v17 = *(_QWORD *)(v92 + 16) + 7456LL;
  v90.m128i_i64[0] = *(_QWORD *)(v92 + 16);
  sub_14B9BF0(v17, a7, &v94);
  v18 = *(_QWORD *)(v92 + 16);
  v19 = *(_QWORD *)(v18 + 104);
  v20 = *(unsigned int **)(v19 + 856);
  if ( (unsigned int *)v94.m128_u64[0] != v20 )
  {
    v20 = *(unsigned int **)(v19 + 864);
    if ( (unsigned int *)v94.m128_u64[0] == v20 )
    {
LABEL_13:
      if ( *(_BYTE *)(*(_QWORD *)(v18 + 8848) + (unsigned int)sub_B645B0(v18, v20)) == 1 )
      {
        v61 = 0;
        goto LABEL_39;
      }
      goto LABEL_14;
    }
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(v18 + 7488) + 48LL))(
      *(_QWORD *)(v18 + 7488),
      v94.m128_u64[0]);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 7488) + 64LL))(*(_QWORD *)(v18 + 7488));
    v18 = *(_QWORD *)(v92 + 16);
    v20 = (unsigned int *)v94.m128_u64[0];
    v19 = *(_QWORD *)(v18 + 104);
  }
  if ( *(unsigned int **)(v19 + 864) == v20 )
    goto LABEL_13;
  v21 = *(_QWORD *)(v18 + 8832);
  if ( *((_WORD *)v20 + 2) || (v22 = *(_DWORD **)(*((_QWORD *)v20 + 2) + 24LL)) == nullptr || *v22 || v22[1] != 8 )
  {
    if ( !v21 )
      goto LABEL_14;
    v23 = *v20;
    if ( (unsigned int)v23 >= *(_DWORD *)(v21 - 4) )
      goto LABEL_14;
  }
  else
  {
    if ( !v21 )
      goto LABEL_14;
    v23 = **((unsigned int **)v20 + 4);
    if ( (unsigned int)v23 >= *(_DWORD *)(v21 - 4) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v21 + 4 * v23) != 0x7FFFFFFF )
    goto LABEL_13;
LABEL_14:
  if ( (_DWORD)v16 )
  {
    v24 = (_QWORD *)sub_186B270(0x18u);
    v25 = v24 + 1;
    *v24 = 2;
    v26 = &a3[v16];
    v27 = 1;
    v28 = v25;
    while ( 1 )
    {
      v29 = *a3++;
      *v25 = v29;
      *(v28 - 1) = v27;
      if ( v26 == a3 )
        break;
      if ( *(v28 - 2) == v27 )
      {
        v31 = (3 * v27 + 1) >> 1;
        v32 = 8 * v31 + 8;
        if ( 8 * v27 + 8 >= (unsigned int)v32 || v27 >= v31 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_147B96((__int64 *)&v96, "Overflow encountered when expanding vector", v8);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v96);
          sub_233E40((__int64)&v96);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v33 = (unsigned int *)sub_186B300(v28 - 2, v32);
        v34 = v33[1];
        v28 = v33 + 2;
        *v33 = v31;
        LODWORD(v33) = v34;
        v25 = &v28[2 * v34];
        v27 = (_DWORD)v33 + 1;
      }
      else
      {
        v30 = v27++;
        v25 = &v28[2 * v30];
      }
    }
  }
  v93 = v94;
  if ( v94.m128_u64[0] )
    ++*(_DWORD *)(v94.m128_u64[0] + 8);
  v97 = -1;
  if ( (_DWORD)v13 )
  {
    v35 = (const __m128i *)v90.m128i_i64[1];
    v90.m128i_i64[0] = a6->m128i_i64[0];
    v90.m128i_i64[1] = *(_QWORD *)v90.m128i_i64[1];
    v36 = (_QWORD *)sub_186B270(0x28u);
    v37 = (__m128i *)(v36 + 1);
    v38 = _mm_loadl_epi64(&v90);
    v39 = _mm_loadl_epi64((const __m128i *)&v90.m128i_u64[1]);
    *v36 = 2;
    v40 = (const __m128i *)((char *)v35 + 8 * v13);
    v41 = v36 + 1;
    v42 = 1;
    while ( 1 )
    {
      v35 = (const __m128i *)((char *)v35 + 8);
      a6 = (const __m128i *)((char *)a6 + 8);
      *v37 = _mm_unpacklo_epi64(v39, v38);
      *((_DWORD *)v41 - 1) = v42;
      if ( v35 == v40 )
        break;
      v39 = _mm_loadl_epi64(v35);
      v38 = _mm_loadl_epi64(a6);
      if ( *((_DWORD *)v41 - 2) == v42 )
      {
        v44 = (3 * v42 + 1) >> 1;
        v45 = 16 * v44 + 8;
        if ( 16 * v42 + 8 >= (unsigned int)v45 || v42 >= v44 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_147B96(v95, "Overflow encountered when expanding vector", v10);
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, v95);
          sub_233E40((__int64)v95);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v90.m128i_i64[1] = v39.m128i_i64[0];
        v90.m128i_i64[0] = v38.m128i_i64[0];
        v46 = sub_186B270(v45);
        v47 = *((unsigned int *)v41 - 1);
        v48 = v46;
        v49 = v46 + 8;
        v50 = v90;
        *(_DWORD *)(v46 + 4) = v47;
        v51 = 0;
        v52 = 16 * v47;
        if ( v52 )
        {
          do
          {
            *(__m128i *)(v48 + v51 + 8) = _mm_loadu_si128((const __m128i *)&v41[v51 / 8]);
            v51 += 16LL;
          }
          while ( v52 != v51 );
        }
        v90.m128i_i64[1] = v49;
        v90.m128i_i64[0] = v48;
        v91 = v50;
        sub_186B220(v41 - 1);
        v54 = v90.m128i_i64[1];
        v53 = v90.m128i_i64[0];
        v38 = _mm_loadl_epi64(&v91);
        v39 = _mm_loadl_epi64((const __m128i *)&v91.m128i_u64[1]);
        *(_DWORD *)v90.m128i_i64[0] = v44;
        v55 = *(unsigned int *)(v53 + 4);
        v41 = (_QWORD *)v54;
        v56 = v55;
        v37 = (__m128i *)(v54 + 16 * v55);
        v42 = v56 + 1;
      }
      else
      {
        v43 = v42++;
        v37 = (__m128i *)&v41[2 * v43];
      }
    }
  }
  else
  {
    v41 = nullptr;
  }
  v57 = *(_QWORD **)(v92 + 384);
  if ( v57 )
  {
    v58 = *((unsigned int *)v57 - 1);
    if ( (_DWORD)v58 == *((_DWORD *)v57 - 2) )
    {
      v67 = 3 * v58 + 1;
      v68 = v67 & 0xFFFFFFFE;
      v69 = v67 >> 1;
      v90.m128i_i32[0] = v69;
      v70 = 16 * (v69 + v68) + 8;
      if ( 48 * (int)v58 + 8 >= v70 || (unsigned int)v58 >= v69 )
      {
        v11 = (char **)__cxa_allocate_exception(0x28u);
        sub_147B96(v95, "Overflow encountered when expanding vector", v12);
        *v11 = (char *)off_1C63128;
        sub_2333C0(v11 + 1, v95);
        sub_233E40((__int64)v95);
        __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v71 = (_DWORD *)sub_186B270(v70);
      v57 = v71 + 2;
      v72 = *(_QWORD **)(v92 + 384);
      if ( v72 )
      {
        v73 = *((unsigned int *)v72 - 1);
        v74 = v71 + 2;
        v75 = 3 * v73;
        v71[1] = v73;
        v76 = v72;
        v77 = &v72[2 * v75];
        if ( v72 != v77 )
        {
          do
          {
            v78 = *v76;
            *v76 = 0;
            v76 += 6;
            v74 += 12;
            *((_QWORD *)v74 - 6) = v78;
            *((_QWORD *)v74 - 4) = *(v76 - 4);
            v79 = *(v76 - 5);
            *(v76 - 5) = 0;
            *((_QWORD *)v74 - 5) = v79;
            v80 = *(v76 - 3);
            *(v76 - 3) = 0;
            *((_QWORD *)v74 - 3) = v80;
            v81 = *(v76 - 2);
            *(v76 - 2) = 0;
            *((_QWORD *)v74 - 2) = v81;
            *(v74 - 2) = *((_DWORD *)v76 - 2);
          }
          while ( v77 != v76 );
        }
        v82 = *((unsigned int *)v72 - 1);
        if ( (_DWORD)v82 )
        {
          v83 = &v72[6 * v82];
          do
          {
            while ( 1 )
            {
              v84 = v72[4];
              if ( v84 )
                sub_186B220((void *)(v84 - 8));
              v85 = v72[3];
              if ( v85 )
                sub_186B220((void *)(v85 - 8));
              v86 = v72[1];
              if ( v86 )
              {
                v87 = v72[2];
                v65 = (*(_DWORD *)(v86 + 8))-- == 1;
                if ( v65 )
                  sub_15D7BC0(v87, v86);
              }
              if ( !*v72 )
                break;
              v88 = (void *)(*v72 - 8LL);
              v72 += 6;
              sub_186B220(v88);
              if ( v83 == v72 )
                goto LABEL_59;
            }
            v72 += 6;
          }
          while ( v72 != v83 );
LABEL_59:
          v72 = *(_QWORD **)(v92 + 384);
        }
        sub_186B220(v72 - 1);
        v59 = (__m128i *)&v57[6 * (unsigned int)v71[1]];
      }
      else
      {
        v71[1] = 0;
        v59 = (__m128i *)(v71 + 2);
      }
      *(_QWORD *)(v92 + 384) = v57;
      *v71 = v90.m128i_i32[0];
    }
    else
    {
      v59 = (__m128i *)&v57[6 * v58];
    }
  }
  else
  {
    v89 = (_QWORD *)sub_186B270(0x68u);
    v57 = v89 + 1;
    *v89 = 2;
    *(_QWORD *)(v92 + 384) = v89 + 1;
    v59 = (__m128i *)(v89 + 1);
  }
  v60 = (__m128i)(unsigned __int64)v41;
  v59[2].m128i_i64[0] = 0;
  v61 = 1;
  v62 = _mm_loadh_ps((const double *)v93.m128_u64);
  v59[2].m128i_i32[2] = -1;
  *v59 = (__m128i)v62;
  v59[1] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v93.m128_u16[4]), v60);
  ++*((_DWORD *)v57 - 1);
LABEL_39:
  v63 = v94.m128_u64[0];
  if ( v94.m128_u64[0] )
  {
    v64 = v94.m128_u64[1];
    v65 = (*(_DWORD *)(v94.m128_u64[0] + 8))-- == 1;
    if ( v65 )
      sub_15D7BC0(v64, v63);
  }
  return v61;
}

