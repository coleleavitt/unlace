__int64 *__fastcall sub_3E6EF0(
        __int64 *a1,
        size_t a2,
        __int64 *a3,
        __int64 *a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  char **v8; // rbx
  char **exception; // rbx
  __int64 v12; // rbp
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r14
  __int64 v17; // rcx
  __m128 v18; // xmm0
  unsigned int v19; // r13d
  unsigned __int64 v20; // rdx
  __int64 v21; // r15
  unsigned int v22; // eax
  __int64 *v23; // rax
  __int64 *v24; // rbx
  size_t v25; // rsi
  __int64 v26; // rbp
  unsigned int v27; // r13d
  __m128i *v28; // rbx
  __m128i *v29; // rax
  __m128i *v30; // r15
  __m128i *v31; // rdx
  __int64 *v32; // rdx
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  __m128i *v37; // rdi
  _DWORD *v38; // rax
  char v39; // al
  char v40; // r15
  __int64 *v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  _QWORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v50; // r15
  unsigned int v51; // r15d
  unsigned int *v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // r13
  __int64 v55; // rsi
  __int64 v56; // rdi
  unsigned int i; // r13d
  __int64 v59; // rax
  int v60; // edx
  __int64 *v61; // rax
  __int64 v62; // rbx
  unsigned int v63; // edx
  unsigned int v64; // r15d
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rax
  int v68; // edx
  __int64 v69; // r15
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  void *v72; // [rsp+0h] [rbp-148h]
  __int64 v73; // [rsp+0h] [rbp-148h]
  __int64 *ptr; // [rsp+18h] [rbp-130h]
  __int64 *ptra; // [rsp+18h] [rbp-130h]
  __int64 *ptrb; // [rsp+18h] [rbp-130h]
  __int64 *ptrc; // [rsp+18h] [rbp-130h]
  __int64 *v80; // [rsp+30h] [rbp-118h]
  __int64 v81[2]; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v82; // [rsp+60h] [rbp-E8h] BYREF
  int v83[2]; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v84[32]; // [rsp+80h] [rbp-C8h] BYREF
  __m128i v85; // [rsp+A0h] [rbp-A8h] BYREF
  int v86; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v87; // [rsp+C8h] [rbp-80h]
  __int64 v88; // [rsp+D0h] [rbp-78h]
  __int64 v89; // [rsp+D8h] [rbp-70h]
  __int64 v90; // [rsp+E0h] [rbp-68h]
  __int64 v91; // [rsp+E8h] [rbp-60h]
  __int64 v92; // [rsp+F0h] [rbp-58h]
  __int64 v93; // [rsp+F8h] [rbp-50h]
  __int64 v94; // [rsp+100h] [rbp-48h]
  __m128i *v95; // [rsp+108h] [rbp-40h]

  v85.m128i_i64[0] = *a3;
  v12 = v85.m128i_i64[0];
  sub_16669D0(&v85.m128i_u64[1], v85.m128i_i64[0]);
  *(_QWORD *)v83 = 0;
  sub_14B7810((int)&v86, v85.m128i_i32[0], (int)v83, v13, v14, v15, v72);
  sub_18572D0(v83);
  v16 = *a4;
  v87 = v12;
  v17 = a4[1];
  v88 = 0;
  v89 = v12;
  v18 = (__m128)(unsigned __int64)v16;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v95 = nullptr;
  v81[0] = v85.m128i_i64[0];
  if ( v17 )
  {
    v73 = 0;
    v19 = 0;
    v20 = _mm_movehl_ps(a8, (__m128)(unsigned __int64)v16).m128_u64[0];
    if ( !*(_DWORD *)(v17 - 4) )
    {
LABEL_9:
      v23 = (__int64 *)a3[1];
      v24 = v23;
      if ( !v23 )
        goto LABEL_40;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v21 = *(_QWORD *)(v17 + 8LL * v19);
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      if ( !v20 || (v22 = *(_DWORD *)(v20 - 4), v22 == *(_DWORD *)(v20 - 8)) )
      {
        v82 = (__m128i)v18;
        sub_23A6F0((unsigned int **)&v82.m128i_i64[1]);
        v18 = (__m128)_mm_load_si128(&v82);
        v17 = a4[1];
        v16 = v82.m128i_i64[0];
        a7 = _mm_movehl_ps(a7, v18);
        v73 = v82.m128i_i64[1];
        v20 = a7.m128_u64[0];
        v46 = *(_DWORD *)(a7.m128_u64[0] - 4);
        *(_QWORD *)(a7.m128_u64[0] + 8LL * v46) = v21;
        *(_DWORD *)(a7.m128_u64[0] - 4) = v46 + 1;
        if ( !v17 )
        {
          v23 = (__int64 *)a3[1];
          v24 = v23;
          if ( !v23 )
          {
LABEL_40:
            v26 = 0;
            goto LABEL_41;
          }
LABEL_10:
          v25 = (size_t)&v85;
          v26 = 0;
          v27 = 0;
          while ( v27 < *((_DWORD *)v23 - 1) )
          {
            v28 = (__m128i *)v23[v27];
            v29 = (__m128i *)sub_186B270(0xB0u);
            v18 = (__m128)_mm_loadl_epi64(&v85);
            v30 = v29;
            *v29 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)v18);
            if ( v28 )
              ++v28->m128i_i32[2];
            v29[1].m128i_i64[1] = (__int64)v28;
            v29[1].m128i_i64[0] = (__int64)&off_1C4E7B8;
            v29[2].m128i_i64[0] = (__int64)v29[1].m128i_i64;
            v31 = v95;
            v29[3].m128i_i64[1] = 0;
            v29[2].m128i_i64[1] = (__int64)&off_1C62200;
            v29[4].m128i_i64[0] = 0;
            v29[5].m128i_i64[0] = 0;
            v29[5].m128i_i64[1] = 0;
            v29[6].m128i_i64[0] = (__int64)&off_1C62200;
            v29[7].m128i_i64[0] = 0;
            v29[7].m128i_i64[1] = 0;
            v29[8].m128i_i64[1] = 0;
            v29[9].m128i_i64[0] = 0;
            v29[10].m128i_i64[0] = 0;
            v29[10].m128i_i8[8] = 1;
            v29[9].m128i_i64[1] = v18.m128_u64[0];
            if ( v29 != v31 )
            {
              if ( v31 )
              {
                v80 = (__int64 *)v31;
                sub_2334C0(&v31[9].m128i_i64[1]);
                v32 = v80;
                v33 = (void *)v80[18];
                v80[12] = (__int64)&off_1C62200;
                if ( v33 )
                {
                  sub_186B220(v33);
                  v32 = v80;
                }
                v34 = (void *)v32[15];
                if ( v34 )
                {
                  ptr = v32;
                  sub_186B220(v34);
                  v32 = ptr;
                }
                v35 = (void *)v32[11];
                v32[5] = (__int64)&off_1C62200;
                if ( v35 )
                {
                  ptra = v32;
                  sub_186B220(v35);
                  v32 = ptra;
                }
                v36 = (void *)v32[8];
                if ( v36 )
                {
                  ptrb = v32;
                  sub_186B220(v36);
                  v32 = ptrb;
                }
                v25 = v32[1];
                ptrc = v32;
                sub_3E5D00(*v32, v25);
                sub_186B220(ptrc);
              }
              v95 = v30;
            }
            v37 = v28;
            v38 = *(_DWORD **)(sub_15D1F10(v28) + 24);
            if ( v38 && *v38 == 5 && v38[1] == 1
              || (v82.m128i_i64[0] = v16,
                  v25 = a2,
                  v37 = &v85,
                  v82.m128i_i64[1] = v73,
                  v39 = sub_3F5270((int)&v85),
                  v73 = v82.m128i_i64[1],
                  v16 = v82.m128i_i64[0],
                  !v39) )
            {
              ++v28->m128i_i32[2];
              if ( v26 )
              {
                v42 = *(_DWORD *)(v26 - 4);
                if ( v42 == *(_DWORD *)(v26 - 8) )
                {
                  v51 = (3 * v42 + 1) >> 1;
                  v25 = 8 * v51 + 8;
                  if ( 8 * v42 + 8 >= (unsigned int)v25 || v42 >= v51 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v83, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v83);
                    sub_233E40((__int64)v83);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v37 = (__m128i *)(v26 - 8);
                  v52 = (unsigned int *)sub_186B300((void *)(v26 - 8), v25);
                  v53 = v52[1];
                  v26 = (__int64)(v52 + 2);
                  *v52 = v51;
                  LODWORD(v52) = v53;
                  v45 = (_QWORD *)(v26 + 8 * v53);
                  v44 = (_DWORD)v52 + 1;
                }
                else
                {
                  v43 = v42;
                  v44 = v42 + 1;
                  v45 = (_QWORD *)(v26 + 8 * v43);
                }
              }
              else
              {
                v37 = (__m128i *)&qword_18;
                v71 = (_QWORD *)sub_186B270(0x18u);
                v26 = (__int64)(v71 + 1);
                *v71 = 2;
                v44 = 1;
                v45 = (_QWORD *)v26;
              }
              *v45 = v28;
              v40 = 1;
              *(_DWORD *)(v26 - 4) = v44;
            }
            else
            {
              v40 = 0;
            }
            if ( (unsigned int)sub_180B130(v37) > 1 )
            {
              if ( (unsigned __int8)sub_186A530(*(double *)v18.m128_u64) )
              {
                sub_186A4C0(*(double *)v18.m128_u64);
                if ( v40 )
                {
                  v69 = sub_180B150(v37, v25);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_1606360(v83, v28, v85.m128i_i64[0], 0, 0, 0);
                  sub_160E8B0(v69, v83);
                  v25 = (size_t)"\n";
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v37 = (__m128i *)v84;
                  sub_18572D0(v84);
                }
                sub_186A500(v37, v25);
              }
              else if ( v40 )
              {
                v50 = sub_180B150(v37, v25);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1606360(v83, v28, v85.m128i_i64[0], 0, 0, 0);
                sub_160E8B0(v50, v83);
                v25 = (size_t)"\n";
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_18572D0(v84);
              }
            }
            v23 = (__int64 *)a3[1];
            ++v27;
            v24 = v23;
            if ( !v23 )
            {
              v41 = nullptr;
              goto LABEL_61;
            }
          }
          v54 = (unsigned __int64)&v23[*((unsigned int *)v23 - 1)];
          if ( (unsigned __int64)v23 < v54 )
          {
            do
            {
              while ( 1 )
              {
                v55 = *v24;
                if ( *v24 )
                {
                  v56 = *a3;
                  if ( (*(_DWORD *)(v55 + 8))-- == 1 )
                    break;
                }
                if ( (unsigned __int64)++v24 >= v54 )
                  goto LABEL_58;
              }
              sub_15D7BC0(v56, v55);
              ++v24;
            }
            while ( (unsigned __int64)v24 < v54 );
LABEL_58:
            v41 = (__int64 *)a3[1];
          }
          else
          {
            v41 = v23;
          }
          if ( v41 )
            *((_DWORD *)v41 - 1) = 0;
LABEL_61:
          if ( v26 )
          {
            for ( i = 0; i < *(_DWORD *)(v26 - 4); ++i )
            {
              v62 = *(_QWORD *)(v26 + 8LL * i);
              if ( v62 )
                ++*(_DWORD *)(v62 + 8);
              if ( v41 )
              {
                v63 = *((_DWORD *)v41 - 1);
                if ( v63 == *((_DWORD *)v41 - 2) )
                {
                  v64 = (3 * v63 + 1) >> 1;
                  v65 = 8 * v64 + 8;
                  if ( 8 * v63 + 8 >= (unsigned int)v65 || v63 >= v64 )
                  {
                    v8 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v83, "Overflow encountered when expanding vector");
                    *v8 = (char *)off_1C63128;
                    sub_2333C0(v8 + 1, v83);
                    sub_233E40((__int64)v83);
                    __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v66 = (unsigned int *)sub_186B300(v41 - 1, v65);
                  v41 = (__int64 *)(v66 + 2);
                  *v66 = v64;
                  v67 = v66[1];
                  a3[1] = (__int64)v41;
                  v68 = v67;
                  v61 = &v41[v67];
                  v60 = v68 + 1;
                }
                else
                {
                  v59 = v63;
                  v60 = v63 + 1;
                  v61 = &v41[v59];
                }
              }
              else
              {
                v70 = (_QWORD *)sub_186B270(0x18u);
                v41 = v70 + 1;
                *v70 = 2;
                v60 = 1;
                a3[1] = (__int64)(v70 + 1);
                v61 = v70 + 1;
              }
              *v61 = v62;
              *((_DWORD *)v41 - 1) = v60;
            }
          }
LABEL_41:
          if ( v73 )
            v47 = *(unsigned int *)(v73 - 4);
          else
            v47 = 0;
          goto LABEL_43;
        }
      }
      else
      {
        *(_QWORD *)(v20 + 8LL * v22) = v21;
        *(_DWORD *)(v20 - 4) = v22 + 1;
      }
      if ( ++v19 >= *(_DWORD *)(v17 - 4) )
        goto LABEL_9;
    }
  }
  v23 = (__int64 *)a3[1];
  v73 = 0;
  v24 = v23;
  if ( v23 )
    goto LABEL_10;
  v26 = 0;
  v47 = 0;
LABEL_43:
  v48 = sub_15EC1C0(v16, v47);
  *a1 = v48;
  a1[1] = v16;
  if ( v48 )
    ++*(_DWORD *)(v48 + 8);
  v82.m128i_i64[0] = v16;
  v82.m128i_i64[1] = v73;
  sub_2334C0(v82.m128i_i64);
  v81[1] = v26;
  sub_2B4F40(v81);
  sub_3ED760(&v85, *(double *)v18.m128_u64);
  return a1;
}

