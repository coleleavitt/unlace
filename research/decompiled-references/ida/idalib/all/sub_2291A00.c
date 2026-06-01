__int64 __fastcall sub_2291A00(_BYTE *a1, __int64 a2, unsigned int a3, int a4, void **a5)
{
  unsigned int v5; // ebx
  char *v8; // rdi
  int v9; // r15d
  _BYTE *v11; // rdi
  void **v12; // rcx
  unsigned __int64 v13; // rdx
  char *v14; // r15
  size_t v15; // r14
  void **v16; // r9
  unsigned __int64 v17; // rdx
  char *v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *v20; // rsi
  size_t v21; // rdx
  void **v22; // r9
  void **v23; // rcx
  _QWORD *v24; // rsi
  size_t v25; // rdx
  int *v26; // rax
  void *v27; // rsi
  size_t v28; // rcx
  _QWORD *v29; // rax
  size_t v30; // rax
  void *v31; // r10
  unsigned __int64 v32; // rcx
  _BYTE *v33; // rdi
  size_t v34; // r10
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  __m128i *v37; // rax
  size_t v38; // rcx
  _BYTE *v39; // rdi
  void *v40; // rdx
  __m128i *v41; // rax
  void *v42; // rdi
  int *v43; // rax
  void *v44; // rsi
  _BYTE *v45; // rcx
  _QWORD *v46; // rax
  _BYTE *v47; // rax
  _BYTE *v48; // r10
  unsigned __int64 v49; // rcx
  void *v50; // rdi
  _BYTE *v51; // r10
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  __m128i *v54; // rax
  char *v55; // rcx
  _BYTE *v56; // rdi
  void *v57; // rax
  _BYTE *v58; // rdi
  void **v59; // rsi
  __m128i v60; // xmm1
  __m128i v61; // xmm2
  size_t v62; // rdx
  size_t v63; // rdx
  unsigned __int64 v64; // rdi
  char *v65; // rsi
  char *v66; // r15
  unsigned int v67; // ecx
  unsigned int v68; // eax
  __int64 v69; // rdx
  _BYTE *v70; // rdi
  size_t v71; // rdx
  void **p_src; // [rsp+0h] [rbp-198h] BYREF
  size_t v73; // [rsp+8h] [rbp-190h] BYREF
  void *v74; // [rsp+10h] [rbp-188h] BYREF
  void *v75; // [rsp+18h] [rbp-180h]
  char *file; // [rsp+20h] [rbp-178h] BYREF
  __m128 v77; // [rsp+28h] [rbp-170h] BYREF
  void *v78; // [rsp+40h] [rbp-158h] BYREF
  signed __int64 v79; // [rsp+48h] [rbp-150h]
  char v80[16]; // [rsp+50h] [rbp-148h] BYREF
  void *v81; // [rsp+60h] [rbp-138h] BYREF
  void **v82; // [rsp+68h] [rbp-130h]
  __m128i v83; // [rsp+70h] [rbp-128h] BYREF
  void *v84; // [rsp+80h] [rbp-118h] BYREF
  size_t v85; // [rsp+88h] [rbp-110h]
  __m128i v86; // [rsp+90h] [rbp-108h] BYREF
  void *v87; // [rsp+A0h] [rbp-F8h] BYREF
  size_t v88; // [rsp+A8h] [rbp-F0h]
  __m128i v89; // [rsp+B0h] [rbp-E8h] BYREF
  void *v90; // [rsp+C0h] [rbp-D8h] BYREF
  size_t v91; // [rsp+C8h] [rbp-D0h]
  _QWORD v92[2]; // [rsp+D0h] [rbp-C8h] BYREF
  void *v93; // [rsp+E0h] [rbp-B8h] BYREF
  size_t v94; // [rsp+E8h] [rbp-B0h]
  unsigned __int64 v95; // [rsp+F0h] [rbp-A8h]
  void *v96; // [rsp+100h] [rbp-98h] BYREF
  size_t v97; // [rsp+108h] [rbp-90h]
  _QWORD v98[2]; // [rsp+110h] [rbp-88h] BYREF
  void *v99; // [rsp+120h] [rbp-78h] BYREF
  size_t v100; // [rsp+128h] [rbp-70h]
  _QWORD v101[2]; // [rsp+130h] [rbp-68h] BYREF
  void *src; // [rsp+140h] [rbp-58h] BYREF
  size_t n; // [rsp+148h] [rbp-50h]
  _OWORD v104[4]; // [rsp+150h] [rbp-48h] BYREF

  if ( !(_BYTE)a3 )
    return 0;
  v5 = a3;
  v77.m128_i8[8] = 0;
  file = &v77.m128_i8[8];
  v77.m128_u64[0] = 0;
  if ( !a2 )
  {
    sub_99BDC0(&file, 0, 0, "/dev/null", 9u);
    goto LABEL_4;
  }
  p_src = &src;
  src = v104;
  sub_2290E80(&src, a1, (__int64)&a1[a2]);
  v11 = file;
  v12 = &src;
  if ( src == v104 )
  {
    v25 = n;
    if ( n )
    {
      if ( n == 1 )
      {
        *file = v104[0];
        v25 = n;
        v11 = file;
      }
      else
      {
        memcpy(file, src, n);
        v11 = file;
        v12 = p_src;
        v25 = n;
      }
    }
    v77.m128_u64[0] = v25;
    v11[v25] = 0;
    v11 = src;
  }
  else
  {
    if ( file == (char *)&v77.m128_u16[4] )
    {
      p_src = *(void ***)&v104[0];
      file = (char *)src;
      v77 = _mm_loadh_ps((const double *)&p_src);
    }
    else
    {
      p_src = *(void ***)&v104[0];
      v13 = v77.m128_u64[1];
      file = (char *)src;
      v77 = _mm_loadh_ps((const double *)&p_src);
      if ( v11 )
      {
        src = v11;
        *(_QWORD *)&v104[0] = v13;
        goto LABEL_15;
      }
    }
    v11 = v104;
    src = v104;
  }
LABEL_15:
  n = 0;
  *v11 = 0;
  if ( src != v12 + 2 )
  {
    operator delete(src);
    v8 = file;
    if ( !a4 )
      goto LABEL_5;
    goto LABEL_17;
  }
LABEL_4:
  v8 = file;
  if ( !a4 )
  {
LABEL_5:
    v9 = open(v8, 0, 438);
    if ( v9 != -1 )
      goto LABEL_6;
    v14 = "input";
LABEL_19:
    sub_C05100((__int64)&v81, "Cannot open file '", (__int64)&file);
    v15 = (size_t)v82;
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - (_QWORD)v82) <= 5 )
      goto LABEL_141;
    v16 = (void **)((char *)v82 + 6);
    if ( v81 == &v83 )
      v17 = 15;
    else
      v17 = v83.m128i_i64[0];
    if ( (unsigned __int64)v16 > v17 )
    {
      p_src = (void **)((char *)v82 + 6);
      sub_998B30((__int64)&v81, (size_t)v82, 0, "' for ", 6u);
      v16 = p_src;
    }
    else
    {
      v18 = (char *)v81 + (_QWORD)v82;
      *(_DWORD *)v18 = 1868963879;
      *((_WORD *)v18 + 2) = 8306;
    }
    v82 = v16;
    *((_BYTE *)v81 + v15 + 6) = 0;
    v84 = &v86;
    if ( v81 == &v83 )
    {
      v59 = v82;
      v60 = _mm_load_si128(&v83);
      v73 = (size_t)&v86;
      v82 = nullptr;
      v85 = (size_t)v59;
      p_src = v59;
      v86 = v60;
      v83.m128i_i8[0] = 0;
      v19 = strlen(v14);
      v20 = p_src;
      if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)p_src < v19 )
        goto LABEL_141;
      v22 = (void **)((char *)p_src + v19);
      v21 = v73;
      v23 = (void **)(byte_9 + 6);
    }
    else
    {
      v74 = &v86;
      v84 = v81;
      v85 = (size_t)v82;
      v75 = v82;
      v73 = (size_t)v81;
      v86.m128i_i64[0] = v83.m128i_i64[0];
      p_src = (void **)v83.m128i_i64[0];
      v81 = &v83;
      v82 = nullptr;
      v83.m128i_i8[0] = 0;
      v19 = strlen(v14);
      v20 = v75;
      if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v75 < v19 )
        goto LABEL_141;
      v21 = v73;
      v22 = (void **)((char *)v75 + v19);
      v23 = p_src;
      if ( (void *)v73 == v74 )
        v23 = (void **)(byte_9 + 6);
    }
    if ( v23 < v22 )
    {
      p_src = v22;
      sub_998B30((__int64)&v84, (size_t)v20, 0, v14, v19);
      v22 = p_src;
    }
    else
    {
      v24 = (_QWORD *)((char *)v20 + v21);
      if ( (unsigned int)v19 >= 8 )
      {
        v64 = (unsigned __int64)(v24 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        *v24 = *(_QWORD *)v14;
        *(_QWORD *)((char *)v24 + (unsigned int)v19 - 8) = *(_QWORD *)&v14[(unsigned int)v19 - 8];
        v65 = (char *)v24 - v64;
        v66 = (char *)(v14 - v65);
        if ( (((_DWORD)v19 + (_DWORD)v65) & 0xFFFFFFF8) >= 8 )
        {
          v67 = (v19 + (_DWORD)v65) & 0xFFFFFFF8;
          v68 = 0;
          do
          {
            v69 = v68;
            v68 += 8;
            *(_QWORD *)(v64 + v69) = *(_QWORD *)&v66[v69];
          }
          while ( v68 < v67 );
        }
      }
      else if ( (v19 & 4) != 0 )
      {
        *(_DWORD *)v24 = *(_DWORD *)v14;
        *(_DWORD *)((char *)v24 + (unsigned int)v19 - 4) = *(_DWORD *)&v14[(unsigned int)v19 - 4];
      }
      else if ( (_DWORD)v19 )
      {
        *(_BYTE *)v24 = *v14;
        if ( (v19 & 2) != 0 )
          *(_WORD *)((char *)v24 + (unsigned int)v19 - 2) = *(_WORD *)&v14[(unsigned int)v19 - 2];
      }
    }
    v85 = (size_t)v22;
    *((_BYTE *)v22 + (_QWORD)v84) = 0;
    v73 = (size_t)&v87;
    v87 = &v89;
    v41 = (__m128i *)v84;
    v42 = v84;
    if ( v84 == &v86 )
    {
      v61 = _mm_load_si128(&v86);
      v62 = v85;
      v86.m128i_i8[0] = 0;
      v85 = 0;
      v89 = v61;
      v88 = v62;
      if ( !a5 )
      {
LABEL_114:
        if ( v41 != &v86 )
          operator delete(v41);
        if ( v81 != &v83 )
          operator delete(v81);
        goto LABEL_8;
      }
    }
    else
    {
      v87 = v84;
      v84 = &v86;
      v89.m128i_i64[0] = v86.m128i_i64[0];
      v86.m128i_i8[0] = 0;
      v88 = v85;
      v85 = 0;
      if ( !a5 )
      {
LABEL_111:
        if ( v42 != (void *)(v73 + 16) )
          operator delete(v42);
        v41 = (__m128i *)v84;
        goto LABEL_114;
      }
    }
    v43 = __errno_location();
    p_src = &v93;
    sub_2287FA0((__int64)&v93, *v43);
    v44 = v87;
    v45 = (_BYTE *)v88;
    v90 = v92;
    if ( (char *)v87 + v88 && !v87 )
LABEL_45:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( v88 > 0xF )
    {
      if ( (v88 & 0x8000000000000000LL) != 0LL )
        goto LABEL_175;
      v75 = v87;
      v74 = (void *)v88;
      v46 = (_QWORD *)operator new(v88 + 1);
      v45 = v74;
      v44 = v75;
      v90 = v46;
      v92[0] = v74;
    }
    else
    {
      if ( v88 == 1 )
      {
        LOBYTE(v92[0]) = *(_BYTE *)v87;
        v46 = v92;
        goto LABEL_85;
      }
      v46 = v92;
      if ( !v88 )
      {
LABEL_85:
        v91 = (size_t)v45;
        v45[(_QWORD)v46] = 0;
        v47 = (_BYTE *)v91;
        if ( v91 == 0x7FFFFFFFFFFFFFFFLL || v91 == 9223372036854775806LL )
          goto LABEL_141;
        v48 = (_BYTE *)(v91 + 2);
        if ( v90 == v92 )
          v49 = 15;
        else
          v49 = v92[0];
        if ( (unsigned __int64)v48 > v49 )
        {
          v75 = (void *)(v91 + 2);
          v74 = (void *)v91;
          sub_998B30((__int64)&v90, v91, 0, ": ", 2u);
          v48 = v75;
          v47 = v74;
        }
        else
        {
          *(_WORD *)((char *)v90 + v91) = 8250;
        }
        v91 = (size_t)v48;
        v47[(_QWORD)v90 + 2] = 0;
        v50 = v90;
        v51 = (_BYTE *)(v91 + v94);
        if ( v90 == v92 )
          v52 = 15;
        else
          v52 = v92[0];
        if ( (unsigned __int64)v51 <= v52 )
        {
          if ( v94 )
          {
            v58 = (char *)v90 + v91;
            if ( v94 == 1 )
            {
              *v58 = *(_BYTE *)v93;
              v50 = v90;
            }
            else
            {
              v74 = (void *)(v91 + v94);
              memcpy(v58, v93, v94);
              v50 = v90;
              v51 = v74;
            }
          }
        }
        else
        {
          if ( v93 == p_src + 2 )
            v53 = 15;
          else
            v53 = v95;
          if ( (unsigned __int64)v51 <= v53 )
          {
            v54 = (__m128i *)sub_99BDC0(p_src, 0, 0, v90, v91);
LABEL_98:
            v55 = (char *)&src;
            src = v104;
            if ( (__m128i *)v54->m128i_i64[0] == &v54[1] )
            {
              v104[0] = _mm_loadu_si128(v54 + 1);
            }
            else
            {
              src = (void *)v54->m128i_i64[0];
              *(_QWORD *)&v104[0] = v54[1].m128i_i64[0];
            }
            n = v54->m128i_u64[1];
            v54->m128i_i64[0] = (__int64)v54[1].m128i_i64;
            v54->m128i_i64[1] = 0;
            v54[1].m128i_i8[0] = 0;
            v56 = *a5;
            if ( src == v104 )
            {
              v63 = n;
              if ( n )
              {
                if ( n == 1 )
                {
                  *v56 = v104[0];
                  v63 = n;
                  v56 = *a5;
                }
                else
                {
                  v74 = &src;
                  memcpy(v56, src, n);
                  v56 = *a5;
                  v55 = (char *)v74;
                  v63 = n;
                }
              }
              a5[1] = (void *)v63;
              v56[v63] = 0;
              v56 = src;
              goto LABEL_104;
            }
            if ( v56 == (_BYTE *)(a5 + 2) )
            {
              v74 = *(void **)&v104[0];
              *a5 = src;
              *(__m128 *)(a5 + 1) = _mm_loadh_ps((const double *)&v74);
            }
            else
            {
              v74 = *(void **)&v104[0];
              v57 = a5[2];
              *a5 = src;
              *(__m128 *)(a5 + 1) = _mm_loadh_ps((const double *)&v74);
              if ( v56 )
              {
                src = v56;
                *(_QWORD *)&v104[0] = v57;
LABEL_104:
                n = 0;
                *v56 = 0;
                if ( src != v55 + 16 )
                  operator delete(src);
                if ( v90 != v92 )
                  operator delete(v90);
                if ( v93 != p_src + 2 )
                  operator delete(v93);
                v42 = v87;
                goto LABEL_111;
              }
            }
            v56 = v104;
            src = v104;
            goto LABEL_104;
          }
          v74 = (void *)(v91 + v94);
          sub_998B30((__int64)&v90, v91, 0, v93, v94);
          v50 = v90;
          v51 = v74;
        }
        v91 = (size_t)v51;
        v54 = (__m128i *)&v90;
        v51[(_QWORD)v50] = 0;
        goto LABEL_98;
      }
    }
    v74 = v45;
    memcpy(v46, v44, (size_t)v45);
    v46 = v90;
    v45 = v74;
    goto LABEL_85;
  }
