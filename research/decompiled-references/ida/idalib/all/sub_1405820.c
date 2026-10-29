__int64 __fastcall sub_1405820(const __m128i *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rbx
  size_t v7; // rax
  __m128i si128; // xmm0
  void *v9; // r13
  size_t v10; // rdx
  size_t v11; // r12
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rdx
  __int64 v14; // rdx
  __int64 result; // rax
  int v16; // r14d
  __int64 v17; // rdx
  _BYTE *v18; // r12
  unsigned __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  char v25; // dl
  unsigned __int64 v26; // r14
  char *v27; // r15
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rsi
  size_t v31; // rdx
  std::_V2 *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rsi
  void (__fastcall *v36)(__m128 *, __int64, void **, int *); // rax
  unsigned __int8 v37; // r14
  _QWORD *i; // r12
  char *v39; // rbp
  unsigned __int64 v40; // rbx
  size_t v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  int v44; // eax
  __int64 v45; // rdx
  bool v46; // zf
  volatile signed __int32 *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // r14
  int v51; // r14d
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  size_t v56; // r12
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rbp
  char *v59; // rax
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // r10
  unsigned __int64 v64; // r14
  void *v65; // rax
  __int64 v66; // r12
  size_t v67; // rdx
  __int64 v68; // r13
  __int64 v69; // r12
  __int64 v70; // rax
  size_t v71; // rbx
  void *v72; // r12
  __int64 v73; // r9
  int v74; // eax
  int v75; // eax
  int v76; // eax
  char v77; // al
  char v78; // al
  size_t v79; // rax
  unsigned __int8 v80; // al
  unsigned __int64 v81; // rax
  _QWORD *v82; // r10
  unsigned __int64 v83; // rax
  void *v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  char v88; // dl
  _QWORD *v89; // r14
  int v90; // eax
  __int64 v91; // rax
  int v92; // [rsp-8h] [rbp-340h]
  size_t n; // [rsp+0h] [rbp-338h]
  size_t nb; // [rsp+0h] [rbp-338h]
  unsigned int na; // [rsp+0h] [rbp-338h]
  size_t nc; // [rsp+0h] [rbp-338h]
  size_t nd; // [rsp+0h] [rbp-338h]
  unsigned __int8 *s2; // [rsp+10h] [rbp-328h]
  unsigned __int8 v100; // [rsp+20h] [rbp-318h]
  __int64 v101; // [rsp+20h] [rbp-318h]
  unsigned __int8 v102; // [rsp+2Ch] [rbp-30Ch]
  char v103; // [rsp+30h] [rbp-308h]
  char v104; // [rsp+34h] [rbp-304h]
  __int64 v105; // [rsp+40h] [rbp-2F8h]
  _QWORD *v106; // [rsp+48h] [rbp-2F0h]
  __int64 v107; // [rsp+48h] [rbp-2F0h]
  _QWORD *v108; // [rsp+48h] [rbp-2F0h]
  __int64 *m128i_i64; // [rsp+58h] [rbp-2E0h]
  __int64 v110; // [rsp+60h] [rbp-2D8h]
  int v111; // [rsp+68h] [rbp-2D0h]
  _BYTE *v112; // [rsp+68h] [rbp-2D0h]
  unsigned __int64 v113; // [rsp+78h] [rbp-2C0h] BYREF
  int v114; // [rsp+80h] [rbp-2B8h] BYREF
  __int64 v115; // [rsp+88h] [rbp-2B0h]
  _QWORD *v116[4]; // [rsp+90h] [rbp-2A8h] BYREF
  __int16 v117; // [rsp+B0h] [rbp-288h]
  char *v118; // [rsp+C0h] [rbp-278h] BYREF
  unsigned __int64 v119; // [rsp+C8h] [rbp-270h]
  char *v120; // [rsp+D0h] [rbp-268h]
  __int16 v121; // [rsp+E0h] [rbp-258h]
  __m128 v122; // [rsp+F0h] [rbp-248h] BYREF
  __int16 v123; // [rsp+110h] [rbp-228h]
  void *ptr; // [rsp+120h] [rbp-218h] BYREF
  __m128i v125; // [rsp+128h] [rbp-210h]
  _BYTE v126[40]; // [rsp+138h] [rbp-200h] BYREF
  void *v127; // [rsp+160h] [rbp-1D8h] BYREF
  size_t v128; // [rsp+168h] [rbp-1D0h]
  _QWORD v129[2]; // [rsp+170h] [rbp-1C8h] BYREF
  __int16 v130; // [rsp+180h] [rbp-1B8h] BYREF
  void *v131; // [rsp+1C0h] [rbp-178h] BYREF
  __m128i v132; // [rsp+1C8h] [rbp-170h]
  _QWORD v133[2]; // [rsp+1D8h] [rbp-160h] BYREF
  char v134; // [rsp+1E8h] [rbp-150h] BYREF
  void *v135; // [rsp+260h] [rbp-D8h] BYREF
  size_t v136; // [rsp+268h] [rbp-D0h]
  __int64 v137; // [rsp+270h] [rbp-C8h]
  __int64 *v138; // [rsp+278h] [rbp-C0h] BYREF
  __int64 v139; // [rsp+280h] [rbp-B8h]
  __int64 v140; // [rsp+288h] [rbp-B0h] BYREF

  v6 = (__int64)a1;
  v102 = a3 & 1;
  v100 = (a3 & 2) != 0;
  v103 = (a3 & 4) != 0;
  v104 = (a3 & 8) != 0;
  v7 = sub_FDBEF0(*(_QWORD *)(a1->m128i_i64[0] + 16), a2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  v9 = (void *)v7;
  v11 = v10;
  v125 = si128;
  ptr = v126;
  v12 = (unsigned __int8 *)sub_228AAA0(v7, v10, 0);
  s2 = sub_13F4A30(v12, v13, (unsigned __int8 **)&ptr);
  n = v14;
  result = sub_13F8D70((__int64)a1, (__int64)s2, v14, a4);
  if ( result )
    goto LABEL_2;
  v105 = *(_QWORD *)(a1->m128i_i64[0] + 16);
  if ( !a4 )
  {
    v135 = v9;
    LOWORD(v139) = 261;
    v136 = v11;
    if ( !(unsigned __int8)sub_228ACE0(&v135, 0) )
      goto LABEL_63;
    v118 = (char *)sub_228A4B0(v9, v11, 0);
    v119 = v62;
    v63 = sub_1366810(v105, v118, v62, 1);
    if ( !v63 )
      goto LABEL_63;
    v106 = (_QWORD *)v63;
    m128i_i64 = a1[31].m128i_i64;
    v64 = sub_13F9B60((__int64)a1[31].m128i_i64, *(_QWORD *)(v63 + 8));
    if ( v64 == sub_13F9B20((__int64)a1[31].m128i_i64) )
    {
      v79 = j__strlen(".framework");
      v80 = sub_9EC680(&v118, ".framework", v79);
      v81 = sub_13C3EC0((__int64 *)a1[2].m128i_i64[0], v106, v80);
      v82 = v106;
      if ( v81 )
      {
        sub_1405000(a1, v81, v102, (__int64)v106, 0, 0, si128, 0);
        v83 = sub_13F9B60((__int64)m128i_i64, v106[1]);
        v82 = v106;
        v64 = v83;
      }
      v108 = v82;
      if ( v64 == sub_13F9B20((__int64)m128i_i64) )
      {
        BYTE4(v127) &= 0xF0u;
        v129[0] = &v130;
        LOBYTE(v127) = (unsigned __int8)v127 & 0xFE;
        v132.m128i_i8[0] &= ~1u;
        *(__int64 *)((char *)v132.m128i_i64 + 4) = HIDWORD(v127);
        v131 = v108;
        v133[0] = &v134;
        v84 = (void *)v108[1];
        HIDWORD(v136) = HIDWORD(v127);
        v135 = v84;
        LOBYTE(v136) = v136 & 0xFE;
        LODWORD(v128) = 0;
        v129[1] = 0x200000000LL;
        v133[1] = 0x200000000LL;
        LODWORD(v137) = 0;
        v138 = &v140;
        v139 = 0x200000000LL;
        if ( (unsigned __int8)sub_13F8140(m128i_i64, (__int64 *)&v135, v116) )
        {
          sub_13F9AB0(
            &v122,
            v116[0],
            (_QWORD *)(a1[31].m128i_i64[0] + 104LL * a1[32].m128i_u32[0]),
            (__int64)m128i_i64,
            1);
          v64 = v122.m128_u64[0];
        }
        else
        {
          v89 = sub_14047A0((__int64)m128i_i64, (__int64 *)&v135, v116[0], v85, v86, v87);
          *v89 = v135;
          *((_BYTE *)v89 + 8) = v136 & 1 | v89[1] & 0xFE;
          *((_DWORD *)v89 + 3) = HIDWORD(v136);
          v90 = v137;
          v89[4] = 0x200000000LL;
          *((_DWORD *)v89 + 4) = v90;
          v89[3] = v89 + 5;
          if ( (_DWORD)v139 )
            sub_CEFDD0((__int64)(v89 + 3), (__int64)&v138);
          v91 = a1[32].m128i_u32[0];
          v116[0] = v89;
          sub_13F9AB0(&v122, v89, (_QWORD *)(a1[31].m128i_i64[0] + 104 * v91), (__int64)m128i_i64, 1);
          v64 = v122.m128_u64[0];
        }
        sub_13F40A0((__int64)&v138);
        sub_13F40A0((__int64)v133);
        sub_13F40A0((__int64)v129);
      }
    }
    if ( (*(_BYTE *)(v64 + 8) & 1) == 0 )
      goto LABEL_63;
    v65 = (void *)sub_228AAA0(v9, v11, 0);
    v66 = *(unsigned int *)(v64 + 32);
    v135 = v65;
    v136 = v67;
    v68 = *(_QWORD *)(v64 + 24);
    v69 = 32 * v66;
    v110 = v68 + v69;
    v70 = v69 >> 5;
    if ( v69 >> 7 )
    {
      v71 = v136;
      v107 = v68 + (v69 >> 7 << 7);
      v72 = v135;
      do
      {
        if ( *(_QWORD *)(v68 + 8) == v71 && (!v71 || !memcmp(*(const void **)v68, v72, v71)) )
        {
          v77 = *(_BYTE *)(v64 + 12);
          v6 = (__int64)a1;
          v16 = *(_DWORD *)(v64 + 16);
          v102 |= v77 & 1;
          v100 |= (v77 & 2) != 0;
          v104 |= (v77 & 8) != 0;
          v103 |= (v77 & 4) != 0;
          goto LABEL_62;
        }
        v73 = v68 + 32;
        if ( v71 == *(_QWORD *)(v68 + 40)
          && (!v71 || (v74 = memcmp(*(const void **)(v68 + 32), v72, v71), v73 = v68 + 32, !v74))
          || (v73 = v68 + 64, v71 == *(_QWORD *)(v68 + 72))
          && (!v71 || (v75 = memcmp(*(const void **)(v68 + 64), v72, v71), v73 = v68 + 64, !v75))
          || (v73 = v68 + 96, v71 == *(_QWORD *)(v68 + 104))
          && (!v71 || (v76 = memcmp(*(const void **)(v68 + 96), v72, v71), v73 = v68 + 96, !v76)) )
        {
          v78 = *(_BYTE *)(v64 + 12);
          v6 = (__int64)a1;
          v68 = v73;
          v16 = *(_DWORD *)(v64 + 16);
          v102 |= v78 & 1;
          v100 |= (v78 & 2) != 0;
          v104 |= (v78 & 8) != 0;
          v103 |= (v78 & 4) != 0;
          goto LABEL_62;
        }
        v68 += 128;
      }
      while ( v107 != v68 );
      v6 = (__int64)a1;
      v70 = (v110 - v68) >> 5;
    }
    v88 = *(_BYTE *)(v64 + 12);
    v16 = *(_DWORD *)(v64 + 16);
    v102 |= v88 & 1;
    v100 |= (v88 & 2) != 0;
    v104 |= (v88 & 8) != 0;
    v103 |= (v88 & 4) != 0;
    if ( v70 != 2 )
    {
      if ( v70 != 3 )
      {
        if ( v70 != 1 )
        {
          v68 = v110;
          goto LABEL_62;
        }
        goto LABEL_80;
      }
      if ( sub_13F27B0((__int64)&v135, v68) )
        goto LABEL_62;
      v68 += 32;
    }
    if ( sub_13F27B0((__int64)&v135, v68) )
      goto LABEL_62;
    v68 += 32;
LABEL_80:
    if ( !sub_13F27B0((__int64)&v135, v68) )
      goto LABEL_7;
LABEL_62:
    if ( v110 == v68 )
      goto LABEL_7;
LABEL_63:
    result = 0;
    goto LABEL_2;
  }
  v16 = sub_13FA250((__int64)a1, a4);
LABEL_7:
  v17 = *(_QWORD *)a2;
  v18 = (_BYTE *)(a2 + 32);
  v132 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v131 = v133;
  sub_A1FE50(&v131, (_BYTE *)(a2 + 32), (_BYTE *)(a2 + 32 + v17));
  LOWORD(v139) = 257;
  v130 = 257;
  v121 = 773;
  v120 = ".h";
  v118 = (char *)s2;
  v123 = 259;
  v119 = n;
  v122.m128_u64[0] = (unsigned __int64)"Headers";
  sub_228A3B0(&v131, &v122, &v118, &v127, &v135);
  result = sub_12ED8B0(v105, v131, v132.m128i_u64[0], 0, 1u);
  v19 = result;
  if ( result )
  {
    v111 = *(_DWORD *)(v6 + 336);
    *(_DWORD *)(v6 + 336) = v111 + 1;
    v92 = v111;
    v112 = (_BYTE *)sub_13FC0F0((__int64 *)(v6 + 80), 1776, 3u);
    sub_FF1F40((__int64)v112, s2, n, 0, a4, 1, 0, v92);
    v113 = (unsigned __int64)v112;
    v112[905] |= 1u;
    v135 = v112;
    *(_DWORD *)sub_13FFC60(v6 + 520, (__int64 *)&v135, v20, v21, v22, v23) = v16;
    if ( !a4 )
    {
      v49 = *(_QWORD *)(v6 + 16);
      v50 = v113;
      if ( *(_QWORD *)(v49 + 496) == n && (!n || !memcmp(*(const void **)(v49 + 488), s2, n)) )
        *(_QWORD *)(v6 + 72) = v113;
      *(_QWORD *)sub_13FA3B0(v6 + 256, s2, n) = v50;
      v51 = *(_DWORD *)(v6 + 464);
      *(_DWORD *)sub_13FCC40(v6 + 472, (__int64 *)&v113, v52, v53, v54, v55) = v51;
    }
    v24 = v113;
    v25 = *(_BYTE *)(v113 + 905);
    *(_BYTE *)(v113 + 904) = ((v100
                             | ((unsigned __int8)(*(_BYTE *)(v113 + 904) & 0xBF
                                                | ((v102 & 1 | ((*(_BYTE *)(v113 + 904) & 0x40) != 0)) << 6)) >> 7)) << 7)
                           | *(_BYTE *)(v113 + 904) & 0x3F
                           | ((v102 & 1 | ((*(_BYTE *)(v113 + 904) & 0x40) != 0)) << 6) & 0x7F;
    *(_BYTE *)(v24 + 905) = (32 * (v104 & 1 | ((v25 & 0x20 | (16 * (v103 & 1 | ((v25 & 0x10) != 0))) & 0x20) != 0)))
                          | v25 & 0xCF
                          | (16 * (v103 & 1 | ((v25 & 0x10) != 0))) & 0xDF;
    v26 = v132.m128i_i64[0];
    *(_QWORD *)(v24 + 48) = a2;
    v27 = (char *)v131;
    v28 = 0;
    v29 = **(_QWORD **)(sub_FEEE40(v24) + 48);
    if ( v29 <= v26 )
    {
      v30 = v26;
      v26 = v29;
      v28 = v30 - v29;
    }
    v135 = (void *)sub_2289D50(&v27[v26], v28, 0);
    v130 = 773;
    v127 = s2;
    LOWORD(v139) = 261;
    v136 = v31;
    v128 = n;
    v129[0] = ".h";
    sub_13FE8E0(v6, v113, v19, (__int64)&v127, (__int64)&v135);
    v32 = (std::_V2 *)(v113 + 1032);
    sub_13F4440(v113 + 1032, 4);
    v114 = 0;
    *(_BYTE *)(v113 + 905) |= 0xAu;
    v33 = std::_V2::system_category(v32);
    v136 = 0;
    v115 = v33;
    v137 = 128;
    v34 = *(_QWORD *)a2;
    v135 = &v138;
    sub_A1FE50(&v135, v18, &v18[v34]);
    v130 = 257;
    v123 = 257;
    v121 = 257;
    v116[0] = "Frameworks";
    v117 = 259;
    sub_228A3B0(&v135, v116, &v118, &v122, &v127);
    sub_228EF50(&v135, 0);
    v35 = *(_QWORD *)(v105 + 8);
    v36 = *(void (__fastcall **)(__m128 *, __int64, void **, int *))(*(_QWORD *)v35 + 64LL);
    v127 = v135;
    v130 = 261;
    v128 = v136;
    v36(&v122, v35, &v127, &v114);
    v37 = v100;
    na = a3;
    v101 = v6;
    for ( i = (_QWORD *)v122.m128_u64[0]; v122.m128_u64[0]; i = (_QWORD *)v122.m128_u64[0] )
    {
      if ( v114 )
        break;
      while ( 1 )
      {
        v39 = (char *)i[1];
        v40 = i[2];
        v127 = v39;
        v128 = v40;
        v41 = j__strlen(".framework");
        if ( sub_9EC680(&v127, ".framework", v41) )
        {
          v42 = sub_1366810(v105, v39, v40, 1);
          v43 = v42;
          if ( v42 )
          {
            v56 = sub_FDBEF0(v105, v42);
            v58 = v57;
            while ( 1 )
            {
              v59 = (char *)sub_228A4B0(v56, v58, 0);
              v56 = (size_t)v59;
              v58 = v60;
              if ( !v60 )
                break;
              v61 = sub_1366810(v105, v59, v60, 1);
              if ( v61 && *(_QWORD *)(a2 + 8) == *(_QWORD *)(v61 + 8) )
              {
                na = (8 * (v104 & 1)) | (4 * (v103 & 1)) | (2 * (v37 & 1)) & 0xF3 | v102 & 1 | na & 0xFFFFFFF0;
                sub_1405820(v101, v43, na, v113);
                break;
              }
            }
          }
          i = (_QWORD *)v122.m128_u64[0];
        }
        v44 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 16LL))(i);
        i = (_QWORD *)v122.m128_u64[0];
        v115 = v45;
        v46 = *(_QWORD *)(v122.m128_u64[0] + 16) == 0;
        v114 = v44;
        if ( v46 )
          break;
        if ( v114 )
          goto LABEL_19;
      }
      v47 = (volatile signed __int32 *)v122.m128_u64[1];
      v122 = 0;
      if ( !v47 )
        break;
      sub_4343A0(v47);
    }
LABEL_19:
    if ( v122.m128_u64[1] )
      sub_4343A0((volatile signed __int32 *)v122.m128_u64[1]);
    result = v113;
    if ( (*(_BYTE *)(v113 + 904) & 0x10) != 0 && (v48 = *(_QWORD *)(v113 + 40)) != 0 )
    {
      while ( (*(_BYTE *)(v48 + 904) & 0x10) == 0 )
      {
        v48 = *(_QWORD *)(v48 + 40);
        if ( !v48 )
          goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      sub_13FB450(v113);
      result = v113;
    }
    if ( v135 != &v138 )
    {
      nc = result;
      free(v135);
      result = nc;
    }
  }
  if ( v131 != v133 )
  {
    nd = result;
    free(v131);
    result = nd;
  }
LABEL_2:
  if ( ptr != v126 )
  {
    nb = result;
    free(ptr);
    return nb;
  }
  return result;
}
