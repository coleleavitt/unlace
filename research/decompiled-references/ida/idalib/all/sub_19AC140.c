__int64 __fastcall sub_19AC140(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        _DWORD *a6,
        double a7,
        _QWORD *a8,
        __int64 a9,
        __int64 a10,
        unsigned __int8 a11)
{
  __int64 v13; // rdx
  _QWORD *v14; // r10
  __int64 v15; // rax
  _QWORD *v16; // r13
  _QWORD *v17; // r14
  __int64 v18; // r15
  unsigned __int8 v19; // al
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  size_t v25; // r14
  unsigned int v26; // r13d
  char *v27; // r14
  char *v28; // rbp
  _BYTE *i; // rax
  __int64 v30; // rsi
  unsigned int v31; // ecx
  __int64 v32; // rdi
  __int64 *v33; // rbp
  __int64 *v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdi
  _QWORD *v37; // r14
  _QWORD *v38; // r12
  _QWORD *v39; // rdi
  _QWORD *v40; // r15
  _QWORD *v41; // rbp
  char *v42; // rdi
  __int64 v44; // r12
  unsigned int v45; // eax
  __int64 v46; // rax
  signed __int64 v47; // r14
  const void *v48; // r11
  __int64 v49; // rax
  const void *v50; // r10
  __int64 v51; // r9
  unsigned __int64 v52; // rdx
  int v53; // r8d
  __int64 v54; // rax
  size_t v55; // rax
  int v56; // r15d
  size_t v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 *v60; // rdi
  __int64 *v61; // rdx
  int v62; // eax
  __int64 v63; // r13
  __int64 v64; // rdx
  void *v65; // rdi
  __int64 v66; // rsi
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  void *v70; // rsi
  __int64 v71; // rdi
  unsigned __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdi
  __int64 v76; // rdx
  __int64 *v77; // rbp
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned int v80; // eax
  __int64 v81; // rbp
  char v82; // [rsp+8h] [rbp-22D0h]
  int v83; // [rsp+8h] [rbp-22D0h]
  __int64 v84; // [rsp+10h] [rbp-22C8h]
  int v88; // [rsp+40h] [rbp-2298h]
  int v89; // [rsp+40h] [rbp-2298h]
  __int64 v90; // [rsp+40h] [rbp-2298h]
  const void *v91; // [rsp+48h] [rbp-2290h]
  __int64 v92[2]; // [rsp+58h] [rbp-2280h] BYREF
  int v93; // [rsp+6Ch] [rbp-226Ch] BYREF
  __int64 *v94; // [rsp+70h] [rbp-2268h] BYREF
  int *v95; // [rsp+78h] [rbp-2260h] BYREF
  void *v96; // [rsp+80h] [rbp-2258h] BYREF
  __int64 v97; // [rsp+88h] [rbp-2250h]
  _BYTE v98[32]; // [rsp+90h] [rbp-2248h] BYREF
  void *v99; // [rsp+B0h] [rbp-2228h] BYREF
  __int64 v100; // [rsp+B8h] [rbp-2220h]
  _BYTE v101[256]; // [rsp+C0h] [rbp-2218h] BYREF
  void *v102; // [rsp+1C0h] [rbp-2118h] BYREF
  unsigned __int64 v103; // [rsp+1C8h] [rbp-2110h]
  _BYTE v104[256]; // [rsp+1D0h] [rbp-2108h] BYREF
  void *v105; // [rsp+2D0h] [rbp-2008h] BYREF
  unsigned __int64 v106; // [rsp+2D8h] [rbp-2000h] BYREF
  unsigned __int64 v107[32]; // [rsp+2E0h] [rbp-1FF8h] BYREF
  _BYTE *v108; // [rsp+3E0h] [rbp-1EF8h] BYREF
  __int64 v109; // [rsp+3E8h] [rbp-1EF0h]
  _BYTE v110[2688]; // [rsp+3F0h] [rbp-1EE8h] BYREF
  void *v111; // [rsp+E70h] [rbp-1468h]
  __int64 v112; // [rsp+E78h] [rbp-1460h]
  int v113; // [rsp+E80h] [rbp-1458h]
  char v114; // [rsp+E84h] [rbp-1454h]
  _QWORD v115[17]; // [rsp+E88h] [rbp-1450h] BYREF
  int v116; // [rsp+F10h] [rbp-13C8h]
  __int64 v117; // [rsp+F18h] [rbp-13C0h]
  __int64 v118; // [rsp+F20h] [rbp-13B8h]
  void *ptr; // [rsp+F28h] [rbp-13B0h]
  __int64 v120; // [rsp+F30h] [rbp-13A8h]
  _BYTE v121[32]; // [rsp+F38h] [rbp-13A0h] BYREF
  __int64 *v122; // [rsp+F58h] [rbp-1380h]
  __int64 v123; // [rsp+F60h] [rbp-1378h]
  _QWORD v124[2]; // [rsp+F68h] [rbp-1370h] BYREF
  int v125; // [rsp+F78h] [rbp-1360h]
  int v126; // [rsp+F7Ch] [rbp-135Ch]
  __int64 v127; // [rsp+F80h] [rbp-1358h]
  char v128; // [rsp+F88h] [rbp-1350h]
  int v129; // [rsp+F8Ch] [rbp-134Ch]
  int v130; // [rsp+2290h] [rbp-48h]

  v92[0] = a3;
  v13 = *(unsigned int *)(a2 + 128);
  v108 = v110;
  v109 = 0x1000000000LL;
  v111 = v115;
  ptr = v121;
  v120 = 0x400000000LL;
  v122 = v124;
  v112 = 16;
  v113 = 0;
  v114 = 1;
  v115[16] = 0;
  v116 = 0;
  v117 = 0;
  v118 = 0;
  v123 = 0;
  v124[0] = 0;
  v124[1] = 1;
  v125 = v13;
  v126 = 0;
  v127 = 0;
  v14 = *(_QWORD **)(a2 + 8);
  v15 = *(unsigned int *)(a2 + 16);
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v16 = &v14[v15];
  if ( v14 != v16 )
  {
    v17 = v14;
    v82 = a4 & 1;
    while ( 1 )
    {
      v18 = *v17 & 0xFFFFFFFFFFFFFFF8LL;
      v19 = *(_BYTE *)(v18 + 28) & 0x7F;
      if ( ((v19 + 52) & 0x7Fu) <= 1 || (unsigned int)v19 - 53 <= 1 )
        v18 = sub_B72ED0(*v17 & 0xFFFFFFFFFFFFFFF8LL);
      v20 = sub_B8BF30(v18);
      if ( sub_B74C70(v20) == v82 )
        goto LABEL_4;
      if ( (*(_BYTE *)(v18 + 28) & 0x7F) == 0x47 )
      {
        sub_1BF2330((_DWORD)a1, v18, *v17, 0, *a5, *((_DWORD *)a5 + 2), (__int64)&v108, 0, 0, 1, 0, 0, 0);
LABEL_4:
        if ( v16 == ++v17 )
          goto LABEL_11;
      }
      else
      {
        sub_1BF10B0(
          (_DWORD)a1,
          v18,
          *v17++,
          *a5,
          *((_DWORD *)a5 + 2),
          (unsigned int)&v108,
          0,
          0,
          1,
          0,
          0,
          0,
          0,
          0,
          0,
          0);
        if ( v16 == v17 )
        {
LABEL_11:
          v13 = *(unsigned int *)(a2 + 128);
          break;
        }
      }
    }
  }
  v21 = sub_1BF27B0(&v108, a1, v13, &v94);
  if ( v21 != 1 )
  {
    if ( v21 )
    {
      if ( v21 == 2 )
      {
        if ( a11 )
        {
          v25 = j__strlen(&byte_22F0C30);
          v84 = *a5;
          v83 = *((_DWORD *)a5 + 2);
          sub_168B9B0((__int64)&v102, (__int64)(a1 + 1), 4742);
          sub_AE9DF0((unsigned __int8 **)&v102, *(_QWORD *)(a2 + 120), 9u);
          LOBYTE(v106) = 1;
          v105 = (void *)v92[0];
          sub_AEC610((__int64 *)&v102, (__int64 *)&v105);
          LODWORD(v105) = *(_DWORD *)(a2 + 128);
          sub_1582CA0((__int64)&v106, (_BYTE **)&v102);
          sub_1C022A0(
            (unsigned int)&v108,
            (unsigned int)&v105,
            (_DWORD)a1,
            2,
            v84,
            v83,
            (__int64)&byte_22F0C30,
            v25,
            0,
            (__int64)sub_16A7620,
            (__int64)&v99);
          if ( v106 && v107[0] )
            sub_1580C40(v107[0], v106);
          if ( v102 && v103 )
            sub_1580C40(v103, (unsigned __int64)v102);
          goto LABEL_22;
        }
      }
      else if ( a11 )
      {
        sub_1C026E0(
          (_DWORD)a1,
          *(_DWORD *)(a2 + 128),
          v92[0],
          *(_QWORD *)(a2 + 120),
          (unsigned int)&v108,
          *v94,
          *a5,
          *((unsigned int *)a5 + 2),
          0);
LABEL_22:
        v26 = a11;
        goto LABEL_23;
      }
      goto LABEL_50;
    }
    v44 = *v94;
    if ( (unsigned int)sub_1661D40(a1, *(_DWORD *)(a2 + 128), v92[0], *(_QWORD *)(a2 + 96), v94[1], 1) != 1 )
    {
      v26 = 0;
      *a8 = v44;
      goto LABEL_23;
    }
LABEL_50:
    v26 = 1;
    goto LABEL_23;
  }
  if ( *a6 != 1 )
  {
    if ( (*(_DWORD *)(a2 + 120) & 7) == 6
      && *(_DWORD *)(*(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL) == 3
      && (**(_BYTE **)(a1[31] + 2320LL) & 0x20) != 0 )
    {
      v64 = a4;
      if ( a4 )
      {
        v65 = *(void **)(a2 + 88);
        *(_DWORD *)a2 = 0;
        *(_DWORD *)(a2 + 16) = 0;
        if ( v65 )
          sub_1A39780(v65);
        *(_OWORD *)(a2 + 88) = 0;
        *(_BYTE *)(a2 + 166) = 0;
        *(_QWORD *)(a2 + 120) = (a1[31] + 17608LL) | 6;
        v66 = *(_QWORD *)(*(_QWORD *)(a1[31] + 2264LL) + 80LL);
        v67 = sub_704780((__int64 *)(v66 + 72), v66, v64, v22, v23, v24);
        if ( v67 )
          v67 += 5;
        sub_1A48440(a1, a2, v67, 0);
        v26 = sub_19AC140((_DWORD)a1, a2, v92[0], 1, (_DWORD)a5, (_DWORD)a6, (__int64)a8, 0, 0, a11);
        goto LABEL_23;
      }
LABEL_92:
      v26 = 0;
      *a8 = 0;
      goto LABEL_23;
    }
    if ( !a4 )
      goto LABEL_92;
    if ( !a11 )
      goto LABEL_50;
    v45 = *((_DWORD *)a5 + 2);
    if ( *(_QWORD *)(a2 + 96) || v45 != 2 )
      goto LABEL_62;
    v68 = *(_QWORD *)(*a5 + 8);
    v69 = *(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v69 + 16) != 42 )
    {
      v69 = sub_199F9E0(*(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a1, v68, v22);
      if ( !v69 )
      {
        v68 = *(_QWORD *)(*a5 + 8);
LABEL_96:
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 2) <= 4u )
          goto LABEL_97;
        v45 = *((_DWORD *)a5 + 2);
LABEL_62:
        v99 = v101;
        v100 = 0x2000000000LL;
        v103 = 0x2000000000LL;
        v102 = v104;
        v96 = v98;
        v97 = 0x400000000LL;
        if ( a9 )
        {
          v93 = 0;
          v95 = &v93;
          if ( (unsigned __int64)v45 + 1 > 4 )
            sub_2237220(&v96, v98, v45 + 1LL, 8);
          sub_14B7B40((__int64)&v96, *(_QWORD *)*a5);
          sub_14B7B40((__int64)&v96, a10);
          v46 = 8LL * *((unsigned int *)a5 + 2);
          v47 = v46 - 8;
          v48 = (const void *)(*a5 + v46);
          v49 = (unsigned int)v97;
          v50 = (const void *)(*a5 + 8);
          v51 = v47 >> 3;
          v52 = (v47 >> 3) + (unsigned int)v97;
          if ( v52 > HIDWORD(v97) )
          {
            v91 = v48;
            v90 = *a5 + 8;
            sub_2237220(&v96, v98, v52, 8);
            v51 = v47 >> 3;
            v48 = v91;
            v49 = (unsigned int)v97;
            v50 = (const void *)v90;
          }
          v53 = (int)v96;
          if ( v50 != v48 )
          {
            v88 = v51;
            memcpy((char *)v96 + 8 * v49, v50, v47);
            v53 = (int)v96;
            LODWORD(v51) = v88;
            LODWORD(v49) = v97;
          }
          LODWORD(v97) = v49 + v51;
          sub_1C00200(
            (unsigned int)&v105,
            a9,
            (_DWORD)a1,
            0,
            v53,
            v49 + v51,
            *(_DWORD *)(a2 + 128),
            (__int64)sub_19A0140,
            (__int64)&v93);
          sub_19A4DA0((char ***)&v102, (char ***)&v105);
          if ( v105 != v107 )
            free(v105);
          sub_1C00200(
            (unsigned int)&v105,
            (unsigned int)&v108,
            (_DWORD)a1,
            0,
            *a5,
            *((_DWORD *)a5 + 2),
            *(_DWORD *)(a2 + 128),
            (__int64)sub_199F8A0,
            (__int64)&v95);
          sub_19A4DA0((char ***)&v99, (char ***)&v105);
          if ( v105 != v107 )
            free(v105);
          sub_168B9F0((__int64)&v105, a1 + 1, *(_DWORD *)(a2 + 128), 0x129Au, 0);
          v95 = *(int **)(a2 + 120);
          v54 = sub_15894B0((__int64)&v105, (__int64 *)&v95);
          sub_15884C0(v54, v92);
          sub_15F7200(&v105);
          v89 = *(_DWORD *)(a2 + 128);
          v55 = j__strlen(&byte_22F0C30);
          sub_1C007F0(a9, (_DWORD)a1, (_DWORD)v96, v97, (_DWORD)v102, v103, (__int64)&byte_22F0C30, v55, v89);
        }
        else
        {
          sub_1C00200(
            (unsigned int)&v105,
            (unsigned int)&v108,
            (_DWORD)a1,
            0,
            *a5,
            v45,
            *(_DWORD *)(a2 + 128),
            (__int64)sub_1837230,
            (__int64)&v95);
          sub_19A4DA0((char ***)&v99, (char ***)&v105);
          if ( v105 != v107 )
            free(v105);
          sub_168B9F0((__int64)&v105, a1 + 1, *(_DWORD *)(a2 + 128), 0x129Au, 0);
          v95 = *(int **)(a2 + 120);
          v79 = sub_15894B0((__int64)&v105, (__int64 *)&v95);
          sub_15884C0(v79, v92);
          sub_15F7200(&v105);
        }
        v56 = *(_DWORD *)(a2 + 128);
        v57 = j__strlen(&byte_22F0C30);
        sub_1C007F0(
          (unsigned int)&v108,
          (_DWORD)a1,
          *a5,
          *((_DWORD *)a5 + 2),
          (_DWORD)v99,
          v100,
          (__int64)&byte_22F0C30,
          v57,
          v56);
        if ( v96 != v98 )
          free(v96);
        if ( v102 != v104 )
          free(v102);
        if ( v99 != v101 )
          free(v99);
        goto LABEL_22;
      }
      v68 = *(_QWORD *)(*a5 + 8);
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v69 + 32)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 > 1 )
    {
LABEL_97:
      v71 = a1[31];
      v99 = *(void **)(v68 + 8);
      v70 = v99;
      v72 = sub_A71450(v71, (__int64)v99);
      v75 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFF0LL);
      v76 = *(_QWORD *)(*(_QWORD *)(v75 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v76 + 16) == 42 )
        v72 = sub_F68450(v75, (__int64)v70, v76, v73, v74);
      v77 = a1 + 1;
      if ( (v72 & 1) != 0 || (byte_8[v72 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
      {
        v80 = sub_C00A40(*(_QWORD *)(*a5 + 8), (__int64)v70, v76, v73, v74);
        sub_168B9F0((__int64)&v105, v77, v80, 0x12C4u, 0);
        v81 = sub_1605D30((__int64)&v105, (__int64 *)&v99);
        v102 = (void *)sub_EEC8C0(*(_QWORD *)(*a5 + 8), (__int64)&v99, a7);
        sub_1587DB0(v81, (__int64 *)&v102);
        sub_15F7200(&v105);
      }
      else
      {
        sub_168B9F0((__int64)&v105, v77, *(_DWORD *)(a2 + 128), 0x109Du, 0);
        v102 = *(void **)(a2 + 120);
        v78 = sub_15894B0((__int64)&v105, (__int64 *)&v102);
        sub_15884C0(v78, v92);
        sub_15F7200(&v105);
      }
      goto LABEL_22;
    }
    goto LABEL_96;
  }
  v58 = *a5;
  v59 = *((unsigned int *)a5 + 2);
  *a6 = 0;
  v60 = (__int64 *)(v58 + 8LL * ((a4 ^ 1) + 1));
  v61 = (__int64 *)(v58 + 8 * v59);
  v62 = v59;
  v63 = *v60;
  if ( v61 != v60 + 1 )
  {
    memmove(v60, v60 + 1, (char *)v61 - (char *)(v60 + 1));
    v62 = *((_DWORD *)a5 + 2);
  }
  *((_DWORD *)a5 + 2) = v62 - 1;
  v26 = sub_19AC140((_DWORD)a1, a2, v92[0], a4, (_DWORD)a5, (_DWORD)a6, (__int64)a8, (__int64)&v108, v63, a11);
LABEL_23:
  sub_1BD27A0(&v108);
  v27 = (char *)ptr;
  v28 = (char *)ptr + 8 * (unsigned int)v120;
  if ( ptr != v28 )
  {
    for ( i = ptr; ; i = ptr )
    {
      v30 = 0x40000000000LL;
      v31 = (unsigned int)((v27 - i) >> 3) >> 7;
      if ( v31 <= 0x1D )
        v30 = 4096LL << v31;
      v32 = *(_QWORD *)v27;
      v27 += 8;
      operator delete(v32, v30, 16);
      if ( v28 == v27 )
        break;
    }
  }
  v33 = v122;
  v34 = &v122[2 * (unsigned int)v123];
  if ( v122 != v34 )
  {
    do
    {
      v35 = v33[1];
      v36 = *v33;
      v33 += 2;
      operator delete(v36, v35, 16);
    }
    while ( v34 != v33 );
    v34 = v122;
  }
  if ( v34 != v124 )
    free(v34);
  if ( ptr != v121 )
    free(ptr);
  if ( !v114 )
    free(v111);
  v37 = v108;
  v38 = &v108[168 * (unsigned int)v109];
  if ( v108 != (_BYTE *)v38 )
  {
    do
    {
      while ( 1 )
      {
        v38 -= 21;
        v39 = (_QWORD *)v38[8];
        v40 = (_QWORD *)v38[9];
        v41 = v39;
        if ( v40 != v39 )
        {
          do
          {
            while ( 1 )
            {
              v42 = (char *)v41[3];
              if ( v42 == (char *)(v41 + 5) )
                break;
              operator delete(v42);
              v41 += 8;
              if ( v41 == v40 )
                goto LABEL_42;
            }
            v41 += 8;
          }
          while ( v40 != v41 );
LABEL_42:
          v39 = (_QWORD *)v38[8];
        }
        if ( !v39 )
          break;
        operator delete(v39);
        if ( v37 == v38 )
          goto LABEL_45;
      }
    }
    while ( v37 != v38 );
LABEL_45:
    v38 = v108;
  }
  if ( v38 != (_QWORD *)v110 )
    free(v38);
  return v26;
}
