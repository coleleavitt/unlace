__int64 __fastcall sub_19F92A0(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  _QWORD *v13; // r12
  unsigned int v14; // ebp
  __int64 *v16; // r12
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  char *v23; // r14
  unsigned int v24; // eax
  unsigned int v25; // r14d
  char *v26; // r12
  __int64 v27; // rsi
  _QWORD *v28; // rdi
  unsigned __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 *v34; // r15
  unsigned int v35; // eax
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 *v38; // rdx
  unsigned __int64 v39; // r15
  __int64 *v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // eax
  unsigned int v46; // r14d
  char *v47; // r12
  __int64 *v48; // r15
  unsigned int v49; // eax
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 *v53; // rdx
  __int64 *v54; // rax
  __int64 v55; // rsi
  _QWORD *v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rbp
  unsigned int v59; // eax
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // r14
  unsigned __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  _QWORD *v75; // r14
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  unsigned __int64 v83; // rsi
  _QWORD *v84; // rax
  _QWORD *v85; // r14
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdi
  char *v91; // rax
  unsigned int v92; // eax
  __int64 v93; // rdi
  _QWORD *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  unsigned __int64 v99; // r15
  __int64 v100; // r14
  int v101; // eax
  __int64 v102; // rsi
  __m128 *v103; // rax
  unsigned int v104; // eax
  __int64 v105; // r14
  __int64 v106; // rdx
  unsigned __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // [rsp-8h] [rbp-100h]
  unsigned __int64 v110; // [rsp+0h] [rbp-F8h]
  __int64 v111; // [rsp+8h] [rbp-F0h]
  __int64 v112; // [rsp+8h] [rbp-F0h]
  __int64 v113; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v114; // [rsp+8h] [rbp-F0h]
  __m128 *v115; // [rsp+8h] [rbp-F0h]
  unsigned int v116; // [rsp+10h] [rbp-E8h]
  unsigned int v117; // [rsp+10h] [rbp-E8h]
  __int64 v118; // [rsp+18h] [rbp-E0h]
  char *v119; // [rsp+18h] [rbp-E0h]
  char *v120; // [rsp+20h] [rbp-D8h]
  __int64 v121; // [rsp+20h] [rbp-D8h]
  __int64 v122; // [rsp+28h] [rbp-D0h]
  __int64 v123; // [rsp+30h] [rbp-C8h] BYREF
  int v124; // [rsp+38h] [rbp-C0h]
  __int64 v125; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v126; // [rsp+50h] [rbp-A8h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-98h]
  __int128 v128; // [rsp+70h] [rbp-88h]
  void *i; // [rsp+80h] [rbp-78h] BYREF
  __int64 v130; // [rsp+88h] [rbp-70h]
  unsigned __int64 v131; // [rsp+90h] [rbp-68h] BYREF
  int v132; // [rsp+98h] [rbp-60h]
  __int64 v133; // [rsp+A0h] [rbp-58h]

  v9 = a2;
  if ( (*(_WORD *)a2 & 0x1FF) == 0x35 )
  {
    v10 = (_QWORD *)a2[2];
    v11 = 0x7FFFFFFF8LL;
    v12 = v10;
    v13 = (_QWORD *)((char *)v10 + ((a2[3] - (_QWORD)v10) & 0x7FFFFFFF8LL));
    if ( v10 != v13 )
    {
      while ( 1 )
      {
        v14 = sub_19F92A0(a1, *v12, v11);
        if ( !(_BYTE)v14 )
          break;
        if ( v13 == ++v12 )
          return 1;
      }
      return v14;
    }
    return 1;
  }
  v16 = (__int64 *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL);
  LOBYTE(v17) = sub_F61140(*v16, (__int64)a2, a3, a4, a5, a6);
  v14 = v17;
  if ( (_BYTE)v17 )
    goto LABEL_42;
  v22 = *v16;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
  {
    if ( sub_F61BB0(v22, (__int64)a2, v18, v19, v20, v21) )
    {
      v22 = *v16;
      goto LABEL_9;
    }
LABEL_42:
    v53 = *(__int64 **)(a1 + 48);
    v54 = *(__int64 **)(a1 + 24);
    if ( v54 == &v53[*(unsigned int *)(a1 + 56)] )
    {
      if ( !*(_BYTE *)(a1 + 40) )
      {
        v108 = *(unsigned int *)(a1 + 200);
        if ( v108 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 204) )
        {
          sub_2237220(a1 + 192, a1 + 208, v108 + 1, 8);
          v108 = *(unsigned int *)(a1 + 200);
        }
        v14 = 1;
        *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v108) = a2;
        ++*(_DWORD *)(a1 + 200);
        return v14;
      }
      *(_QWORD *)(a1 + 24) = v53;
      v54 = v53;
    }
    v55 = *v54;
    v56 = *(_QWORD **)(a1 + 8);
    v130 = 0;
    v132 = 0;
    LODWORD(i) = 1;
    v57 = sub_A73320(v56, v55);
    v58 = *(_QWORD *)a1;
    v133 = 0;
    v131 = v57;
    v59 = sub_EEB7E0((unsigned __int64)v9, v55, *(double *)a7.m128_u64);
    v60 = v58;
    v14 = 0;
    v61 = sub_1A24E20(v60, &i, v59, v9, 0, 0);
    if ( v61 != 1 )
    {
      v62 = *(unsigned int *)(a1 + 200);
      v63 = v61 & 0xFFFFFFFFFFFFFFFELL;
      if ( v62 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 204) )
      {
        v110 = v63;
        sub_2237220(a1 + 192, a1 + 208, v62 + 1, 8);
        v62 = *(unsigned int *)(a1 + 200);
        v63 = v110;
      }
      v14 = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v62) = v63;
      ++*(_DWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 24) += 8LL;
    }
    return v14;
  }
