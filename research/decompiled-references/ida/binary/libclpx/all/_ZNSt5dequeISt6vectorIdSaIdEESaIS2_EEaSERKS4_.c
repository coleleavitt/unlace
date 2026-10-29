const __m128i *__fastcall std::deque<std::vector<double>>::operator=(const __m128i *a1, const __m128i *a2)
{
  __m128 *v3; // r9
  __m128 *v5; // rsi
  __int64 v6; // r11
  unsigned __int64 *v7; // r8
  __int64 v8; // r10
  __int64 v9; // rax
  unsigned __int64 *v10; // r14
  char *v11; // rdx
  __m128 *v12; // rsi
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  char *v20; // rbx
  __m128 v21; // xmm0
  __m128 v22; // xmm3
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  __m128 v25; // xmm0
  __m128 v26; // xmm2
  __int64 v27; // r15
  __int64 v28; // rax
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r14
  signed __int64 v39; // r13
  char *v40; // rcx
  __int64 v41; // r13
  __m128 v43; // xmm0
  __int64 v44; // rax
  __m128 v45; // xmm0
  __m128 v46; // xmm1
  __m128 v47; // xmm2
  __m128i v48; // xmm1
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int64 v52; // r12
  void **v53; // rbx
  void *v54; // rdi
  unsigned __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdi
  _QWORD *v59; // r14
  _QWORD *v60; // r12
  signed __int64 v61; // r13
  char *v62; // rcx
  __int64 v63; // r13
  __int64 v64; // rdx
  __int64 v65; // rdx
  __m128 v66; // [rsp+0h] [rbp-188h] BYREF
  __m128 v67; // [rsp+10h] [rbp-178h] BYREF
  __int128 v68; // [rsp+20h] [rbp-168h] BYREF
  __m128 *v69; // [rsp+30h] [rbp-158h] BYREF
  char *v70; // [rsp+38h] [rbp-150h]
  __int128 v71; // [rsp+40h] [rbp-148h] BYREF
  __int64 v72; // [rsp+50h] [rbp-138h]
  __int64 v73; // [rsp+58h] [rbp-130h]
  _QWORD *v74; // [rsp+60h] [rbp-128h]
  _QWORD *v75; // [rsp+68h] [rbp-120h]
  __int64 v76; // [rsp+70h] [rbp-118h]
  __int64 v77; // [rsp+78h] [rbp-110h]
  __int64 v78; // [rsp+80h] [rbp-108h]
  _QWORD *v79; // [rsp+88h] [rbp-100h]
  __m128 v80; // [rsp+90h] [rbp-F8h] BYREF
  __m128 v81; // [rsp+A0h] [rbp-E8h]
  __m128 v82; // [rsp+B0h] [rbp-D8h]
  __int64 v83; // [rsp+C0h] [rbp-C8h]
  __int64 v84; // [rsp+C8h] [rbp-C0h]
  __m128 v85; // [rsp+D0h] [rbp-B8h]
  __m128 v86; // [rsp+E0h] [rbp-A8h]
  __m128i v87; // [rsp+F0h] [rbp-98h] BYREF
  __m128i v88; // [rsp+100h] [rbp-88h] BYREF
  __m128 v89; // [rsp+110h] [rbp-78h] BYREF
  __m128i v90; // [rsp+120h] [rbp-68h]
  _OWORD v91[5]; // [rsp+130h] [rbp-58h] BYREF

  if ( a2 != a1 )
  {
    v3 = (__m128 *)a1[2].m128i_i64[1];
    v5 = (__m128 *)a1[2].m128i_i64[0];
    v6 = a2[4].m128i_i64[1];
    v7 = (unsigned __int64 *)a2[2].m128i_i64[1];
    v8 = a2[3].m128i_i64[0];
    v9 = (a1[4].m128i_i64[1] - (__int64)v3) >> 3;
    v70 = (char *)a1[1].m128i_i64[0];
    v69 = v5;
    v10 = v7;
    v11 = (char *)v5;
    v12 = (__m128 *)a2[1].m128i_i64[0];
    v13 = a2[3].m128i_i64[1];
    v14 = 0xAAAAAAAAAAAAAAABLL * ((a1[3].m128i_i64[0] - a1[3].m128i_i64[1]) >> 3)
        + 21 * (v9 - 1)
        - 0x5555555555555555LL * ((v11 - v70) >> 3);
    v15 = a2[2].m128i_i64[0];
    *(_QWORD *)&v71 = a1[1].m128i_i64[1];
    v16 = v15;
    v67.m128_u64[0] = a2[1].m128i_u64[1];
    if ( 0xAAAAAAAAAAAAAAABLL * ((v15 - (__int64)v12) >> 3)
       + 21 * (((v6 - (__int64)v7) >> 3) - 1)
       - 0x5555555555555555LL * ((v8 - v13) >> 3) > v14 )
    {
      v17 = v14 - 0x5555555555555555LL * ((__int64)((__int64)v12 - v67.m128_u64[0]) >> 3);
      if ( v17 < 0 )
      {
        v18 = ~(~v17 / 0x15uLL);
      }
      else
      {
        if ( v17 <= 20 )
        {
          *(_QWORD *)&v68 = v7;
          v66.m128_u64[0] = v15;
          v20 = (char *)v12 + 24 * v14;
          v19 = v67.m128_u64[0];
LABEL_7:
          v21 = _mm_loadh_ps((const double *)&v71);
          v22 = _mm_loadh_ps((const double *)&v68);
          v70 = (char *)v91;
          v89 = v21;
          v81 = v22;
          v69 = v3;
          v23 = _mm_loadh_ps((const double *)&v69);
          v69 = v12;
          v24 = _mm_loadh_ps((const double *)v67.m128_u64);
          v69 = &v89;
          v90 = (__m128i)v23;
          v87 = (__m128i)v24;
          v67.m128_u64[0] = (unsigned __int64)v7;
          v25 = _mm_loadh_ps((const double *)v67.m128_u64);
          v67.m128_u64[0] = v19;
          v26 = _mm_loadh_ps((const double *)v67.m128_u64);
          v88 = (__m128i)v25;
          v80 = v26;
          v67 = v24;
          std::copy<std::vector<double>>(
            (int)v91,
            (int)&v89,
            v24.m128_i32[2],
            v15,
            (int)v7,
            (int)v3,
            v24.m128_i64[0],
            v24.m128_i64[1],
            v25.m128_i64[0],
            v25.m128_i64[1],
            v26.m128_i64[0],
            v26.m128_i64[1],
            v22.m128_i32[0],
            v22.m128_i64[1]);
          v27 = a2[3].m128i_i64[0];
          v28 = (a2[4].m128i_i64[1] - (__int64)v10) >> 3;
          v67.m128_u64[0] = a1[3].m128i_u64[0];
          v29 = 21 * (v28 - 1)
              - 0x5555555555555555LL * ((v27 - a2[3].m128i_i64[1]) >> 3)
              - 0x5555555555555555LL * ((v16 - (__int64)v20) >> 3);
          if ( v67.m128_u64[0] != a1[1].m128i_i64[0] )
          {
            v73 = a1[4].m128i_i64[0];
            v30 = 0xAAAAAAAAAAAAAAABLL * ((signed __int64)(v73 - v67.m128_u64[0]) >> 3) - 1;
            if ( v29 > v30 )
            {
              std::deque<std::vector<double>>::_M_new_elements_at_back(a1, v29 - v30);
              v67.m128_u64[0] = a1[3].m128i_u64[0];
              v73 = a1[4].m128i_i64[0];
            }
            v31 = a1[3].m128i_i64[1];
            v32 = a1[4].m128i_i64[1];
            v74 = (_QWORD *)v31;
            v72 = v32;
            v33 = v29 - 0x5555555555555555LL * ((signed __int64)(v67.m128_u64[0] - v31) >> 3);
            if ( v33 < 0 )
            {
              v65 = (0x8618618618618619LL * (unsigned __int128)(unsigned __int64)~v33) >> 64;
              v34 = ~((v65 + ((unsigned __int64)(~v33 - v65) >> 1)) >> 4);
            }
            else
            {
              if ( v33 <= 20 )
              {
                v75 = (_QWORD *)v32;
                v76 = v31;
                v35 = (_QWORD *)v67.m128_u64[0];
                v78 = v67.m128_u64[0] + 24 * v29;
                v77 = v73;
                v37 = v32;
                goto LABEL_14;
              }
              v34 = v33 / 21;
            }
            v35 = (_QWORD *)v67.m128_u64[0];
            v36 = *(_QWORD *)(v72 + 8 * v34);
            v75 = (_QWORD *)(v72 + 8 * v34);
            v76 = v36;
            v78 = v36 + 24 * (v33 - 21 * v34);
            v37 = v72;
            v77 = v36 + 504;
LABEL_14:
            *(_QWORD *)&v71 = v37;
            v38 = v73;
            v79 = v74;
            while ( 1 )
            {
              while ( 1 )
              {
                if ( (char *)v27 == v20 )
                {
                  a1[3].m128i_i64[0] = v78;
                  a1[3].m128i_i64[1] = v76;
                  a1[4].m128i_i64[0] = v77;
                  a1[4].m128i_i64[1] = (__int64)v75;
                  return a1;
                }
                if ( v35 )
                {
                  v39 = *((_QWORD *)v20 + 1) - *(_QWORD *)v20;
                  v40 = nullptr;
                  *v35 = 0;
                  v35[1] = 0;
                  v35[2] = 0;
                  if ( v39 >> 3 )
                  {
                    if ( (unsigned __int64)(v39 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
                      std::__throw_bad_alloc();
                    v40 = (char *)operator new(v39);
                  }
                  *v35 = v40;
                  v35[1] = v40;
                  v35[2] = &v40[v39];
                  v41 = *((_QWORD *)v20 + 1) - *(_QWORD *)v20;
                  if ( *((_QWORD *)v20 + 1) != *(_QWORD *)v20 )
                    v40 = (char *)memmove(v40, *(const void **)v20, *((_QWORD *)v20 + 1) - *(_QWORD *)v20);
                  v35[1] = &v40[v41];
                }
                v20 += 24;
                if ( v20 == (char *)v66.m128_u64[0] )
                  break;
                v35 += 3;
                if ( (_QWORD *)v38 == v35 )
                  goto LABEL_25;
              }
              v35 += 3;
              v20 = *(char **)(v68 + 8);
              *(_QWORD *)&v68 = v68 + 8;
              v66.m128_u64[0] = (unsigned __int64)(v20 + 504);
              if ( (_QWORD *)v38 == v35 )
              {
LABEL_25:
                *(_QWORD *)&v71 = v71 + 8;
                v35 = *(_QWORD **)v71;
                v38 = *(_QWORD *)v71 + 504LL;
                v79 = *(_QWORD **)v71;
              }
            }
          }
          *(_QWORD *)&v71 = a1[1].m128i_i64[1];
          v55 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v67.m128_u64[0] - v71) >> 3);
          if ( v29 > v55 )
          {
            std::deque<std::vector<double>>::_M_new_elements_at_front(a1, v29 - v55);
            v67.m128_u64[0] = a1[1].m128i_u64[0];
            *(_QWORD *)&v71 = a1[1].m128i_i64[1];
          }
          v73 = a1[2].m128i_i64[0];
          v72 = a1[2].m128i_i64[1];
          v56 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v67.m128_u64[0] - v71) >> 3) - v29;
          if ( v56 < 0 )
          {
            v64 = (0x8618618618618619LL * (unsigned __int128)(unsigned __int64)~v56) >> 64;
            v57 = ~((v64 + ((unsigned __int64)(~v56 - v64) >> 1)) >> 4);
          }
          else
          {
            if ( v56 <= 20 )
            {
              v59 = (_QWORD *)v73;
              v74 = (_QWORD *)(v67.m128_u64[0] - 24 * v29);
              v60 = v74;
              goto LABEL_39;
            }
            v57 = v56 / 21;
          }
          v58 = *(_QWORD *)(v72 + 8 * v57);
          v72 += 8 * v57;
          *(_QWORD *)&v71 = v58;
          v73 = v58 + 504;
          v74 = (_QWORD *)(v58 + 24 * (v56 - 21 * v57));
          v59 = (_QWORD *)(v58 + 504);
          v60 = v74;
LABEL_39:
          v67.m128_u64[0] = v72;
          v75 = (_QWORD *)v71;
          while ( 1 )
          {
            while ( 1 )
            {
              if ( (char *)v27 == v20 )
              {
                a1[1].m128i_i64[0] = (__int64)v74;
                a1[1].m128i_i64[1] = v71;
                a1[2].m128i_i64[0] = v73;
                a1[2].m128i_i64[1] = v72;
                return a1;
              }
              if ( v60 )
              {
                v61 = *((_QWORD *)v20 + 1) - *(_QWORD *)v20;
                v62 = nullptr;
                *v60 = 0;
                v60[1] = 0;
                v60[2] = 0;
                if ( v61 >> 3 )
                {
                  if ( (unsigned __int64)(v61 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
                    std::__throw_bad_alloc();
                  v62 = (char *)operator new(v61);
                }
                *v60 = v62;
                v60[1] = v62;
                v60[2] = &v62[v61];
                v63 = *((_QWORD *)v20 + 1) - *(_QWORD *)v20;
                if ( *((_QWORD *)v20 + 1) != *(_QWORD *)v20 )
                  v62 = (char *)memmove(v62, *(const void **)v20, *((_QWORD *)v20 + 1) - *(_QWORD *)v20);
                v60[1] = &v62[v63];
              }
              v20 += 24;
              if ( v20 == (char *)v66.m128_u64[0] )
                break;
              v60 += 3;
              if ( v59 == v60 )
                goto LABEL_50;
            }
            v60 += 3;
            v20 = *(char **)(v68 + 8);
            *(_QWORD *)&v68 = v68 + 8;
            v66.m128_u64[0] = (unsigned __int64)(v20 + 504);
            if ( v59 == v60 )
            {
LABEL_50:
              v67.m128_u64[0] += 8LL;
              v60 = *(_QWORD **)v67.m128_u64[0];
              v75 = v60;
              v59 = v60 + 63;
            }
          }
        }
        v18 = v17 / 21;
      }
      v10 = &v7[v18];
      v19 = *v10;
      *(_QWORD *)&v68 = v10;
      v16 = v19 + 504;
      v20 = (char *)(v19 + 24 * (v17 - 21 * v18));
      v66.m128_u64[0] = v19 + 504;
      goto LABEL_7;
    }
    v66.m128_u64[0] = (unsigned __int64)v3;
    v43 = _mm_loadh_ps((const double *)&v71);
    v44 = a2[4].m128i_i64[0];
    v84 = v6;
    v80 = v43;
    v83 = v44;
    v81 = _mm_loadh_ps((const double *)v66.m128_u64);
    v66.m128_u64[0] = v13;
    v45 = _mm_loadh_ps((const double *)v66.m128_u64);
    v66.m128_u64[0] = (unsigned __int64)v7;
    v46 = _mm_loadh_ps((const double *)v67.m128_u64);
    v47 = _mm_loadh_ps((const double *)v66.m128_u64);
    v82 = v45;
    v85 = v46;
    v86 = v47;
    v66 = v46;
    std::copy<std::vector<double>>(
      (int)&v87,
      (int)&v80,
      v46.m128_i32[2],
      v15,
      (int)v7,
      (int)v3,
      v46.m128_i64[0],
      v46.m128_i64[1],
      v47.m128_i64[0],
      v47.m128_i64[1],
      v45.m128_i64[0],
      v45.m128_i64[1],
      v44,
      v6);
    v90 = _mm_loadu_si128(a1 + 4);
    v48 = _mm_loadu_si128(a1 + 3);
    v91[0] = _mm_load_si128(&v87);
    v89 = (__m128)v48;
    v91[1] = _mm_load_si128(&v88);
    std::deque<std::vector<double>>::_M_destroy_data_aux(a1, v91, &v89, v49, v50, v51);
    v52 = a1[4].m128i_i64[1] + 8;
    v53 = (void **)(v88.m128i_i64[1] + 8);
    if ( v52 > v88.m128i_i64[1] + 8 )
    {
      do
      {
        v54 = *v53++;
        operator delete(v54);
      }
      while ( v52 > (unsigned __int64)v53 );
    }
    a1[3] = _mm_load_si128(&v87);
    a1[4] = _mm_load_si128(&v88);
  }
  return a1;
}

