unsigned __int64 __fastcall sub_38A160(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // r13
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // r12
  int v22; // ecx
  __int64 *v23; // r15
  __int64 v24; // r14
  char v25; // al
  __int64 v26; // rdi
  unsigned __int64 v27; // r14
  size_t v28; // r8
  __int64 v29; // r15
  size_t v30; // r9
  __int64 v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // r12
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rax
  char tinfo_property; // r14
  __int64 v38; // rax
  __int64 v39; // r14
  unsigned __int64 v40; // r12
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // r12
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // r8
  unsigned __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // rsi
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // r8
  __int64 v61; // r8
  unsigned __int64 v62; // rdx
  __int64 v63; // r9
  __int64 v64; // rsi
  _DWORD *v65; // r8
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int64 v68; // r12
  __int64 v69; // r14
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // r14
  __int64 v74; // r13
  unsigned __int64 v75; // r12
  __int64 v76; // rsi
  __m128i si128; // xmm0
  __int64 v78; // rax
  unsigned int v79; // r14d
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // r14
  unsigned __int64 v88; // r12
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // [rsp+0h] [rbp-80h]
  __int64 v98; // [rsp+0h] [rbp-80h]
  __int64 v99; // [rsp+0h] [rbp-80h]
  __int64 v100; // [rsp+0h] [rbp-80h]
  size_t v101; // [rsp+8h] [rbp-78h]
  __int64 v102; // [rsp+8h] [rbp-78h]
  __int64 v103; // [rsp+8h] [rbp-78h]
  __int64 v104; // [rsp+8h] [rbp-78h]
  __int64 v105; // [rsp+8h] [rbp-78h]
  size_t v106; // [rsp+10h] [rbp-70h]
  unsigned __int64 v107; // [rsp+10h] [rbp-70h]
  unsigned __int64 v108; // [rsp+10h] [rbp-70h]
  unsigned __int64 v109; // [rsp+10h] [rbp-70h]
  unsigned __int64 v110; // [rsp+10h] [rbp-70h]
  __int64 v111; // [rsp+18h] [rbp-68h]
  __int64 v112; // [rsp+18h] [rbp-68h]
  __int64 *v113; // [rsp+18h] [rbp-68h]
  __int64 v114; // [rsp+18h] [rbp-68h]
  __int64 v115; // [rsp+18h] [rbp-68h]
  __int64 v116; // [rsp+18h] [rbp-68h]
  __int64 v117; // [rsp+18h] [rbp-68h]
  __int64 v118; // [rsp+18h] [rbp-68h]
  __int64 v119; // [rsp+18h] [rbp-68h]
  __int64 v120; // [rsp+28h] [rbp-58h] BYREF
  void *src; // [rsp+30h] [rbp-50h] BYREF
  __int128 v122; // [rsp+38h] [rbp-48h]
  unsigned __int64 v123; // [rsp+48h] [rbp-38h]

  v1 = a1[1];
  v123 = __readfsqword(0x28u);
  v3 = sub_2530F0(*(_QWORD *)(*a1 + 32) + 16LL, *(_QWORD *)(v1 + 8));
  v4 = *(_QWORD *)(a1[1] + 8);
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 == 48 )
  {
    sub_3837F0((__int64)(a1 + 9), 1, v4 + 48);
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(v4 + 56) & 4) != 0 )
  {
    v6 = a1[10];
    v111 = v6;
    if ( v6 )
    {
      v9 = v6 + 7;
      v8 = v6 + 8;
      v7 = a1[9];
      v111 = v6 - 1;
      if ( a1[11] >= (unsigned __int64)(v6 + 8) )
        goto LABEL_5;
    }
    else
    {
      v7 = a1[9];
      v8 = 9;
      v9 = 8;
      if ( (unsigned __int64)a1[11] >= 9 )
      {
LABEL_5:
        a1[10] = v8;
        *(_BYTE *)(v7 + v9) = 0;
        *(_QWORD *)(a1[9] + v111) = 0x203B706F5F757066LL;
        goto LABEL_6;
      }
    }
    v46 = qvector_reserve(a1 + 9, v7, v8, 1);
    a1[9] = v46;
    v7 = v46;
    goto LABEL_5;
  }
  v16 = sub_251380(v5);
  if ( !v16 )
  {
LABEL_6:
    v10 = *(_QWORD *)(a1[1] + 8);
    v11 = *(_DWORD *)(v10 + 8);
    if ( v11 != 61 )
      goto LABEL_7;
    goto LABEL_25;
  }
  if ( v16 == 2 )
  {
    v86 = a1[10];
    v119 = v86;
    if ( v86 )
    {
      v87 = v86 + 1;
      v88 = v86 + 2;
      v119 = v86 - 1;
    }
    else
    {
      v88 = 3;
      v87 = 2;
    }
    v89 = a1[9];
    if ( a1[11] < v88 )
    {
      v96 = qvector_reserve(a1 + 9, v89, v88, 1);
      a1[9] = v96;
      v89 = v96;
    }
    a1[10] = v88;
    *(_BYTE *)(v89 + v87) = 0;
    *(_WORD *)(a1[9] + v119) = 28277;
  }
  v17 = a1[10];
  v112 = v17;
  if ( v17 )
  {
    v18 = v17 + 10;
    v19 = v17 + 11;
    v112 = v17 - 1;
  }
  else
  {
    v19 = 12;
    v18 = 11;
  }
  v20 = a1[9];
  if ( a1[11] < v19 )
  {
    v83 = qvector_reserve(a1 + 9, v20, v19, 1);
    a1[9] = v83;
    v20 = v83;
  }
  a1[10] = v19;
  *(_BYTE *)(v20 + v18) = 0;
  qmemcpy((void *)(a1[9] + v112), "signed op; ", 11);
  v10 = *(_QWORD *)(a1[1] + 8);
  v11 = *(_DWORD *)(v10 + 8);
  if ( v11 != 61 )
  {
LABEL_7:
    if ( (unsigned int)(v11 - 59) > 1 )
      goto LABEL_8;
    v23 = a1 + 9;
    if ( (*(_BYTE *)(v10 + 57) & 1) != 0 )
    {
      v67 = a1[10];
      v117 = v67;
      if ( v67 )
      {
        v69 = v67 + 8;
        v68 = v67 + 9;
        v117 = v67 - 1;
      }
      else
      {
        v68 = 10;
        v69 = 9;
      }
      v70 = a1[9];
      v23 = a1 + 9;
      if ( a1[11] < v68 )
      {
        v95 = qvector_reserve(a1 + 9, v70, v68, 1);
        a1[9] = v95;
        v70 = v95;
      }
      a1[10] = v68;
      *(_BYTE *)(v70 + v69) = 0;
      v71 = a1[9] + v117;
      *(_QWORD *)v71 = 0x3B656C6261746676LL;
      *(_BYTE *)(v71 + 8) = 32;
    }
    v32 = a1[10];
    v114 = v32;
    if ( v32 )
    {
      v34 = v32 + 3;
      v33 = v32 + 4;
      v114 = v32 - 1;
    }
    else
    {
      v33 = 5;
      v34 = 4;
    }
    v35 = a1[9];
    if ( a1[11] < v33 )
    {
      v82 = qvector_reserve(v23, v35, v33, 1);
      a1[9] = v82;
      v35 = v82;
    }
    a1[10] = v33;
    *(_BYTE *)(v35 + v34) = 0;
    *(_DWORD *)(a1[9] + v114) = 1030121071;
    v36 = *(_QWORD *)(*(_QWORD *)(a1[1] + 8) + 24LL);
    src = nullptr;
    src = (void *)get_tinfo_property(*(_QWORD *)(v36 + 48), 10);
    tinfo_property = get_tinfo_property(src, 2);
    clear_tinfo_t(&src);
    if ( (tinfo_property & 0x3F) == 0x1D )
    {
      v38 = a1[10];
      v115 = v38;
      if ( v38 )
      {
        v39 = v38 + 7;
        v40 = v38 + 8;
        v115 = v38 - 1;
      }
      else
      {
        v40 = 9;
        v39 = 8;
      }
      v41 = a1[9];
      if ( a1[11] < v40 )
      {
        v90 = qvector_reserve(v23, v41, v40, 1);
        a1[9] = v90;
        v41 = v90;
      }
      a1[10] = v40;
      *(_BYTE *)(v41 + v39) = 0;
      *(_QWORD *)(a1[9] + v115) = 0x296E6F696E752830LL;
    }
    else
    {
      v118 = *(_QWORD *)(a1[1] + 8);
      v79 = *(_DWORD *)(v118 + 32);
      while ( *(_DWORD *)(v118 + 8) == 59 )
      {
        v81 = *(_QWORD *)(v118 + 24);
        if ( (unsigned int)(*(_DWORD *)(v81 + 8) - 59) > 1 )
          break;
        v80 = *(_QWORD *)(v81 + 24);
        src = nullptr;
        src = (void *)get_tinfo_property(*(_QWORD *)(v80 + 48), 10);
        if ( (unsigned int)sub_25F5F0(nullptr, &src, *(unsigned int *)(*(_QWORD *)(v118 + 24) + 32LL), 0) )
        {
          clear_tinfo_t(&src);
          break;
        }
        v79 += *(_DWORD *)(*(_QWORD *)(v118 + 24) + 32LL);
        v118 = *(_QWORD *)(v118 + 24);
        clear_tinfo_t(&src);
      }
      sub_381D10(v23, v79, 0, 4u, 1u);
    }
    v42 = a1[10];
    v116 = v42;
    if ( v42 )
      goto LABEL_52;
LABEL_79:
    v45 = a1[9];
    v44 = 3;
    v43 = 2;
    if ( (unsigned __int64)a1[11] >= 3 )
      goto LABEL_53;
LABEL_80:
    v66 = qvector_reserve(v23, v45, v44, 1);
    a1[9] = v66;
    v45 = v66;
    goto LABEL_53;
  }