LABEL_9:
  if ( (unsigned int)*(unsigned __int8 *)(v22 + 16) - 57 <= 1 || (v22 = sub_19F5590(v22, (__int64)a2, v18, v19)) != 0 )
  {
    v23 = (char *)*(unsigned int *)(v22 + 20);
    v120 = v23;
    v118 = sub_A63CE0(*(_QWORD **)(a1 + 8));
    v24 = sub_A97D20(*(_QWORD *)(a1 + 8), *(_QWORD *)(v118 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v23 )
      return 1;
    v25 = v24;
    v26 = nullptr;
    v122 = a1 + 208;
    while ( 1 )
    {
      LODWORD(v130) = v25;
      if ( v25 > 0x40 )
        sub_2205470(&i, v26, 0);
      else
        i = v26;
      v34 = (__int64 *)sub_C0C5D0(*(_QWORD **)(a1 + 8), (__int64)&i, v118, 0);
      if ( (unsigned int)v130 > 0x40 && i )
        operator delete[](i);
      v112 = *(_QWORD *)a1;
      v116 = sub_EEC140((unsigned __int64)v9);
      v35 = sub_EEB7E0((unsigned __int64)v9, (__int64)&i, *(double *)a7.m128_u64);
      v37 = sub_191AF90(v112, v9, v35, v34, v116, v36, a7, a8);
      if ( v37 == 1 )
        return v14;
      v38 = *(__int64 **)(a1 + 48);
      v39 = v37 & 0xFFFFFFFFFFFFFFFELL;
      v40 = *(__int64 **)(a1 + 24);
      if ( v40 != &v38[*(unsigned int *)(a1 + 56)] )
        goto LABEL_12;
      if ( *(_BYTE *)(a1 + 40) )
        break;
      v64 = *(unsigned int *)(a1 + 200);
      if ( v64 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 204) )
      {
        sub_2237220(a1 + 192, v122, v64 + 1, 8);
        v64 = *(unsigned int *)(a1 + 200);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v64) = v39;
      ++*(_DWORD *)(a1 + 200);
LABEL_16:
      if ( v120 == ++v26 )
        return 1;
    }
    *(_QWORD *)(a1 + 24) = v38;
    v40 = v38;
LABEL_12:
    v27 = *v40;
    v28 = *(_QWORD **)(a1 + 8);
    v130 = 0;
    v132 = 0;
    LODWORD(i) = 1;
    v29 = sub_A73320(v28, v27);
    v133 = 0;
    v131 = v29;
    v111 = *(_QWORD *)a1;
    v30 = sub_EEB7E0(v39, v27, *(double *)a7.m128_u64);
    v31 = sub_1A24E20(v111, &i, v30, v39, 0, 0);
    if ( v31 == 1 )
      return v14;
    v32 = *(unsigned int *)(a1 + 200);
    v33 = v31 & 0xFFFFFFFFFFFFFFFELL;
    if ( v32 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 204) )
    {
      v114 = v33;
      sub_2237220(a1 + 192, v122, v32 + 1, 8);
      v32 = *(unsigned int *)(a1 + 200);
      v33 = v114;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v32) = v33;
    ++*(_DWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 24) += 8LL;
    goto LABEL_16;
  }
  v43 = *v16;
  if ( (unsigned int)*(unsigned __int8 *)(*v16 + 16) - 2 > 1 )
  {
    v65 = *(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v65 + 16) == 48 )
    {
      v66 = (__int64)&i;
      v67 = &v131;
      v131 = v65;
      v130 = 0x600000001LL;
      v68 = 1;
      i = &v131;
      while ( 1 )
      {
        v75 = sub_F63270(v67[v68 - 1], (__int64)a2, (__int64)v67, v66, v41, v42);
        sub_7052B0((__int64 *)(v75[13] + 96LL), v75[13], v76, v77, v78, v79);
        v83 = *(unsigned int *)(v75[16] + 16LL);
        if ( !(_DWORD)v83 )
          break;
        v84 = sub_F63270(*((_QWORD *)i + (unsigned int)v130 - 1), v83, (unsigned int)v130, v80, v81, v82);
        a2 = (unsigned __int64 *)v84[13];
        v85 = v84;
        sub_7052B0((__int64 *)a2 + 12, (__int64)a2, v86, v87, v88, v89);
        v90 = v85[16];
        if ( (*(_BYTE *)(v90 + 24) & 1) != 0 )
          v69 = sub_B96980(v90);
        else
          v69 = *(_QWORD *)(v90 + 24);
        v70 = 0;
        *(_QWORD *)&v126 = **(_QWORD **)(v69 + 16);
        v71 = sub_6D5440(&v126);
        v66 = HIDWORD(v130);
        v72 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v71 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v72 + 16) == 48 )
          v70 = v72;
        v73 = (unsigned int)v130;
        v74 = (unsigned int)v130 + 1LL;
        if ( v74 > HIDWORD(v130) )
        {
          a2 = &v131;
          sub_2237220(&i, &v131, v74, 8);
          v73 = (unsigned int)v130;
        }
        *((_QWORD *)i + v73) = v70;
        v67 = i;
        v68 = (unsigned int)(v130 + 1);
        LODWORD(v130) = v130 + 1;
      }
      while ( 1 )
      {
        v92 = v130;
        if ( !(_DWORD)v130 )
          break;
        v93 = *((_QWORD *)i + (unsigned int)v130 - 1);
        LODWORD(v130) = v130 - 1;
        v94 = sub_F60F10(v93, v83, v92, v80, v81, v82);
        v99 = sub_B7E900((__int64)v94, v83, v95, v96, v97, v98);
        if ( v99 )
        {
LABEL_69:
          *(_QWORD *)&v126 = v99 | (*(_BYTE *)(v99 + 29) >> 5) & 3;
          v100 = v126;
          v101 = sub_EEB7E0((unsigned __int64)v9, v83, *(double *)a7.m128_u64);
          v102 = *(_QWORD *)(v99 + 40);
          v124 = v101;
          v123 = v102;
          sub_B85890(&v125, v102);
          v103 = *(__m128 **)a1;
          a7.m128_u64[0] = 0;
          v126 = 0;
          *(_OWORD *)ptr = 0;
          v128 = 0;
          v115 = v103;
          v104 = sub_EEB7E0((unsigned __int64)v9, v102, 0.0);
          v105 = sub_19C4FE0(
                   v115,
                   (unsigned __int64)v9,
                   0,
                   v104,
                   (__int64)&v126,
                   v99,
                   (__m128)0LL,
                   a8,
                   v100,
                   (__int64)&v123);
          v106 = v109;
          if ( HIDWORD(ptr[1]) )
            free(ptr[0]);
          if ( v105 == 1
            || (v83 = v105 & 0xFFFFFFFFFFFFFFFELL, !(unsigned __int8)sub_19F92A0(a1, v105 & 0xFFFFFFFFFFFFFFFELL, v106)) )
          {
            if ( i != &v131 )
              free(i);
            return v14;
          }
          while ( 1 )
          {
            v107 = *(_QWORD *)(v99 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v99 = v107;
            if ( !v107 )
              break;
            if ( (*(_BYTE *)(v107 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_69;
          }
        }
      }
      if ( i != &v131 )
        free(i);
    }
    return 1;
  }
  v44 = *(_QWORD *)(v43 + 40);
  v119 = (char *)v44;
  if ( (*(_BYTE *)(v43 + 19) & 2) != 0 )
  {
    v91 = *(char **)v44;
    if ( *(_DWORD *)(v44 + 8) > 0x40u )
      v91 = *(char **)v91;
    v119 = v91;
  }
  v121 = sub_A63CE0(*(_QWORD **)(a1 + 8));
  v45 = sub_A97D20(*(_QWORD *)(a1 + 8), *(_QWORD *)(v121 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v119 )
    return 1;
  v46 = v45;
  v47 = nullptr;
  LODWORD(v130) = v45;
  if ( v45 > 0x40 )
    goto LABEL_39;
LABEL_31:
  for ( i = v47; ; sub_2205470(&i, v47, 0) )
  {
    v48 = (__int64 *)sub_C0C5D0(*(_QWORD **)(a1 + 8), (__int64)&i, v121, 0);
    if ( (unsigned int)v130 > 0x40 && i )
      operator delete[](i);
    v113 = *(_QWORD *)a1;
    v117 = sub_EEC140((unsigned __int64)a2);
    v49 = sub_EEB7E0((unsigned __int64)a2, (__int64)&i, *(double *)a7.m128_u64);
    v51 = sub_191AF90(v113, a2, v49, v48, v117, v50, a7, a8);
    if ( v51 == 1 || !(unsigned __int8)sub_19F92A0(a1, v51 & 0xFFFFFFFFFFFFFFFELL, v52) )
      break;
    if ( ++v47 == v119 )
      return 1;
    LODWORD(v130) = v46;
    if ( v46 <= 0x40 )
      goto LABEL_31;
LABEL_39:
    ;
  }
  return v14;
}
