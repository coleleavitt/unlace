__int64 __fastcall sub_6C4F60(__int64 a1, int a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // rdi
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  __int64 v14; // r12
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r12
  int v21; // r8d
  int v22; // r9d
  __m128i v23; // xmm1
  bool v24; // zf
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  char *v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 *v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // r13
  __int64 v37; // r12
  __int64 v38; // rsi
  int v39; // eax
  __m128i v40; // xmm0
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rdi
  int v45; // eax
  int v46; // r8d
  int v47; // r9d
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // r15
  __int64 v51; // r12
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rdi
  void *v56; // r12
  void *v57; // r9
  __int64 v58; // r11
  __int64 v59; // r15
  void *v60; // r10
  _DWORD *v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // r12
  void *v65; // r9
  __int64 v66; // r15
  void *v67; // r10
  _DWORD *v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // r12
  __int64 v72; // r14
  __int64 v73; // rax
  __int64 v74; // rbp
  void *v75; // r12
  __int64 v76; // rax
  __int64 v77; // r12
  __int64 *v78; // r14
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r12
  __int64 v82; // rbx
  __int64 v83; // r14
  __int64 v84; // rsi
  char *v85; // rbx
  __int64 v87; // rax
  __m128i v88; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v89; // [rsp+10h] [rbp-1C8h]
  __int64 *v90; // [rsp+18h] [rbp-1C0h]
  __int64 v91; // [rsp+20h] [rbp-1B8h]
  void *v92; // [rsp+28h] [rbp-1B0h]
  int v93[2]; // [rsp+30h] [rbp-1A8h]
  int v94[2]; // [rsp+38h] [rbp-1A0h]
  int v95[2]; // [rsp+40h] [rbp-198h]
  int v96[2]; // [rsp+48h] [rbp-190h]
  int v97[2]; // [rsp+50h] [rbp-188h]
  int v98[2]; // [rsp+58h] [rbp-180h]
  int v99[2]; // [rsp+60h] [rbp-178h]
  int v100[2]; // [rsp+68h] [rbp-170h]
  __int64 v101; // [rsp+70h] [rbp-168h]
  int *v102; // [rsp+78h] [rbp-160h]
  void *v103; // [rsp+80h] [rbp-158h]
  __int64 v104; // [rsp+88h] [rbp-150h]
  void *v105; // [rsp+90h] [rbp-148h]
  __int64 v106; // [rsp+98h] [rbp-140h]
  int v107[2]; // [rsp+A0h] [rbp-138h]
  int v108[2]; // [rsp+A8h] [rbp-130h]
  int v109[2]; // [rsp+B0h] [rbp-128h]
  char v110[8]; // [rsp+B8h] [rbp-120h]
  int v111[2]; // [rsp+C0h] [rbp-118h]
  __int64 v112; // [rsp+C8h] [rbp-110h]
  __int64 v113; // [rsp+D0h] [rbp-108h] BYREF
  int v114[2]; // [rsp+D8h] [rbp-100h]
  int v115[2]; // [rsp+E0h] [rbp-F8h] BYREF
  char v116[8]; // [rsp+E8h] [rbp-F0h]
  __m128i v117; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v118; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v119; // [rsp+108h] [rbp-D0h]
  int v120[2]; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v121; // [rsp+118h] [rbp-C0h]
  int v122[4]; // [rsp+120h] [rbp-B8h] BYREF
  int v123[2]; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v124; // [rsp+138h] [rbp-A0h]
  int v125[2]; // [rsp+140h] [rbp-98h] BYREF
  char v126[8]; // [rsp+148h] [rbp-90h]
  __int64 v127; // [rsp+150h] [rbp-88h]
  __int64 v128; // [rsp+158h] [rbp-80h]
  int v129[2]; // [rsp+160h] [rbp-78h] BYREF
  __int64 v130; // [rsp+168h] [rbp-70h]
  _QWORD v131[2]; // [rsp+170h] [rbp-68h] BYREF
  int v132[4]; // [rsp+180h] [rbp-58h] BYREF
  int v133[2]; // [rsp+190h] [rbp-48h] BYREF
  __int64 v134; // [rsp+198h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v111 = a4;
  *(_QWORD *)v116 = v7;
  *(_QWORD *)v114 = v7;
  *(_QWORD *)v97 = a5;
  *(_QWORD *)v125 = 0;
  *(_QWORD *)v126 = 0;
  v127 = 1;
  v128 = 0;
  *(_QWORD *)v115 = 0;
  v113 = 0;
  v103 = v125;
  v8 = sub_6C3440((__int64)a3, (__int64)v125, (__int64 *)v115, &v113);
  *(_QWORD *)v107 = *(_QWORD *)v115;
  v91 = v113;
  *(_QWORD *)v109 = *(_QWORD *)v114;
  *(_QWORD *)v110 = *(_QWORD *)v116;
  if ( !v8 )
  {
    sub_25A130((char *)v103);
    sub_6BFE10(*(__int64 *)v107, *(__int64 *)v110);
    return sub_6BFE10(v91, *(__int64 *)v109);
  }
  v9 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v98 = a1 + 32;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 88LL))(v9, *(_QWORD *)v107);
  *(_QWORD *)v123 = *(_QWORD *)v107;
  if ( *(_QWORD *)v107 )
    ++*(_DWORD *)(*(_QWORD *)v107 + 8LL);
  *(_QWORD *)v100 = v123;
  sub_6C00F0((_QWORD *)(a1 + 88), v123);
  *(_QWORD *)v129 = 1;
  *(_QWORD *)v108 = a1 + 48;
  v130 = 0;
  v131[0] = 1;
  v131[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v131);
  BYTE4(v131[0]) &= ~1u;
  v88.m128i_i64[1] = (__int64)v132;
  LODWORD(v131[0]) = 1;
  v105 = v129;
  sub_3EBB80((__int64)v132, (__int64)v103, (__int64)v129);
  v13 = *(_QWORD *)(a1 + 56);
  if ( !v13 )
  {
    sub_16669E0(*(_QWORD *)v108);
    v13 = *(_QWORD *)(a1 + 56);
  }
  sub_166A700(v13, v88.m128i_i32[2], 1, v10, v11, v12);
  v14 = sub_15E1B70(*(_QWORD *)(a1 + 48));
  sub_25A130((char *)v88.m128i_i64[1]);
  sub_25A130((char *)v105);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
    *(_QWORD *)(a1 + 24),
    0,
    v14,
    0,
    0);
  *(_QWORD *)v132 = 1;
  *(_QWORD *)&v132[2] = 0;
  *(_QWORD *)v133 = 1;
  *(_QWORD *)v95 = v133;
  v134 = 0;
  sub_182CBA0(qword_1C7F2C0, v133);
  LOBYTE(v133[1]) &= ~1u;
  v133[0] = 1;
  sub_3EBB80((__int64)v105, (__int64)v103, v88.m128i_i64[1]);
  sub_25A130((char *)v88.m128i_i64[1]);
  v18 = *(_QWORD *)(a1 + 8);
  v19 = *(_QWORD *)(a1 + 56);
  v117.m128i_i64[0] = 0;
  v117.m128i_i64[1] = v18;
  *(_QWORD *)v99 = a1 + 696;
  if ( !v19 )
  {
    sub_16669E0(*(_QWORD *)v108);
    v19 = *(_QWORD *)(a1 + 56);
  }
  v20 = sub_166A700(v19, (_DWORD)v105, 1, v15, v16, v17);
  if ( (unsigned int)sub_1506780(*(_QWORD *)v99, v91, v20, &v117) == 5 )
  {
    v87 = sub_15E1B70(*(_QWORD *)(a1 + 704));
    if ( v87 )
      ++*(_DWORD *)(v87 + 8);
    v88.m128i_i64[0] = v87;
    sub_6BFE30(v117.m128i_i64[0], v117.m128i_i64[1]);
    v23 = _mm_loadl_epi64(&v88);
    v117.m128i_i64[0] = v23.m128i_i64[0];
  }
  else
  {
    v23 = _mm_loadl_epi64(&v117);
  }
  *(_QWORD *)v96 = a1 + 480;
  v24 = *(_BYTE *)(a1 + 491) == 0;
  v25 = a1 + 480;
  v88.m128i_i64[0] = **(_QWORD **)v97;
  *(__m128i *)v132 = _mm_unpacklo_epi64((__m128i)v88.m128i_u64[0], v23);
  if ( !v24 )
  {
    sub_14E1930(v25, v88.m128i_i64[0], v88.m128i_i32[2], v89, (__int64)v90, v91, (__int64)v92, *(void **)v93, v94[0]);
    goto LABEL_13;
  }
  if ( *(_BYTE *)(a1 + 488) )
  {
    if ( (unsigned int)sub_14DD000(v25, 2, v88.m128i_i64[1], *(_QWORD *)v97) != 5 )
      goto LABEL_13;
LABEL_60:
    v76 = sub_15E1AF0(*(_QWORD *)(a1 + 480));
    v77 = v76;
    if ( v76 )
      ++*(_DWORD *)(v76 + 8);
    v78 = *(__int64 **)v97;
    sub_6BFE30(**(_QWORD **)v97, *(_QWORD *)(*(_QWORD *)v97 + 8LL));
    *v78 = v77;
    goto LABEL_13;
  }
  if ( (unsigned int)sub_14DC740(
                       v25,
                       2,
                       v88.m128i_i32[2],
                       v97[0],
                       v21,
                       v22,
                       v88.m128i_i32[0],
                       v88.m128i_i32[2],
                       v89,
                       (int)v90,
                       v91,
                       v92,
                       v93[0],
                       v94[0],
                       v95[0],
                       v96[0],
                       v97[0],
                       v98[0],
                       v99[0],
                       v100[0],
                       v101,
                       (int)v102,
                       (int)v103,
                       v104,
                       (int)v105,
                       v106,
                       v107[0],
                       v108[0],
                       v109[0],
                       v110[0],
                       v111[0],
                       v112,
                       v113,
                       v114[0],
                       v115[0],
                       *(int *)v116,
                       v117.m128i_i32[0],
                       v117.m128i_i32[2],
                       v118,
                       v119,
                       v120[0],
                       v121,
                       v122[0],
                       v122[2],
                       v123[0],
                       v124,
                       v125[0],
                       v126[0]) == 5 )
    goto LABEL_60;