LABEL_25:
  v21 = -1;
  v113 = *(__int64 **)(v10 + 24);
  v22 = 8 * *((char *)v113 + 15);
  if ( (unsigned __int64)v22 <= 0x3F )
    v21 = (1LL << v22) - 1;
  v23 = a1 + 9;
  v24 = *v113;
  v25 = *((_BYTE *)v113 + 13);
  if ( (v25 & 1) != 0 )
  {
    v61 = a1[10];
    if ( v61 )
    {
      v63 = v61 + 6;
      v62 = v61 + 7;
      --v61;
    }
    else
    {
      v62 = 8;
      v63 = 7;
    }
    v64 = a1[9];
    if ( a1[11] < v62 )
    {
      v98 = v63;
      v103 = v61;
      v108 = v62;
      v92 = qvector_reserve(a1 + 9, v64, v62, 1);
      v63 = v98;
      v61 = v103;
      a1[9] = v92;
      v62 = v108;
      v64 = v92;
    }
    a1[10] = v62;
    *(_BYTE *)(v64 + v63) = 0;
    v65 = (_DWORD *)(a1[9] + v61);
    *v65 = 1702390118;
    *(_DWORD *)((char *)v65 + 3) = 540763237;
    v25 = *((_BYTE *)v113 + 13);
  }
  if ( (v25 & 8) != 0 )
  {
    v56 = a1[10];
    if ( v56 )
    {
      v57 = v56 + 8;
      v58 = v56 + 9;
      --v56;
    }
    else
    {
      v58 = 10;
      v57 = 9;
    }
    v59 = a1[9];
    if ( a1[11] < v58 )
    {
      v100 = v57;
      v105 = v56;
      v110 = v58;
      v94 = qvector_reserve(a1 + 9, v59, v58, 1);
      v57 = v100;
      v56 = v105;
      a1[9] = v94;
      v58 = v110;
      v59 = v94;
    }
    a1[10] = v58;
    *(_BYTE *)(v59 + v57) = 0;
    v60 = a1[9] + v56;
    *(_QWORD *)v60 = 0x3B6465746167656ELL;
    *(_BYTE *)(v60 + 8) = 32;
    v25 = *((_BYTE *)v113 + 13);
  }
  if ( (v25 & 0x10) != 0 )
  {
    v52 = a1[10];
    if ( v52 )
    {
      v53 = v52 + 7;
      v54 = v52 + 8;
      --v52;
    }
    else
    {
      v54 = 9;
      v53 = 8;
    }
    v55 = a1[9];
    if ( a1[11] < v54 )
    {
      v99 = v53;
      v104 = v52;
      v109 = v54;
      v93 = qvector_reserve(a1 + 9, v55, v54, 1);
      v53 = v99;
      v52 = v104;
      a1[9] = v93;
      v54 = v109;
      v55 = v93;
    }
    a1[10] = v54;
    *(_BYTE *)(v55 + v53) = 0;
    *(_QWORD *)(a1[9] + v52) = 0x203B746F6E746962LL;
  }
  v26 = v113[5];
  if ( (v26 & 0x20000) != 0 )
  {
    v47 = a1[10];
    if ( v47 )
    {
      v49 = v47 + 8;
      v48 = v47 + 9;
      --v47;
    }
    else
    {
      v48 = 10;
      v49 = 9;
    }
    v50 = a1[9];
    if ( a1[11] < v48 )
    {
      v97 = v49;
      v102 = v47;
      v107 = v48;
      v91 = qvector_reserve(a1 + 9, v50, v48, 1);
      v49 = v97;
      v47 = v102;
      a1[9] = v91;
      v48 = v107;
      v50 = v91;
    }
    a1[10] = v48;
    *(_BYTE *)(v50 + v49) = 0;
    v51 = a1[9] + v47;
    *(_QWORD *)v51 = 0x3B6E676973766E69LL;
    *(_BYTE *)(v51 + 8) = 32;
    v26 = v113[5];
  }
  if ( !(unsigned __int8)is_enum(v26, (unsigned int)*((char *)v113 + 12)) )
  {
    v10 = *(_QWORD *)(a1[1] + 8);
    goto LABEL_8;
  }
  sub_381D10(a1 + 9, v21 & v24, 0, *((char *)v113 + 15), 1u);
  v42 = a1[10];
  v116 = v42;
  if ( !v42 )
    goto LABEL_79;
