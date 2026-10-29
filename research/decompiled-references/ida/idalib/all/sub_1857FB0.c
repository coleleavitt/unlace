__int64 __fastcall sub_1857FB0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, size_t a5)
{
  int v7; // ecx
  __int64 v8; // rbp
  size_t v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned int v13; // eax
  unsigned __int8 *v14; // rdi
  __int64 v15; // r13
  unsigned __int8 v16; // al
  int v17; // edi
  char *v18; // rax
  size_t v19; // rdx
  __int64 v20; // r14
  int v21; // eax
  unsigned __int8 v22; // al
  _QWORD *v23; // rdi
  void **v24; // rax
  __int64 v25; // rsi
  char v26; // dl
  unsigned int v27; // ecx
  __int64 v28; // rdx
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rbp
  void *v34; // rsi
  void *v35; // rax
  __m128 v36; // xmm0
  __m128i si128; // xmm1
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r8
  __m128i *v40; // rax
  unsigned __int64 v41; // r12
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  unsigned __int8 v46; // cl
  char v47; // r8
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int8 v50; // cl
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  _QWORD *v54; // rax
  __int64 v55; // rcx
  int v56; // eax
  __m128i v57; // xmm2
  _BYTE *v58; // rax
  __int64 v59; // rdi
  char *v60; // rax
  size_t v61; // rdx
  __int64 v62; // r14
  __int64 v63; // r14
  size_t v64; // rax
  char *v65; // rbp
  char *v66; // rbx
  int v67; // eax
  size_t v68; // rax
  int v69; // esi
  char *v70; // rax
  __int64 v71; // r14
  __int64 v72; // rax
  char v73; // cl
  __int64 v74; // rax
  _QWORD *v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  _DWORD *v81; // rax
  __int64 v82; // r14
  size_t v83; // rax
  char *v84; // r14
  char *v85; // rbx
  int v86; // eax
  char *v87; // rax
  size_t v88; // rdx
  __int64 v89; // r14
  unsigned __int8 *v90; // [rsp+0h] [rbp-308h]
  __int64 v91; // [rsp+10h] [rbp-2F8h]
  unsigned __int64 v92; // [rsp+18h] [rbp-2F0h]
  __int64 v93; // [rsp+18h] [rbp-2F0h]
  unsigned __int64 v94; // [rsp+18h] [rbp-2F0h]
  __int64 v95; // [rsp+18h] [rbp-2F0h]
  __int64 v96; // [rsp+20h] [rbp-2E8h]
  __int64 v97; // [rsp+20h] [rbp-2E8h]
  unsigned __int64 v98; // [rsp+20h] [rbp-2E8h]
  __int64 *v99; // [rsp+28h] [rbp-2E0h]
  __int64 v100; // [rsp+38h] [rbp-2D0h]
  __int64 v101; // [rsp+40h] [rbp-2C8h]
  void **v103; // [rsp+68h] [rbp-2A0h]
  int v104; // [rsp+7Ch] [rbp-28Ch] BYREF
  void *v105[2]; // [rsp+80h] [rbp-288h] BYREF
  _BYTE v106[16]; // [rsp+90h] [rbp-278h] BYREF
  void *v107; // [rsp+A0h] [rbp-268h] BYREF
  __int64 v108; // [rsp+A8h] [rbp-260h]
  _BYTE v109[32]; // [rsp+B0h] [rbp-258h] BYREF
  void *ptr[2]; // [rsp+D0h] [rbp-238h] BYREF
  _QWORD v111[4]; // [rsp+E0h] [rbp-228h] BYREF
  void *src; // [rsp+100h] [rbp-208h] BYREF
  __int64 v113; // [rsp+108h] [rbp-200h]
  _BYTE v114[128]; // [rsp+110h] [rbp-1F8h] BYREF
  void **v115; // [rsp+190h] [rbp-178h] BYREF
  void *v116[2]; // [rsp+198h] [rbp-170h] BYREF
  void *v117; // [rsp+1A8h] [rbp-160h]
  __int64 v118; // [rsp+1B0h] [rbp-158h]
  _BYTE v119[104]; // [rsp+1B8h] [rbp-150h] BYREF
  void *v120; // [rsp+220h] [rbp-E8h] BYREF
  __int64 v121; // [rsp+228h] [rbp-E0h]
  __int64 v122; // [rsp+230h] [rbp-D8h] BYREF
  _BYTE v123[64]; // [rsp+238h] [rbp-D0h] BYREF
  void *v124[2]; // [rsp+278h] [rbp-90h]
  __int64 v125; // [rsp+288h] [rbp-80h]
  __int64 v126; // [rsp+290h] [rbp-78h]
  __m128i v127; // [rsp+298h] [rbp-70h]
  void *v128; // [rsp+2A8h] [rbp-60h]
  __int64 v129; // [rsp+2B0h] [rbp-58h]
  __int64 v130; // [rsp+2B8h] [rbp-50h]
  __int64 v131; // [rsp+2C0h] [rbp-48h]

  v7 = *(_DWORD *)(a3 + 96);
  v99 = (__int64 *)(a1 + 8);
  if ( ((1LL << v7) & 0xFFFF0FE) != 0 )
  {
    v8 = 0;
    sub_168B9F0((__int64)&v120, v99, *(_DWORD *)(a3 + 104), 0xE05u, 0);
    v115 = *(void ***)(a3 + 104);
    sub_1587DB0((__int64)&v120, (__int64 *)&v115);
    sub_15F7200(&v120);
    return v8;
  }
  v10 = a5;
  if ( a5 )
  {
    v8 = 0;
    sub_168B9F0((__int64)&v120, v99, *(_DWORD *)(*(_QWORD *)a4 + 8LL), 0xE10u, 0);
    sub_15F7200(&v120);
    return v8;
  }
  v11 = *(_QWORD *)(a1 + 232);
  v12 = a1;
  v13 = 2855;
  if ( (*(_BYTE *)(v11 + 1) & 0x40) != 0 )
  {
    v13 = 2831;
    if ( v7 == 11 )
      v13 = (*(_BYTE *)(v11 + 2) & 2) == 0 ? 2868 : 2844;
  }
  sub_168B9F0((__int64)&v120, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 104), v13, 0);
  v115 = *(void ***)(a3 + 104);
  sub_1587DB0((__int64)&v120, (__int64 *)&v115);
  sub_15F7200(&v120);
  v14 = *(unsigned __int8 **)a3;
  v107 = v109;
  v15 = *(_QWORD *)(v12 + 544);
  v115 = &v116[1];
  v120 = &v122;
  v116[0] = (void *)0x800000000LL;
  v108 = 0x800000000LL;
  v121 = 0x800000000LL;
  ptr[0] = v111;
  ptr[1] = (void *)0x800000000LL;
  v16 = *v14;
  v90 = v14;
  v17 = *v14 & 7;
  if ( (v16 & 7) != 0 )
  {
    if ( v17 == 3 )
    {
      v87 = sub_15AC850(3);
      v88 = 0;
      v89 = (__int64)v87;
      if ( v87 )
        v88 = j__strlen(v87);
      sub_111E070((__int64)&v120, v89, v88);
      sub_14C6D60((__int64)ptr, *((_DWORD *)v90 + 42));
      v16 = *v90;
    }
    else
    {
      v18 = sub_15AC850(v17);
      v19 = 0;
      v20 = (__int64)v18;
      if ( v18 )
        v19 = j__strlen(v18);
      sub_111E070((__int64)&v115, v20, v19);
      sub_14C6D60((__int64)&v107, *((_DWORD *)v90 + 42));
      v16 = *v90;
    }
  }
  v21 = (v16 >> 3) & 3;
  if ( v21 )
  {
    v60 = sub_15AC8E0(v21);
    v61 = 0;
    v62 = (__int64)v60;
    if ( v60 )
      v61 = j__strlen(v60);
    sub_111E070((__int64)&v120, v62, v61);
    sub_14C6D60((__int64)ptr, *((_DWORD *)v90 + 43));
  }
  v22 = v90[4];
  if ( ((v22 >> 4) & 3) != 0 )
  {
    v70 = sub_15ACE20((v90[4] >> 4) & 3);
    v71 = (__int64)v70;
    if ( v70 )
      v10 = j__strlen(v70);
    sub_111E070((__int64)&v115, v71, v10);
    sub_14C6D60((__int64)&v107, *((_DWORD *)v90 + 68));
    v22 = v90[4];
  }
  if ( (v90[3] >> 7) | v22 & 1 )
  {
    v68 = j__strlen("inline");
    sub_111E070((__int64)&v115, (__int64)"inline", v68);
    if ( (v90[3] & 0x80u) != 0 )
      v69 = *((_DWORD *)v90 + 60);
    else
      v69 = *((_DWORD *)v90 + 65);
    sub_14C6D60((__int64)&v107, v69);
  }
  if ( LODWORD(v116[0]) )
  {
    sub_168B9F0((__int64)&src, (__int64 *)(v12 + 8), *(_DWORD *)v107, 0xE0Du, 0);
    v104 = (int)v116[0];
    v63 = sub_1587D10((__int64)&src, &v104);
    v64 = j__strlen(" ");
    sub_18402B0((__int64)v105, (__int64)v115, (__int64)&v115[2 * LODWORD(v116[0])], (__int64)" ", v64);
    sub_1682AF0(v63, (__int64)v105);
    if ( v105[0] != v106 )
      operator delete(v105[0]);
    if ( (char *)v107 + 4 * (unsigned int)v108 == v107 )
      goto LABEL_86;
    v97 = a3;
    v65 = (char *)v107 + 4 * (unsigned int)v108;
    v93 = v12;
    v66 = (char *)v107;
    do
    {
      v67 = *(_DWORD *)v66;
      v66 += 4;
      LODWORD(v105[0]) = v67;
      HIDWORD(v105[0]) = v67;
      sub_1587DB0((__int64)&src, (__int64 *)v105);
    }
    while ( v65 != v66 );
    goto LABEL_85;
  }
  v23 = ptr[0];
  if ( !(_DWORD)v121 )
    goto LABEL_16;
  sub_168BB30((__int64)&src, (__int64 *)(v12 + 8), *(_DWORD *)ptr[0], 0xCu, 0);
  v104 = v121;
  v82 = sub_1587D10((__int64)&src, &v104);
  v83 = j__strlen(" ");
  sub_18402B0((__int64)v105, (__int64)v120, (__int64)v120 + 16 * (unsigned int)v121, (__int64)" ", v83);
  sub_1682AF0(v82, (__int64)v105);
  if ( v105[0] != v106 )
    operator delete(v105[0]);
  v84 = (char *)ptr[0] + 4 * LODWORD(ptr[1]);
  if ( ptr[0] != v84 )
  {
    v97 = a3;
    v93 = v12;
    v85 = (char *)ptr[0];
    do
    {
      v86 = *(_DWORD *)v85;
      v85 += 4;
      LODWORD(v105[0]) = v86;
      HIDWORD(v105[0]) = v86;
      sub_1587DB0((__int64)&src, (__int64 *)v105);
    }
    while ( v84 != v85 );
LABEL_85:
    v12 = v93;
    a3 = v97;
  }
