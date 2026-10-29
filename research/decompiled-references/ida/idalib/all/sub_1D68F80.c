__int64 __fastcall sub_1D68F80(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const __m128i *a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int128 a11,
        __m128 *a12,
        char a13)
{
  char v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rsi
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128i *v28; // rsi
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __m128i *v35; // rcx
  void **v36; // r12
  __int64 v37; // r15
  void *v38; // rax
  int v39; // eax
  unsigned int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rdx
  char v43; // cl
  unsigned __int64 v44; // rdx
  char v45; // cl
  __m128 *v46; // rbx
  const __m128i *v47; // r14
  void **v49; // r15
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  void **v53; // rax
  unsigned int v54; // edx
  __m128i v55; // xmm7
  unsigned int v56; // eax
  char *v57; // rsi
  __int64 v58; // r8
  char *v59; // rbx
  const __m128i *v60; // rdx
  __int64 v61; // rax
  unsigned int v62; // eax
  char *v63; // rsi
  __int64 v64; // r8
  const __m128i **v65; // r12
  const __m128i *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __m128i v70; // xmm3
  __int64 v71; // rcx
  __m128i *v72; // rdx
  __m128i v73; // xmm4
  unsigned __int64 v74; // rsi
  __int64 v75; // rsi
  __int64 v76; // rax
  bool v77; // al
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // r14
  __int64 v81; // r15
  __int64 *v82; // rsi
  __int64 v83; // r12
  __int64 v84; // r13
  __int64 *v85; // rsi
  _OWORD *v86; // rdi
  signed __int64 v87; // r12
  const __m128i *v88; // rdx
  __int8 *v89; // rax
  __int64 v90; // rax
  char v91; // dl
  unsigned __int64 v92; // rax
  char v93; // dl
  unsigned __int64 v94; // rcx
  __int64 v95; // rcx
  __m128 *v96; // rbx
  __m128i v97; // xmm7
  unsigned __int64 v98; // rax
  __m128i v99; // xmm7
  unsigned __int64 v100; // rax
  unsigned int v101; // eax
  void **v103; // [rsp+18h] [rbp-570h] BYREF
  unsigned int v104; // [rsp+20h] [rbp-568h]
  int v105; // [rsp+24h] [rbp-564h]
  void **p_ptr; // [rsp+28h] [rbp-560h]
  __int64 v107; // [rsp+30h] [rbp-558h]
  __m128i *v108; // [rsp+38h] [rbp-550h]
  int v109; // [rsp+40h] [rbp-548h]
  int v110; // [rsp+44h] [rbp-544h]
  __int64 v111; // [rsp+48h] [rbp-540h]
  void **v112; // [rsp+50h] [rbp-538h]
  __int64 v113; // [rsp+58h] [rbp-530h]
  void **v114; // [rsp+60h] [rbp-528h]
  _QWORD *v115; // [rsp+68h] [rbp-520h]
  char v116; // [rsp+7Fh] [rbp-509h] BYREF
  __m128i v117; // [rsp+80h] [rbp-508h] BYREF
  unsigned __int64 v118; // [rsp+90h] [rbp-4F8h]
  __m128i v119; // [rsp+A0h] [rbp-4E8h] BYREF
  unsigned __int64 v120; // [rsp+B0h] [rbp-4D8h]
  __m128i v121; // [rsp+C0h] [rbp-4C8h] BYREF
  unsigned __int64 v122; // [rsp+D0h] [rbp-4B8h]
  char *v123; // [rsp+D8h] [rbp-4B0h]
  __m128i v124; // [rsp+E0h] [rbp-4A8h] BYREF
  unsigned __int64 v125; // [rsp+F0h] [rbp-498h]
  char *v126; // [rsp+F8h] [rbp-490h]
  __int64 v127; // [rsp+118h] [rbp-470h]
  void *v128; // [rsp+130h] [rbp-458h] BYREF
  __int64 v129; // [rsp+138h] [rbp-450h]
  _QWORD v130[8]; // [rsp+140h] [rbp-448h] BYREF
  void *v131[2]; // [rsp+180h] [rbp-408h] BYREF
  _OWORD v132[4]; // [rsp+190h] [rbp-3F8h] BYREF
  void *ptr; // [rsp+1D0h] [rbp-3B8h] BYREF
  __int64 v134; // [rsp+1D8h] [rbp-3B0h]
  _BYTE v135[96]; // [rsp+1E0h] [rbp-3A8h] BYREF
  int v136; // [rsp+240h] [rbp-348h]
  char v137; // [rsp+244h] [rbp-344h]
  void *v138; // [rsp+250h] [rbp-338h] BYREF
  __int64 v139; // [rsp+258h] [rbp-330h]
  _BYTE v140[96]; // [rsp+260h] [rbp-328h] BYREF
  void *v141; // [rsp+2C0h] [rbp-2C8h]
  __int64 v142; // [rsp+2C8h] [rbp-2C0h]
  _BYTE v143[97]; // [rsp+2D0h] [rbp-2B8h] BYREF
  __int16 v144; // [rsp+331h] [rbp-257h]
  void *v145; // [rsp+340h] [rbp-248h] BYREF
  __int64 v146; // [rsp+348h] [rbp-240h]
  __int64 v147; // [rsp+350h] [rbp-238h]
  void *v148; // [rsp+3B0h] [rbp-1D8h]
  __int64 v149; // [rsp+3B8h] [rbp-1D0h]
  __int16 v150; // [rsp+420h] [rbp-168h]
  char v151; // [rsp+422h] [rbp-166h]
  void *v152; // [rsp+430h] [rbp-158h] BYREF
  __int64 v153; // [rsp+438h] [rbp-150h]
  char v154; // [rsp+440h] [rbp-148h] BYREF
  __int64 v155; // [rsp+540h] [rbp-48h]

  v105 = a5;
  v17 = a13;
  sub_18C74E0(a1, 0, 0, 4);
  if ( !sub_B8E0B0((__int64)a2) || (v18 = (_QWORD *)sub_B8D340((__int64)a2)) == nullptr )
  {
    v18 = (_QWORD *)(a2[2] & 0xFFFFFFFFFFFFFFF8LL);
    if ( (a2[2] & 4) != 0 )
      v18 = (_QWORD *)*v18;
  }
  v19 = *(_QWORD *)(a1 + 544);
  *(_QWORD *)(a1 + 544) = v18;
  v20 = *(_DWORD *)(a1 + 40);
  v21 = *(_DWORD *)(a1 + 2632);
  v144 = 0;
  v107 = v19;
  v22 = *(_QWORD *)(a1 + 512);
  v23 = *(_QWORD *)(a1 + 9944);
  v109 = v21;
  v111 = v22;
  LODWORD(v22) = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = v20;
  v24 = *(_DWORD *)(a1 + 3688);
  v127 = v23;
  *(_DWORD *)(a1 + 2632) = v24;
  v138 = v140;
  v139 = 0x400000000LL;
  v142 = 0x400000000LL;
  v110 = v22;
  LOBYTE(v21) = v105;
  v141 = v143;
  v143[96] = v105;
  *(_QWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 9944) = 0;
  v104 = sub_1D67A60(a1, (__int64)a2, a3, v21, a6, a12, a7, a8, (__int64)&v138, 0, 0, nullptr);
  if ( v104 )
    goto LABEL_17;
  v28 = (__m128i *)v138;
  v29 = (unsigned int)v139;
  if ( v17 )
  {
    v49 = (void **)sub_BC1D90(*(_QWORD **)(a1 + 248), (const __m128i *)v138, (unsigned int)v139, v25, v26, v27);
    v53 = (void **)sub_BC1D90(*(_QWORD **)(a1 + 248), (const __m128i *)v141, (unsigned int)v142, v50, v51, v52);
    p_ptr = v49;
    v103 = v53;
    v28 = (__m128i *)v138;
    v29 = (unsigned int)v139;
    a7 = _mm_loadh_ps((const double *)&v103);
    *a12 = a7;
  }
  v30 = *(_QWORD *)(a4 + 56);
  v103 = &v152;
  v113 = v30;
  v31 = *(_QWORD *)(v30 + 12);
  v152 = &v154;
  v155 = v31;
  p_ptr = &ptr;
  v153 = 0x800000000LL;
  ptr = v135;
  v134 = 0x400000000LL;
  v136 = 0;
  v137 = 0;
  if ( a2 )
  {
    v32 = *a2;
    v108 = v28;
    v33 = (*(__int64 (__fastcall **)(__int64 *))(v32 + 32))(a2);
    v147 = v29;
    v34 = (unsigned int)v134 + 1LL;
    v145 = (void *)(v33 | 4);
    v35 = (__m128i *)((char *)ptr + 24 * (unsigned int)v134);
    v146 = (__int64)v108;
    v112 = &v145;
    v36 = &v145;
    if ( HIDWORD(v134) < v34 )
    {
      if ( ptr > &v145 || v35 <= (__m128i *)&v145 )
      {
        sub_2237220(p_ptr, p_ptr + 2, v34, 24);
        v36 = v112;
        v35 = (__m128i *)((char *)ptr + 24 * (unsigned int)v134);
      }
      else
      {
        v87 = (char *)&v145 - (_BYTE *)ptr;
        sub_2237220(p_ptr, v135, v34, 24);
        v36 = (void **)((char *)ptr + v87);
        v35 = (__m128i *)((char *)ptr + 24 * (unsigned int)v134);
      }
    }
  }
  else
  {
    v147 = v29;
    v35 = (__m128i *)v135;
    v145 = &byte_4;
    v36 = &v145;
    v146 = (__int64)v28;
    v112 = &v145;
  }
  v37 = v113;
  *v35 = _mm_loadu_si128((const __m128i *)v36);
  v38 = v36[2];
  LODWORD(v134) = v134 + 1;
  v35[1].m128i_i64[0] = (__int64)v38;
  v39 = sub_BBD7B0(v37);
  v136 += v39;
  if ( (unsigned __int8)sub_1DD74F0(a1, a9, a10, p_ptr, v103) )
  {
    v40 = *(_DWORD *)(v37 + 20) & 0x1FFFFFFF;
    v41 = v40 - 1;
    if ( v40 > (unsigned int)v153 )
      v41 = (unsigned int)v153;
    v42 = *(_QWORD *)(v37 + 8 * v41 + 24);
    v43 = *(_BYTE *)(v42 + 28);
    v44 = v42 & 0xFFFFFFFFFFFFFFF9LL;
    v45 = v43 & 0x7F;
    if ( v45 != 67 )
    {
      v74 = v44;
      v44 |= 4u;
      v75 = v74 | 2;
      if ( v45 == 47 )
        v44 = v75;
    }
    v46 = a12;
    v104 = 7;
    v47 = (const __m128i *)(32LL * (unsigned int)v153 + a9);
    a12[11].m128_u64[0] = v44;
    *(__m128i *)((char *)&v46[11] + 8) = _mm_loadu_si128(v47);
    v46[12].m128_u64[1] = v47[1].m128i_u64[0];
    goto LABEL_13;
  }
  a7 = 0;
  v150 = 0;
  v151 = 0;
  v145 = v112 + 2;
  v146 = 0x400000000LL;
  v149 = 0x400000000LL;
  v148 = v112 + 16;
  v54 = *(_DWORD *)(a4 + 24);
  *(_OWORD *)v131 = 0;
  *(_QWORD *)&v132[0] = 0;
  if ( (unsigned __int8)sub_1CCEE60(
                          a1,
                          a4,
                          v54,
                          (__int64)v103,
                          (__int64)v131,
                          0,
                          (__m128)0LL,
                          a8,
                          (__int64)v112,
                          1,
                          &v116) )
  {
    v104 = v116 == 0 ? 7 : 15;
    goto LABEL_28;
  }
  v55 = _mm_loadu_si128((const __m128i *)&a11);
  v114 = &v128;
  v115 = v130;
  v128 = v130;
  v131[0] = v132;
  v130[0] = v145;
  v132[0] = v55;
  v130[1] = (unsigned int)v146;
  v129 = 0x400000001LL;
  v131[1] = (void *)0x400000001LL;
  v56 = 1;
  while ( v56 )
  {
LABEL_35:
    v57 = (char *)v128;
    v58 = 16LL * v56;
    v59 = (char *)v128 + v58 - 16;
    if ( *((_QWORD *)v59 + 1) )
    {
      v60 = *(const __m128i **)v59;
      if ( (**(_DWORD **)v59 & 0x7FFFFFFF) != 9 )
      {
        v121 = _mm_loadu_si128(v60);
        v61 = v60[1].m128i_i64[0];
        v123 = (char *)v128 + v58 - 16;
        v122 = v61;
        goto LABEL_38;
      }
      v83 = v60->m128i_i64[1];
      v84 = v60->m128i_u32[1];
      if ( v56 >= (unsigned __int64)HIDWORD(v129) )
      {
        if ( HIDWORD(v129) < (unsigned __int64)v56 + 1 )
        {
          sub_2237220(v114, v115, v56 + 1LL, 16);
          v57 = (char *)v128;
          v58 = 16LL * (unsigned int)v129;
        }
        *(_QWORD *)&v57[v58] = v83;
        *(_QWORD *)&v57[v58 + 8] = v84;
        v56 = v129 + 1;
        LODWORD(v129) = v129 + 1;
      }
      else
      {
        v85 = (__int64 *)((char *)v128 + v58);
        ++v56;
        *v85 = v83;
        v85[1] = v84;
        LODWORD(v129) = v56;
      }
      *(_QWORD *)v59 += 24LL;
      --*((_QWORD *)v59 + 1);
    }
    else
    {
      LODWORD(v129) = --v56;
    }
  }
  while ( 1 )
  {
    v121.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    v121.m128i_i64[1] = 0;
    v59 = (char *)&unk_2667B90;
    v123 = (char *)&unk_2667B90;
LABEL_38:
    v62 = (unsigned int)v131[1];
    if ( LODWORD(v131[1]) )
      break;
LABEL_62:
    v124.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    v124.m128i_i64[1] = 0;
    v126 = (char *)&unk_2667B90;
    if ( (v121.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      goto LABEL_74;
    v65 = (const __m128i **)&unk_2667B90;
LABEL_42:
    if ( sub_F1D570((__int64)&v121) )
    {
      sub_F1DF30((__int64)&v117, v121.m128i_i64, v68, v69);
    }
    else
    {
      v70 = _mm_load_si128(&v121);
      v118 = v122;
      v117 = v70;
    }
    if ( sub_F1D570((__int64)&v124) )
    {
      v108 = &v119;
      sub_F1DF30((__int64)&v119, v124.m128i_i64, (__int64)&v119, v71);
      v72 = v108;
    }
    else
    {
      v72 = &v119;
      v73 = _mm_load_si128(&v124);
      v120 = v125;
      v119 = v73;
    }
    if ( sub_AB67C0(*(_QWORD **)(a1 + 248), (__int64)&v117, (__int64)v72) )
    {
LABEL_56:
      v76 = !sub_F1D570((__int64)&v121);
      *((_QWORD *)v59 + 1) -= v76;
      *(_QWORD *)v59 += 24 * v76;
      v77 = sub_F1D570((__int64)&v124);
      v78 = 24;
      v79 = 1;
      if ( v77 )
      {
        v79 = sub_F1D570((__int64)&v121);
        v78 = 24 * v79;
      }
      *v65 = (const __m128i *)((char *)*v65 + v78);
      v65[1] = (const __m128i *)((char *)v65[1] - v79);
      goto LABEL_51;
    }
    if ( !sub_F1D570((__int64)&v121) && !sub_F1D570((__int64)&v124) )
    {
      v88 = *v65;
      v86 = v131[0];
      if ( LODWORD(v131[1]) )
        v89 = *((__int8 **)v131[0] + 2 * LODWORD(v131[1]) - 2);
      else
        v89 = &v88->m128i_i8[24 * (_QWORD)v65[1]];
      v90 = *(_QWORD *)(v113 + 0xFFFFFFFD55555558LL * (unsigned int)((v89 - (__int8 *)v88) >> 3) + 24);
      v91 = *(_BYTE *)(v90 + 28);
      v92 = v90 & 0xFFFFFFFFFFFFFFF9LL;
      v93 = v91 & 0x7F;
      if ( v93 != 67 )
      {
        v94 = v92;
        v92 |= 4u;
        v95 = v94 | 2;
        if ( v93 == 47 )
          v92 = v95;
      }
      v96 = a12;
      v104 = 10;
      v97 = _mm_load_si128(&v121);
      a12[11].m128_u64[0] = v92;
      v98 = v122;
      *(__m128i *)((char *)v96 + 184) = v97;
      v99 = _mm_load_si128(&v124);
      v96[12].m128_u64[1] = v98;
      v100 = v125;
      v96[13] = (__m128)v99;
      v96[14].m128_u64[0] = v100;
      goto LABEL_76;
    }
    if ( sub_F1D570((__int64)&v121) )
    {
      *(_QWORD *)v59 += 24LL;
      --*((_QWORD *)v59 + 1);
    }
    else
    {
      if ( !sub_F1D570((__int64)&v124) )
        goto LABEL_56;
      *v65 = (const __m128i *)((char *)*v65 + 24);
      v65[1] = (const __m128i *)((char *)v65[1] - 1);
    }
LABEL_51:
    v56 = v129;
    if ( (_DWORD)v129 )
      goto LABEL_35;
  }
  while ( 2 )
  {
    v63 = (char *)v131[0];
    v64 = 16LL * v62;
    v65 = (const __m128i **)((char *)v131[0] + v64 - 16);
    if ( !v65[1] )
    {
      LODWORD(v131[1]) = --v62;
      goto LABEL_61;
    }
    v66 = *v65;
    if ( ((*v65)->m128i_i32[0] & 0x7FFFFFFF) == 9 )
    {
      v80 = v66->m128i_i64[1];
      v81 = v66->m128i_u32[1];
      if ( v62 >= (unsigned __int64)HIDWORD(v131[1]) )
      {
        if ( HIDWORD(v131[1]) < (unsigned __int64)v62 + 1 )
        {
          sub_2237220(v131, v132, v62 + 1LL, 16);
          v63 = (char *)v131[0];
          v64 = 16LL * LODWORD(v131[1]);
        }
        *(_QWORD *)&v63[v64] = v80;
        *(_QWORD *)&v63[v64 + 8] = v81;
        v62 = ++LODWORD(v131[1]);
      }
      else
      {
        v82 = (__int64 *)((char *)v131[0] + v64);
        ++v62;
        *v82 = v80;
        v82[1] = v81;
        LODWORD(v131[1]) = v62;
      }
      *v65 = (const __m128i *)((char *)*v65 + 24);
      v65[1] = (const __m128i *)((char *)v65[1] - 1);
LABEL_61:
      if ( !v62 )
        goto LABEL_62;
      continue;
    }
    break;
  }
  v124 = _mm_loadu_si128(v66);
  v67 = v66[1].m128i_i64[0];
  v126 = (char *)v131[0] + v64 - 16;
  v125 = v67;
  if ( ((v121.m128i_i32[0] | v124.m128i_i32[0]) & 0x7FFFFFFF) != 0 )
    goto LABEL_42;
LABEL_74:
  v86 = v131[0];
  if ( !(_BYTE)v105 )
  {
    v101 = sub_1D37D10(
             a1,
             (unsigned __int64)a2,
             (const __m128i *)v138,
             (unsigned int)v139,
             (const __m128i *)v141,
             (unsigned int)v142,
             0.0,
             a12);
    v86 = v131[0];
    v104 = v101;
  }
LABEL_76:
  if ( v86 != v132 )
    free(v86);
  if ( v128 != v114 + 2 )
    free(v128);
LABEL_28:
  if ( v148 != v112 + 16 )
    free(v148);
  if ( v145 != v112 + 2 )
    free(v145);
LABEL_13:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  if ( v152 != v103 + 2 )
    free(v152);
LABEL_17:
  if ( v141 != v143 )
    free(v141);
  if ( v138 != v140 )
    free(v138);
  if ( v107 )
  {
    *(_QWORD *)(a1 + 544) = v107;
    *(_QWORD *)(a1 + 512) = v111;
    *(_QWORD *)(a1 + 9944) = v127;
    *(_DWORD *)(a1 + 80) = v110;
    *(_DWORD *)(a1 + 2632) = v109;
  }
  sub_190D5E0(a1, a7);
  return v104;
}
