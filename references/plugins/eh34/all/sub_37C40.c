__int64 __fastcall sub_37C40(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // r14
  __int64 v8; // rbx
  unsigned int v9; // r12d
  unsigned __int8 (__fastcall *hexdsp)(__int64, _QWORD *, _QWORD); // rax
  __int64 (__fastcall *v11)(__int64, int); // rax
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 (__fastcall *v14)(__int64, int, int); // rax
  int v15; // ebx
  unsigned __int8 (__fastcall *v16)(__int64, _QWORD *, _QWORD); // rax
  const __m128i *v17; // rax
  const __m128i *v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  const __m128i *v23; // rdx
  const __m128i *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r11
  const __m128i *v29; // r10
  __m128i v30; // xmm1
  const __m128i *v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rbx
  __int32 v34; // esi
  __int64 v35; // rdi
  __int64 v36; // rdx
  __m128i *v37; // rcx
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  const __m128i *v43; // rax
  unsigned __int64 v44; // r10
  __m128i *v45; // rax
  __int64 v46; // rdx
  __m128i v47; // xmm1
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rsi
  __m128i v51; // xmm0
  __int64 v53; // r9
  __m128i *v54; // rax
  __int32 v55; // edi
  __int64 v56; // rdi
  __int64 v57; // rax
  const __m128i *v58; // rcx
  __int64 v59; // rsi
  __m128i si128; // xmm0
  unsigned int v61; // r11d
  __int64 v62; // rdx
  __int64 v63; // r8
  __m128i v64; // xmm1
  __int64 v65; // r8
  __m128i v66; // xmm1
  __int64 v67; // r8
  __int64 v68; // r8
  __m128i v69; // xmm1
  bool v70; // cf
  const __m128i *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  const __m128i *v74; // rdi
  __int64 v75; // r9
  __m128i v76; // xmm0
  unsigned int v77; // r11d
  __int64 v78; // rdx
  __int64 v79; // r10
  __m128i v80; // xmm1
  __int64 v81; // r10
  __m128i v82; // xmm1
  __int64 v83; // r10
  __int64 v84; // r10
  __m128i v85; // xmm1
  __int64 v86; // rax
  const __m128i *v87; // rcx
  __int64 v88; // rdi
  __int64 v89; // rax
  __m128i v90; // xmm0
  __int64 v91; // [rsp+8h] [rbp-188h]
  __int64 v92; // [rsp+10h] [rbp-180h]
  __int64 v93; // [rsp+10h] [rbp-180h]
  unsigned __int64 v94; // [rsp+18h] [rbp-178h]
  __int64 v95; // [rsp+18h] [rbp-178h]
  __m128i v96; // [rsp+20h] [rbp-170h] BYREF
  __int64 v97; // [rsp+30h] [rbp-160h]
  __m128i v98; // [rsp+38h] [rbp-158h] BYREF
  __int64 v99; // [rsp+48h] [rbp-148h]
  _QWORD *v100; // [rsp+50h] [rbp-140h]
  const __m128i *v101; // [rsp+58h] [rbp-138h]
  int v102; // [rsp+60h] [rbp-130h]
  char v103; // [rsp+67h] [rbp-129h]
  const __m128i *v104; // [rsp+68h] [rbp-128h]
  void *v105[2]; // [rsp+70h] [rbp-120h] BYREF
  const __m128i *v106; // [rsp+80h] [rbp-110h]
  const __m128i *v107; // [rsp+88h] [rbp-108h]
  __int64 v108; // [rsp+90h] [rbp-100h]
  _QWORD *v109; // [rsp+98h] [rbp-F8h]
  __int64 v110; // [rsp+A0h] [rbp-F0h]
  signed int v111; // [rsp+A8h] [rbp-E8h]
  unsigned int v112; // [rsp+ACh] [rbp-E4h]
  __int64 v113; // [rsp+C0h] [rbp-D0h]
  __int64 v114; // [rsp+C8h] [rbp-C8h]
  _QWORD v115[2]; // [rsp+D0h] [rbp-C0h] BYREF
  const __m128i *v116; // [rsp+E0h] [rbp-B0h] BYREF
  unsigned __int64 v117; // [rsp+E8h] [rbp-A8h]
  __m128i v118; // [rsp+F0h] [rbp-A0h] BYREF
  __m128i v119; // [rsp+100h] [rbp-90h] BYREF
  __int64 v120; // [rsp+110h] [rbp-80h]
  __int64 v121; // [rsp+118h] [rbp-78h]
  __m128i v122; // [rsp+120h] [rbp-70h] BYREF
  __int64 v123; // [rsp+130h] [rbp-60h]
  const __m128i *v124; // [rsp+138h] [rbp-58h]
  __m128i v125; // [rsp+140h] [rbp-50h]
  unsigned __int64 v126; // [rsp+158h] [rbp-38h]

  v4 = a2;
  v99 = a1;
  v100 = a3;
  v108 = a4;
  v126 = __readfsqword(0x28u);
  v5 = (unsigned __int64)v115;
  v109 = v115;
  sub_28A40(v115, a2);
  v6 = *(_DWORD *)(a2 + 204);
  v112 = 0;
  v111 = v6 - 1;
  if ( v6 - 1 < 0 )
  {
LABEL_77:
    *(_BYTE *)(v99 + 24) = 0;
    goto LABEL_64;
  }
  while ( 1 )
  {
    v7 = *(_QWORD *)(v4 + 280);
    v8 = (int)v112++;
    v9 = v112;
    hexdsp = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v5, a2);
    v5 = 213;
    a2 = (__int64)v109;
    if ( hexdsp(213, v109, v9) )
      goto LABEL_3;
    if ( *(_BYTE *)(v108 + 672)
      && (signed int)v112 >= *(_DWORD *)(v108 + 652)
      && (signed int)v112 <= *(_DWORD *)(v108 + 656) )
    {
      v103 = 1;
      v102 = *(_DWORD *)(v108 + 660);
    }
    else
    {
      a2 = v112;
      v113 = sub_322C0((__int64 *)(v108 + 560), v112);
      v102 = v113;
      v103 = BYTE4(v113);
    }
    v5 = (unsigned __int64)sub_BA60;
    LODWORD(v113) = v102;
    BYTE4(v113) = v103;
    v11 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v4 + 104LL);
    if ( v11 != sub_BA60 )
      break;
    if ( *(_QWORD *)(v4 + 80) )
    {
      v5 = *(_QWORD *)(v4 + 72);
      v12 = *(int *)(v5 + 24LL * (int)v112 + 8);
      goto LABEL_12;
    }
