unsigned __int64 __fastcall sub_17CA050(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        double a7,
        unsigned __int8 a8,
        unsigned __int16 *a9)
{
  __int64 v11; // r12
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  _WORD *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  char v23; // al
  unsigned __int16 **v24; // r15
  __int64 *v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  unsigned __int16 *v30; // r15
  int v31; // eax
  __int64 v32; // rsi
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rax
  void *v41; // rdi
  unsigned int v42; // eax
  __int64 *v43; // rbx
  unsigned __int64 v44; // rdi
  unsigned int v45; // eax
  size_t v46; // r14
  __int64 v47; // rax
  int v48; // edi
  __int64 v49; // rax
  int *v50; // rdi
  int v51; // r9d
  int *v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rax
  bool v55; // al
  _QWORD *v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // eax
  __int64 *v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // [rsp+0h] [rbp-318h]
  char v74; // [rsp+0h] [rbp-318h]
  __int64 v75; // [rsp+0h] [rbp-318h]
  unsigned __int16 *v76; // [rsp+0h] [rbp-318h]
  unsigned __int16 *v77; // [rsp+0h] [rbp-318h]
  _WORD *v78; // [rsp+0h] [rbp-318h]
  __int64 v79; // [rsp+8h] [rbp-310h]
  __int64 v80; // [rsp+10h] [rbp-308h] BYREF
  __int64 v81[2]; // [rsp+18h] [rbp-300h] BYREF
  __int64 v82; // [rsp+28h] [rbp-2F0h] BYREF
  __int64 v83; // [rsp+30h] [rbp-2E8h] BYREF
  __int64 v84; // [rsp+38h] [rbp-2E0h] BYREF
  __int64 v85[2]; // [rsp+40h] [rbp-2D8h] BYREF
  __int64 v86; // [rsp+50h] [rbp-2C8h] BYREF
  __int64 v87[2]; // [rsp+58h] [rbp-2C0h] BYREF
  int v88; // [rsp+68h] [rbp-2B0h]
  __int64 v89; // [rsp+70h] [rbp-2A8h]
  __int16 v90; // [rsp+78h] [rbp-2A0h]
  __int128 v91; // [rsp+E0h] [rbp-238h] BYREF
  int v92; // [rsp+F0h] [rbp-228h] BYREF
  __int16 v93; // [rsp+F4h] [rbp-224h]
  __int64 v94; // [rsp+F8h] [rbp-220h]
  void *v95; // [rsp+100h] [rbp-218h]
  __int64 v96; // [rsp+108h] [rbp-210h]
  _QWORD v97[17]; // [rsp+110h] [rbp-208h] BYREF
  __int64 v98; // [rsp+198h] [rbp-180h]
  __int64 v99; // [rsp+1A0h] [rbp-178h]
  __int64 v100; // [rsp+1B0h] [rbp-168h]
  __int64 v101; // [rsp+1B8h] [rbp-160h]
  int v102; // [rsp+1C8h] [rbp-150h]
  char v103; // [rsp+1CCh] [rbp-14Ch]
  void *v104; // [rsp+1D0h] [rbp-148h]
  __int64 v105; // [rsp+1D8h] [rbp-140h]
  _QWORD v106[10]; // [rsp+1E0h] [rbp-138h] BYREF
  void *v107; // [rsp+230h] [rbp-E8h]
  __int64 v108; // [rsp+238h] [rbp-E0h]
  _WORD v109[52]; // [rsp+240h] [rbp-D8h] BYREF
  void *ptr; // [rsp+2A8h] [rbp-70h]
  __int64 v111; // [rsp+2B0h] [rbp-68h]
  _BYTE v112[96]; // [rsp+2B8h] [rbp-60h] BYREF

  v11 = a2;
  v81[0] = a4;
  v80 = a6;
  v13 = sub_F57E80(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL));
  v15 = *(_QWORD *)(a1 + 232);
  v16 = a9;
  if ( (*(_BYTE *)v15 & 8) == 0
    || (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v81[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 2) > 4u )
  {
    v23 = *(_BYTE *)(v13 + 16);
    if ( a9 )
    {
      v17 = *a9;
      LOWORD(v17) = v17 & 0x1FF;
      if ( (_WORD)v17 != 19 )
        goto LABEL_25;
      if ( !a8 )
      {
        if ( v23 != 17 )
          goto LABEL_27;
        goto LABEL_70;
      }
      v24 = (unsigned __int16 **)(a9 + 12);
      v17 = *((unsigned int *)a9 + 1);
      if ( v23 != 17 )
        goto LABEL_16;
      v46 = 8 * v17;
      v79 = 8 * v17;
      v75 = (8 * v17) >> 3;
    }
    else
    {
      if ( v23 != 17
        || (*(_BYTE *)(a2 + 96) & 5) == 1
        || (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B && (v76 = a9, v55 = sub_179A810(a2), v16 = v76, v55) )
      {
        v21 = 0;
        sub_168B9F0((__int64)&v91, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xCC9u, 0);
        v86 = *(_QWORD *)(a2 + 40);
        v29 = sub_15894B0((__int64)&v91, &v86);
        sub_1605D30(v29, v81);
        sub_15F7200(&v91);
        return v21;
      }
      v24 = nullptr;
      v75 = 0;
      v46 = 0;
      v79 = 0;
    }
LABEL_60:
    v47 = *(_QWORD *)(a2 + 48);
    v48 = *(_DWORD *)(a2 + 24);
    LODWORD(v86) = 0;
    v87[1] = v47;
    v87[0] = 0;
    v88 = 0;
    v89 = a2;
    v90 = 0;
    v49 = sub_17A22A0(v48, a8, v16, a7);
    v50 = &v92;
    v51 = 0;
    v85[0] = v49;
    v52 = &v92;
    v85[1] = v53;
    *(_QWORD *)&v91 = &v92;
    *((_QWORD *)&v91 + 1) = 0x800000000LL;
    if ( v79 > 64 )
    {
      sub_2237220(&v91, &v92, v75, 8);
      v52 = (int *)v91;
      v51 = DWORD2(v91);
      v50 = (int *)(v91 + 8LL * DWORD2(v91));
    }
    if ( v46 )
    {
      memcpy(v50, v24, v46);
      v52 = (int *)v91;
      v51 = DWORD2(v91);
    }
    DWORD2(v91) = v75 + v51;
    v54 = sub_1A26590(a1, a5, &v86, v85, v52, (unsigned int)(v75 + v51));
    v41 = (void *)v91;
    v21 = v54;
    if ( (int *)v91 != &v92 )
      goto LABEL_54;
    return v21;
  }
  if ( !a9 || (v17 = *a9, LOWORD(v17) = v17 & 0x1FF, (_WORD)v17 != 53) && (_WORD)v17 != 9 )
  {
    v73 = v13;
    sub_168B9F0((__int64)&v91, (__int64 *)(a1 + 8), v80, 0xCC2u, 0);
    v18 = sub_F57E80(v73);
    if ( !v18 || *(_BYTE *)(v18 + 16) != 16 )
      BUG();
    LODWORD(v85[0]) = (*(_BYTE *)(v18 + 18) >> 3) & 3;
    v19 = sub_1587D10((__int64)&v91, (int *)v85);
    LODWORD(v86) = 23;
    v20 = sub_1587D10(v19, (int *)&v86);
    goto LABEL_9;
  }
  v23 = *(_BYTE *)(v13 + 16);
LABEL_25:
  if ( v23 == 17 )
  {
LABEL_70:
    v79 = 8;
    v46 = 8;
    v24 = &a9;
    v75 = 1;
    goto LABEL_60;
  }
  if ( !a8 )
  {
LABEL_27:
    v30 = a9;
    goto LABEL_28;
  }
  if ( (_WORD)v17 != 53 )
  {
    v30 = a9;
    goto LABEL_80;
  }
  v24 = *((unsigned __int16 ***)a9 + 2);
  v17 = (unsigned int)((__int64)(*((_QWORD *)a9 + 3) - (_QWORD)v24) >> 3);
LABEL_16:
  if ( !v17 )
  {
    v25 = (__int64 *)(a1 + 8);
    if ( a2 )
    {
      v26 = sub_EEB7E0((unsigned __int64)a9, a2, a7);
      sub_168B9F0((__int64)&v91, v25, v26, 0xCC7u, 0);
      v86 = a2;
      v87[0] = a3;
      v27 = sub_17B9080((__int64)&v91, &v86);
    }
    else
    {
      v42 = sub_EEB7E0((unsigned __int64)a9, 0, a7);
      sub_168B9F0((__int64)&v91, v25, v42, 0xF90u, 0);
      v86 = 0;
      v87[0] = a3;
      v27 = sub_17B3DD0((__int64)&v91, v87);
    }
    v28 = v27;
    goto LABEL_20;
  }
  if ( v17 != 1 )
  {
    v43 = (__int64 *)(a1 + 8);
    v44 = (unsigned __int64)v24[1];
    if ( a2 )
    {
      v45 = sub_EEB7E0(v44, a2, a7);
      sub_168B9F0((__int64)&v91, v43, v45, 0xCC6u, 0);
      v86 = a2;
      v87[0] = a3;
      v28 = sub_17B9080((__int64)&v91, &v86);
    }
    else
    {
      v65 = sub_EEB7E0(v44, 0, a7);
      sub_168B9F0((__int64)&v91, v43, v65, 0xF8Fu, 0);
      v86 = 0;
      v87[0] = a3;
      v28 = sub_17B3DD0((__int64)&v91, v87);
    }
LABEL_20:
    v20 = sub_1605D30(v28, v81);
LABEL_9:
    sub_15884C0(v20, &v80);
    sub_15F7200(&v91);
    return 0;
  }
  v30 = *v24;
LABEL_80:
  if ( (*v30 & 0x1FF) == 0x35 )
  {
    v78 = a9;
    v61 = sub_EEB7E0((unsigned __int64)a9, a2, a7);
    sub_168B9F0((__int64)&v91, (__int64 *)(a1 + 8), v61, a2 == 0 ? 3985 : 3272, 0);
    LOBYTE(v86) = (*v78 & 0x1FF) == 53;
    v21 = 0;
    v62 = sub_1588420((__int64)&v91, (unsigned __int8 *)&v86);
    v63 = sub_17C9F10(v62, a2, a3);
    v64 = sub_1605D30(v63, v81);
    sub_15884C0(v64, &v80);
    sub_15F7200(&v91);
    return v21;
  }
LABEL_28:
  if ( *(char *)(v15 + 105) >= 0 || (v56 = *(_QWORD **)(a1 + 248), v56[2388] != *((_QWORD *)a9 + 1)) )
  {
    if ( a2 )
    {
      v74 = 1;
      goto LABEL_31;
    }
LABEL_87:
    v74 = 1;
    goto LABEL_32;
  }
  if ( !a2 )
    goto LABEL_87;
  v77 = a9;
  v57 = sub_A8A430(v56, a2, v17, v15, v14, (__int64)a9);
  a2 = (__int64)v77;
  v58 = sub_18F0490(a1, v77, v57);
  if ( v58 == 1 )
    return 0;
  v74 = 0;
  a9 = (unsigned __int16 *)(v58 & 0xFFFFFFFFFFFFFFFELL);
LABEL_31:
  if ( (*(_BYTE *)(v11 + 28) & 0x7F) == 0x2E )
  {
    a2 = sub_A75AF0(*(_QWORD *)(a1 + 248));
    if ( sub_179A7E0(v81[0], a2) )
    {
      v14 = *((_QWORD *)v30 + 1);
      a2 = v14 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 2 <= 1 )
      {
        v59 = *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL];
        LODWORD(v60) = ((unsigned __int8)v59 | (unsigned __int8)v15) & 7;
        if ( (v59 & 8) == 0 )
          return v14 & 0xFFFFFFFFFFFFFFF8LL | (unsigned int)v60 | *((_QWORD *)v30 + 1) & 7;
        v60 = v15 & 7
            | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
            | *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
        if ( (*(__int64 *)((char *)&qword_18 + (v59 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return v14 & 0xFFFFFFFFFFFFFFF8LL | (unsigned int)v60 | *((_QWORD *)v30 + 1) & 7;
        v72 = v14 & 7 | v60;
        if ( (v14 & 8) != 0 )
        {
          v72 |= *(__int64 *)((char *)&qword_18 + (*((_QWORD *)v30 + 1) & 0xFFFFFFFFFFFFFFF0LL));
          a2 = *(_QWORD *)a2;
        }
        return sub_A70C40(*(_QWORD *)(a1 + 248), a2, v72);
      }
    }
  }
LABEL_32:
  v82 = 0;
  v31 = sub_C00A40((unsigned __int64)v30, a2, v17, v15, v14);
  v32 = *a5;
  v92 = v31;
  v98 &= 0xFFFFFFFE00000000LL;
  v100 &= 0xFFFFFFFE00000000LL;
  v93 = 0;
  v104 = v106;
  v95 = v97;
  v107 = v109;
  v96 = 0x400000000LL;
  v108 = 0x400000000LL;
  v109[48] = 0;
  v111 = 0x400000000LL;
  v105 = 0x800000000LL;
  ptr = v112;
  v91 = 0;
  v94 = 0;
  v97[16] = 0;
  v99 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v106[8] = 0;
  v106[9] = 0;
  v33 = sub_1D79BF0(a1, v32, (int)a5 + 8, (_DWORD)v30, (unsigned int)&v82, (unsigned int)&v91, 0, 0, 0);
  if ( v33 && v33 != 18 )
  {
    if ( v11 )
    {
      v32 = v11;
      sub_1D40760(a1, v11, v30);
      goto LABEL_36;
    }
    v66 = (__int64 *)(a1 + 8);
    if ( (*a9 & 0x1FF) == 0x35 )
    {
      sub_168B9F0((__int64)&v86, v66, v80, 0xF8Eu, 0);
      v68 = sub_17C9F10((__int64)&v86, 0, a3);
      v69 = *((_QWORD *)v30 + 1);
      if ( (v69 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_85;
    }
    else
    {
      sub_168B9F0((__int64)&v86, v66, v80, 0xF8Du, 0);
      v67 = sub_17C9F10((__int64)&v86, 0, a3);
      v83 = *a5;
      v68 = sub_162B6D0(v67, &v83);
      v69 = *((_QWORD *)v30 + 1);
      if ( (v69 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
LABEL_85:
        v84 = *a5;
LABEL_86:
        v70 = sub_162B6D0(v68, &v84);
        v85[0] = sub_EEC8C0((unsigned __int64)v30, (__int64)&v84, 0.0);
        sub_1587DB0(v70, v85);
        sub_15F7200(&v86);
        goto LABEL_47;
      }
    }
    v84 = v69;
    goto LABEL_86;
  }
LABEL_36:
  if ( *(_DWORD *)(a1 + 11320) <= *(_DWORD *)(a1 + 12596) )
  {
    if ( v11 )
    {
      if ( v74 )
      {
        if ( (v82 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v35 = *(_QWORD *)(v82 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v35 + 16) == 34
            || (v71 = *(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v71 + 16) == 34)
            && (v35 = sub_F63050(*(_QWORD *)(v82 & 0xFFFFFFFFFFFFFFF0LL), v32, v71, v34)) != 0 )
          {
            v36 = *(_QWORD *)(*(_QWORD *)(v35 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            v37 = (unsigned int)*(unsigned __int8 *)(v36 + 16) - 35;
            if ( (unsigned int)v37 > 1 )
              v36 = sub_F63050(v36, v32, v37, v34);
            if ( !(*(_BYTE *)(v36 + 19) >> 2) )
            {
              v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v38 + 16) == 13 && ((*(_WORD *)(v38 + 18) >> 3) & 0x1FF) == 0x1E9 )
              {
                v86 = *a5;
                v87[0] = (__int64)(a5 + 1);
                v39 = sub_F6CCB0(&v86, (__m128)0LL);
                sub_168B9F0((__int64)&v86, (__int64 *)(a1 + 8), v39, 0x19CDu, 0);
                v40 = sub_17C9F10((__int64)&v86, v11, a3);
                sub_15884C0(v40, &v80);
                sub_15F7200(&v86);
              }
            }
          }
        }
      }
    }
  }
LABEL_47:
  v21 = v82;
  if ( ptr != v112 )
    free(ptr);
  if ( v107 != v109 )
    free(v107);
  if ( v104 != v106 )
    free(v104);
  sub_C239B0((__int64)v95, (__int64)v95 + 32 * (unsigned int)v96);
  v41 = v95;
  if ( v95 != v97 )
LABEL_54:
    free(v41);
  return v21;
}
