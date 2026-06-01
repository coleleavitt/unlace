void __fastcall sub_1F471B0(__int64 *a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  __int64 *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r14
  int v54; // r13d
  _QWORD *v55; // r12
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rbp
  int v69; // r13d
  int v70; // ebp
  int v71; // eax
  unsigned __int64 v72; // r14
  __int64 v73; // r12
  __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  _DWORD *v76; // rdx
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rdi
  bool v81; // zf
  unsigned __int64 v82; // r14
  __int64 v83; // rax
  __int64 v84; // r14
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rbp
  __int64 v89; // rcx
  __int64 v90; // rbp
  char v91; // r8
  __int64 v92; // rdx
  int v93; // r10d
  __int64 v94; // rax
  unsigned int v95; // edi
  __int64 *v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rax
  _QWORD *v99; // rdi
  __int64 v100; // rsi
  __int64 v101; // rbp
  __int64 v102; // rax
  _QWORD *v103; // r14
  unsigned __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  int v114; // esi
  __int64 v115; // r8
  __int64 v116; // rdi
  unsigned __int64 v117; // rsi
  __int64 v118; // rax
  __int64 v119; // rdx
  unsigned __int64 v120; // r13
  int v121; // r11d
  __int64 *v122; // rax
  unsigned int v123; // esi
  __int64 v124; // [rsp+10h] [rbp-128h]
  int v125; // [rsp+1Ch] [rbp-11Ch]
  void *ptr; // [rsp+20h] [rbp-118h] BYREF
  __int64 v127; // [rsp+28h] [rbp-110h]
  _BYTE v128[64]; // [rsp+30h] [rbp-108h] BYREF
  __m128 v129; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v130[184]; // [rsp+80h] [rbp-B8h] BYREF

  sub_1F458C0((__int64)a1, a2);
  v5 = a1[2];
  v6 = *(unsigned int *)(v5 + 24);
  *(_DWORD *)(v5 + 24) = v6 + 1;
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6) )
  {
    v83 = a1[3];
    v84 = *a1;
    v85 = *(_QWORD *)(v83 + 2720);
    v86 = *(_QWORD *)(v83 + 432);
    v87 = *(unsigned int *)(v83 + 2736);
    ptr = (void *)a2;
    v88 = v86 + 8 * v85;
    v89 = v84 + 4064;
    v90 = v88 - v87;
    v91 = *(_BYTE *)(v84 + 4064) & 1;
    if ( v91 )
    {
      v92 = v84 + 4072;
      v93 = 3;
      v94 = 64;
      v95 = ((unsigned __int8)((unsigned int)a2 >> 4) ^ (unsigned __int8)((unsigned int)a2 >> 9)) & 3;
      v96 = (__int64 *)(v84
                      + 4072
                      + 16LL
                      * (((unsigned __int8)((unsigned int)a2 >> 4) ^ (unsigned __int8)((unsigned int)a2 >> 9)) & 3));
      v4 = *v96;
      if ( a2 == *v96 )
      {
LABEL_36:
        sub_1F35DD0(&v129, v96, (_QWORD *)(v94 + v92), v89, 1);
        v97 = *(unsigned int *)(v129.m128_u64[0] + 8);
LABEL_37:
        *(_QWORD *)(*(_QWORD *)(v84 + 4136) + 16 * v97 + 8) = v90;
        v5 = a1[2];
        goto LABEL_2;
      }
    }
    else
    {
      v98 = *(unsigned int *)(v84 + 4080);
      if ( !(_DWORD)v98 )
      {
        v129.m128_u64[0] = 0;
        v113 = *(unsigned int *)(v84 + 4064);
        v114 = (*(_DWORD *)(v84 + 4064) >> 1) + 1;
        goto LABEL_42;
      }
      v93 = v98 - 1;
      v92 = *(_QWORD *)(v84 + 4072);
      v95 = (v98 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v96 = (__int64 *)(v92 + 16LL * v95);
      v4 = *v96;
      if ( a2 == *v96 )
      {
LABEL_40:
        v94 = 16 * v98;
        goto LABEL_36;
      }
    }
    v121 = 1;
    v122 = nullptr;
    if ( v4 != -4096 )
    {
      while ( 1 )
      {
        if ( !v122 && v4 == -8192 )
          v122 = v96;
        v95 = v93 & (v121 + v95);
        v96 = (__int64 *)(v92 + 16LL * v95);
        v4 = *v96;
        if ( a2 == *v96 )
          break;
        if ( v4 == -4096 )
        {
          if ( v122 )
            v96 = v122;
          goto LABEL_53;
        }
        ++v121;
      }
      if ( !v91 )
      {
        v98 = *(unsigned int *)(v84 + 4080);
        goto LABEL_40;
      }
      v94 = 64;
      goto LABEL_36;
    }
LABEL_53:
    v129.m128_u64[0] = (unsigned __int64)v96;
    v113 = *(unsigned int *)(v84 + 4064);
    v114 = (*(_DWORD *)(v84 + 4064) >> 1) + 1;
    if ( v91 )
    {
      v115 = 12;
      LODWORD(v98) = 4;
LABEL_43:
      if ( 4 * v114 >= (unsigned int)v115 )
      {
        v123 = 2 * v98;
      }
      else
      {
        if ( (int)v98 - *(_DWORD *)(v84 + 4068) - v114 > (unsigned int)v98 >> 3 )
        {
          v116 = a2;
LABEL_46:
          *(_DWORD *)(v84 + 4064) = (2 * ((unsigned int)v113 >> 1) + 2) | v113 & 1;
          v117 = v129.m128_u64[0];
          if ( *(_QWORD *)v129.m128_u64[0] != -4096 )
            --*(_DWORD *)(v84 + 4068);
          *(_QWORD *)v117 = v116;
          *(_DWORD *)(v117 + 8) = 0;
          if ( (*(_BYTE *)(v84 + 4064) & 1) != 0 )
          {
            v118 = v84 + 4072;
            v119 = 64;
          }
          else
          {
            v118 = *(_QWORD *)(v84 + 4072);
            v119 = 16LL * *(unsigned int *)(v84 + 4080);
          }
          sub_1F35DD0(&v129, (_QWORD *)v117, (_QWORD *)(v118 + v119), v89, 1);
          v120 = v129.m128_u64[0];
          sub_1F20C10(v84 + 4136, (__int64)ptr, 0);
          v97 = (unsigned int)(*(_DWORD *)(v84 + 4144) - 1);
          *(_DWORD *)(v120 + 8) = v97;
          goto LABEL_37;
        }
        v123 = v98;
      }
      sub_1F3A3A0(v84 + 4064, v123, v113, v89, v115, v4);
      sub_1F21BF0(v84 + 4064, (__int64 *)&ptr, &v129);
      v116 = (__int64)ptr;
      v89 = v84 + 4064;
      LODWORD(v113) = *(_DWORD *)(v84 + 4064);
      goto LABEL_46;
    }
    LODWORD(v98) = *(_DWORD *)(v84 + 4080);
LABEL_42:
    v115 = (unsigned int)(3 * v98);
    goto LABEL_43;
  }
LABEL_2:
  v7 = *(_QWORD **)(v5 + 8);
  v8 = sub_1EE13A0((__int64)v7, *(_QWORD *)(v5 + 16), (__int64 *)(v5 + 32), (_DWORD *)(v5 + 24));
  *(_QWORD *)(a2 + 120) = sub_1EDB980(v7, v8, v9, v10, v11, v12);
  v13 = a1[2];
  v14 = *(_QWORD **)(v13 + 8);
  v15 = sub_1EE13A0((__int64)v14, *(_QWORD *)(v13 + 16), (__int64 *)(v13 + 32), (_DWORD *)(v13 + 24));
  v20 = sub_1EDB980(v14, v15, v16, v17, v18, v19);
  v21 = a1[2];
  *(_QWORD *)(a2 + 128) = v20;
  v22 = *(unsigned int *)(v21 + 24);
  *(_DWORD *)(v21 + 24) = v22 + 1;
  *(_BYTE *)(a2 + 58) = (2 * (*(_QWORD *)(*(_QWORD *)(v21 + 32) + 8 * v22) != 0)) | *(_BYTE *)(a2 + 58) & 0xFD;
  v23 = a1[2];
  v24 = *(unsigned int *)(v23 + 24);
  *(_DWORD *)(v23 + 24) = v24 + 1;
  *(_BYTE *)(a2 + 58) = (4 * (*(_QWORD *)(*(_QWORD *)(v23 + 32) + 8 * v24) != 0)) | *(_BYTE *)(a2 + 58) & 0xFB;
  v25 = a1[2];
  v26 = *(unsigned int *)(v25 + 24);
  *(_DWORD *)(v25 + 24) = v26 + 1;
  *(_BYTE *)(a2 + 58) = (8 * (*(_QWORD *)(*(_QWORD *)(v25 + 32) + 8 * v26) != 0)) | *(_BYTE *)(a2 + 58) & 0xF7;
  v27 = a1[2];
  v28 = *(unsigned int *)(v27 + 24);
  *(_DWORD *)(v27 + 24) = v28 + 1;
  *(_BYTE *)(a2 + 58) = (16 * (*(_QWORD *)(*(_QWORD *)(v27 + 32) + 8 * v28) != 0)) | *(_BYTE *)(a2 + 58) & 0xEF;
  v29 = a1[2];
  v30 = *(unsigned int *)(v29 + 24);
  *(_DWORD *)(v29 + 24) = v30 + 1;
  *(_BYTE *)(a2 + 58) = (32 * (*(_QWORD *)(*(_QWORD *)(v29 + 32) + 8 * v30) != 0)) | *(_BYTE *)(a2 + 58) & 0xDF;
  v31 = a1[2];
  v32 = *(unsigned int *)(v31 + 24);
  *(_DWORD *)(v31 + 24) = v32 + 1;
  *(_BYTE *)(a2 + 60) = (16 * (*(_QWORD *)(*(_QWORD *)(v31 + 32) + 8 * v32) != 0)) | *(_BYTE *)(a2 + 60) & 0xEF;
  v33 = a1[2];
  v34 = *(unsigned int *)(v33 + 24);
  *(_DWORD *)(v33 + 24) = v34 + 1;
  *(_BYTE *)(a2 + 60) = (32 * (*(_QWORD *)(*(_QWORD *)(v33 + 32) + 8 * v34) != 0)) | *(_BYTE *)(a2 + 60) & 0xDF;
  v35 = a1[2];
  v36 = *(unsigned int *)(v35 + 24);
  *(_DWORD *)(v35 + 24) = v36 + 1;
  *(_BYTE *)(a2 + 58) = ((*(_QWORD *)(*(_QWORD *)(v35 + 32) + 8 * v36) != 0) << 6) | *(_BYTE *)(a2 + 58) & 0xBF;
  v37 = a1[2];
  v38 = *(unsigned int *)(v37 + 24);
  *(_DWORD *)(v37 + 24) = v38 + 1;
  LOBYTE(v38) = ((*(_QWORD *)(*(_QWORD *)(v37 + 32) + 8 * v38) != 0) << 7) | *(_BYTE *)(a2 + 58) & 0x7F;
  *(_BYTE *)(a2 + 58) = v38;
  if ( (v38 & 0x80u) != 0LL )
  {
    v101 = *(_QWORD *)(*a1 + 144);
    v102 = a1[2];
    v103 = *(_QWORD **)(v102 + 8);
    v104 = sub_1EE13A0((__int64)v103, *(_QWORD *)(v102 + 16), (__int64 *)(v102 + 32), (_DWORD *)(v102 + 24));
    v109 = sub_1EDB980(v103, v104, v105, v106, v107, v108);
    sub_AB1BE0(v101, a2, v109, v110, v111, v112);
  }
  v39 = a1[2];
  v40 = *(unsigned int *)(v39 + 24);
  *(_DWORD *)(v39 + 24) = v40 + 1;
  *(_BYTE *)(a2 + 59) = *(_QWORD *)(*(_QWORD *)(v39 + 32) + 8 * v40) & 3 | *(_BYTE *)(a2 + 59) & 0xFC;
  v41 = a1[2];
  v42 = *(unsigned int *)(v41 + 24);
  v43 = *(_QWORD *)(v41 + 32);
  *(_DWORD *)(v41 + 24) = v42 + 1;
  *(_BYTE *)(a2 + 59) = (4 * *(_BYTE *)(v43 + 8 * v42)) | *(_BYTE *)(a2 + 59) & 3;
  *(_BYTE *)(a2 + 60) = ((*(_BYTE *)(v43 + 8 * v42) & 0x40) != 0) | *(_BYTE *)(a2 + 60) & 0xFE;
  v44 = a1[2];
  v45 = *(unsigned int *)(v44 + 24);
  *(_DWORD *)(v44 + 24) = v45 + 1;
  *(_BYTE *)(a2 + 60) = (2 * (*(_QWORD *)(*(_QWORD *)(v44 + 32) + 8 * v45) != 0)) | *(_BYTE *)(a2 + 60) & 0xFD;
  v46 = a1[2];
  v47 = 0;
  v48 = *(unsigned int *)(v46 + 24);
  if ( (unsigned int)v48 < *(_DWORD *)(v46 + 40) )
  {
    v99 = *(_QWORD **)(v46 + 8);
    v100 = *(_QWORD *)(v46 + 16);
    *(_DWORD *)(v46 + 24) = v48 + 1;
    v47 = sub_1F15160(v99, v100, *(_QWORD *)(*(_QWORD *)(v46 + 32) + 8 * v48));
  }
  *(_QWORD *)(a2 + 80) = v47;
  v49 = sub_1F19370(a1[2]);
  v50 = a1[2];
  *(_QWORD *)(a2 + 88) = v49;
  *(_DWORD *)(a2 + 108) = sub_1EE7490(v50);
  v51 = a1[2];
  v52 = *(unsigned int *)(v51 + 24);
  *(_DWORD *)(v51 + 24) = v52 + 1;
  v53 = *(_QWORD *)(*(_QWORD *)(v51 + 32) + 8 * v52);
  v129.m128_u64[0] = (unsigned __int64)v130;
  v129.m128_u64[1] = 0x1000000000LL;
  if ( (unsigned int)v53 > 0x10uLL )
  {
    sub_2237220(&v129, v130, (unsigned int)v53, 8);
    v51 = a1[2];
  }
  if ( (_DWORD)v53 )
  {
    v54 = 0;
    do
    {
      v55 = *(_QWORD **)(v51 + 8);
      v56 = sub_1EE13A0((__int64)v55, *(_QWORD *)(v51 + 16), (__int64 *)(v51 + 32), (_DWORD *)(v51 + 24));
      v61 = sub_1EDB980(v55, v56, v57, v58, v59, v60);
      v62 = v129.m128_u32[2];
      v63 = v129.m128_u32[2] + 1LL;
      if ( v63 > v129.m128_u32[3] )
      {
        v124 = v61;
        sub_2237220(&v129, v130, v63, 8);
        v62 = v129.m128_u32[2];
        v64 = v129.m128_u64[0];
        v61 = v124;
      }
      else
      {
        v64 = v129.m128_u64[0];
      }
      ++v54;
      *(_QWORD *)(v64 + 8 * v62) = v61;
      v51 = a1[2];
      ++v129.m128_i32[2];
    }
    while ( (_DWORD)v53 != v54 );
  }
  v65 = *(unsigned int *)(v51 + 24);
  *(_DWORD *)(v51 + 24) = v65 + 1;
  *(_BYTE *)(a2 + 60) = (4 * (*(_QWORD *)(*(_QWORD *)(v51 + 32) + 8 * v65) & 3)) | *(_BYTE *)(a2 + 60) & 0xF3;
  v66 = a1[2];
  v67 = *(unsigned int *)(v66 + 24);
  *(_DWORD *)(v66 + 24) = v67 + 1;
  v68 = *(_QWORD *)(*(_QWORD *)(v66 + 32) + 8 * v67);
  v69 = v68;
  ptr = v128;
  v127 = 0x1000000000LL;
  if ( (unsigned int)v68 > 0x10uLL )
    sub_2237220(&ptr, v128, (unsigned int)v68, 4);
  if ( (_DWORD)v68 )
  {
    v70 = 0;
    do
    {
      v78 = a1[2];
      v79 = *(unsigned int *)(v78 + 24);
      v73 = *(_QWORD *)(v78 + 16);
      v80 = *(_QWORD *)(v78 + 8);
      v81 = *(_QWORD *)(v73 + 856) == 0;
      *(_DWORD *)(v78 + 24) = v79 + 1;
      v82 = *(_QWORD *)(*(_QWORD *)(v78 + 32) + 8 * v79);
      if ( !v81 )
        sub_1EDF870(v80, v73);
      v71 = __ROR4__(v82, 1);
      v72 = HIDWORD(v82);
      if ( v72 )
        v73 = *(_QWORD *)(*(_QWORD *)(v73 + 3320) + 8LL * (unsigned int)(v72 - 1));
      if ( v71 )
        v71 = v71 + *(_DWORD *)(v73 + 1648) - 2;
      v74 = (unsigned int)v127;
      v75 = (unsigned int)v127 + 1LL;
      if ( v75 > HIDWORD(v127) )
      {
        v125 = v71;
        sub_2237220(&ptr, v128, v75, 4);
        v74 = (unsigned int)v127;
        v76 = ptr;
        v71 = v125;
      }
      else
      {
        v76 = ptr;
      }
      v76[v74] = v71;
      ++v70;
      v77 = (unsigned int)(v127 + 1);
      LODWORD(v127) = v127 + 1;
    }
    while ( v69 != v70 );
  }
  else
  {
    v77 = (unsigned int)v127;
  }
  sub_BA9B70(a2, *(_QWORD *)(*a1 + 144), (const void *)v129.m128_u64[0], v129.m128_u32[2], (unsigned __int64)ptr, v77);
  if ( ptr != v128 )
    free(ptr);
  if ( (_BYTE *)v129.m128_u64[0] != v130 )
    free((void *)v129.m128_u64[0]);
}
