void __fastcall sub_1BE0570(__int64 *a1, _BYTE *a2, __int64 a3, unsigned __int8 *a4, unsigned int a5, __int64 a6)
{
  unsigned __int8 v7; // cl
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rax
  const char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  const char *v21; // rax
  size_t v22; // rdx
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // r11
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 *v28; // rsi
  unsigned int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdi
  char v33; // al
  _DWORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int8 *v39; // rax
  unsigned __int8 v40; // cl
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i si128; // xmm0
  __int64 v45; // r15
  size_t v46; // rax
  __int64 v47; // rax
  int v48; // eax
  size_t v49; // rax
  int v50; // ecx
  unsigned __int8 *v51; // rcx
  __int64 v52; // rax
  unsigned __int8 v53; // dl
  __int64 v54; // rax
  __int64 v55; // r12
  size_t v56; // rax
  __int64 v57; // rax
  int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rax
  void *v65; // rdi
  __m128i v66; // xmm0
  __int64 *v67; // rax
  __int64 v68; // r12
  size_t v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 *v74; // rax
  _DWORD *v75; // rax
  unsigned __int64 v76; // rdx
  _DWORD *i; // r14
  char v78; // al
  int v79; // r13d
  unsigned __int8 *v80; // rax
  unsigned __int8 v81; // cl
  __int64 v82; // rdi
  __int64 v83; // rax
  unsigned __int8 v84; // cl
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rbp
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  _QWORD *v91; // rax
  int v92; // eax
  unsigned __int16 v93; // r13
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rsi
  __int64 v100; // rax
  unsigned int s2; // [rsp+8h] [rbp-2A0h]
  const char *s2a; // [rsp+8h] [rbp-2A0h]
  unsigned int v103; // [rsp+10h] [rbp-298h]
  int v104; // [rsp+10h] [rbp-298h]
  int v105; // [rsp+10h] [rbp-298h]
  __int64 *v106; // [rsp+10h] [rbp-298h]
  _DWORD *v107; // [rsp+10h] [rbp-298h]
  __int64 v108; // [rsp+18h] [rbp-290h]
  __int64 *v109; // [rsp+18h] [rbp-290h]
  __int64 *v110; // [rsp+20h] [rbp-288h]
  __int64 v111; // [rsp+28h] [rbp-280h]
  void *v112; // [rsp+38h] [rbp-270h] BYREF
  void *v113; // [rsp+40h] [rbp-268h] BYREF
  unsigned __int64 v114; // [rsp+48h] [rbp-260h] BYREF
  unsigned __int64 v115; // [rsp+50h] [rbp-258h] BYREF
  unsigned __int64 v116; // [rsp+58h] [rbp-250h]
  __int64 v117; // [rsp+60h] [rbp-248h]
  void *v118; // [rsp+70h] [rbp-238h]
  _WORD v119[16]; // [rsp+80h] [rbp-228h] BYREF
  __m128i v120; // [rsp+A0h] [rbp-208h] BYREF
  void *v121; // [rsp+B0h] [rbp-1F8h]
  __int64 v122; // [rsp+C0h] [rbp-1E8h] BYREF
  _BYTE v123[24]; // [rsp+130h] [rbp-178h] BYREF
  _BYTE v124[136]; // [rsp+148h] [rbp-160h] BYREF
  void *ptr; // [rsp+1D0h] [rbp-D8h] BYREF
  __m128i v126; // [rsp+1D8h] [rbp-D0h] BYREF
  __int64 v127; // [rsp+1E8h] [rbp-C0h] BYREF
  unsigned __int8 *v128[11]; // [rsp+1F0h] [rbp-B8h] BYREF
  char v129; // [rsp+248h] [rbp-60h]
  unsigned int v130; // [rsp+250h] [rbp-58h]
  char v131; // [rsp+254h] [rbp-54h]

  v7 = *a4;
  if ( v7 > 0x11u )
    return;
  v8 = 0;
  v9 = 1LL << v7;
  if ( ((1LL << v7) & 0x2DF87) != 0 )
    goto LABEL_3;
  if ( (v9 & 0x2008) != 0 )
  {
    v25 = *((_QWORD *)a4 + 1);
  }
  else
  {
    if ( (v9 & 0x70) == 0 )
      goto LABEL_3;
    v25 = *(_QWORD *)(*((_QWORD *)a4 + 1) + 48LL);
  }
  if ( !v25 )
  {
LABEL_98:
    v8 = 0;
    goto LABEL_3;
  }
  v26 = (v25 >> 1) & 3;
  if ( ((v25 >> 1) & 3) != 0 )
  {
    if ( v26 == 1 || v26 == 2 )
    {
      v8 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_3;
    }
    goto LABEL_98;
  }
  v8 = v25 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_3:
  switch ( v7 )
  {
    case 2u:
      sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(a3 + 24), 0x1867u, 0);
      goto LABEL_22;
    case 3u:
      v27 = *(_DWORD *)(a3 + 24);
      v28 = a1 + 1;
      v29 = 6241;
      goto LABEL_26;
    case 4u:
      sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(a3 + 24), 0x1862u, 0);
      *(_QWORD *)v123 = *(_QWORD *)(v8 + 40);
      v30 = sub_15894B0((__int64)&ptr, (__int64 *)v123);
      if ( *a4 > 0xAu || ((1LL << *a4) & 0x770) == 0 )
        BUG();
      v120.m128i_i32[0] = *(_DWORD *)(*((_QWORD *)a4 + 1) + 4LL) + 1;
      v31 = 0;
      v32 = sub_16CF160(v30, (unsigned int *)&v120);
      if ( *a4 <= 0xAu && ((1LL << *a4) & 0x770) != 0 )
        v31 = *((_QWORD *)a4 + 1);
      goto LABEL_32;
    case 5u:
      v33 = *(_BYTE *)(v8 + 28) & 0x7F;
      if ( v33 == 67 )
      {
        v104 = 0;
LABEL_35:
        v34 = *((_DWORD **)a4 + 1);
        if ( (*v34 & 0x7FFFFFFF) != 9 )
          goto LABEL_36;
        goto LABEL_141;
      }
      v104 = 2;
      if ( v33 != 47 )
        goto LABEL_35;
      v80 = (unsigned __int8 *)sub_F1D610(*((_QWORD *)a4 + 1));
      v81 = *a4;
      v82 = 0;
      v115 = (unsigned __int64)v80;
      if ( v81 <= 0xAu && ((1LL << v81) & 0x760) != 0 )
        v82 = *((_QWORD *)a4 + 1) + 24LL;
      v83 = sub_F1D610(v82);
      v120.m128i_i64[0] = v83;
      if ( (v115 & 0xFFFFFFFFFFFFFFF0LL) != 0
        && (v83 & 0xFFFFFFFFFFFFFFF0LL) != 0
        && (*(_QWORD *)&byte_8[v115 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v115 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v115) & 7) != (*(_QWORD *)&byte_8[v83 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v83 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v83) & 7) )
      {
        sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(a3 + 24), 0x1864u, 0);
        *(_QWORD *)v123 = *(_QWORD *)(v8 + 40);
        v95 = sub_15894B0((__int64)&ptr, (__int64 *)v123);
        v96 = 0;
        if ( *a4 <= 0xAu && ((1LL << *a4) & 0x770) != 0 )
          v96 = *((_QWORD *)a4 + 1);
        v97 = sub_1BDB6E0(v95, v96);
        v98 = sub_1605D30(v97, (__int64 *)&v115);
        v99 = 0;
        if ( *a4 <= 0xAu && ((1LL << *a4) & 0x760) != 0 )
          v99 = *((_QWORD *)a4 + 1) + 24LL;
        v100 = sub_1BDB6E0(v98, v99);
        sub_1605D30(v100, v120.m128i_i64);
        goto LABEL_22;
      }
      v84 = *a4;
      if ( *a4 > 0xAu )
        BUG();
      if ( ((1LL << v84) & 0x770) == 0 )
        goto LABEL_164;
      v34 = *((_DWORD **)a4 + 1);
      v104 = 1;
      if ( (*v34 & 0x7FFFFFFF) != 9 )
        goto LABEL_36;
      if ( ((1LL << v84) & 0x760) == 0 )