LABEL_86:
  sub_15F7200(&src);
  v23 = ptr[0];
LABEL_16:
  if ( (*v90 & 7) == 1 )
  {
    if ( v23 != v111 )
      free(v23);
    if ( v120 != &v122 )
      free(v120);
    if ( v107 != v109 )
      free(v107);
    if ( v115 != &v116[1] )
      free(v115);
    return 0;
  }
  if ( v23 != v111 )
    free(v23);
  if ( v120 != &v122 )
    free(v120);
  if ( v107 != v109 )
    free(v107);
  if ( v115 != &v116[1] )
    free(v115);
  if ( (v90[3] & 0x10) != 0 && *(char *)(*(_QWORD *)(v12 + 232) + 1LL) < 0 )
  {
    sub_168B9F0((__int64)&v120, v99, *((_DWORD *)v90 + 57), 0x1ABEu, 0);
    sub_15F7200(&v120);
  }
  v24 = (void **)sub_1E85170(v12, a3);
  v25 = *(unsigned int *)(a3 + 80);
  v103 = v24;
  v107 = *v24;
  if ( (unsigned __int8)sub_1E535C0(v12, v25, v24, 2) )
    *(_BYTE *)(a3 + 720) |= 1u;
  v26 = *(_BYTE *)(a3 + 720) & 2;
  if ( ((*(_DWORD *)v90 >> 12) & 0x7F) != 0x32 )
  {
    v27 = 3595;
    if ( v26 || (v27 = 3601, !*(_DWORD *)(a3 + 136)) )
    {
LABEL_33:
      sub_168B9F0((__int64)&v120, v99, *(_DWORD *)(a3 + 104), v27, 0);
      sub_1605D30((__int64)&v120, (__int64 *)&v107);
      sub_15F7200(&v120);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)v107
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
        *(_BYTE *)(a3 + 720) |= 1u;
      goto LABEL_35;
    }
