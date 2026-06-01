__int64 __fastcall sub_18620(unsigned __int64 *a1)
{
  int v1; // eax
  char *v2; // r13
  unsigned int v3; // eax
  __int64 v4; // r14
  size_t v5; // rbx
  char *v6; // rdi
  unsigned __int64 v7; // rbp
  const void *v8; // rsi
  unsigned int v9; // r13d
  char *v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 v13; // rbp
  char *v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  char *v20; // r13
  char *v21; // rsi
  signed __int64 v22; // rdx
  char v23; // al
  char *v24; // r12
  const char *v25; // rbp
  __m128i *v26; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i *v29; // r14
  const char *v30; // rdi
  const char *v31; // rdi
  const char *v32; // rdi
  const char *v33; // rdi
  __int64 i; // rax
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // rbp
  void *v38; // r14
  unsigned __int64 v39; // rbp
  void *v40; // rdi
  __m128i v41; // xmm0
  char *v42; // rdi
  __int64 v43; // r15
  char *v44; // r12
  void *v45; // rdi
  char *v46; // rdi
  __int64 v47; // r13
  __int64 v48; // rbp
  __int64 j; // rbx
  char *v50; // r14
  void *v51; // rdi
  void *v52; // rdi
  void *v53; // rdi
  void *v54; // rdi
  size_t v55; // rbx
  void *v56; // rbp
  _QWORD *v57; // rdi
  __m128i si128; // xmm0
  const char *v59; // rdi
  void *v60; // r15
  __int64 v61; // rax
  __int64 v62; // rax
  void *v63; // r14
  unsigned __int64 v64; // r8
  size_t v65; // r11
  void *v66; // rbp
  _QWORD *v67; // rdx
  __int64 v68; // rsi
  __m128i v69; // xmm0
  __int16 v70; // cx
  __int64 v71; // rax
  int v72; // edx
  __int64 v73; // rax
  __m128i v74; // xmm0
  void *v75; // rcx
  __m128i v76; // xmm0
  __int64 v77; // rax
  size_t v78; // rbp
  size_t v79; // r14
  void *v80; // rax
  const void *v81; // rsi
  size_t v82; // r14
  const char *v83; // rdi
  const char *v84; // rdi
  const void *v85; // r8
  void *v86; // rax
  const void *v87; // r8
  void *v88; // rax
  const void *v89; // r8
  void *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rsi
  __int32 v97; // eax
  void *ptr[2]; // [rsp+0h] [rbp-258h] BYREF
  __m128i v99; // [rsp+18h] [rbp-240h] BYREF
  __m128i v100; // [rsp+28h] [rbp-230h] BYREF
  __int16 v101; // [rsp+3Eh] [rbp-21Ah]
  void **v102; // [rsp+40h] [rbp-218h]
  size_t n; // [rsp+48h] [rbp-210h]
  unsigned __int64 v104; // [rsp+50h] [rbp-208h]
  size_t v105; // [rsp+58h] [rbp-200h]
  void *src[2]; // [rsp+60h] [rbp-1F8h] BYREF
  void *v107; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v108; // [rsp+78h] [rbp-1E0h]
  int v109; // [rsp+92h] [rbp-1C6h]
  __int16 v110; // [rsp+96h] [rbp-1C2h]
  void *v111; // [rsp+100h] [rbp-158h] BYREF
  __int128 v112; // [rsp+108h] [rbp-150h]
  __m128i v113; // [rsp+118h] [rbp-140h] BYREF
  __m128i v114; // [rsp+128h] [rbp-130h] BYREF
  __m128i v115; // [rsp+138h] [rbp-120h] BYREF
  __m128i v116; // [rsp+148h] [rbp-110h] BYREF
  __m128i v117; // [rsp+158h] [rbp-100h] BYREF
  __m128i v118; // [rsp+168h] [rbp-F0h] BYREF
  __m128i v119; // [rsp+178h] [rbp-E0h] BYREF
  __m128i v120; // [rsp+188h] [rbp-D0h] BYREF
  __m128i v121; // [rsp+198h] [rbp-C0h] BYREF
  __m128i v122; // [rsp+1A8h] [rbp-B0h] BYREF
  __m128i v123; // [rsp+1B8h] [rbp-A0h] BYREF
  __m128i v124; // [rsp+1C8h] [rbp-90h] BYREF
  __m128i v125; // [rsp+1D8h] [rbp-80h] BYREF
  _BYTE v126[24]; // [rsp+1E8h] [rbp-70h] BYREF
  void *v127; // [rsp+200h] [rbp-58h]
  size_t v128[2]; // [rsp+208h] [rbp-50h]
  unsigned __int64 v129; // [rsp+218h] [rbp-40h]

  v129 = __readfsqword(0x28u);
  v112 = 0;
  v111 = nullptr;
  v127 = nullptr;
  *(_OWORD *)v128 = 0;
  if ( (dword_7BCA4 & 0x200) != 0 )
    sub_15E90((__int64 (__fastcall ***)(_QWORD))"Decrypt borrowed bunch of licenses, size=%zu\n", a1[1]);
  *(__m128i *)src = _mm_unpacklo_epi64((__m128i)*a1, (__m128i)(*a1 + a1[1]));
  v1 = sub_15F60((__int64 *)src, "received licenses");
  if ( v1 == -1 )
    goto LABEL_14;
  if ( v1 <= 1 )
    sub_C550((__int64)src, (__int64)"received licenses");
  v2 = (char *)src[1];
  v107 = nullptr;
  v108 = 0;
  v3 = sub_28F80(src, src[1]);
  if ( v3 )
  {
    v4 = v108;
    v5 = v3;
    v6 = (char *)v107;
    v7 = v108 + v3;
    if ( *((_QWORD *)&v108 + 1) < v7 )
    {
      v107 = (void *)sub_29E60(&v107, v107, v7, 1);
      v6 = (char *)v107;
    }
    v8 = src[0];
    *(_QWORD *)&v108 = v7;
    if ( __CFADD__(v5, src[0]) || v2 < (char *)src[0] + v5 )
      goto LABEL_12;
    src[0] = (char *)src[0] + v5;
    if ( !memcpy(&v6[v4], v8, v5) )
    {
      v6 = (char *)v107;
      goto LABEL_12;
    }
  }
  v23 = sub_160B0((__int64)&v111, (unsigned __int64 *)&v107);
  v6 = (char *)v107;
  if ( !v23 )
  {
LABEL_12:
    if ( v6 )
    {
      *(_QWORD *)&v108 = 0;
      j__free(v6);
    }
LABEL_14:
    v9 = 0;
    goto LABEL_15;
  }
  if ( v107 )
  {
    *(_QWORD *)&v108 = 0;
    j__free(v107);
  }
  if ( (dword_7BCA4 & 0x200) != 0 )
    sub_15E90((__int64 (__fastcall ***)(_QWORD))"Decrypted\n");
  v107 = nullptr;
  v102 = &v107;
  v108 = 0;
  if ( !(unsigned __int8)sub_17760(&v107) )
    goto LABEL_45;
  v20 = (char *)v107;
  v21 = (char *)v107 + 280 * v108;
  v22 = 0xAF8AF8AF8AF8AF8BLL * ((280 * (__int64)v108) >> 3);
  if ( v22 >> 2 > 0 )
  {
    while ( v114.m128i_i32[3] != *((_DWORD *)v20 + 13) || v115.m128i_i16[0] != *((_WORD *)v20 + 28) )
    {
      if ( v114.m128i_i32[3] == *((_DWORD *)v20 + 83) && v115.m128i_i16[0] == *((_WORD *)v20 + 168) )
      {
        v20 += 280;
        if ( v21 == v20 )
          goto LABEL_45;
        goto LABEL_51;
      }
      if ( v114.m128i_i32[3] == *((_DWORD *)v20 + 153) && v115.m128i_i16[0] == *((_WORD *)v20 + 308) )
      {
        v20 += 560;
        if ( v21 == v20 )
          goto LABEL_45;
        if ( *((_QWORD *)v20 + 33) )
          goto LABEL_52;
        goto LABEL_112;
      }
      if ( v114.m128i_i32[3] == *((_DWORD *)v20 + 223) && v115.m128i_i16[0] == *((_WORD *)v20 + 448) )
      {
        v20 += 840;
        if ( v21 != v20 )
          goto LABEL_51;
        goto LABEL_45;
      }
      v20 += 1120;
      if ( v20 == (char *)v107 + 1120 * (v22 >> 2) )
      {
        v22 = 0xAF8AF8AF8AF8AF8BLL * ((v21 - v20) >> 3);
        goto LABEL_159;
      }
    }
    goto LABEL_43;
  }
LABEL_159:
  v97 = v114.m128i_i32[3];
  if ( v22 == 2 )
    goto LABEL_168;
  if ( v22 == 3 )
  {
    v97 = v114.m128i_i32[3];
    if ( v114.m128i_i32[3] == *((_DWORD *)v20 + 13) && v115.m128i_i16[0] == *((_WORD *)v20 + 28) )
      goto LABEL_43;
    v20 += 280;
LABEL_168:
    if ( v97 == *((_DWORD *)v20 + 13) && v115.m128i_i16[0] == *((_WORD *)v20 + 28) )
      goto LABEL_43;
    v20 += 280;
    goto LABEL_163;
  }
  if ( v22 != 1 )
  {
LABEL_45:
    v20 = sub_17460((char **)v102);
    *(__m128i *)(v20 + 24) = _mm_loadu_si128(&v113);
    *(__m128i *)(v20 + 40) = _mm_loadu_si128(&v114);
    *(__m128i *)(v20 + 56) = _mm_loadu_si128(&v115);
    *(__m128i *)(v20 + 72) = _mm_loadu_si128(&v116);
    *(__m128i *)(v20 + 88) = _mm_loadu_si128(&v117);
    *(__m128i *)(v20 + 104) = _mm_loadu_si128(&v118);
    *(__m128i *)(v20 + 120) = _mm_loadu_si128(&v119);
    *(__m128i *)(v20 + 136) = _mm_loadu_si128(&v120);
    *(__m128i *)(v20 + 152) = _mm_loadu_si128(&v121);
    *(__m128i *)(v20 + 168) = _mm_loadu_si128(&v122);
    *(__m128i *)(v20 + 184) = _mm_loadu_si128(&v123);
    *(__m128i *)(v20 + 200) = _mm_loadu_si128(&v124);
    *(__m128i *)(v20 + 216) = _mm_loadu_si128(&v125);
    *(__m128i *)(v20 + 232) = _mm_loadu_si128((const __m128i *)v126);
    *(_QWORD *)(v20 + 246) = *(_QWORD *)&v126[14];
    goto LABEL_51;
  }
  v97 = v114.m128i_i32[3];
LABEL_163:
  if ( v97 != *((_DWORD *)v20 + 13) || v115.m128i_i16[0] != *((_WORD *)v20 + 28) )
    goto LABEL_45;
LABEL_43:
  if ( v21 == v20 || !v20 )
    goto LABEL_45;
LABEL_51:
  if ( !*((_QWORD *)v20 + 33) )
  {
LABEL_112:
    v55 = v128[0];
    v56 = nullptr;
    if ( v128[0] )
    {
      v56 = (void *)sub_29E10(v128[0]);
      memcpy(v56, v127, v55);
    }
    v57 = *((_QWORD **)v20 + 32);
    si128 = _mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
    if ( v57 )
    {
      *((_QWORD *)v20 + 33) = 0;
      *(__m128i *)ptr = si128;
      j__free(v57);
      si128 = _mm_load_si128((const __m128i *)ptr);
    }
    *((_QWORD *)v20 + 32) = v56;
    *(__m128i *)(v20 + 264) = si128;
  }
LABEL_52:
  v24 = (char *)v111;
  v99.m128i_i64[1] = (__int64)v111 + 112 * v112;
  if ( (void *)v99.m128i_i64[1] != v111 )
  {
    while ( 1 )
    {
      v25 = s1;
      v99.m128i_i64[0] = *((_QWORD *)v24 + 2);
      if ( v99.m128i_i64[0] )
        v25 = *((const char **)v24 + 1);
      v26 = *(__m128i **)v20;
      v27 = 112LL * *((_QWORD *)v20 + 1);
      ptr[0] = (void *)(*(_QWORD *)v20 + v27);
      v28 = 0x6DB6DB6DB6DB6DB7LL * (v27 >> 4);
      if ( v28 >> 2 > 0 )
      {
        v29 = &v26[28 * (v28 >> 2)];
        while ( 1 )
        {
          v33 = s1;
          if ( v26[1].m128i_i64[0] )
            v33 = (const char *)v26->m128i_i64[1];
          if ( !strcmp(v33, v25) )
            goto LABEL_70;
          v30 = s1;
          if ( v26[8].m128i_i64[0] )
            v30 = (const char *)v26[7].m128i_i64[1];
          if ( !strcmp(v30, v25) )
          {
            v26 += 7;
            goto LABEL_70;
          }
          v31 = s1;
          if ( v26[15].m128i_i64[0] )
            v31 = (const char *)v26[14].m128i_i64[1];
          if ( !strcmp(v31, v25) )
          {
            v26 += 14;
            goto LABEL_70;
          }
          v32 = s1;
          if ( v26[22].m128i_i64[0] )
            v32 = (const char *)v26[21].m128i_i64[1];
          if ( !strcmp(v32, v25) )
          {
            v26 += 21;
            goto LABEL_70;
          }
          v26 += 28;
          if ( v26 == v29 )
          {
            v28 = 0x6DB6DB6DB6DB6DB7LL * (((char *)ptr[0] - (char *)v26) >> 4);
            break;
          }
        }
      }
      if ( v28 == 2 )
        goto LABEL_145;
      if ( v28 == 3 )
        break;
      if ( v28 != 1 )
        goto LABEL_127;
LABEL_124:
      v59 = s1;
      if ( v26[1].m128i_i64[0] )
        v59 = (const char *)v26->m128i_i64[1];
      if ( strcmp(v59, v25) )
      {
LABEL_127:
        v60 = nullptr;
        v101 = *(_WORD *)v24;
        v109 = *(_DWORD *)(v24 + 2);
        v110 = *((_WORD *)v24 + 3);
        if ( v99.m128i_i64[0] )
        {
          v82 = v99.m128i_i64[0];
          v60 = (void *)sub_29E10(v99.m128i_i64[0]);
          memcpy(v60, *((const void **)v24 + 1), v82);
        }
        v61 = *((_QWORD *)v24 + 5);
        ptr[0] = nullptr;
        v100.m128i_i64[0] = v61;
        if ( v61 )
        {
          v79 = v61;
          v80 = (void *)sub_29E10(v61);
          v81 = *((const void **)v24 + 4);
          ptr[0] = v80;
          memcpy(v80, v81, v79);
        }
        v62 = *((_QWORD *)v24 + 8);
        v63 = nullptr;
        v100.m128i_i64[1] = v62;
        if ( v62 )
        {
          v78 = v62;
          v63 = (void *)sub_29E10(v62);
          memcpy(v63, *((const void **)v24 + 7), v78);
        }
        v64 = *((_QWORD *)v24 + 12);
        v65 = *((_QWORD *)v24 + 10);
        v66 = nullptr;
        if ( v64 )
        {
          v105 = *((_QWORD *)v24 + 10);
          v104 = v64;
          n = 40 * v64;
          v66 = (void *)sub_29E10(40 * v64);
          memcpy(v66, *((const void **)v24 + 11), n);
          v65 = v105;
          v64 = v104;
        }
        v67 = *((_QWORD **)v20 + 1);
        v68 = *(_QWORD *)v20;
        if ( *((_QWORD *)v20 + 2) < (unsigned __int64)v67 + 1 )
        {
          v104 = v64;
          n = v65;
          v77 = sub_29E60(v20, v68, (char *)v67 + 1, 112);
          v67 = *((_QWORD **)v20 + 1);
          v64 = v104;
          *(_QWORD *)v20 = v77;
          v68 = v77;
          v65 = n;
        }
        v69 = _mm_loadl_epi64(&v99);
        v70 = v101;
        v71 = 7LL * (_QWORD)v67;
        v72 = v109;
        v73 = v68 + 16 * v71;
        *(__m128i *)(v73 + 16) = _mm_unpacklo_epi64(v69, v69);
        v74 = _mm_loadl_epi64(&v100);
        *(_WORD *)v73 = v70;
        v75 = ptr[0];
        *(_DWORD *)(v73 + 2) = v72;
        LOWORD(v72) = v110;
        *(__m128i *)(v73 + 40) = _mm_unpacklo_epi64(v74, v74);
        v76 = _mm_loadl_epi64((const __m128i *)&v100.m128i_u64[1]);
        *(_WORD *)(v73 + 6) = v72;
        *(_QWORD *)(v73 + 8) = v60;
        *(__m128i *)(v73 + 64) = _mm_unpacklo_epi64(v76, v76);
        *(_QWORD *)(v73 + 32) = v75;
        *(_QWORD *)(v73 + 56) = v63;
        *(_QWORD *)(v73 + 80) = v65;
        *(_QWORD *)(v73 + 88) = v66;
        *(__m128i *)(v73 + 96) = _mm_unpacklo_epi64((__m128i)v64, (__m128i)v64);
        ++*((_QWORD *)v20 + 1);
        goto LABEL_87;
      }
LABEL_70:
      if ( ptr[0] == v26 )
        goto LABEL_127;
      v26->m128i_i16[0] = *(_WORD *)v24;
      for ( i = 2; i != 8; ++i )
        v26->m128i_i8[i] = v24[i];
      if ( &v26->m128i_u64[1] != (unsigned __int64 *)(v24 + 8) )
      {
        v35 = *((_QWORD *)v24 + 2);
        if ( v35 > 1 )
        {
          v89 = *((const void **)v24 + 1);
          v90 = (void *)v26->m128i_i64[1];
          if ( v26[1].m128i_i64[1] < v35 )
          {
            v91 = *((_QWORD *)v24 + 2);
            v92 = v26->m128i_i64[1];
            ptr[0] = *((void **)v24 + 1);
            v90 = (void *)sub_29E60(&v26->m128i_u64[1], v92, v91, 1);
            v26->m128i_i64[1] = (__int64)v90;
            v89 = ptr[0];
          }
          v26[1].m128i_i64[0] = v35;
          memmove(v90, v89, v35 - 1);
          *(_BYTE *)(v26->m128i_i64[1] + v35 - 1) = 0;
        }
        else
        {
          v26[1].m128i_i64[0] = 0;
        }
      }
      if ( &v26[2] != (__m128i *)(v24 + 32) )
      {
        v36 = *((_QWORD *)v24 + 5);
        if ( v36 > 1 )
        {
          v85 = *((const void **)v24 + 4);
          v86 = (void *)v26[2].m128i_i64[0];
          if ( v26[3].m128i_i64[0] < v36 )
          {
            v95 = *((_QWORD *)v24 + 5);
            v96 = v26[2].m128i_i64[0];
            ptr[0] = *((void **)v24 + 4);
            v86 = (void *)sub_29E60(&v26[2], v96, v95, 1);
            v26[2].m128i_i64[0] = (__int64)v86;
            v85 = ptr[0];
          }
          v26[2].m128i_i64[1] = v36;
          memmove(v86, v85, v36 - 1);
          *(_BYTE *)(v26[2].m128i_i64[0] + v36 - 1) = 0;
        }
        else
        {
          v26[2].m128i_i64[1] = 0;
        }
      }
      if ( &v26[3].m128i_u64[1] != (unsigned __int64 *)(v24 + 56) )
      {
        v37 = *((_QWORD *)v24 + 8);
        if ( v37 > 1 )
        {
          v87 = *((const void **)v24 + 7);
          v88 = (void *)v26[3].m128i_i64[1];
          if ( v26[4].m128i_i64[1] < v37 )
          {
            v93 = *((_QWORD *)v24 + 8);
            v94 = v26[3].m128i_i64[1];
            ptr[0] = *((void **)v24 + 7);
            v88 = (void *)sub_29E60(&v26[3].m128i_u64[1], v94, v93, 1);
            v26[3].m128i_i64[1] = (__int64)v88;
            v87 = ptr[0];
          }
          v26[4].m128i_i64[0] = v37;
          memmove(v88, v87, v37 - 1);
          *(_BYTE *)(v26[3].m128i_i64[1] + v37 - 1) = 0;
        }
        else
        {
          v26[4].m128i_i64[0] = 0;
        }
      }
      v38 = nullptr;
      v26[5].m128i_i64[0] = *((_QWORD *)v24 + 10);
      v39 = *((_QWORD *)v24 + 12);
      if ( v39 )
      {
        ptr[0] = (void *)(40 * v39);
        v38 = (void *)sub_29E10(40 * v39);
        memcpy(v38, *((const void **)v24 + 11), (size_t)ptr[0]);
      }
      v40 = (void *)v26[5].m128i_i64[1];
      v41 = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v39);
      if ( v40 )
      {
        v26[6].m128i_i64[0] = 0;
        *(__m128i *)ptr = v41;
        j__free(v40);
        v41 = _mm_load_si128((const __m128i *)ptr);
      }
      v26[5].m128i_i64[1] = (__int64)v38;
      v26[6] = v41;
LABEL_87:
      v24 += 112;
      if ( (char *)v99.m128i_i64[1] == v24 )
        goto LABEL_88;
    }
    v83 = s1;
    if ( v26[1].m128i_i64[0] )
      v83 = (const char *)v26->m128i_i64[1];
    if ( !strcmp(v83, v25) )
      goto LABEL_70;
    v26 += 7;
LABEL_145:
    v84 = s1;
    if ( v26[1].m128i_i64[0] )
      v84 = (const char *)v26->m128i_i64[1];
    if ( !strcmp(v84, v25) )
      goto LABEL_70;
    v26 += 7;
    goto LABEL_124;
  }