LABEL_52:
  v43 = v42 + 1;
  v44 = v42 + 2;
  v45 = a1[9];
  v116 = v42 - 1;
  if ( a1[11] < (unsigned __int64)(v42 + 2) )
    goto LABEL_80;
LABEL_53:
  a1[10] = v44;
  *(_BYTE *)(v45 + v43) = 0;
  *(_WORD *)(a1[9] + v116) = 8251;
  v10 = *(_QWORD *)(a1[1] + 8);
LABEL_8:
  v12 = *a1;
  v120 = 0;
  sub_3825E0(*(_QWORD *)(v12 + 128), v10, &v120);
  src = nullptr;
  v122 = 0;
  if ( (unsigned __int8)print_tinfo(&src, 0, 0, 0, 0, &v120, 0, 0) )
  {
    v27 = v122;
    if ( (_QWORD)v122 )
    {
      v28 = v122 - 1;
      if ( (_QWORD)v122 != 1 )
      {
        v29 = a1[10];
        v30 = v122 - 1;
        if ( v29 )
        {
          --v29;
          v30 = v28 + v29;
          v27 = v122 + v29;
        }
        v31 = a1[9];
        if ( a1[11] < v27 )
        {
          v101 = v30;
          v106 = v122 - 1;
          v84 = qvector_reserve(a1 + 9, v31, v27, 1);
          v30 = v101;
          v28 = v106;
          a1[9] = v84;
          v31 = v84;
        }
        a1[10] = v27;
        *(_BYTE *)(v31 + v30) = 0;
        memcpy((void *)(v29 + a1[9]), src, v28);
      }
    }
  }
  if ( src )
  {
    *(_QWORD *)&v122 = 0;
    qfree(src);
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1[1] + 8) + 8LL) != 68 )
  {
    src = nullptr;
    copy_tinfo_t(&src, &v120);
    sub_389BD0((__int64)a1, (__int64 *)&src);
    clear_tinfo_t(&src);
  }
  clear_tinfo_t(&v120);