LABEL_13:
  v26 = *(_QWORD *)(a1 + 8);
  v27 = *(_QWORD *)(a1 + 48);
  v118 = 0;
  v112 = v26;
  v119 = v26;
  v28 = sub_15E1B70(v27);
  v106 = v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v29 = (char *)v88.m128i_i64[1];
  memset(v132, 0, sizeof(v132));
  *(_QWORD *)v133 = 1;
  v134 = 0;
  sub_27B950((__int64)qword_1C7F2C0, v88.m128i_i64[1], (int *)v103);
  sub_6C17D0(*(_QWORD *)v98, v29, v106, &v118);
  sub_25A130(v29);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
    *(_QWORD *)(a1 + 24),
    0,
    v118,
    0,
    0);
  v30 = *(_QWORD *)(a1 + 8);
  v31 = a3[29];
  v104 = v30;
  if ( v31 )
  {
    v32 = v30;
    v33 = *(unsigned int *)(v31 - 4);
    v34 = (__int64 *)a3[33];
    *(_QWORD *)v120 = 0;
    v121 = v32;
    v35 = a3[30];
    v36 = a3[31];
    if ( (_DWORD)v33 )
    {
      v90 = v34;
      v37 = 0;
      v38 = v35;
      v89 = v31;
      v101 = v35 + 32 * v33;
      v88.m128i_i64[0] = v35;
      v102 = v122;
      while ( 1 )
      {
        v72 = *v90;
        sub_6C19A0(*(__int64 *)v98, v38, v91);
        v73 = sub_15E1B70(*(_QWORD *)(a1 + 48));
        v74 = v73;
        if ( v73 )
          ++*(_DWORD *)(v73 + 8);
        if ( v37 )
        {
          v24 = (*(_DWORD *)(v37 + 8))-- == 1;
          if ( v24 )
            sub_15D7BC0(v104, v37);
        }
        memset(v132, 0, sizeof(v132));
        *(_QWORD *)v133 = 1;
        v75 = qword_1C7F2C0;
        v134 = 0;
        if ( (*(_BYTE *)(v36 + 4) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v88.m128i_i64[1], v36);
          if ( (*(_BYTE *)(v36 + 20) & 1) == 0 )
          {
LABEL_19:
            v39 = *(_DWORD *)(v36 + 16);
            LOBYTE(v133[1]) &= ~1u;
            v133[0] = v39;
            goto LABEL_20;
          }
        }
        else
        {
          v132[0] = *(_DWORD *)v36;
          if ( (*(_BYTE *)(v36 + 20) & 1) == 0 )
            goto LABEL_19;
        }
        sub_182C690(v75, *(_QWORD *)v95, v36 + 16);
LABEL_20:
        v40 = _mm_loadl_epi64((const __m128i *)(a1 + 32));
        *(__m128i *)v122 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v74, v40);
        if ( v74 )
          ++*(_DWORD *)(v74 + 8);
        *(_QWORD *)v123 = 0;
        v124 = v40.m128i_i64[0];
        sub_14B9B80(a1 + 64, v102);
        v44 = *(_QWORD *)(a1 + 56);
        if ( !v44 )
        {
          sub_16669E0(*(_QWORD *)v108);
          v44 = *(_QWORD *)(a1 + 56);
        }
        v45 = sub_166A700(v44, v88.m128i_i32[2], 1, v41, v42, v43);
        if ( (unsigned int)sub_14F8380(
                             v99[0],
                             v122[0],
                             v45,
                             v100[0],
                             v46,
                             v47,
                             v88.m128i_i32[0],
                             (void *)v88.m128i_i64[1],
                             v89,
                             (int)v90,
                             (void *)v91,
                             v92,
                             v93[0],
                             v94[0],
                             v95[0],
                             v96[0],
                             v97[0],
                             v98[0],
                             v99[0],
                             v100[0],
                             v101,
                             (int)v102,
                             (int)v103,
                             v104,
                             (int)v105,
                             v106,
                             v107[0],
                             v108[0],
                             v109[0],
                             *(int *)v110,
                             v111[0],
                             v112,
                             v113,
                             v114[0],
                             v115[0],
                             *(int *)v116,
                             v117.m128i_i32[0],
                             v117.m128i_i8[8]) == 5 )
        {
          v79 = sub_15E1B70(*(_QWORD *)(a1 + 696));
          v50 = v79;
          if ( v79 )
            ++*(_DWORD *)(v79 + 8);
          sub_6BFE30(*(__int64 *)v123, v124);
          *(_QWORD *)v123 = v50;
        }
        else
        {
          v50 = *(_QWORD *)v123;
        }
        v51 = *(_QWORD *)(a1 + 248);
        if ( (unsigned int)sub_14DE480(
                             v96[0],
                             v51,
                             v50,
                             (unsigned int)v120,
                             v48,
                             v49,
                             v88.m128i_i32[0],
                             v88.m128i_i32[2],
                             v89,
                             (_DWORD)v90,
                             v91,
                             (_DWORD)v92,
                             v93[0],
                             v94[0],
                             v95[0],
                             v96[0],
                             v97[0],
                             v98[0],
                             *(__int64 *)v99) == 5 )
        {
          v80 = sub_14DC5D0(*(_QWORD *)v96, v51, v50);
          v81 = v80;
          if ( v80 )
            ++*(_DWORD *)(v80 + 8);
          sub_6BFE30(*(__int64 *)v120, v121);
          *(_QWORD *)v120 = v81;
        }
        v52 = *(_QWORD *)v123;
        if ( *(_QWORD *)v123 )
        {
          v53 = v124;
          v24 = (*(_DWORD *)(*(_QWORD *)v123 + 8LL))-- == 1;
          if ( v24 )
            sub_15D7BC0(v53, v52);
        }
        v54 = *(_QWORD *)v122;
        if ( *(_QWORD *)v122 )
        {
          v55 = *(_QWORD *)&v122[2];
          v24 = (*(_DWORD *)(*(_QWORD *)v122 + 8LL))-- == 1;
          if ( v24 )
            sub_15D7BC0(v55, v54);
        }
        v56 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v88.m128i_i64[1]);
        sub_182CBA0(v56, *(_QWORD *)v95);
        sub_14EC390(a1 + 344, v72, *(_QWORD *)v120, *(_QWORD *)v97);
        v57 = *(void **)(a1 + 24);
        v58 = *(_QWORD *)v120;
        v59 = *(_QWORD *)(a1 + 8);
        v60 = *(void **)(*(_QWORD *)v57 + 96LL);
        if ( !*(_WORD *)(v72 + 4) )
        {
          v61 = *(_DWORD **)(*(_QWORD *)(v72 + 16) + 24LL);
          if ( v61 )
          {
            if ( !*v61 && v61[1] == 8 && *(_DWORD *)(v72 + 24) == 1 )
            {
              v64 = *(_QWORD *)(v72 + 32);
              if ( !v64 )
                goto LABEL_38;
LABEL_37:
              ++*(_DWORD *)(v64 + 8);
              goto LABEL_38;
            }
          }
        }
        v62 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)v94 = *(_QWORD *)v120;
        *(_QWORD *)v93 = v60;
        v92 = v57;
        v63 = sub_15E1A70(v62);
        v57 = v92;
        v60 = *(void **)v93;
        v64 = v63;
        v58 = *(_QWORD *)v94;
        if ( v63 )
          goto LABEL_37;
