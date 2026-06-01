void __fastcall sub_636FA0(
        __int64 a1,
        __m128 *a2,
        int a3,
        unsigned int a4,
        const char **a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r9
  size_t v11; // rbx
  const void *v13; // rbp
  char *v14; // rdi
  int v15; // eax
  void *v16; // rcx
  __int64 v17; // r9
  size_t v18; // r12
  double *v19; // rax
  double *v20; // rdi
  size_t v21; // xmm0_8
  __m128 v22; // xmm0
  double v23; // rdx
  _BYTE *v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r13
  _QWORD *v29; // rdi
  _BYTE *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  _BYTE *v33; // rax
  _BYTE *v34; // rax
  __int64 v35; // rdx
  const char *v36; // rax
  const char *v37; // r12
  __int64 v38; // r13
  _QWORD *v39; // rdi
  __m128i *v40; // rax
  __m128i si128; // xmm0
  __int64 v42; // rax
  __int64 v43; // rdi
  _BYTE *v44; // rax
  _BYTE *v45; // rax
  _QWORD *v46; // rdi
  _BYTE *v47; // rax
  _BYTE *v48; // rax
  const char **v49; // r14
  __int64 v50; // r12
  _QWORD *v51; // r13
  size_t v52; // rax
  const char *v53; // r8
  __int64 v54; // rdi
  _BYTE *v55; // rax
  void *v56; // rax
  double *v57; // rdi
  __int64 v58; // r14
  const char *v59; // r12
  size_t v60; // rax
  size_t v61; // r13
  _QWORD *v62; // rdi
  _DWORD *v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // rdi
  _BYTE *v67; // rax
  _BYTE *v68; // rax
  void *v69; // r12
  void *v70; // r13
  _QWORD *v71; // rdi
  _BYTE *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdi
  _BYTE *v75; // rax
  _BYTE *v76; // rax
  __int64 v77; // r12
  _QWORD *v78; // rbp
  _QWORD *v79; // r14
  __int64 v80; // rdi
  _BYTE *v81; // rax
  const char *v83; // [rsp+0h] [rbp-368h]
  __int64 v84; // [rsp+0h] [rbp-368h]
  __int64 v86; // [rsp+20h] [rbp-348h]
  __int64 v89; // [rsp+50h] [rbp-318h]
  __int64 v90; // [rsp+70h] [rbp-2F8h]
  __int64 v91; // [rsp+70h] [rbp-2F8h]
  void *src; // [rsp+78h] [rbp-2F0h]
  unsigned int v93; // [rsp+8Ch] [rbp-2DCh] BYREF
  _BYTE v94[16]; // [rsp+90h] [rbp-2D8h] BYREF
  void *v95[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  __int64 v96; // [rsp+B0h] [rbp-2B8h] BYREF
  __int16 v97; // [rsp+C0h] [rbp-2A8h]
  void *v98[3]; // [rsp+D0h] [rbp-298h] BYREF
  char v99; // [rsp+E8h] [rbp-280h] BYREF
  __int16 v100; // [rsp+F0h] [rbp-278h]
  _QWORD v101[3]; // [rsp+110h] [rbp-258h] BYREF
  _BYTE *v102; // [rsp+128h] [rbp-240h]
  _BYTE *v103; // [rsp+130h] [rbp-238h]
  void *v104; // [rsp+170h] [rbp-1F8h] BYREF
  size_t v105; // [rsp+178h] [rbp-1F0h]
  double v106[2]; // [rsp+180h] [rbp-1E8h] BYREF
  __int16 v107; // [rsp+190h] [rbp-1D8h]
  void *ptr; // [rsp+210h] [rbp-158h] BYREF
  size_t n[2]; // [rsp+218h] [rbp-150h]
  _BYTE dest[320]; // [rsp+228h] [rbp-140h] BYREF

  *(_QWORD *)(a1 + 8) = 0;
  v10 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  v11 = a2[8].m128_u64[0];
  if ( !v11 )
    return;
  v13 = (const void *)a2[7].m128_u64[1];
  v14 = dest;
  ptr = dest;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
  if ( v11 > 0x100 )
  {
    v89 = v10;
    sub_25D6230(&ptr, dest, v11, 1);
    v10 = v89;
    v14 = (char *)ptr + n[0];
  }
  v90 = v10;
  memcpy(v14, v13, v11);
  n[0] += v11;
  v107 = 257;
  LOWORD(v103) = 257;
  v100 = 257;
  v95[0] = "libclang-%%%%%%%%%%%%";
  v97 = 259;
  sub_2634E30(&ptr, v95, v98, v101, &v104);
  v107 = 261;
  v104 = ptr;
  v105 = n[0];
  v15 = sub_263CC60(&v104, &v93, &ptr, 1, 438);
  v16 = ptr;
  v17 = v90;
  if ( v15 )
  {
    if ( ptr == dest )
      return;
LABEL_7:
    free(ptr);
    return;
  }
  v18 = n[0];
  v104 = v106;
  if ( ptr )
  {
    v101[0] = n[0];
    if ( n[0] > 0xF )
    {
      src = ptr;
      v56 = (void *)std::string::_M_create();
      v17 = v90;
      v16 = src;
      v104 = v56;
      v57 = (double *)v56;
      v106[0] = *(double *)v101;
      goto LABEL_74;
    }
  }
  else
  {
    if ( n[0] )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v101[0] = 0;
  }
  if ( n[0] == 1 )
  {
    LOBYTE(v106[0]) = *(_BYTE *)ptr;
LABEL_12:
    v19 = v106;
    goto LABEL_13;
  }
  if ( !n[0] )
    goto LABEL_12;
  v57 = v106;
LABEL_74:
  v91 = v17;
  memcpy(v57, v16, v18);
  v18 = v101[0];
  v17 = v91;
  v19 = (double *)v104;
LABEL_13:
  v105 = v18;
  *((_BYTE *)v19 + v18) = 0;
  v20 = *(double **)a1;
  v21 = v105;
  if ( v17 == *(_QWORD *)a1 )
  {
    if ( v104 != v106 )
    {
      *(_QWORD *)a1 = v104;
      *(__m128 *)(a1 + 8) = _mm_loadh_ps(v106);
LABEL_172:
      v104 = v106;
      v20 = v106;
      goto LABEL_17;
    }
  }
  else if ( v104 != v106 )
  {
    v22 = _mm_loadh_ps(v106);
    v23 = *(double *)(a1 + 16);
    *(_QWORD *)a1 = v104;
    *(__m128 *)(a1 + 8) = v22;
    if ( v20 )
    {
      v104 = v20;
      v106[0] = v23;
      goto LABEL_17;
    }
    goto LABEL_172;
  }
  if ( (void **)a1 == &v104 )
  {
    v20 = (double *)v104;
  }
  else
  {
    if ( v105 )
    {
      if ( v105 == 1 )
        *(_BYTE *)v20 = LOBYTE(v106[0]);
      else
        memcpy(v20, v106, v105);
      v20 = *(double **)a1;
      v21 = v105;
    }
    *(_QWORD *)(a1 + 8) = v21;
    *((_BYTE *)v20 + v21) = 0;
    v20 = (double *)v104;
  }
LABEL_17:
  v105 = 0;
  *(_BYTE *)v20 = 0;
  if ( v104 != v106 )
    operator delete(v104, *(_QWORD *)&v106[0] + 1LL);
  sub_2625E40(v101, v93, 1, 0, 0);
  v24 = v103;
  if ( v103 >= v102 )
  {
    sub_26239D0(v101, 123);
  }
  else
  {
    ++v103;
    *v24 = 123;
  }
  v25 = a2[4].m128_u64[0];
  if ( v25 )
    v26 = a2[3].m128_u64[1];
  else
    v26 = sub_636D20(a2);
  v27 = v26;
  v28 = v25;
  if ( v102 == v103 )
  {
    v29 = (_QWORD *)sub_26240F0(v101, "\"", 1);
    v30 = (_BYTE *)v29[4];
  }
  else
  {
    *v103 = 34;
    v29 = v101;
    v30 = ++v103;
  }
  if ( v29[3] - (_QWORD)v30 <= 8u )
  {
    v29 = (_QWORD *)sub_26240F0(v29, "toolchain", 9);
    v31 = v29[4];
  }
  else
  {
    v30[8] = 110;
    *(_QWORD *)v30 = 0x696168636C6F6F74LL;
    v31 = v29[4] + 9LL;
    v29[4] = v31;
  }
  if ( (unsigned __int64)(v29[3] - v31) <= 2 )
  {
    sub_26240F0(v29, "\":\"", 3);
  }
  else
  {
    *(_BYTE *)(v31 + 2) = 34;
    *(_WORD *)v31 = 14882;
    v29[4] += 3LL;
  }
  sub_26110E0(&v104, v27, v28, 1);
  v32 = sub_26240F0(v101, v104, v105);
  v33 = *(_BYTE **)(v32 + 32);
  if ( (unsigned __int64)v33 >= *(_QWORD *)(v32 + 24) )
  {
    sub_26239D0(v32, 34);
  }
  else
  {
    *(_QWORD *)(v32 + 32) = v33 + 1;
    *v33 = 34;
  }
  if ( v104 != v106 )
    operator delete(v104, *(_QWORD *)&v106[0] + 1LL);
  v34 = v103;
  if ( v103 >= v102 )
  {
    sub_26239D0(v101, 44);
  }
  else
  {
    ++v103;
    *v34 = 44;
  }
  v35 = 8;
  v36 = "complete";
  if ( !a3 )
  {
    v35 = 5;
    v36 = "parse";
  }
  v37 = v36;
  v38 = v35;
  if ( v102 == v103 )
  {
    v39 = (_QWORD *)sub_26240F0(v101, "\"", 1);
    v40 = (__m128i *)v39[4];
  }
  else
  {
    *v103 = 34;
    v39 = v101;
    v40 = (__m128i *)++v103;
  }
  if ( v39[3] - (_QWORD)v40 <= 0x11u )
  {
    v39 = (_QWORD *)sub_26240F0(v39, "libclang.operation", 18);
    v42 = v39[4];
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E500);
    v40[1].m128i_i16[0] = 28271;
    *v40 = si128;
    v42 = v39[4] + 18LL;
    v39[4] = v42;
  }
  if ( (unsigned __int64)(v39[3] - v42) <= 2 )
  {
    sub_26240F0(v39, "\":\"", 3);
  }
  else
  {
    *(_BYTE *)(v42 + 2) = 34;
    *(_WORD *)v42 = 14882;
    v39[4] += 3LL;
  }
  sub_26110E0(&v104, v37, v38, 1);
  v43 = sub_26240F0(v101, v104, v105);
  v44 = *(_BYTE **)(v43 + 32);
  if ( (unsigned __int64)v44 >= *(_QWORD *)(v43 + 24) )
  {
    sub_26239D0(v43, 34);
  }
  else
  {
    *(_QWORD *)(v43 + 32) = v44 + 1;
    *v44 = 34;
  }
  if ( v104 != v106 )
    operator delete(v104, *(_QWORD *)&v106[0] + 1LL);
  v45 = v103;
  if ( v103 >= v102 )
  {
    sub_26239D0(v101, 44);
  }
  else
  {
    ++v103;
    *v45 = 44;
  }
  if ( (unsigned __int64)(v102 - v103) <= 0xF )
  {
    v46 = (_QWORD *)sub_26240F0(v101, "\"libclang.opts\":", 16);
  }
  else
  {
    v46 = v101;
    *(__m128i *)v103 = _mm_load_si128((const __m128i *)&xmmword_3C7E510);
    v103 += 16;
  }
  sub_26238A0(v46, a4);
  v47 = v103;
  if ( v103 >= v102 )
  {
    sub_26239D0(v101, 44);
  }
  else
  {
    ++v103;
    *v47 = 44;
  }
  if ( (unsigned __int64)(v102 - v103) <= 7 )
  {
    sub_26240F0(v101, "\"args\":[", 8);
    v48 = v103;
  }
  else
  {
    *(_QWORD *)v103 = 0x5B3A227367726122LL;
    v48 = v103 + 8;
    v103 += 8;
  }
  v49 = a5;
  if ( &a5[a6] != a5 )
  {
    v50 = 0;
    do
    {
      if ( v50 )
      {
        if ( v48 >= v102 )
        {
          sub_26239D0(v101, 44);
        }
        else
        {
          v103 = v48 + 1;
          *v48 = 44;
        }
        v48 = v103;
      }
      if ( v48 < v102 )
      {
        v51 = v101;
        v103 = v48 + 1;
        *v48 = 34;
      }
      else
      {
        v51 = (_QWORD *)sub_26239D0(v101, 34);
      }
      v52 = 0;
      v53 = *v49;
      if ( *v49 )
      {
        v83 = *v49;
        v52 = strlen(*v49);
        v53 = v83;
      }
      sub_26110E0(&v104, v53, v52, 1);
      v54 = sub_26240F0(v51, v104, v105);
      v55 = *(_BYTE **)(v54 + 32);
      if ( (unsigned __int64)v55 >= *(_QWORD *)(v54 + 24) )
      {
        sub_26239D0(v54, 34);
      }
      else
      {
        *(_QWORD *)(v54 + 32) = v55 + 1;
        *v55 = 34;
      }
      if ( v104 != v106 )
        operator delete(v104, *(_QWORD *)&v106[0] + 1LL);
      ++v49;
      v48 = v103;
      ++v50;
    }
    while ( &a5[a6] != v49 );
  }
  if ( a8 )
  {
    if ( (unsigned __int64)(v102 - v48) <= 0x14 )
    {
      sub_26240F0(v101, "],\"invocation-args\":[", 21);
      v48 = v103;
    }
    else
    {
      *(__m128i *)v48 = _mm_load_si128((const __m128i *)&xmmword_3C7E520);
      *(_QWORD *)(v48 + 13) = 0x5B3A22736772612DLL;
      v48 = v103 + 21;
      v103 += 21;
    }
    if ( &a7[4 * a8] != a7 )
    {
      v77 = 0;
      v78 = a7;
      do
      {
        if ( v77 )
        {
          if ( v48 >= v102 )
          {
            sub_26239D0(v101, 44);
          }
          else
          {
            v103 = v48 + 1;
            *v48 = 44;
          }
          v48 = v103;
        }
        if ( v48 >= v102 )
        {
          v79 = (_QWORD *)sub_26239D0(v101, 34);
        }
        else
        {
          v79 = v101;
          v103 = v48 + 1;
          *v48 = 34;
        }
        sub_26110E0(&v104, *v78, v78[1], 1);
        v80 = sub_26240F0(v79, v104, v105);
        v81 = *(_BYTE **)(v80 + 32);
        if ( (unsigned __int64)v81 < *(_QWORD *)(v80 + 24) )
        {
          *(_QWORD *)(v80 + 32) = v81 + 1;
          *v81 = 34;
        }
        else
        {
          sub_26239D0(v80, 34);
        }
        if ( v104 != v106 )
          operator delete(v104, *(_QWORD *)&v106[0] + 1LL);
        v78 += 4;
        v48 = v103;
        ++v77;
      }
      while ( &a7[4 * a8] != v78 );
    }
  }
  if ( a10 )
  {
    if ( (unsigned __int64)(v102 - v48) <= 0x18 )
    {
      sub_26240F0(v101, "],\"unsaved_file_hashes\":[", 25);
      v48 = v103;
    }
    else
    {
      *(__m128i *)v48 = _mm_load_si128((const __m128i *)&xmmword_3C7E530);
      *(__m128i *)(v48 + 9) = _mm_load_si128((const __m128i *)&xmmword_3C7E540);
      v48 = v103 + 25;
      v103 += 25;
    }
    v58 = a9;
    v86 = a9 + 24 * a10;
    if ( v86 != a9 )
    {
      v84 = 0;
      do
      {
        if ( v84 )
        {
          if ( v48 >= v102 )
          {
            sub_26239D0(v101, 44);
          }
          else
          {
            v103 = v48 + 1;
            *v48 = 44;
          }
          v48 = v103;
        }
        if ( v48 < v102 )
        {
          v103 = v48 + 1;
          *v48 = 123;
        }
        else
        {
          sub_26239D0(v101, 123);
        }
        v59 = *(const char **)v58;
        v60 = 0;
        if ( *(_QWORD *)v58 )
          v60 = strlen(*(const char **)v58);
        v61 = v60;
        if ( v102 == v103 )
        {
          v62 = (_QWORD *)sub_26240F0(v101, "\"", 1);
          v63 = (_DWORD *)v62[4];
        }
        else
        {
          *v103 = 34;
          v62 = v101;
          v63 = ++v103;
        }
        if ( v62[3] - (_QWORD)v63 <= 3u )
        {
          v62 = (_QWORD *)sub_26240F0(v62, "name", 4);
          v64 = v62[4];
          if ( (unsigned __int64)(v62[3] - v64) <= 2 )
          {
LABEL_133:
            sub_26240F0(v62, "\":\"", 3);
            goto LABEL_99;
          }
        }
        else
        {
          *v63 = 1701667182;
          v64 = v62[4] + 4LL;
          v65 = v62[3] - v64;
          v62[4] = v64;
          if ( v65 <= 2 )
            goto LABEL_133;
        }
        *(_BYTE *)(v64 + 2) = 34;
        *(_WORD *)v64 = 14882;
        v62[4] += 3LL;
LABEL_99:
        sub_26110E0(&v104, v59, v61, 1);
        v66 = sub_26240F0(v101, v104, v105);
        v67 = *(_BYTE **)(v66 + 32);
        if ( (unsigned __int64)v67 >= *(_QWORD *)(v66 + 24) )
        {
          sub_26239D0(v66, 34);
        }
        else
        {
          *(_QWORD *)(v66 + 32) = v67 + 1;
          *v67 = 34;
        }
        if ( v104 != v106 )
          operator delete(v104, *(_QWORD *)&v106[0] + 1LL);
        v68 = v103;
        if ( v103 >= v102 )
        {
          sub_26239D0(v101, 44);
        }
        else
        {
          ++v103;
          *v68 = 44;
        }
        sub_25CE9E0(&v104);
        sub_25CEC20(&v104, *(_QWORD *)(v58 + 8));
        sub_25CEE40(&v104, v94);
        sub_25CF020(v98, v94);
        v69 = v98[0];
        v70 = v98[1];
        if ( v102 == v103 )
        {
          v71 = (_QWORD *)sub_26240F0(v101, "\"", 1);
          v72 = (_BYTE *)v71[4];
        }
        else
        {
          *v103 = 34;
          v71 = v101;
          v72 = ++v103;
        }
        if ( v71[3] - (_QWORD)v72 <= 2u )
        {
          v71 = (_QWORD *)sub_26240F0(v71, "md5", 3);
          v73 = v71[4];
        }
        else
        {
          v72[2] = 53;
          *(_WORD *)v72 = 25709;
          v73 = v71[4] + 3LL;
          v71[4] = v73;
        }
        if ( (unsigned __int64)(v71[3] - v73) <= 2 )
        {
          sub_26240F0(v71, "\":\"", 3);
        }
        else
        {
          *(_BYTE *)(v73 + 2) = 34;
          *(_WORD *)v73 = 14882;
          v71[4] += 3LL;
        }
        sub_26110E0(v95, v69, v70, 1);
        v74 = sub_26240F0(v101, v95[0], v95[1]);
        v75 = *(_BYTE **)(v74 + 32);
        if ( (unsigned __int64)v75 >= *(_QWORD *)(v74 + 24) )
        {
          sub_26239D0(v74, 34);
        }
        else
        {
          *(_QWORD *)(v74 + 32) = v75 + 1;
          *v75 = 34;
        }
        if ( v95[0] != &v96 )
          operator delete(v95[0], v96 + 1);
        v76 = v103;
        if ( v103 >= v102 )
        {
          sub_26239D0(v101, 125);
        }
        else
        {
          ++v103;
          *v76 = 125;
        }
        if ( v98[0] != &v99 )
          free(v98[0]);
        ++v84;
        v48 = v103;
        v58 += 24;
      }
      while ( v86 != v58 );
    }
  }
  if ( (unsigned __int64)(v102 - v48) <= 1 )
  {
    sub_26240F0(v101, "]}", 2);
  }
  else
  {
    *(_WORD *)v48 = 32093;
    v103 += 2;
  }
  sub_26235D0(v101);
  if ( ptr != dest )
    goto LABEL_7;
}