LABEL_164:
        BUG();
LABEL_141:
      if ( (v34[6] & 0x7FFFFFFF) == 9 )
      {
        v92 = 3;
        if ( v34[7] == v34[1] )
          v92 = v104;
        v104 = v92;
      }
LABEL_36:
      sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(a3 + 24), 0x1863u, 0);
      if ( v129 )
      {
        sub_AE9DF0(v128, v104, 2u);
      }
      else if ( v131 )
      {
        v87 = sub_168B9E0(&ptr);
        v90 = v126.m128i_i64[1];
        if ( v126.m128i_i64[1] )
          v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v126.m128i_i64[1] + 32LL))(v126.m128i_i64[1]);
        *(_QWORD *)v123 = v90;
        v91 = sub_1587BC0(v87, (__int64 *)v123, v85, v86, v88, v89);
        sub_AE9DF0((unsigned __int8 **)(*v91 + 32LL * v130 + 8), v104, 2u);
      }
      *(_QWORD *)v123 = *(_QWORD *)(v8 + 40);
      v35 = sub_15894B0((__int64)&ptr, (__int64 *)v123);
      v36 = 0;
      if ( *a4 <= 0xAu && ((1LL << *a4) & 0x770) != 0 )
        v36 = *((_QWORD *)a4 + 1);
      v37 = sub_1BDB6E0(v35, v36);
      v31 = 0;
      if ( *a4 <= 0xAu && ((1LL << *a4) & 0x760) != 0 )
        v31 = *((_QWORD *)a4 + 1) + 24LL;
      v32 = v37;
