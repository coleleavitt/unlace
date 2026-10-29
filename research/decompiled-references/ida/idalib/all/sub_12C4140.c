void __fastcall sub_12C4140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  void *v13; // r14
  size_t v14; // r13
  _QWORD *v15; // rax
  size_t v16; // r13
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __m128i *v21; // rax
  __m128i *v22; // rdx
  _QWORD *v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r13
  void *v26; // rsi
  __int64 v27; // r15
  __m128i *v28; // rax
  size_t v29; // r15
  size_t v30; // r9
  unsigned __int64 v31; // rdx
  char *v32; // rax
  _BYTE *v33; // rdi
  size_t v34; // r15
  unsigned __int64 v35; // rax
  _BYTE *v36; // rdi
  void **v37; // rcx
  size_t v38; // rax
  __m128i *v39; // rdx
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  unsigned __int64 v42; // rsi
  __m128i *v43; // rax
  __m128i *v44; // rdi
  void *v45; // r13
  __int64 v46; // r12
  __m128i *v47; // rax
  size_t v48; // r12
  size_t v49; // rdx
  char *v50; // rax
  _BYTE *v51; // rdi
  size_t v52; // r12
  unsigned __int64 v53; // rax
  _BYTE *v54; // rdi
  _BYTE *v55; // rsi
  __int64 v56; // r13
  bool v57; // zf
  _QWORD *v58; // rax
  size_t v59; // r13
  size_t v60; // rax
  unsigned __int64 v61; // rcx
  __int64 v62; // rdi
  void **v63; // rdx
  unsigned __int64 v64; // r15
  unsigned __int64 v65; // rsi
  void **v66; // rdi
  _QWORD *v67; // rdi
  unsigned __int64 v68; // rax
  __int64 v69; // rdi
  unsigned __int64 v70; // rbp
  unsigned __int64 v71; // r13
  __int64 v72; // rdi
  __int64 v73; // rsi
  __m128i v74; // xmm4
  __int64 v75; // rax
  void *v76; // [rsp+0h] [rbp-128h]
  void *v77; // [rsp+0h] [rbp-128h]
  void *v78; // [rsp+0h] [rbp-128h]
  void **v79; // [rsp+0h] [rbp-128h]
  void *v80; // [rsp+10h] [rbp-118h] BYREF
  size_t v81; // [rsp+18h] [rbp-110h]
  _BYTE v82[16]; // [rsp+20h] [rbp-108h] BYREF
  void *v83; // [rsp+30h] [rbp-F8h] BYREF
  size_t v84; // [rsp+38h] [rbp-F0h]
  _QWORD v85[2]; // [rsp+40h] [rbp-E8h] BYREF
  void *src; // [rsp+50h] [rbp-D8h] BYREF
  size_t n; // [rsp+58h] [rbp-D0h]
  __int64 v88; // [rsp+60h] [rbp-C8h] BYREF
  void *v89; // [rsp+70h] [rbp-B8h] BYREF
  size_t v90; // [rsp+78h] [rbp-B0h]
  _QWORD v91[2]; // [rsp+80h] [rbp-A8h] BYREF
  void *v92; // [rsp+90h] [rbp-98h]
  size_t v93; // [rsp+98h] [rbp-90h]
  __m128i v94; // [rsp+A0h] [rbp-88h] BYREF
  void *v95; // [rsp+B0h] [rbp-78h] BYREF
  size_t v96; // [rsp+B8h] [rbp-70h]
  __m128i si128; // [rsp+C0h] [rbp-68h] BYREF
  void *v98; // [rsp+D0h] [rbp-58h] BYREF
  size_t v99; // [rsp+D8h] [rbp-50h]
  __m128i v100[4]; // [rsp+E0h] [rbp-48h] BYREF

  sub_1134980(a1, a2, a3, a4);
  v7 = *(unsigned int *)(a1 + 1160);
  *(_QWORD *)a1 = off_2C41A50;
  v8 = v7 + 1;
  v9 = *(_QWORD *)(a1 + 8) + 104LL;
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1164) )
  {
    v68 = *(_QWORD *)(a1 + 1152);
    v69 = a1 + 1152;
    if ( v68 > v9 || v9 >= v68 + 32 * v7 )
    {
      sub_A8C1F0(v69, v8);
      v10 = *(_QWORD *)(a1 + 1152);
      v7 = *(unsigned int *)(a1 + 1160);
    }
    else
    {
      v70 = v9 - v68;
      sub_A8C1F0(v69, v8);
      v10 = *(_QWORD *)(a1 + 1152);
      v7 = *(unsigned int *)(a1 + 1160);
      v9 = v10 + v70;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 1152);
  }
  v11 = (_QWORD *)(v10 + 32 * v7);
  *v11 = v11 + 2;
  sub_12B8DD0(v11, *(_BYTE **)v9, *(_QWORD *)v9 + *(_QWORD *)(v9 + 8));
  v12 = *(_QWORD *)(a1 + 8);
  ++*(_DWORD *)(a1 + 1160);
  v80 = v82;
  sub_12B8DD0(&v80, *(_BYTE **)(v12 + 488), *(_QWORD *)(v12 + 488) + *(_QWORD *)(v12 + 496));
  if ( *(_DWORD *)(a1 + 60) )
  {
    v24 = a3;
    v25 = a1 + 624;
    sub_12B8E90((__int64)&src, v24);
    if ( !*(_DWORD *)(a2 + 40) )
      goto LABEL_24;
    v45 = v80;
    v46 = v81;
    v95 = &si128;
    if ( (char *)v80 + v81 && !v80 )
      goto LABEL_125;
    if ( v81 > 0xF )
    {
      if ( (v81 & 0x8000000000000000LL) != 0LL )
        goto LABEL_143;
      v47 = (__m128i *)operator new(v81 + 1);
      si128.m128i_i64[0] = v46;
      v95 = v47;
    }
    else
    {
      if ( v81 == 1 )
      {
        si128.m128i_i8[0] = *(_BYTE *)v80;
        v47 = &si128;
        goto LABEL_64;
      }
      v47 = &si128;
      if ( !v81 )
      {
LABEL_64:
        v96 = v46;
        v47->m128i_i8[v46] = 0;
        v48 = v96;
        if ( 0x7FFFFFFFFFFFFFFFLL - v96 <= 4 )
          goto LABEL_142;
        if ( v95 == &si128 )
          v49 = 15;
        else
          v49 = si128.m128i_i64[0];
        if ( v96 + 5 > v49 )
        {
          sub_998B30((__int64)&v95, v96, 0, "/lib/", 5u);
        }
        else
        {
          v50 = (char *)v95 + v96;
          *(_DWORD *)v50 = 1651076143;
          v50[4] = 47;
        }
        v96 = v48 + 5;
        *((_BYTE *)v95 + v48 + 5) = 0;
        v51 = v95;
        v52 = n + v96;
        if ( v95 == &si128 )
          v53 = 15;
        else
          v53 = si128.m128i_i64[0];
        if ( v52 > v53 )
        {
          sub_998B30((__int64)&v95, v96, 0, src, n);
          v51 = v95;
        }
        else if ( n )
        {
          v54 = (char *)v95 + v96;
          if ( n == 1 )
            *v54 = *(_BYTE *)src;
          else
            memcpy(v54, src, n);
          v51 = v95;
        }
        v96 = v52;
        v51[v52] = 0;
        v55 = v95;
        v92 = &v94;
        if ( v95 == &si128 )
        {
          v56 = v96;
          v55 = &v94;
          v74 = _mm_load_si128(&si128);
          si128.m128i_i8[0] = 0;
          v94 = v74;
          v93 = v96;
          v96 = 0;
          v89 = v91;
        }
        else
        {
          v56 = v96;
          v95 = &si128;
          v92 = v55;
          v89 = v91;
          v57 = &v55[v96] == nullptr;
          v94.m128i_i64[0] = si128.m128i_i64[0];
          v93 = v96;
          v96 = 0;
          si128.m128i_i8[0] = 0;
          if ( !v57 && !v55 )
            goto LABEL_125;
        }
        if ( (unsigned __int64)v56 > 0xF )
        {
          if ( v56 < 0 )
            goto LABEL_143;
          v58 = (_QWORD *)operator new(v56 + 1);
          v91[0] = v56;
          v89 = v58;
        }
        else
        {
          if ( v56 == 1 )
          {
            LOBYTE(v91[0]) = *v55;
            v58 = v91;
LABEL_82:
            v90 = v56;
            *((_BYTE *)v58 + v56) = 0;
            v59 = v90;
            if ( 0x7FFFFFFFFFFFFFFFLL - v90 <= 0xF )
              goto LABEL_142;
            v60 = v90 + 16;
            if ( v89 == v91 )
              v61 = 15;
            else
              v61 = v91[0];
            if ( v60 > v61 )
            {
              v78 = (void *)(v90 + 16);
              sub_998B30((__int64)&v89, v90, 0, "/llvm-lto/21.1.5", 0x10u);
              v60 = (size_t)v78;
            }
            else
            {
              *(__m128i *)((char *)v89 + v90) = _mm_load_si128((const __m128i *)&xmmword_23A9F90);
            }
            v90 = v60;
            *((_BYTE *)v89 + v59 + 16) = 0;
            if ( v92 != &v94 )
              operator delete(v92);
            if ( v95 != &si128 )
              operator delete(v95);
            v62 = *(unsigned int *)(a1 + 632);
            v63 = &v89;
            v25 = a1 + 624;
            v64 = *(_QWORD *)(a1 + 624);
            v65 = v62 + 1;
            v66 = (void **)(v64 + 32 * v62);
            if ( v65 > *(unsigned int *)(a1 + 636) )
            {
              if ( v64 > (unsigned __int64)&v89 || v66 <= &v89 )
              {
                sub_A8C1F0(a1 + 624, v65);
                v63 = &v89;
                v66 = (void **)(*(_QWORD *)(a1 + 624) + 32LL * *(unsigned int *)(a1 + 632));
              }
              else
              {
                sub_A8C1F0(a1 + 624, v65);
                v75 = *(_QWORD *)(a1 + 624);
                v63 = (void **)((char *)&v89 + v75 - v64);
                v66 = (void **)(v75 + 32LL * *(unsigned int *)(a1 + 632));
              }
            }
            *v66 = v66 + 2;
            sub_12B8DD0(v66, *v63, (__int64)v63[1] + (_QWORD)*v63);
            v67 = v89;
            ++*(_DWORD *)(a1 + 632);
            if ( v67 != v91 )
              operator delete(v67);
LABEL_24:
            v26 = v80;
            v27 = v81;
            v98 = v100;
            if ( !((char *)v80 + v81) || v80 )
            {
              if ( v81 > 0xF )
              {
                v76 = v80;
                if ( (v81 & 0x8000000000000000LL) != 0LL )
                  goto LABEL_143;
                v28 = (__m128i *)operator new(v81 + 1);
                v100[0].m128i_i64[0] = v27;
                v26 = v76;
                v98 = v28;
              }
              else
              {
                if ( v81 == 1 )
                {
                  v100[0].m128i_i8[0] = *(_BYTE *)v80;
                  v28 = v100;
                  goto LABEL_29;
                }
                v28 = v100;
                if ( !v81 )
                {
LABEL_29:
                  v99 = v27;
                  v28->m128i_i8[v27] = 0;
                  v29 = v99;
                  if ( 0x7FFFFFFFFFFFFFFFLL - v99 > 4 )
                  {
                    v30 = v99 + 5;
                    if ( v98 == v100 )
                      v31 = 15;
                    else
                      v31 = v100[0].m128i_i64[0];
                    if ( v30 > v31 )
                    {
                      v77 = (void *)(v99 + 5);
                      sub_998B30((__int64)&v98, v99, 0, "/lib/", 5u);
                      v30 = (size_t)v77;
                    }
                    else
                    {
                      v32 = (char *)v98 + v99;
                      *(_DWORD *)v32 = 1651076143;
                      v32[4] = 47;
                    }
                    v99 = v30;
                    *((_BYTE *)v98 + v29 + 5) = 0;
                    v33 = v98;
                    v34 = n + v99;
                    if ( v98 == v100 )
                      v35 = 15;
                    else
                      v35 = v100[0].m128i_i64[0];
                    if ( v34 > v35 )
                    {
                      sub_998B30((__int64)&v98, v99, 0, src, n);
                      v33 = v98;
                    }
                    else if ( n )
                    {
                      v36 = (char *)v98 + v99;
                      if ( n == 1 )
                        *v36 = *(_BYTE *)src;
                      else
                        memcpy(v36, src, n);
                      v33 = v98;
                    }
                    v99 = v34;
                    v33[v34] = 0;
                    v95 = &si128;
                    if ( v98 == v100 )
                    {
                      si128 = _mm_load_si128(v100);
                    }
                    else
                    {
                      v95 = v98;
                      si128.m128i_i64[0] = v100[0].m128i_i64[0];
                    }
                    v37 = *(void ***)(a1 + 624);
                    v38 = v99;
                    v39 = (__m128i *)&v95;
                    v99 = 0;
                    v40 = *(unsigned int *)(a1 + 636);
                    v100[0].m128i_i8[0] = 0;
                    v96 = v38;
                    v98 = v100;
                    v41 = *(unsigned int *)(a1 + 632);
                    v42 = v41 + 1;
                    v43 = (__m128i *)&v37[4 * v41];
                    if ( v42 > v40 )
                    {
                      v79 = v37;
                      if ( v37 > &v95 || v43 <= (__m128i *)&v95 )
                      {
                        sub_A8C1F0(v25, v42);
                        v39 = (__m128i *)&v95;
                        v43 = (__m128i *)(*(_QWORD *)(a1 + 624) + 32LL * *(unsigned int *)(a1 + 632));
                      }
                      else
                      {
                        sub_A8C1F0(v25, v42);
                        v73 = *(_QWORD *)(a1 + 624);
                        v39 = (__m128i *)(v73 + (char *)&v95 - (char *)v79);
                        v43 = (__m128i *)(v73 + 32LL * *(unsigned int *)(a1 + 632));
                      }
                    }
                    v43->m128i_i64[0] = (__int64)v43[1].m128i_i64;
                    if ( (__m128i *)v39->m128i_i64[0] == &v39[1] )
                    {
                      v43[1] = _mm_loadu_si128(v39 + 1);
                    }
                    else
                    {
                      v43->m128i_i64[0] = v39->m128i_i64[0];
                      v43[1].m128i_i64[0] = v39[1].m128i_i64[0];
                    }
                    v43->m128i_i64[1] = v39->m128i_i64[1];
                    v39->m128i_i64[0] = (__int64)v39[1].m128i_i64;
                    v39->m128i_i64[1] = 0;
                    v39[1].m128i_i8[0] = 0;
                    v44 = (__m128i *)v95;
                    ++*(_DWORD *)(a1 + 632);
                    if ( v44 != &si128 )
                      operator delete(v44);
                    if ( v98 != v100 )
                      operator delete(v98);
                    v23 = src;
                    if ( src != &v88 )
                      goto LABEL_19;
                    goto LABEL_20;
                  }
LABEL_142:
                  std::__throw_length_error("basic_string::append");
                }
              }
              memcpy(v28, v26, v27);
              v28 = (__m128i *)v98;
              goto LABEL_29;
            }
LABEL_125:
            std::__throw_logic_error("basic_string::_M_construct null not valid");
          }
          v58 = v91;
          if ( !v56 )
            goto LABEL_82;
        }
        memcpy(v58, v55, v56);
        v58 = v89;
        goto LABEL_82;
      }
    }
    memcpy(v47, v45, v46);
    v47 = (__m128i *)v95;
    goto LABEL_64;
  }
  v13 = v80;
  v14 = v81;
  v83 = v85;
  if ( (char *)v80 + v81 && !v80 )
    goto LABEL_125;
  if ( v81 > 0xF )
  {
    if ( (v81 & 0x8000000000000000LL) == 0LL )
    {
      v15 = (_QWORD *)operator new(v81 + 1);
      v85[0] = v14;
      v83 = v15;
LABEL_58:
      memcpy(v15, v13, v14);
      v15 = v83;
      goto LABEL_9;
    }
LABEL_143:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v81 == 1 )
  {
    LOBYTE(v85[0]) = *(_BYTE *)v80;
    v15 = v85;
    goto LABEL_9;
  }
  v15 = v85;
  if ( v81 )
    goto LABEL_58;