LABEL_124:
    v81 = *(_DWORD **)(a3 + 128);
    goto LABEL_125;
  }
  if ( v26 )
  {
    v27 = 3595;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(a3 + 136) > 1u )
    goto LABEL_124;
  if ( *(_DWORD *)(a3 + 136) == 1 )
  {
    v81 = *(_DWORD **)(a3 + 128);
    if ( *v81 != 1 )
    {
LABEL_125:
      v27 = 3601;
      if ( *v81 == 6 )
        v27 = 3595;
      goto LABEL_33;
    }
  }
LABEL_35:
  if ( (v90[3] & 2) != 0 )
  {
    v28 = *((_QWORD *)v90 + 1);
    v29 = *(_DWORD *)(v28 + 40);
    v30 = *(_DWORD *)(v28 + 4);
    LODWORD(src) = v30;
    if ( !v29 )
      v29 = v30;
    HIDWORD(src) = v29;
    sub_168B9F0((__int64)&v120, v99, *(_DWORD *)(v28 + 4), 0xE04u, 0);
    v31 = sub_15884C0((__int64)&v120, (__int64 *)&src);
    *(void **)((char *)v116 + 4) = nullptr;
    BYTE4(v116[1]) = 0;
    v119[0] = 0;
    v117 = v119;
    v118 = 0;
    v119[16] = 0;
    v115 = (void **)src;
    LOBYTE(v116[0]) = 1;
    sub_1589170(v31, &v115);
    if ( v117 != v119 )
      operator delete(v117);
    sub_15F7200(&v120);
  }
  v32 = *(_DWORD *)(a3 + 120);
  v33 = *(_QWORD *)(a3 + 112);
  v113 = 0x800000000LL;
  src = v114;
  v101 = v33 + 112LL * (v32 & 0x7FFFFFFF);
  if ( v101 != v33 )
  {
    v91 = a3;
    while ( 1 )
    {
      v34 = *(void **)v33;
      LODWORD(ptr[1]) = *(_DWORD *)(v33 + 8);
      ptr[0] = v34;
      sub_B85890(v111, (__int64)v34);
      v35 = *(void **)v33;
      v36 = 0;
      si128 = _mm_load_si128((const __m128i *)ptr);
      *(_OWORD *)v124 = 0;
      v100 = (__int64)v35;
      v121 = (__int64)v123;
      v127 = si128;
      v122 = 0x800000000LL;
      v120 = nullptr;
      v128 = (void *)v111[0];
      v125 = 0;
      v126 = v12;
      v129 = 0;
      v130 = 0;
      v131 = 65537;
      sub_1A395A0(&v120);
      v38 = sub_B8EAA0(v15);
      sub_1A49A10(v12, &v120, a2, (*(_BYTE *)(v38 + 8) & 0x7F) == 0, 0);
      if ( (_DWORD)v120 != 2 )
        break;
      v72 = sub_16C47B0(*(_QWORD *)v121 & 0xFFFFFFFFFFFFFFF8LL);
      v73 = *(_BYTE *)(v72 + 28) & 0x7F;
      if ( ((v73 + 61) & 0x7Fu) > 1 && v73 != 47 )
        break;
      sub_1CC2540(v12, *(unsigned int *)(v33 + 8), v72, 0);
      LODWORD(v120) = 0;
      LODWORD(v122) = 0;
      if ( v124[0] )
        sub_1A39780(v124[0]);
      v36 = 0;
      BYTE6(v131) = 0;
      v39 = 0;
      *(_OWORD *)v124 = 0;
      if ( *(_DWORD *)(v33 + 104) )
        goto LABEL_108;
LABEL_45:
      v40 = (__m128i *)sub_B9ACF0(*(_QWORD **)(v12 + 248), v15, *(_DWORD *)(v33 + 8), *(_QWORD *)v33, v39);
      LOWORD(v115) = 1;
      v41 = (unsigned __int64)v40;
      sub_1836B60((__int64 *)v12, (__int64)a2, v40, v33 + 16, &v115, v36, si128);
      if ( !*(_DWORD *)(v91 + 8) || (v42 = *(unsigned int *)(v91 + 12), v45 = 0, !(_DWORD)v42) )
      {
        v45 = 0;
        if ( !*(_QWORD *)(v91 + 16) )
          v45 = sub_17A4530(v12, v41, (__int64)&v120, v42, v43, v44);
      }
      v46 = *(_BYTE *)(v15 + 8) & 0x7F;
      if ( v46 <= 0x12u )
      {
        v47 = 0;
        if ( ((1LL << v46) & 0x40182) == 0 )
          goto LABEL_52;
LABEL_51:
        v47 = (*v90 & 7) == 2;
        goto LABEL_52;
      }
      v47 = 0;
      if ( ((v46 + 94) & 0x7Fu) <= 5 )
        goto LABEL_51;
LABEL_52:
      v96 = v45;
      sub_17A32D0(v12, (int *)&v120, v15, a2, v47, 0);
      if ( (*v90 & 7) != 3 )
      {
        v50 = *(_BYTE *)(v15 + 8) & 0x7F;
        if ( v50 > 0x12u )
        {
          if ( v50 > 0x21u && v50 <= 0x27u )
            goto LABEL_55;
        }
        else if ( ((1LL << v50) & 0x40182) != 0 )
        {
LABEL_55:
          v51 = *(_QWORD *)(v100 + 16);
          if ( *(_DWORD *)v51 == 1 && *(_BYTE *)(v51 + 16) == 95 )
          {
            if ( (_DWORD)v122 )
            {
              v75 = (_QWORD *)(*(_QWORD *)((*(_QWORD *)(v121 + 8LL * (unsigned int)v122 - 8) & 0xFFFFFFFFFFFFFFF8LL) + 16)
                             & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)((*(_QWORD *)(v121 + 8LL * (unsigned int)v122 - 8) & 0xFFFFFFFFFFFFFFF8LL) + 16) & 4) != 0 )
                v75 = (_QWORD *)*v75;
              v94 = sub_B8EAA0((__int64)v75);
              v98 = sub_B8EAA0(v15);
              if ( v98 )
              {
                v95 = sub_B91570(v94, v100, v76, v77, v48, v49);
                if ( v95 == sub_B91570(v98, v100, v98, v78, v79, v80) )
                {
                  if ( sub_17A3270(
                         v12,
                         *(_QWORD *)(v121 + 8LL * (unsigned int)v122 - 8) & 0xFFFFFFFFFFFFFFF8LL,
                         *(_QWORD *)(v12 + 544),
                         a2,
                         0) )
                  {
                    LODWORD(v120) = 0;
                    LODWORD(v122) = 0;
                    if ( v124[0] )
                      sub_1A39780(v124[0]);
                    BYTE6(v131) = 0;
                    *(_OWORD *)v124 = 0;
                    sub_183B540(v12, *(_DWORD *)(v33 + 8));
                  }
                }
              }
              goto LABEL_58;
            }
LABEL_96:
            if ( v96 && (*(_BYTE *)(v91 + 720) & 0x10) == 0 )
              sub_17DD7F0(v12, v41, v96, (__int64)&v120);
            goto LABEL_58;
          }
        }
        if ( !(_DWORD)v122 )
          goto LABEL_96;
        goto LABEL_57;
      }
      if ( !(_DWORD)v122 )
        goto LABEL_96;
