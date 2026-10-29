_DWORD *__fastcall sub_1B5BEF0(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6)
{
  unsigned __int64 *v6; // r15
  unsigned __int64 v9; // r12
  __int64 v10; // rdi
  unsigned __int64 *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r8
  char v15; // dl
  __int64 v16; // rbx
  unsigned __int64 *v17; // r13
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  char v24; // dl
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r8
  const char *v28; // rcx
  size_t v29; // r8
  unsigned int *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r13
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // eax
  __int64 v44; // rsi
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // eax
  _QWORD *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r9
  unsigned __int64 v54; // rax
  __int64 v55; // r13
  __int64 v56; // rax
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  unsigned __int64 v67; // rbx
  int v68; // r12d
  void **v69; // rdx
  void **v70; // rax
  void **v71; // rcx
  _BYTE *v72; // rdx
  unsigned __int64 v73; // r13
  __int64 v74; // rbx
  unsigned __int64 *v75; // r12
  unsigned __int64 v76; // rbx
  _BYTE *v77; // rdi
  _DWORD *v78; // rbp
  void *v79; // r15
  __int64 v80; // r13
  _QWORD *v81; // rbp
  __int64 v82; // rax
  _DWORD *v83; // rax
  void **v84; // r12
  void **v85; // rbx
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  __int64 v89; // rax
  unsigned __int64 v90; // rdx
  __int64 v91; // rax
  unsigned __int64 v92; // rdx
  __int64 v93; // rbx
  _QWORD *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rcx
  unsigned __int64 *v97; // rcx
  __int128 v98; // [rsp-30h] [rbp-898h]
  __int64 v99; // [rsp-8h] [rbp-870h]
  unsigned __int64 *v100; // [rsp+0h] [rbp-868h]
  char **v101; // [rsp+0h] [rbp-868h]
  char *v102; // [rsp+8h] [rbp-860h]
  __int64 v103; // [rsp+10h] [rbp-858h]
  __int64 v104; // [rsp+18h] [rbp-850h]
  __int64 v105; // [rsp+28h] [rbp-840h]
  __int64 v106; // [rsp+40h] [rbp-828h]
  __int64 v107; // [rsp+40h] [rbp-828h]
  __int64 v108; // [rsp+40h] [rbp-828h]
  __int64 v109; // [rsp+48h] [rbp-820h]
  __int64 v110; // [rsp+48h] [rbp-820h]
  __int64 v111; // [rsp+50h] [rbp-818h]
  unsigned int v113; // [rsp+90h] [rbp-7D8h] BYREF
  int v114; // [rsp+94h] [rbp-7D4h] BYREF
  unsigned __int64 v115; // [rsp+98h] [rbp-7D0h] BYREF
  __int64 v116; // [rsp+A0h] [rbp-7C8h] BYREF
  __int64 v117; // [rsp+A8h] [rbp-7C0h] BYREF
  void *v118; // [rsp+B0h] [rbp-7B8h] BYREF
  __int64 v119; // [rsp+B8h] [rbp-7B0h]
  _BYTE v120[64]; // [rsp+C0h] [rbp-7A8h] BYREF
  void *ptr; // [rsp+100h] [rbp-768h] BYREF
  __int64 v122; // [rsp+108h] [rbp-760h]
  _BYTE v123[64]; // [rsp+110h] [rbp-758h] BYREF
  _BYTE v124[144]; // [rsp+150h] [rbp-718h] BYREF
  unsigned __int64 *v125; // [rsp+1E0h] [rbp-688h]
  unsigned __int64 v126; // [rsp+1E8h] [rbp-680h]
  void *v127; // [rsp+1F0h] [rbp-678h] BYREF
  __int64 v128; // [rsp+1F8h] [rbp-670h]
  _BYTE v129[128]; // [rsp+200h] [rbp-668h] BYREF
  void **v130; // [rsp+280h] [rbp-5E8h] BYREF
  __int64 v131; // [rsp+288h] [rbp-5E0h]
  _BYTE v132[1152]; // [rsp+290h] [rbp-5D8h] BYREF
  void *v133; // [rsp+710h] [rbp-158h] BYREF
  __int64 v134; // [rsp+718h] [rbp-150h]
  _BYTE v135[128]; // [rsp+720h] [rbp-148h] BYREF
  void *v136; // [rsp+7A0h] [rbp-C8h]
  __int64 v137; // [rsp+7A8h] [rbp-C0h]
  _BYTE v138[184]; // [rsp+7B0h] [rbp-B8h] BYREF

  v6 = a2;
  v126 = a3;
  v125 = a2;
  v127 = v129;
  v130 = (void **)v132;
  v128 = 0x1000000000LL;
  v131 = 0x800000000LL;
  v133 = v135;
  v134 = 0x1000000000LL;
  v136 = v138;
  v137 = 0x1000000000LL;
  if ( a3 > 8 )
  {
    sub_1B5B6F0((__int64)&v130, a3);
    if ( a3 > HIDWORD(v134) )
      sub_2237220(&v133, v135, a3, 8);
  }
  v119 = 0x800000000LL;
  v122 = 0x800000000LL;
  v118 = v120;
  ptr = v123;
  v100 = &a2[a3];
  if ( a2 == v100 )
  {
    v78 = nullptr;
    goto LABEL_45;
  }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *v6;
        v10 = *a1;
        v113 = 0;
        v11 = &v115;
        v115 = v9;
        v116 = 0;
        v13 = sub_1B31D70(v10, &v115, &v113, &v116, (__int64)&byte_22F0C30, 0, *(double *)a5.m128_u64);
        if ( v15 )
        {
          v87 = (unsigned int)v128;
          v88 = (unsigned int)v128 + 1LL;
          if ( v88 > HIDWORD(v128) )
          {
            v11 = (unsigned __int64 *)v129;
            sub_2237220(&v127, v129, v88, 8);
            v87 = (unsigned int)v128;
          }
          *((_QWORD *)v127 + v87) = v9;
          v89 = (unsigned int)v119;
          LODWORD(v128) = v128 + 1;
          v90 = (unsigned int)v119 + 1LL;
          if ( v90 > HIDWORD(v119) )
          {
            v11 = (unsigned __int64 *)v120;
            sub_2237220(&v118, v120, v90, 8);
            v89 = (unsigned int)v119;
          }
          *((_QWORD *)v118 + v89) = 0;
          v91 = (unsigned int)v122;
          v12 = HIDWORD(v122);
          LODWORD(v119) = v119 + 1;
          v92 = (unsigned int)v122 + 1LL;
          if ( v92 > HIDWORD(v122) )
          {
            v11 = (unsigned __int64 *)v123;
            sub_2237220(&ptr, v123, v92, 8);
            v91 = (unsigned int)v122;
          }
          *((_QWORD *)ptr + v91) = 0;
          LODWORD(v122) = v122 + 1;
        }
        if ( !v13 )
          goto LABEL_38;
        v16 = *(_QWORD *)(v13 + 48);
        v17 = (unsigned __int64 *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
        v18 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
        v19 = (unsigned int)*(unsigned __int8 *)(v18 + 16) - 43;
        if ( (unsigned int)v19 <= 1 )
          goto LABEL_87;
        v19 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
        if ( (unsigned int)v19 > 1 )
          goto LABEL_10;
        v18 = sub_F63050(*v17, v11, v19, v12);
        if ( v18 )
        {
LABEL_87:
          while ( 1 )
          {
            v20 = *(_QWORD *)(v18 + 32);
            if ( (*(_BYTE *)(v18 + 18) & 0x10) == 0 )
              break;
            while ( 1 )
            {
              v21 = v20 & 0xFFFFFFFFFFFFFFF0LL;
              v18 = *(_QWORD *)v21;
              v19 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v21 + 16LL) - 43;
              if ( (unsigned int)v19 <= 1 )
                break;
              v22 = sub_F63050(v18, v11, v19, v12);
              v20 = *(_QWORD *)(v22 + 32);
              if ( (*(_BYTE *)(v22 + 18) & 0x10) == 0 )
                goto LABEL_9;
            }
          }
LABEL_9:
          v16 = v20;
          v18 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
        }
        else
        {
          v18 = *v17;
        }
LABEL_10:
        if ( (*(_BYTE *)(v18 + 8) & 0xF) != 0 )
          v18 = sub_F64F00(v16, (__int64)v11, v19, v12, v14);
        v23 = v18 & 0xFFFFFFFFFFFFFFF0LL;
        v24 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL);
        if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 40 > 6 )
          break;
        if ( v24 == 42 )
        {
          v25 = v115;
          v106 = v13;
          v26 = 0;
          if ( (*(_BYTE *)(v13 + 29) & 1) == 0 )
            goto LABEL_15;
          goto LABEL_74;
        }