LABEL_9:
  v84 = v14;
  *((_BYTE *)v15 + v14) = 0;
  v16 = v84;
  if ( 0x7FFFFFFFFFFFFFFFLL - v84 <= 3 )
    goto LABEL_142;
  if ( v83 == v85 )
    v17 = 15;
  else
    v17 = v85[0];
  if ( v84 + 4 > v17 )
    sub_998B30((__int64)&v83, v84, 0, "/lib", 4u);
  else
    *(_DWORD *)((char *)v83 + v84) = 1651076143;
  v84 = v16 + 4;
  *((_BYTE *)v83 + v16 + 4) = 0;
  v18 = *(unsigned int *)(a1 + 632);
  v19 = v18 + 1;
  if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
  {
    v71 = *(_QWORD *)(a1 + 624);
    v72 = a1 + 624;
    if ( v71 > (unsigned __int64)&v83 || (unsigned __int64)&v83 >= v71 + 32 * v18 )
    {
      sub_A8C1F0(v72, v19);
      v20 = *(_QWORD *)(a1 + 624);
      v18 = *(unsigned int *)(a1 + 632);
      v21 = (__m128i *)&v83;
    }
    else
    {
      sub_A8C1F0(v72, v19);
      v20 = *(_QWORD *)(a1 + 624);
      v18 = *(unsigned int *)(a1 + 632);
      v21 = (__m128i *)((char *)&v83 + v20 - v71);
    }
  }
  else
  {
    v20 = *(_QWORD *)(a1 + 624);
    v21 = (__m128i *)&v83;
  }
  v22 = (__m128i *)(v20 + 32 * v18);
  v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
  if ( (__m128i *)v21->m128i_i64[0] == &v21[1] )
  {
    v22[1] = _mm_loadu_si128(v21 + 1);
  }
  else
  {
    v22->m128i_i64[0] = v21->m128i_i64[0];
    v22[1].m128i_i64[0] = v21[1].m128i_i64[0];
  }
  v22->m128i_i64[1] = v21->m128i_i64[1];
  v21->m128i_i64[0] = (__int64)v21[1].m128i_i64;
  v23 = v83;
  v21->m128i_i64[1] = 0;
  v21[1].m128i_i8[0] = 0;
  ++*(_DWORD *)(a1 + 632);
  if ( v23 != v85 )
LABEL_19:
    operator delete(v23);
LABEL_20:
  if ( v80 != v82 )
    operator delete(v80);
}