LABEL_57:
      v92 = *(_QWORD *)v121 & 0xFFFFFFFFFFFFFFF8LL;
      sub_168B9F0((__int64)&v115, v99, *(_DWORD *)(v33 + 8), 0x1326u, 0);
      sub_169D880((__int64)&v115, (__int64 *)v33);
      sub_15F7200(&v115);
      sub_168B9F0((__int64)&v115, v99, *(_DWORD *)(v92 + 24), 0x71u, 0);
      sub_15F7200(&v115);
LABEL_58:
      sub_17B7670(v12, v41, (__int64)a2, 1, v48, v49);
      v52 = (unsigned int)v113;
      v53 = (unsigned int)v113 + 1LL;
      if ( v53 > HIDWORD(v113) )
      {
        sub_2237220(&src, v114, v53, 8);
        v52 = (unsigned int)v113;
      }
      *((_QWORD *)src + v52) = v41;
      LODWORD(v113) = v113 + 1;
      v54 = sub_1703870(v12 + 3040, v41);
      if ( *(_BYTE *)(v12 + 3060) )
        v55 = *(_QWORD *)(v12 + 3040) + 8LL * *(unsigned int *)(v12 + 3052);
      else
        v55 = *(_QWORD *)(v12 + 3040) + 8LL * *(unsigned int *)(v12 + 3048);
      if ( v54 != (_QWORD *)v55 && (unsigned __int64)(*v54 + 2LL) <= 1 )
      {
        do
          ++v54;
        while ( (_QWORD *)v55 != v54 && *v54 >= 0xFFFFFFFFFFFFFFFELL );
      }
      v33 += 112;
      sub_169D230((__int64)&v120);
      if ( v101 == v33 )
      {
        a3 = v91;
        goto LABEL_69;
      }
    }
    v39 = 0;
    if ( !*(_DWORD *)(v33 + 104) )
      goto LABEL_45;