LABEL_38:
        ((void (__fastcall *)(void *, _QWORD, __int64, __int64, _QWORD))v60)(v57, 0, v64, v58, 0);
        if ( v64 )
        {
          v24 = (*(_DWORD *)(v64 + 8))-- == 1;
          if ( v24 )
            sub_15D7BC0(v59, v64);
        }
        v65 = *(void **)(a1 + 24);
        v66 = *(_QWORD *)(a1 + 8);
        v67 = *(void **)(*(_QWORD *)v65 + 96LL);
        if ( !*(_WORD *)(*(_QWORD *)v120 + 4LL) )
        {
          v68 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v120 + 16LL) + 24LL);
          if ( v68 )
          {
            if ( !*v68 && v68[1] == 8 && *(_DWORD *)(*(_QWORD *)v120 + 24LL) == 1 )
            {
              v71 = *(_QWORD *)(*(_QWORD *)v120 + 32LL);
              if ( !v71 )
                goto LABEL_46;
LABEL_45:
              ++*(_DWORD *)(v71 + 8);
              goto LABEL_46;
            }
          }
        }
        v69 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)v93 = *(_QWORD *)(*(_QWORD *)v65 + 96LL);
        v92 = v65;
        v70 = sub_15E1A70(v69);
        v65 = v92;
        v67 = *(void **)v93;
        v71 = v70;
        if ( v70 )
          goto LABEL_45;