LABEL_70:
        ++v6;
        sub_168B9F0((__int64)v124, a1, v113, 0x121Fu, 0);
        v114 = 0;
        v93 = sub_1587D10((__int64)v124, &v114);
        v117 = sub_EEC8C0(v9, (__int64)&v114, *(double *)a5.m128_u64);
        sub_1587DB0(v93, &v117);
        sub_15F7200(v124);
        if ( v100 == v6 )
          goto LABEL_39;
      }
      if ( v24 != 42 )
        goto LABEL_70;
      v106 = 0;
      v25 = 0;
      v26 = 0;
      if ( (*(_BYTE *)(v13 + 29) & 1) == 0 )
      {
LABEL_15:
        v27 = *(_QWORD *)(v13 + 40);
        if ( (v27 & 7) != 0 )
          goto LABEL_75;
        goto LABEL_16;
      }
LABEL_74:
      v110 = v25;
      v94 = sub_B8C3D0(v13, (__int64)v11, v25, v12, v14, 0);
      v27 = *(_QWORD *)(v13 + 40);
      v25 = v110;
      v26 = (__int64)v94;
      if ( (v27 & 7) != 0 )
      {
LABEL_75:
        v29 = 0;
        v28 = &byte_22F0C30;
        goto LABEL_18;
      }