LABEL_32:
      sub_1BDB6E0(v32, v31);
LABEL_22:
      sub_15F7200(&ptr);
LABEL_23:
      if ( (a2[28] & 0x7F) == 0x36 )
        sub_1BDB4F0((__int64)a1, (__int64)a2);
      return;
    case 6u:
      v38 = *(_QWORD *)(*((_QWORD *)a4 + 1) + 8LL);
      v114 = v38 & 7;
      if ( (v38 & 8) != 0 )
        v114 = *(__int64 *)((char *)&qword_18 + (v38 & 0xFFFFFFFFFFFFFFF0LL)) | v38 & 7;
      v39 = (unsigned __int8 *)sub_F5E900((__int64 *)&v114, a1[31], *(_QWORD *)(v8 + 48));
      v40 = *a4;
      v115 = (unsigned __int64)v39;
      if ( v40 > 0xAu || ((1LL << v40) & 0x760) == 0 )
        BUG();
      v41 = *(_DWORD *)(a3 + 24);
      v120.m128i_i64[0] = *(_QWORD *)(*((_QWORD *)a4 + 1) + 32LL);
      sub_168B9F0((__int64)&ptr, a1 + 1, v41, 0x186Bu, 0);
      *(_QWORD *)v123 = *(_QWORD *)(v8 + 40);
      v42 = sub_15894B0((__int64)&ptr, (__int64 *)v123);
      v43 = sub_1605D30(v42, v120.m128i_i64);
      sub_1605D30(v43, (__int64 *)&v115);
      goto LABEL_22;
    case 7u:
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v45 = *((_QWORD *)a4 + 1);
      *(_QWORD *)v123 = v124;
      *(__m128i *)&v123[8] = si128;
      if ( v45 )
      {
        v46 = j__strlen(" ");
        sub_A1FE50(v123, " ", &asc_22D9D59[v46]);
        v47 = sub_B8BF90(a3);
        sub_1CB6030(&ptr, a1, *(_QWORD *)(v47 + 56), v45);
        sub_A1FE50(v123, ptr, (_BYTE *)ptr + v126.m128i_i64[0]);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        if ( ptr != &v126.m128i_u64[1] )
        {
          operator delete(ptr);
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        }
        if ( *(_QWORD *)&v123[8] == 1 )
          *(_QWORD *)&v123[8] = 0;
      }
      v110 = a1 + 1;
      if ( (a4[1] & 1) != 0 )
      {
        v48 = *((_DWORD *)a4 + 10);
        if ( v48 == 5331 )
        {
          sub_168B9F0((__int64)&ptr, v110, *((_DWORD *)a4 + 4), 0x1858u, 0);
          if ( v129 )
          {
            sub_AE9DF0(v128, (__int64)"'enable_if'", 1u);
          }
          else if ( v131 )
          {
            sub_1BDB5C0((__int64)&ptr, (__int64)"'enable_if'");
          }
          sub_1BDB440((__int64)&ptr, (__int64)v123);
          sub_15F7200(&ptr);
LABEL_105:
          v65 = *(void **)v123;
          if ( *(_BYTE **)v123 != v124 )
LABEL_81:
            free(v65);
          return;
        }
        if ( v48 == 5332 )
        {
          sub_168B9F0((__int64)&ptr, v110, *(_DWORD *)(a3 + 24), 0x185Au, 0);
          v120 = *(__m128i *)(*((_QWORD *)a4 + 3) + 96LL);
          v94 = sub_166BAF0((__int64)&ptr, (__int64)&v120);
          sub_1BDB440(v94, (__int64)v123);
          sub_15F7200(&ptr);
          goto LABEL_105;
        }
        v126 = si128;
        ptr = &v127;
        v114 = 0;
        v49 = j__strlen(": ");
        sub_A1FE50(&ptr, ": ", &aSsl[v49 + 11]);
        v50 = *((_DWORD *)a4 + 10);
        LODWORD(v114) = *((_DWORD *)a4 + 4);
        HIDWORD(v114) = v114;
        v111 = a1[33];
        sub_FC70B0((__int64)&v115, v111, 0, v50);
        v51 = *((unsigned __int8 **)a4 + 3);
        if ( v51 )
        {
          v105 = *v51;
          if ( *v51 )
          {
            v52 = 0;
            do
            {
              v53 = v51[(unsigned int)v52 + 1];
              v108 = v52;
              if ( v53 )
                sub_AE9DF0((unsigned __int8 **)&v115, *(_QWORD *)&v51[8 * (unsigned int)v52 + 16], v53);
              else
                sub_AEC220((unsigned __int8 **)&v115, *(_BYTE **)&v51[32 * v52 + 96], *(_QWORD *)&v51[32 * v52 + 104]);
              v51 = *((unsigned __int8 **)a4 + 3);
              v52 = v108 + 1;
            }
            while ( v105 != (_DWORD)v108 + 1 );
          }
          v74 = *((__int64 **)v51 + 52);
          v109 = (__int64 *)((char *)v74 + 12 * *((unsigned int *)v51 + 106));
          if ( v74 != v109 )
          {
            do
            {
              v106 = v74;
              sub_AEC610((__int64 *)&v115, v74);
              v74 = (__int64 *)((char *)v106 + 12);
            }
            while ( v109 != (__int64 *)((char *)v106 + 12) );
            v51 = *((unsigned __int8 **)a4 + 3);
          }
          v75 = *((_DWORD **)v51 + 66);
          v76 = (unsigned __int64)*((unsigned int *)v51 + 134) << 6;
          for ( i = (_DWORD *)((char *)v75 + v76); i != v75; v75 += 16 )
          {
            if ( *v75 && v75[1] )
            {
              v107 = v75;
              sub_1BDA480((__int64 *)&v115, (unsigned __int64)v75);
              v75 = v107;
            }
          }
        }
        sub_FC7230((__int64)&v120, v111, (__int64 *)&v115);
        sub_FCA320((__int64)&v120, &ptr);
        if ( v121 != &v122 )
          operator delete(v121);
        v117 = 0;
        v119[8] = 0;
        if ( v118 != v119 )
          operator delete(v118);
        if ( v115 && v116 )
          sub_1580C40(v116, v115);
      }
      else
      {
        v126 = si128;
        ptr = &v127;
        v114 = 0;
      }
      sub_168B9F0((__int64)&v120, v110, *(_DWORD *)(a3 + 24), 0x186Au, 0);
      v72 = sub_1BDB440((__int64)&v120, (__int64)v123);
      v73 = sub_1BDB440(v72, (__int64)&ptr);
      sub_15884C0(v73, (__int64 *)&v114);
      sub_15F7200(&v120);
      if ( (a2[28] & 0x7F) == 0x36 )
        sub_1BDB4F0((__int64)a1, (__int64)a2);
      if ( ptr != &v127 )
        free(ptr);
      goto LABEL_105;
    case 8u:
    case 9u:
      ptr = &v127;
      v54 = *((_QWORD *)a4 + 1);
      v126 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      v55 = *(_QWORD *)(v54 + 48);
      if ( v55 )
      {
        v56 = j__strlen(" ");
        sub_A1FE50(&ptr, " ", &asc_22D9D59[v56]);
        v57 = sub_B8BF90(a3);
        sub_1CB6030(v123, a1, *(_QWORD *)(v57 + 56), v55);
        sub_A1FE50(&ptr, *(_BYTE **)v123, (_BYTE *)(*(_QWORD *)v123 + *(_QWORD *)&v123[8]));
        if ( *(_BYTE **)v123 != &v123[16] )
          operator delete(*(void **)v123);
        if ( v126.m128i_i64[0] == 1 )
          v126.m128i_i64[0] = 0;
        sub_168B9F0((__int64)v123, a1 + 1, *(_DWORD *)(a3 + 24), 0x1856u, 0);
      }
      else
      {
        sub_168B9F0((__int64)v123, a1 + 1, *(_DWORD *)(a3 + 24), 0x1856u, 0);
      }
      v58 = 0;
      if ( (unsigned int)*a4 - 8 <= 1 )
        v58 = *(_DWORD *)(*((_QWORD *)a4 + 1) + 56LL) + 1;
      v120.m128i_i32[0] = v58;
      v59 = sub_16CF160((__int64)v123, (unsigned int *)&v120);
      v60 = 0;
      if ( *a4 <= 0xAu && ((1LL << *a4) & 0x770) != 0 )
        v60 = *((_QWORD *)a4 + 1);
      v61 = sub_1BDB6E0(v59, v60);
      v62 = 0;
      if ( *a4 <= 0xAu && ((1LL << *a4) & 0x760) != 0 )
        v62 = *((_QWORD *)a4 + 1) + 24LL;
      v63 = sub_1BDB6E0(v61, v62);
      v64 = sub_1BDB440(v63, (__int64)&ptr);
      LOBYTE(v115) = *a4 == 9;
      sub_1588420(v64, (unsigned __int8 *)&v115);
      sub_15F7200(v123);
      v65 = ptr;
      if ( ptr != &v127 )
        goto LABEL_81;
      return;
    case 0xAu:
      v13 = *((_QWORD *)a4 + 1);
      v120 = _mm_loadu_si128((const __m128i *)v13);
      v121 = *(void **)(v13 + 16);
      *(__m128i *)v123 = _mm_loadu_si128((const __m128i *)(v13 + 24));
      *(_QWORD *)&v123[16] = *(_QWORD *)(v13 + 40);
      if ( (v120.m128i_i32[0] & 0x7FFFFFFF) != 6
        || (*(_DWORD *)v123 & 0x7FFFFFFF) != 6
        || (s2 = a6,
            sub_F22A90(&ptr, v120.m128i_i64[1]),
            v112 = ptr,
            sub_F22A90(&ptr, *(__int64 *)&v123[8]),
            v113 = ptr,
            v14 = sub_F22B40((__int64 *)&v112),
            a6 = s2,
            v14)
        || (v15 = sub_F22B40((__int64 *)&v113), a6 = s2, v15)
        || (v103 = s2,
            v16 = sub_F22BD0((__int64 *)&v113, 0),
            v17 = sub_995750(v16),
            v19 = v18,
            s2a = v17,
            v20 = sub_F22BD0((__int64 *)&v112, 0),
            v21 = sub_995750(v20),
            a6 = v103,
            v22 != v19)
        || v22 && (v23 = memcmp(v21, s2a, v22), a6 = v103, v23) )
      {
        if ( !(_BYTE)a6
          || (*(_BYTE *)(a3 + 28) & 0x7Fu) - 34 > 5
          || (unsigned __int8)sub_1BDFA80((__int64)a1, (__int128 *)a3, 1, 1, 0, a6) )
        {
          sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(a3 + 24), 0x1868u, 0);
          v71 = sub_1BDB6E0((__int64)&ptr, (__int64)&v120);
          sub_1BDB6E0(v71, (__int64)v123);
          sub_15F7200(&ptr);
        }
      }
      else
      {
        sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(a3 + 24), 0x1869u, 0);
        v114 = sub_F22BD0((__int64 *)&v112, 0);
        v24 = sub_1BDB630((__int64)&ptr, (__int64 *)&v114);
        v115 = sub_F22BD0((__int64 *)&v113, 0);
        sub_1BDB630(v24, (__int64 *)&v115);
        sub_15F7200(&ptr);
      }
      return;
    case 0xBu:
    case 0xCu:
      sub_1BDF420((__int64)a1, a2, a3, a5, a6);
      return;
    case 0xDu:
      v28 = a1 + 1;
      if ( !*(_QWORD *)(v8 + 40) )
      {
        v78 = *(_BYTE *)(v8 + 28) & 0x7F;
        if ( v78 == 67 )
        {
          v79 = sub_BBE5B0(v8);
        }
        else
        {
          if ( v78 == 47 )
            v93 = *(_WORD *)(v8 + 70);
          else
            v93 = *(_WORD *)(v8 + 66);
          v79 = v93 >> 4;
        }
        sub_168B9F0((__int64)&ptr, v28, *(_DWORD *)(a3 + 24), 0x185Du, 0);
        *(_DWORD *)v123 = v79 + 1;
        sub_1587D10((__int64)&ptr, (int *)v123);
        sub_15F7200(&ptr);
        goto LABEL_23;
      }
      v27 = *(_DWORD *)(a3 + 24);
      v29 = 6236;