LABEL_14:
  v13 = *(_QWORD *)(a1[1] + 8);
  if ( (unsigned int)(*(_DWORD *)(v13 + 8) - 38) <= 3 )
  {
    v14 = *(_DWORD *)(v3 + 8);
    if ( v14 == 72 || v14 == 1 && v13 == *(_QWORD *)(v3 + 24) )
    {
      v72 = a1[10];
      v73 = v72;
      if ( v72 )
      {
        v74 = v72 + 70;
        v75 = v72 + 71;
        v73 = v72 - 1;
      }
      else
      {
        v75 = 72;
        v74 = 71;
      }
      v76 = a1[9];
      if ( a1[11] < v75 )
      {
        v85 = qvector_reserve(a1 + 9, v76, v75, 1);
        a1[9] = v85;
        v76 = v85;
      }
      a1[10] = v75;
      si128 = _mm_load_si128((const __m128i *)&xmmword_411DE0);
      *(_BYTE *)(v76 + v74) = 0;
      v78 = v73 + a1[9];
      *(__m128i *)v78 = si128;
      *(__m128i *)(v78 + 16) = _mm_load_si128((const __m128i *)&xmmword_411DF0);
      *(__m128i *)(v78 + 32) = _mm_load_si128((const __m128i *)&xmmword_411E00);
      *(__m128i *)(v78 + 48) = _mm_load_si128((const __m128i *)&xmmword_411E10);
      *(_QWORD *)(v78 + 63) = 0x305649445F4C4149LL;
    }
  }
  return v123 - __readfsqword(0x28u);
}