LABEL_16:
      v28 = &byte_22F0C30;
      v29 = v27 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v29 )
      {
        v30 = *(unsigned int **)(v29 + 16);
        v29 = *v30;
        v28 = (const char *)(v30 + 4);
      }
LABEL_18:
      v34 = sub_1AFE600((_QWORD *)*a1, v113, v23, v28, v29, v26, v25);
      if ( *(char *)(v34 + 28) >= 0 )
        break;
LABEL_38:
      if ( v100 == ++v6 )
        goto LABEL_39;
    }
    sub_B94AD0(*(__m128i **)(*a1 + 544), v34, v99, v31, v32, v33);
    v37 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v38 = *(_QWORD *)v37;
    if ( (*(_BYTE *)(*(_QWORD *)v37 + 8LL) & 0xF) != 0 )
      v39 = sub_F64F00(*(_QWORD *)(v9 + 8), v34, v38, v35, v36) & 0xFFFFFFFFFFFFFFF0LL;
    else
      v39 = v38 & 0xFFFFFFFFFFFFFFF0LL;
    v109 = sub_1AE9760(*a1, v34, v39, v113);
    v43 = sub_C00A40(v9, v34, v40, v41, v42);
    v44 = v43;
    v45 = sub_1AFE760((_QWORD *)*a1, v43, v23, ".devptr.temp", 0xCu, 0);
    v49 = sub_C00A40(v9, v44, v46, v47, v48);
    v50 = (_QWORD *)sub_1AE9760(*a1, v45, *(_QWORD *)(v9 + 8), v49);
    v111 = *a1;
    v54 = sub_19146F0(v111, v50, v51, v52, v111, v53, a5, a6);
    sub_17ED4C0(v111, v34, v54 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a5.m128_u64, *(double *)a6.m128_u64);
    if ( v106 )
    {
      v55 = 0;
      v56 = sub_BFB9F0(v9);
    }
    else
    {
      v56 = sub_1B22DF0(*a1, v13, v115, 1, a5, a6);
      v55 = v56;
    }
    v57 = (unsigned int)v128;
    v58 = (unsigned int)v128 + 1LL;
    if ( v58 > HIDWORD(v128) )
    {
      v107 = v56;
      sub_2237220(&v127, v129, v58, 8);
      v57 = (unsigned int)v128;
      v56 = v107;
    }
    *((_QWORD *)v127 + v57) = v56;
    v59 = (unsigned int)v119;
    LODWORD(v128) = v128 + 1;
    v60 = (unsigned int)v119 + 1LL;
    if ( v60 > HIDWORD(v119) )
    {
      sub_2237220(&v118, v120, v60, 8);
      v59 = (unsigned int)v119;
    }
    *((_QWORD *)v118 + v59) = v109;
    v61 = (unsigned int)v122;
    LODWORD(v119) = v119 + 1;
    v62 = (unsigned int)v122 + 1LL;
    if ( v62 > HIDWORD(v122) )
    {
      sub_2237220(&ptr, v123, v62, 8);
      v61 = (unsigned int)v122;
    }
    *((_QWORD *)ptr + v61) = v50;
    LODWORD(v122) = v122 + 1;
    v63 = sub_BFB9F0(v9);
    sub_1AEFBB0(a1[1], v13, v63, v55);
    v64 = (unsigned int)v134;
    v65 = (unsigned int)v134 + 1LL;
    if ( v65 > HIDWORD(v134) )
    {
      sub_2237220(&v133, v135, v65, 8);
      v64 = (unsigned int)v134;
    }
    *((_QWORD *)v133 + v64) = v13;
    v66 = (unsigned int)v131;
    LODWORD(v134) = v134 + 1;
    v67 = (unsigned int)v131 + 1LL;
    v68 = v131;
    if ( HIDWORD(v131) < v67 )
    {
      sub_1B5B6F0((__int64)&v130, (unsigned int)v131 + 1LL);
      v66 = (unsigned int)v131;
    }
    v69 = v130;
    v70 = &v130[18 * v66];
    v71 = &v130[18 * v67];
    if ( v70 != v71 )
    {
      do
      {
        v72 = v70 + 2;
        *((_DWORD *)v70 + 2) = 0;
        v70 += 18;
        *(v70 - 18) = v72;
        *((_DWORD *)v70 - 33) = 8;
      }
      while ( v71 != v70 );
      v69 = v130;
    }
    LODWORD(v131) = v68 + 1;
    v73 = v115 & 0xFFFFFFFFFFFFFFFDLL;
    v74 = (__int64)&v69[18 * (unsigned int)v67 - 18];
    if ( *(_DWORD *)(v74 + 12) > *(_DWORD *)(v74 + 8) )
    {
      v75 = (unsigned __int64 *)(*(_QWORD *)v74 + 16LL * *(unsigned int *)(v74 + 8));
      *v75 = v73;
      v75[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
      ++*(_DWORD *)(v74 + 8);
      goto LABEL_38;
    }
    v95 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
    v96 = *(unsigned int *)(v74 + 8);
    if ( v96 + 1 > (unsigned __int64)*(unsigned int *)(v74 + 12) )
    {
      v108 = v95;
      sub_2237220(v74, v74 + 16, v96 + 1, 16);
      v96 = *(unsigned int *)(v74 + 8);
      v95 = v108;
    }
    v97 = (unsigned __int64 *)(*(_QWORD *)v74 + 16 * v96);
    ++v6;
    *v97 = v73;
    v97[1] = v95;
    ++*(_DWORD *)(v74 + 8);
  }
  while ( v100 != v6 );
