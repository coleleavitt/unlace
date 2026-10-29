unsigned __int64 __fastcall sub_1B3C110(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8,
        int a9,
        int a10)
{
  __int64 *v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r8
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // r13
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdi
  int v37; // r11d
  __int64 v38; // rdx
  unsigned int v39; // r9d
  _QWORD *v40; // rsi
  __int64 v41; // r10
  __int64 v42; // rdi
  __int64 v43; // rbx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  void **v52; // rdi
  unsigned __int64 v53; // rbx
  void *v54; // r13
  __int64 v55; // r14
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  bool v59; // r14
  __int64 v60; // rax
  int v61; // eax
  unsigned int v62; // ecx
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r13
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r14
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rbx
  __int64 v87; // rax
  unsigned __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  unsigned int v92; // eax
  __int64 v93; // rdx
  int v94; // esi
  __int64 v95; // r9
  __m128 *v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rax
  unsigned int v99; // esi
  _QWORD *v100; // rdi
  __int64 *v101; // [rsp+8h] [rbp-1C0h]
  __int64 v102; // [rsp+20h] [rbp-1A8h]
  char v103; // [rsp+20h] [rbp-1A8h]
  __int64 v104; // [rsp+20h] [rbp-1A8h]
  __int64 v105; // [rsp+20h] [rbp-1A8h]
  __int64 v106; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v107; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v108; // [rsp+20h] [rbp-1A8h]
  __int64 v109; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v110; // [rsp+30h] [rbp-198h] BYREF
  unsigned __int64 v111; // [rsp+38h] [rbp-190h]
  char *v112; // [rsp+40h] [rbp-188h]
  void **p_ptr; // [rsp+48h] [rbp-180h]
  int *v114; // [rsp+50h] [rbp-178h]
  int v115; // [rsp+5Ch] [rbp-16Ch]
  __int64 v116; // [rsp+60h] [rbp-168h]
  int v117; // [rsp+68h] [rbp-160h]
  int v118; // [rsp+6Ch] [rbp-15Ch]
  unsigned int v119; // [rsp+78h] [rbp-150h] BYREF
  int v120; // [rsp+7Ch] [rbp-14Ch] BYREF
  unsigned __int64 v121; // [rsp+80h] [rbp-148h] BYREF
  __int64 v122; // [rsp+88h] [rbp-140h] BYREF
  __m128i v123; // [rsp+90h] [rbp-138h] BYREF
  char v124; // [rsp+A0h] [rbp-128h] BYREF
  void *ptr; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v126; // [rsp+B8h] [rbp-110h]
  char v127; // [rsp+C0h] [rbp-108h] BYREF
  __m128 v128; // [rsp+100h] [rbp-C8h] BYREF
  _QWORD *v129; // [rsp+110h] [rbp-B8h]
  unsigned __int8 *v130[11]; // [rsp+120h] [rbp-A8h] BYREF
  char v131; // [rsp+178h] [rbp-50h]
  unsigned int v132; // [rsp+180h] [rbp-48h]
  char v133; // [rsp+184h] [rbp-44h]

  v111 = a4;
  p_ptr = &ptr;
  ptr = &v127;
  v126 = 0x800000000LL;
  v115 = a5;
  v117 = a6;
  v101 = &a2[a3];
  if ( a2 != v101 )
  {
    v11 = a2;
    v114 = &v120;
    v112 = &v124;
    while ( 1 )
    {
      v12 = *v11;
      v119 = 0;
      v13 = *a1;
      v121 = v12;
      v122 = 0;
      v14 = sub_1B31D70(v13, &v121, &v119, &v122, (__int64)&byte_22F0C30, 0, *(double *)a7.m128_u64);
      if ( v16 )
      {
        v63 = (unsigned int)v126;
        v64 = (unsigned int)v126 + 1LL;
        if ( v64 > HIDWORD(v126) )
        {
          sub_2237220(p_ptr, p_ptr + 2, v64, 8);
          v63 = (unsigned int)v126;
        }
        *((_QWORD *)ptr + v63) = v12;
        LODWORD(v126) = v126 + 1;
      }
      if ( !v14 )
        goto LABEL_33;
      v17 = *(_QWORD *)(v14 + 48);
      v18 = 0;
      if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 40 <= 6 )
        v18 = v14;
      v19 = *(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL;
      v20 = *(_QWORD *)v19;
      v21 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v19 + 16LL) - 43;
      if ( (unsigned int)v21 <= 1 )
        goto LABEL_114;
      v21 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
      if ( (unsigned int)v21 > 1 )
        goto LABEL_12;
      v110 = *(_QWORD *)(v14 + 48);
      v20 = sub_F63050(v20, v19, v17, v21);
      if ( v20 )
      {
LABEL_114:
        while ( 1 )
        {
          v17 = *(_QWORD *)(v20 + 32);
          if ( (*(_BYTE *)(v20 + 18) & 0x10) == 0 )
            break;
          while ( 1 )
          {
            v20 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
            v22 = (unsigned int)*(unsigned __int8 *)(v20 + 16) - 43;
            if ( (unsigned int)v22 <= 1 )
              break;
            v23 = sub_F63050(v20, v19, v22, v21);
            v17 = *(_QWORD *)(v23 + 32);
            if ( (*(_BYTE *)(v23 + 18) & 0x10) == 0 )
              goto LABEL_11;
          }
        }
LABEL_11:
        v20 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v17 = v110;
        v20 = *(_QWORD *)v19;
      }
LABEL_12:
      if ( (*(_BYTE *)(v20 + 8) & 0xF) != 0 )
        v20 = sub_F64F00(v17, v19, v17, v21, v15);
      v24 = *(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) == 0
        || (v25 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL)) == 0
        || (v26 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL),
            (unsigned __int8)(v26 - 2) > 4u)
        && v26 != 42 )
      {
        v104 = v24;
        sub_168B9F0((__int64)&v128, a1, v119, 0x1146u, 0);
        if ( v131 )
        {
          sub_AE9DF0(v130, v104, 8u);
        }
        else if ( v133 )
        {
          v72 = sub_168B9E0(&v128);
          v76 = v104;
          v77 = v72;
          v78 = (__int64)v129;
          if ( v129 )
          {
            v78 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, __int64))(*v129 + 32LL))(
                    v129,
                    a1,
                    *v129,
                    v74,
                    v75,
                    v104);
            v76 = v104;
          }
          v105 = v76;
          v123.m128i_i64[0] = v78;
          v79 = sub_1587BC0(v77, v123.m128i_i64, v73, v74, v75, v76);
          sub_AE9DF0((unsigned __int8 **)(*v79 + 32LL * v132 + 8), v105, 8u);
        }
        v59 = (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0;
        if ( v131 )
        {
          sub_AE9DF0(v130, v59, 3u);
        }
        else if ( v133 )
        {
          v80 = sub_168B9E0(&v128);
          v84 = (__int64)v129;
          if ( v129 )
          {
            v106 = v80;
            v84 = (*(__int64 (__fastcall **)(_QWORD *))(*v129 + 32LL))(v129);
            v80 = v106;
          }
          v123.m128i_i64[0] = v84;
          v85 = sub_1587BC0(v80, v123.m128i_i64, v80, v81, v82, v83);
          sub_AE9DF0((unsigned __int8 **)(*v85 + 32LL * v132 + 8), v59, 3u);
        }
        sub_15884C0((__int64)&v128, &v122);
        sub_15F7200(&v128);
        if ( !v18 || (v60 = sub_168B6C0((__int64)a1), v61 = sub_B74100(v18, v60), v62 = 5899, !v61) )
          v62 = 6283;
        sub_168B9F0((__int64)&v128, a1, *(_DWORD *)(v14 + 24), v62, 0);
        if ( v131 )
        {
          sub_AE9DF0(v130, v14, 0xAu);
        }
        else if ( v133 )
        {
          v69 = sub_168B9E0(&v128);
          v70 = (__int64)v129;
          if ( v129 )
            v70 = (*(__int64 (__fastcall **)(_QWORD *))(*v129 + 32LL))(v129);
          v123.m128i_i64[0] = v70;
          v71 = sub_1587BC0(v69, v123.m128i_i64, v65, v66, v67, v68);
          sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * v132 + 8), v14, 0xAu);
        }
        goto LABEL_50;
      }
      v27 = a1[1];
      v123.m128i_i64[0] = v14;
      v102 = v27;
      v110 = v121;
      v28 = sub_1AEE450(v14);
      v123.m128i_i64[0] = v28;
      v29 = *(unsigned int *)(v102 + 344);
      if ( !(_DWORD)v29
        || (v30 = *(_QWORD *)(v102 + 336) + 6776 * v29 - 6776, *(_QWORD *)(v30 + 6768) != *(_QWORD *)(v102 + 328))
        || (v31 = *(unsigned int *)(v30 + 8),
            v32 = *(unsigned int *)(v102 + 27504),
            (unsigned int)v31 <= (unsigned int)v32)
        || (v33 = v31 - v32) == 0 )
      {
        BUG();
      }
      v34 = *(_QWORD *)v30 + 1688 * (v33 - 1);
      v35 = v34 + 432;
      v103 = *(_BYTE *)(v34 + 432) & 1;
      if ( v103 )
      {
        v38 = v34 + 440;
        v39 = ((unsigned __int8)((unsigned int)v28 >> 4) ^ (unsigned __int8)((unsigned int)v28 >> 9)) & 7;
        v40 = (_QWORD *)(v34
                       + 440
                       + 16LL
                       * (((unsigned __int8)((unsigned int)v28 >> 4) ^ (unsigned __int8)((unsigned int)v28 >> 9)) & 7));
        v41 = *v40;
        if ( v28 == *v40 )
        {
LABEL_71:
          v42 = 128;
          goto LABEL_26;
        }
        v37 = 7;
        goto LABEL_89;
      }
      v36 = *(unsigned int *)(v34 + 448);
      if ( !(_DWORD)v36 )
      {
        v128.m128_u64[0] = 0;
        v93 = *(unsigned int *)(v34 + 432);
        v94 = (*(_DWORD *)(v34 + 432) >> 1) + 1;
        goto LABEL_77;
      }
      v37 = v36 - 1;
      v38 = *(_QWORD *)(v34 + 440);
      v39 = (v36 - 1) & (((unsigned int)v28 >> 4) ^ ((unsigned int)v28 >> 9));
      v40 = (_QWORD *)(v38 + 16LL * v39);
      v41 = *v40;
      if ( *v40 == v28 )
      {
LABEL_25:
        v42 = 16 * v36;
LABEL_26:
        sub_1AF9570(&v128, v40, (_QWORD *)(v42 + v38), v35, 1);
        if ( !*(_QWORD *)(v128.m128_u64[0] + 8) )
        {
          if ( v18 )
            goto LABEL_28;
          goto LABEL_84;
        }
        v107 = *(_QWORD *)(v128.m128_u64[0] + 8);
        sub_168B9F0((__int64)&v128, a1, v119, 0x121Eu, 0);
        v120 = 0;
        v86 = sub_1587D10((__int64)&v128, v114);
        sub_1AF81E0(&v123, 6u);
        v87 = sub_1682AF0(v86, (__int64)&v123);
        sub_15884C0(v87, &v122);
        v88 = v107;
        if ( (char *)v123.m128i_i64[0] != v112 )
        {
          operator delete((void *)v123.m128i_i64[0]);
          v88 = v107;
        }
        v108 = v88;
        sub_15F7200(&v128);
        v92 = sub_C00A40(v108, (__int64)&v122, v89, v90, v91);
        sub_168B9F0((__int64)&v128, a1, v92, 0x181Au, 0);
        sub_1AF81E0(&v123, 6u);
        sub_1682AF0((__int64)&v128, (__int64)&v123);
        if ( (char *)v123.m128i_i64[0] != v112 )
          operator delete((void *)v123.m128i_i64[0]);
LABEL_50:
        ++v11;
        sub_15F7200(&v128);
        if ( v101 == v11 )
        {
LABEL_34:
          if ( v111 )
            goto LABEL_35;
LABEL_36:
          v52 = (void **)ptr;
          v53 = 0;
          if ( (_DWORD)v126 )
          {
            v54 = ptr;
            v55 = (unsigned int)v126;
            v56 = sub_168B6C0((__int64)a1);
            v57 = sub_EBDF10(v56, v115, v117, a9, a10, v111, (__int64)v54, v55);
            v52 = (void **)ptr;
            v53 = v57;
          }
LABEL_38:
          if ( v52 != p_ptr + 2 )
            free(v52);
          return v53;
        }
      }
      else
      {
LABEL_89:
        if ( v41 != -4096 )
        {
          v118 = 1;
          v100 = nullptr;
          while ( 1 )
          {
            if ( v41 != -8192 || v100 )
              v40 = v100;
            v39 = v37 & (v118 + v39);
            v116 = v38 + 16LL * v39;
            v41 = *(_QWORD *)v116;
            if ( v28 == *(_QWORD *)v116 )
              break;
            if ( v41 == -4096 )
            {
              if ( !v40 )
                v40 = (_QWORD *)v116;
              goto LABEL_90;
            }
            ++v118;
            v100 = v40;
            v40 = (_QWORD *)v116;
          }
          if ( v103 )
          {
            v38 = v34 + 440;
            v40 = (_QWORD *)v116;
            goto LABEL_71;
          }
          v38 = *(_QWORD *)(v34 + 440);
          v36 = *(unsigned int *)(v34 + 448);
          v40 = (_QWORD *)v116;
          goto LABEL_25;
        }
LABEL_90:
        v128.m128_u64[0] = (unsigned __int64)v40;
        v93 = *(unsigned int *)(v34 + 432);
        v94 = (*(_DWORD *)(v34 + 432) >> 1) + 1;
        if ( !v103 )
        {
          LODWORD(v36) = *(_DWORD *)(v34 + 448);
LABEL_77:
          v95 = (unsigned int)(4 * v94);
          if ( (unsigned int)v95 >= 3 * (int)v36 )
            goto LABEL_92;
          goto LABEL_78;
        }
        v95 = (unsigned int)(4 * v94);
        LODWORD(v36) = 8;
        if ( (unsigned int)v95 >= 0x18 )
        {
LABEL_92:
          v116 = v34;
          v99 = 2 * v36;
          goto LABEL_93;
        }
LABEL_78:
        v95 = (unsigned int)v36 >> 3;
        if ( (int)v36 - *(_DWORD *)(v34 + 436) - v94 > (unsigned int)v95 )
          goto LABEL_79;
        v116 = v34;
        v99 = v36;
LABEL_93:
        v109 = v34 + 432;
        sub_1B019E0(v34 + 432, v99, v93, v35, v34, v95);
        sub_1AF7530(v109, v123.m128i_i64, &v128);
        v34 = v116;
        v35 = v109;
        LODWORD(v93) = *(_DWORD *)(v116 + 432);
LABEL_79:
        *(_DWORD *)(v34 + 432) = (2 * ((unsigned int)v93 >> 1) + 2) | v93 & 1;
        v96 = (__m128 *)v128.m128_u64[0];
        if ( *(_QWORD *)v128.m128_u64[0] != -4096 )
          --*(_DWORD *)(v34 + 436);
        a7 = _mm_loadh_ps((const double *)&v110);
        *v96 = a7;
        if ( (*(_BYTE *)(v34 + 432) & 1) != 0 )
        {
          v97 = v34 + 440;
          v98 = 128;
        }
        else
        {
          v97 = *(_QWORD *)(v34 + 440);
          v98 = 16LL * *(unsigned int *)(v34 + 448);
        }
        sub_1AF9570(&v128, v96, (_QWORD *)(v98 + v97), v35, 1);
        if ( v18 )
          goto LABEL_28;
LABEL_84:
        if ( sub_1B223D0((__int64)a1, v14, 0, 0, a7, a8) )
        {
          v44 = (_QWORD *)sub_1B22DF0(*a1, v14, v121, 1, a7, a8);
          v43 = *a1;
          if ( v44 )
            goto LABEL_30;
          goto LABEL_29;
        }
LABEL_28:
        v43 = *a1;
LABEL_29:
        v44 = (_QWORD *)sub_BFB9F0(v12);
LABEL_30:
        v48 = sub_190ABA0(v43, v44, 1, v45, v46, v47, (__m128i)a7, a8) & 0xFFFFFFFFFFFFFFFELL;
        v49 = (unsigned int)v126;
        v50 = (unsigned int)v126 + 1LL;
        if ( v50 > HIDWORD(v126) )
        {
          sub_2237220(p_ptr, p_ptr + 2, v50, 8);
          v49 = (unsigned int)v126;
        }
        *((_QWORD *)ptr + v49) = v48;
        LODWORD(v126) = v126 + 1;
LABEL_33:
        if ( v101 == ++v11 )
          goto LABEL_34;
      }
    }
  }
  v53 = 0;
  if ( v111 )
  {
LABEL_35:
    v51 = sub_1B11600(a1, v111, 6u, 1, 0, a7, a8);
    v52 = (void **)ptr;
    v111 = v51 & 0xFFFFFFFFFFFFFFFELL;
    v53 = 0;
    if ( v51 != 1 )
      goto LABEL_36;
    goto LABEL_38;
  }
  return v53;
}