LABEL_46:
        ((void (__fastcall *)(void *, _QWORD, __int64, __int64, _QWORD))v67)(v65, 0, v71, v72, 0);
        if ( v71 )
        {
          v24 = (*(_DWORD *)(v71 + 8))-- == 1;
          if ( v24 )
            sub_15D7BC0(v66, v71);
        }
        v88.m128i_i64[0] += 32;
        v36 += 32;
        ++v90;
        v89 += 8;
        if ( v88.m128i_i64[0] == v101 )
          goto LABEL_71;
        v37 = v74;
        v38 = v88.m128i_i64[0];
      }
    }
  }
  else
  {
    *(_QWORD *)v120 = 0;
    v121 = v30;
  }
  v74 = 0;
LABEL_71:
  sub_6BFE30(v74, v104);
  sub_6BFE30(*(__int64 *)v120, v121);
  if ( v91 )
    ++*(_DWORD *)(v91 + 8);
  v82 = *(_QWORD *)v111;
  sub_6BFE30(*(_QWORD *)(*(_QWORD *)v111 + 8LL), *(_QWORD *)(*(_QWORD *)v111 + 16LL));
  v83 = v91;
  v84 = v82 + 24;
  *(_QWORD *)(v82 + 8) = v91;
  v85 = (char *)v103;
  sub_27B950((__int64)qword_1C7F2C0, v84, (int *)v103);
  sub_6BFE30(v118, v119);
  sub_6BFE30(v106, v112);
  sub_6BFE30(v117.m128i_i64[0], v117.m128i_i64[1]);
  sub_25A130((char *)v105);
  sub_25A130(v85);
  sub_6BFE10(*(__int64 *)v107, *(__int64 *)v110);
  return sub_6BFE10(v83, *(__int64 *)v109);
}