LABEL_39:
  v76 = (unsigned int)v128;
  v77 = ptr;
  v78 = nullptr;
  if ( (_DWORD)v128 )
  {
    v79 = v118;
    v105 = (unsigned int)v119;
    v80 = (unsigned int)v122;
    v81 = v127;
    v103 = (__int64)v130;
    v104 = (unsigned int)v131;
    v101 = (char **)v133;
    v102 = (char *)(unsigned int)v134;
    v82 = sub_168B6C0((__int64)a1);
    *((_QWORD *)&v98 + 1) = v80;
    *(_QWORD *)&v98 = v77;
    v83 = sub_EC3790(v82, a4, v81, (void *)v76, (__int64)v79, v105, v98, v101, v102, v103, v104);
    v77 = ptr;
    v78 = v83;
  }
  if ( v77 != v123 )
    free(v77);
  if ( v118 != v120 )
    free(v118);
LABEL_45:
  if ( v136 != v138 )
    free(v136);
  if ( v133 != v135 )
    free(v133);
  v84 = v130;
  v85 = &v130[18 * (unsigned int)v131];
  if ( v130 != v85 )
  {
    do
    {
      while ( 1 )
      {
        v85 -= 18;
        if ( *v85 == v85 + 2 )
          break;
        free(*v85);
        if ( v84 == v85 )
          goto LABEL_52;
      }
    }
    while ( v84 != v85 );
LABEL_52:
    v85 = v130;
  }
  if ( v85 != (void **)v132 )
    free(v85);
  if ( v127 != v129 )
    free(v127);
  return v78;
}