LABEL_17:
  v9 = open(v8, 65, 438);
  if ( v9 == -1 )
  {
    v14 = "output";
    goto LABEL_19;
  }
LABEL_6:
  if ( dup2(v9, a4) != -1 )
  {
    v5 = 0;
    close(v9);
    goto LABEL_8;
  }
  p_src = &v78;
  strcpy(v80, "Cannot dup2");
  v78 = v80;
  v79 = 11;
  if ( a5 )
  {
    v26 = __errno_location();
    sub_2287FA0((__int64)&v99, *v26);
    v27 = v78;
    v28 = v79;
    v96 = v98;
    if ( (char *)v78 + v79 && !v78 )
      goto LABEL_45;
    if ( (unsigned __int64)v79 <= 0xF )
    {
      if ( v79 == 1 )
      {
        LOBYTE(v98[0]) = *(_BYTE *)v78;
        v29 = v98;
        goto LABEL_49;
      }
      v29 = v98;
      if ( !v79 )
      {
LABEL_49:
        v97 = v28;
        *((_BYTE *)v29 + v28) = 0;
        v30 = v97;
        if ( v97 != 0x7FFFFFFFFFFFFFFFLL && v97 != 9223372036854775806LL )
        {
          v31 = (void *)(v97 + 2);
          if ( v96 == v98 )
            v32 = 15;
          else
            v32 = v98[0];
          if ( (unsigned __int64)v31 > v32 )
          {
            v74 = (void *)(v97 + 2);
            v73 = v97;
            sub_998B30((__int64)&v96, v97, 0, ": ", 2u);
            v31 = v74;
            v30 = v73;
          }
          else
          {
            *(_WORD *)((char *)v96 + v97) = 8250;
          }
          v97 = (size_t)v31;
          *((_BYTE *)v96 + v30 + 2) = 0;
          v33 = v96;
          v34 = v97 + v100;
          if ( v96 == v98 )
            v35 = 15;
          else
            v35 = v98[0];
          if ( v34 <= v35 )
          {
            if ( v100 )
            {
              v70 = (char *)v96 + v97;
              if ( v100 == 1 )
              {
                *v70 = *(_BYTE *)v99;
                v33 = v96;
              }
              else
              {
                v73 = v97 + v100;
                memcpy(v70, v99, v100);
                v33 = v96;
                v34 = v73;
              }
            }
          }
          else
          {
            if ( v99 == v101 )
              v36 = 15;
            else
              v36 = v101[0];
            if ( v34 <= v36 )
            {
              v37 = (__m128i *)sub_99BDC0(&v99, 0, 0, v96, v97);
LABEL_62:
              v38 = (size_t)&src;
              src = v104;
              if ( (__m128i *)v37->m128i_i64[0] == &v37[1] )
              {
                v104[0] = _mm_loadu_si128(v37 + 1);
              }
              else
              {
                src = (void *)v37->m128i_i64[0];
                *(_QWORD *)&v104[0] = v37[1].m128i_i64[0];
              }
              n = v37->m128i_u64[1];
              v37->m128i_i64[0] = (__int64)v37[1].m128i_i64;
              v37->m128i_i64[1] = 0;
              v37[1].m128i_i8[0] = 0;
              v39 = *a5;
              if ( src == v104 )
              {
                v71 = n;
                if ( n )
                {
                  if ( n == 1 )
                  {
                    *v39 = v104[0];
                    v71 = n;
                    v39 = *a5;
                  }
                  else
                  {
                    v73 = (size_t)&src;
                    memcpy(v39, src, n);
                    v39 = *a5;
                    v38 = v73;
                    v71 = n;
                  }
                }
                a5[1] = (void *)v71;
                v39[v71] = 0;
                v39 = src;
                goto LABEL_68;
              }
              if ( v39 == (_BYTE *)(a5 + 2) )
              {
                v73 = *(_QWORD *)&v104[0];
                *a5 = src;
                *(__m128 *)(a5 + 1) = _mm_loadh_ps((const double *)&v73);
              }
              else
              {
                v73 = *(_QWORD *)&v104[0];
                v40 = a5[2];
                *a5 = src;
                *(__m128 *)(a5 + 1) = _mm_loadh_ps((const double *)&v73);
                if ( v39 )
                {
                  src = v39;
                  *(_QWORD *)&v104[0] = v40;
LABEL_68:
                  n = 0;
                  *v39 = 0;
                  if ( src != (void *)(v38 + 16) )
                    operator delete(src);
                  if ( v96 != v98 )
                    operator delete(v96);
                  if ( v99 != v101 )
                    operator delete(v99);
                  if ( v78 != p_src + 2 )
                    operator delete(v78);
                  goto LABEL_76;
                }
              }
              v39 = v104;
              src = v104;
              goto LABEL_68;
            }
            v73 = v97 + v100;
            sub_998B30((__int64)&v96, v97, 0, v99, v100);
            v33 = v96;
            v34 = v73;
          }
          v97 = v34;
          v37 = (__m128i *)&v96;
          v33[v34] = 0;
          goto LABEL_62;
        }
LABEL_141:
        std::__throw_length_error("basic_string::append");
      }
LABEL_144:
      v73 = v28;
      memcpy(v29, v27, v28);
      v29 = v96;
      v28 = v73;
      goto LABEL_49;
    }
    v74 = v78;
    if ( v79 >= 0 )
    {
      v73 = v79;
      v29 = (_QWORD *)operator new(v79 + 1);
      v28 = v73;
      v27 = v74;
      v96 = v29;
      v98[0] = v73;
      goto LABEL_144;
    }
LABEL_175:
    std::__throw_length_error("basic_string::_M_create");
  }
LABEL_76:
  close(v9);
LABEL_8:
  if ( file != (char *)&v77.m128_u16[4] )
    operator delete(file);
  return v5;
}