LABEL_3:
    if ( v111 < (int)v112 )
      goto LABEL_77;
  }
  a2 = v112;
  v5 = v4;
  v12 = (int)v11(v4, v112);
LABEL_12:
  if ( (int)v12 <= 0 )
    goto LABEL_3;
  v101 = (const __m128i *)(v7 + 24 * v8);
  v13 = 0;
  v110 = 24LL * (int)v112;
  v14 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)v4 + 120LL);
  if ( v14 == sub_BAA0 )
  {
LABEL_14:
    a2 = v110;
    v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 72) + v110) + 4 * v13);
    goto LABEL_15;
  }
  while ( 2 )
  {
    a2 = v112;
    v5 = v4;
    v15 = v14(v4, v112, v13);
LABEL_15:
    if ( v15 <= 0 )
      goto LABEL_55;
    if ( v15 > *(_DWORD *)(v4 + 204) )
      goto LABEL_55;
    v16 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(v5, a2);
    a2 = (__int64)v109;
    v5 = 213;
    if ( v16(213, v109, (unsigned int)v15) )
      goto LABEL_55;
    v17 = *(const __m128i **)(v4 + 416);
    v18 = (const __m128i *)(v4 + 408);
    if ( !v17 )
      goto LABEL_29;
    a2 = v112;
    do
    {
      while ( v15 <= v17[2].m128i_i32[0] && (v15 != v17[2].m128i_i32[0] || (signed int)v112 <= v17[2].m128i_i32[1]) )
      {
        v18 = v17;
        v17 = (const __m128i *)v17[1].m128i_i64[0];
        if ( !v17 )
          goto LABEL_25;
      }
      v17 = (const __m128i *)v17[1].m128i_i64[1];
    }
    while ( v17 );
LABEL_25:
    if ( (const __m128i *)(v4 + 408) == v18
      || v15 < v18[2].m128i_i32[0]
      || v15 == v18[2].m128i_i32[0] && (signed int)v112 < v18[2].m128i_i32[1] )
    {
LABEL_29:
      v104 = (const __m128i *)(v4 + 408);
      v106 = v18;
      v107 = (const __m128i *)(v4 + 400);
      v19 = operator new(0x38u);
      v20 = v112;
      *(_DWORD *)(v19 + 32) = v15;
      *(_QWORD *)(v19 + 40) = 0xFFFFFFFF00000000LL;
      v5 = (unsigned __int64)v107;
      *(_DWORD *)(v19 + 36) = v20;
      a2 = (__int64)v106;
      *(_BYTE *)(v19 + 48) = 0;
      v105[0] = (void *)v19;
      v22 = sub_2A0E0((_QWORD *)v5, a2, (signed int *)(v19 + 32), v20, v21);
      v18 = (const __m128i *)v22;
      if ( v23 )
      {
        v5 = 1;
        if ( !v22 && v104 != v23 && v15 >= v23[2].m128i_i32[0] )
        {
          v5 = 0;
          if ( v15 == v23[2].m128i_i32[0] )
            v5 = (int)v112 < v23[2].m128i_i32[1];
        }
        a2 = (__int64)v105[0];
        v107 = (const __m128i *)v105[0];
        std::_Rb_tree_insert_and_rebalance(v5, v105[0], v23, v104);
        ++*(_QWORD *)(v4 + 440);
        v18 = v107;
      }
      else if ( v105[0] )
      {
        a2 = 56;
        v5 = (unsigned __int64)v105[0];
        v107 = (const __m128i *)v22;
        operator delete(v105[0], 0x38u);
        v18 = v107;
      }
    }
    if ( v18[3].m128i_i8[0] )
      goto LABEL_55;
    v24 = *(const __m128i **)(v4 + 280);
    if ( *(_BYTE *)(v108 + 672) && v15 >= *(_DWORD *)(v108 + 652) && v15 <= *(_DWORD *)(v108 + 656) )
    {
      BYTE4(v114) = 1;
      LODWORD(v25) = *(_DWORD *)(v108 + 660);
      LODWORD(v114) = v25;
      goto LABEL_38;
    }
    a2 = (unsigned int)v15;
    v105[0] = (void *)v18;
    v107 = v24;
    v5 = v108 + 560;
    v25 = sub_322C0((__int64 *)(v108 + 560), v15);
    v24 = v107;
    v18 = (const __m128i *)v105[0];
    v114 = v25;
    if ( !BYTE4(v25) )
      goto LABEL_55;
LABEL_38:
    v26 = v15 - 1;
    if ( !v103 )
    {
      v5 = *(_QWORD *)(v4 + 192);
      a2 = (unsigned int)v25;
      v105[0] = (char *)v24 + 24 * v26;
      LODWORD(v107) = v25;
      if ( !sub_263A0(v5, v25) )
      {
        sub_64B50(
          (unsigned int)&v119,
          *(_QWORD *)(v4 + 176),
          (unsigned int)"edge %a[%d].%d -> %a[%d]: dst state not found",
          *(_QWORD *)v105[0],
          *((_DWORD *)v105[0] + 4),
          (_DWORD)v107);
        v50 = v99;
        v51 = _mm_loadu_si128((const __m128i *)&v119.m128i_u64[1]);
        *(_QWORD *)v99 = v119.m128i_i64[0];
        *(_BYTE *)(v50 + 24) = 1;
        *(__m128i *)(v50 + 8) = v51;
        goto LABEL_64;
      }
      goto LABEL_55;
    }
    v106 = v18;
    v105[0] = (char *)v24 + 24 * v26;
    if ( v102 == (_DWORD)v25 )
    {
LABEL_55:
      if ( ++v13 == v12 )
        goto LABEL_3;
      v14 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)v4 + 120LL);
      if ( v14 == sub_BAA0 )
        goto LABEL_14;
      continue;
    }
    break;
  }
  v27 = *(_QWORD *)(v4 + 192);
  LODWORD(v104) = v25;
  sub_2E8A0((__int64)&v116, v27 + 128, v25, v102, *(_DWORD *)(v27 + 112));
  v28 = v117;
  v107 = v116;
  v29 = (const __m128i *)v105[0];
  v30 = _mm_loadl_epi64(&v118);
  v31 = v106;
  if ( v118.m128i_i8[8] )
  {
    v86 = v99;
    v87 = v107;
    *(_QWORD *)(v99 + 8) = v117;
    *(_QWORD *)v86 = v87;
    *(_BYTE *)(v86 + 24) = 1;
    *(_QWORD *)(v86 + 16) = v30.m128i_i64[0];
    goto LABEL_64;
  }
  if ( v117 > 1 )
  {
    v32 = v100[2];
    if ( v32 )
    {
      v33 = v100 + 1;
      v34 = v101[1].m128i_i32[0];
      do
      {
        while ( 1 )
        {
          v35 = *(_QWORD *)(v32 + 16);
          v36 = *(_QWORD *)(v32 + 24);
          if ( v34 > *(_DWORD *)(v32 + 32) )
            break;
          v33 = (_QWORD *)v32;
          v32 = *(_QWORD *)(v32 + 16);
          if ( !v35 )
            goto LABEL_47;
        }
        v32 = *(_QWORD *)(v32 + 24);
      }
      while ( v36 );
LABEL_47:
      if ( v100 + 1 == v33 || (v37 = &v119, v34 < *((_DWORD *)v33 + 8)) )
      {
LABEL_49:
        v98.m128i_i64[1] = v117;
        v104 = v106;
        v106 = (const __m128i *)v105[0];
        v119.m128i_i64[0] = (__int64)v101[1].m128i_i64;
        v105[0] = &v119;
        v98.m128i_i64[0] = v30.m128i_i64[0];
        v38 = sub_2E490(v100, (__int64)v33, (__int64)&unk_78AE8, (signed int **)&v119);
        v30 = _mm_loadl_epi64(&v98);
        v28 = v98.m128i_i64[1];
        v33 = (_QWORD *)v38;
        v31 = v104;
        v29 = v106;
        v37 = (__m128i *)v105[0];
      }
      v39 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, v30);
      v119 = _mm_loadu_si128(v29);
      v120 = v29[1].m128i_i64[0];
      v40 = v31[2].m128i_i64[1];
      v121 = v40;
      v122 = _mm_loadu_si128(v101);
      v41 = v101[1].m128i_i64[0];
      v125 = v39;
      v123 = v41;
      v124 = v107;
      v42 = v33[6];
      v43 = (const __m128i *)v33[5];
      v44 = v33[7];
      v5 = v42 + 1;
      if ( v37 >= v43 && v37 < &v43[5 * v44] )
      {
        v124 = nullptr;
        v53 = v119.m128i_i64[0];
        v125 = 0;
        v106 = (const __m128i *)v119.m128i_i64[1];
        v98 = v122;
        a2 = (unsigned int)v123;
        LODWORD(v105[0]) = v120;
        LODWORD(v104) = v123;
        if ( v44 < v5 )
        {
          v92 = v40;
          v94 = v44;
          v97 = v119.m128i_i64[0];
          v96 = v39;
          v72 = qvector_reserve(v33 + 5, 0, v42 + 1, 80);
          v73 = v33[7];
          v74 = (const __m128i *)v33[5];
          a2 = v33[6] - 1LL;
          v33[7] = v94;
          v75 = v97;
          v76 = _mm_load_si128(&v96);
          if ( a2 >= 0 )
          {
            v77 = v112;
            v78 = v72;
            do
            {
              v79 = v74[1].m128i_i64[0];
              v80 = _mm_loadu_si128(v74);
              v78 += 80;
              v74 += 5;
              *(_QWORD *)(v78 - 64) = v79;
              v81 = v74[-4].m128i_i64[1];
              *(__m128i *)(v78 - 80) = v80;
              v82 = _mm_loadu_si128(v74 - 3);
              *(_QWORD *)(v78 - 56) = v81;
              v83 = v74[-2].m128i_i64[0];
              *(__m128i *)(v78 - 48) = v82;
              *(_QWORD *)(v78 - 32) = v83;
              v84 = v74[-2].m128i_i64[1];
              v85 = _mm_loadu_si128(v74 - 1);
              v74[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v78 - 24) = v84;
              *(__m128i *)(v78 - 16) = v85;
              v74[-1].m128i_i64[1] = 0;
              v70 = a2-- == 0;
            }
            while ( !v70 );
            v112 = v77;
            v74 = (const __m128i *)v33[5];
          }
          v91 = v92;
          v93 = v73;
          v95 = v72;
          v97 = v75;
          v96 = v76;
          qfree(v74);
          v43 = (const __m128i *)v95;
          v42 = v33[6];
          v40 = v91;
          v33[5] = v95;
          v39 = _mm_load_si128(&v96);
          v33[7] = v93;
          v53 = v97;
        }
        v54 = (__m128i *)&v43[5 * v42];
        v54->m128i_i64[1] = (__int64)v106;
        v55 = (__int32)v105[0];
        v54->m128i_i64[0] = v53;
        v54[1].m128i_i32[0] = v55;
        v56 = v98.m128i_i64[0];
        v54[1].m128i_i64[1] = v40;
        v54[2] = (__m128i)__PAIR128__(v98.m128i_u64[1], v56);
        v54[3].m128i_i32[0] = (int)v104;
        v5 = (unsigned __int64)v107;
        v54[4] = v39;
        v54[3].m128i_i64[1] = v5;
      }
      else
      {
        if ( v44 < v5 )
        {
          v106 = (const __m128i *)v33[7];
          *(__m128i *)v105 = v39;
          v57 = qvector_reserve(v33 + 5, 0, v42 + 1, 80);
          v58 = (const __m128i *)v33[7];
          v5 = v33[5];
          v59 = v33[6] - 1LL;
          v33[7] = v106;
          si128 = _mm_load_si128((const __m128i *)v105);
          if ( v59 >= 0 )
          {
            v61 = v112;
            v62 = v57;
            do
            {
              v63 = *(_QWORD *)(v5 + 16);
              v64 = _mm_loadu_si128((const __m128i *)v5);
              v62 += 80;
              v5 += 80LL;
              *(_QWORD *)(v62 - 64) = v63;
              v65 = *(_QWORD *)(v5 - 56);
              *(__m128i *)(v62 - 80) = v64;
              v66 = _mm_loadu_si128((const __m128i *)(v5 - 48));
              *(_QWORD *)(v62 - 56) = v65;
              v67 = *(_QWORD *)(v5 - 32);
              *(__m128i *)(v62 - 48) = v66;
              *(_QWORD *)(v62 - 32) = v67;
              v68 = *(_QWORD *)(v5 - 24);
              v69 = _mm_loadu_si128((const __m128i *)(v5 - 16));
              *(_QWORD *)(v5 - 24) = 0;
              *(_QWORD *)(v62 - 24) = v68;
              *(__m128i *)(v62 - 16) = v69;
              *(_QWORD *)(v5 - 8) = 0;
              v70 = v59-- == 0;
            }
            while ( !v70 );
            v112 = v61;
            v5 = v33[5];
          }
          v104 = v58;
          v106 = (const __m128i *)v57;
          *(__m128i *)v105 = si128;
          qfree(v5);
          v43 = v106;
          v71 = v104;
          v42 = v33[6];
          v39 = _mm_load_si128((const __m128i *)v105);
          v33[5] = v106;
          v33[7] = v71;
        }
        a2 = (__int64)v107;
        v45 = (__m128i *)&v43[5 * v42];
        v46 = v120;
        *v45 = _mm_load_si128(&v119);
        v47 = _mm_load_si128(&v122);
        v45[1].m128i_i64[0] = v46;
        v48 = v121;
        v45[2] = v47;
        v45[1].m128i_i64[1] = v48;
        v49 = v123;
        v45[3].m128i_i64[1] = a2;
        v45[3].m128i_i64[0] = v49;
        v45[4] = v39;
      }
      ++v33[6];
      goto LABEL_55;
    }
    v33 = v100 + 1;
    goto LABEL_49;
  }
  sub_64B50(
    (unsigned int)&v119,
    *(_QWORD *)(v4 + 176),
    (unsigned int)"path %a[%d]->%a[%d] is invalid (min %d)",
    *(_QWORD *)v105[0],
    (_DWORD)v104,
    v101->m128i_i64[0]);
  v88 = v99;
  v89 = v119.m128i_i64[0];
  v90 = _mm_loadu_si128((const __m128i *)&v119.m128i_u64[1]);
  *(_BYTE *)(v99 + 24) = 1;
  *(_QWORD *)v88 = v89;
  *(__m128i *)(v88 + 8) = v90;
  if ( v107 )
    qfree(v107);
LABEL_64:
  qfree(v115[0]);
  return v99;
}