LABEL_108:
    v74 = sub_B8C1B0(v15);
    if ( !(unsigned __int8)sub_B8E340(v74) )
    {
      sub_168B9F0((__int64)&v115, v99, *(_DWORD *)(v33 + 104), 0x12AEu, 0);
      sub_15F7200(&v115);
    }
    v39 = sub_A781D0(*(_QWORD *)(v12 + 248), *(_QWORD *)(*(_QWORD *)(v12 + 248) + 19072LL), 0);
    goto LABEL_45;
  }
LABEL_69:
  v56 = *(_DWORD *)(a3 + 104);
  v115 = nullptr;
  LODWORD(v116[0]) = v56;
  sub_B85890(&v116[1], 0);
  v121 = (__int64)v123;
  v57 = _mm_load_si128((const __m128i *)&v115);
  v122 = 0x800000000LL;
  v120 = nullptr;
  v128 = v116[1];
  *(_OWORD *)v124 = 0;
  v125 = 0;
  v126 = v12;
  v127 = v57;
  v129 = 0;
  v130 = 0;
  v131 = 65537;
  sub_1A395A0(&v120);
  LOBYTE(ptr[0]) = 1;
  v58 = sub_17E5540(
          (__int64 *)v12,
          (__int64)a2,
          a3,
          v15,
          v103,
          (__int64)&v120,
          (__m128)0LL,
          nullptr,
          0,
          ptr,
          (__int64 *)src,
          (unsigned int)v113);
  v8 = (__int64)v58;
  if ( LOBYTE(ptr[0]) )
  {
    sub_17A1F20((__int64)a2, (__int64)v58);
    sub_B8EA00(*(__m128i **)(v12 + 544), v8);
  }
  v59 = *(_QWORD *)(v12 + 760);
  if ( *(_DWORD *)(v59 + 24) )
    sub_1B21670(v59, 0, v8, 0);
  sub_169D230((__int64)&v120);
  if ( src != v114 )
    free(src);
  return v8;
}