LABEL_88:
  sub_16CA0((__int64 *)v102);
  v42 = (char *)v107;
  if ( v107 )
  {
    if ( (_QWORD)v108 )
    {
      ptr[0] = nullptr;
      v43 = 0;
      v99.m128i_i64[0] = v108;
      do
      {
        v44 = &v42[v43];
        v45 = *(void **)&v42[v43 + 256];
        if ( v45 )
        {
          *((_QWORD *)v44 + 33) = 0;
          j__free(v45);
        }
        v46 = *(char **)v44;
        if ( *(_QWORD *)v44 )
        {
          v47 = *((_QWORD *)v44 + 1);
          if ( v47 )
          {
            v48 = 0;
            for ( j = 0; j != v47; ++j )
            {
              v50 = &v46[v48];
              v51 = *(void **)&v46[v48 + 88];
              if ( v51 )
              {
                *((_QWORD *)v50 + 12) = 0;
                j__free(v51);
              }
              v52 = *((void **)v50 + 7);
              if ( v52 )
              {
                *((_QWORD *)v50 + 8) = 0;
                j__free(v52);
              }
              v53 = *((void **)v50 + 4);
              if ( v53 )
              {
                *((_QWORD *)v50 + 5) = 0;
                j__free(v53);
              }
              v54 = *((void **)v50 + 1);
              if ( v54 )
              {
                *((_QWORD *)v50 + 2) = 0;
                j__free(v54);
              }
              v46 = *(char **)v44;
              v48 += 112;
            }
          }
          *((_QWORD *)v44 + 1) = 0;
          j__free(v46);
        }
        ++ptr[0];
        v42 = (char *)v107;
        v43 += 280;
      }
      while ( (void *)v99.m128i_i64[0] != ptr[0] );
    }
    *(_QWORD *)&v108 = 0;
    j__free(v42);
  }
  v9 = 1;
LABEL_15:
  if ( v127 )
  {
    v128[0] = 0;
    j__free(v127);
  }
  v10 = (char *)v111;
  if ( v111 )
  {
    v11 = v112;
    if ( (_QWORD)v112 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = &v10[v12];
        v15 = *(void **)&v10[v12 + 88];
        if ( v15 )
        {
          *((_QWORD *)v14 + 12) = 0;
          j__free(v15);
        }
        v16 = *((void **)v14 + 7);
        if ( v16 )
        {
          *((_QWORD *)v14 + 8) = 0;
          j__free(v16);
        }
        v17 = *((void **)v14 + 4);
        if ( v17 )
        {
          *((_QWORD *)v14 + 5) = 0;
          j__free(v17);
        }
        v18 = *((void **)v14 + 1);
        if ( v18 )
        {
          *((_QWORD *)v14 + 2) = 0;
          j__free(v18);
        }
        ++v13;
        v10 = (char *)v111;
        v12 += 112;
      }
      while ( v11 != v13 );
    }
    *(_QWORD *)&v112 = 0;
    j__free(v10);
  }
  return v9;
}