LABEL_26:
      sub_168B9F0((__int64)&ptr, v28, v27, v29, 0);
      *(_QWORD *)v123 = *(_QWORD *)(v8 + 40);
      sub_15894B0((__int64)&ptr, (__int64 *)v123);
      goto LABEL_22;
    case 0xFu:
      v66 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      ptr = &v127;
      v67 = *((__int64 **)a4 + 1);
      v126 = v66;
      v68 = *v67;
      v69 = j__strlen(" ");
      sub_A1FE50(&ptr, " ", &asc_22D9D59[v69]);
      v70 = sub_B8BF90(a3);
      sub_1CB6030(v123, a1, *(_QWORD *)(v70 + 56), v68);
      sub_A1FE50(&ptr, *(_BYTE **)v123, (_BYTE *)(*(_QWORD *)v123 + *(_QWORD *)&v123[8]));
      if ( *(_BYTE **)v123 != &v123[16] )
        operator delete(*(void **)v123);
      if ( v126.m128i_i64[0] == 1 )
        v126.m128i_i64[0] = 0;
      sub_168B9F0((__int64)v123, a1 + 1, *(_DWORD *)(a3 + 24), 0x186Cu, 0);
      sub_1BDB440((__int64)v123, (__int64)&ptr);
      sub_15F7200(v123);
      sub_174DC50((__int64)a1, *((_QWORD *)a4 + 1) + 8LL, 1u, *(double *)v66.m128i_i64);
      v65 = ptr;
      if ( ptr == &v127 )
        return;
      goto LABEL_81;
    case 0x10u:
      sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(a3 + 24), 0x184Du, 0);
      goto LABEL_22;
    case 0x11u:
      sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(a3 + 24), 0x16EBu, 0);
      sub_15F7200(&ptr);
      return;
    default:
      return;
  }
}
