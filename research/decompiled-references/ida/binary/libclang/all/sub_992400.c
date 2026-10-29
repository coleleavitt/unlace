_BOOL8 __fastcall sub_992400(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rsi
  unsigned int v14; // r14d
  int v15; // eax
  unsigned int v16; // r15d
  _QWORD *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdi
  void *v22; // rax
  void *v23; // rcx
  void *v24; // rdi
  char *v25; // rax
  char *v26; // rdx
  char *v27; // rdi
  char v28; // si
  char v29; // cl
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbp
  void *v34; // rax
  void *v35; // rcx
  void *v36; // rdi
  unsigned __int64 v37; // rdx
  char *v38; // rax
  char *v39; // rdx
  char *v40; // rcx
  char v41; // di
  char v42; // si
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // r12
  void *v45; // rdi
  __int64 v46; // rax
  unsigned __int8 v47; // dl
  unsigned __int8 v48; // si
  unsigned __int8 **v50; // rbx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int8 v53; // al
  unsigned __int8 v54; // cl
  __int64 v55; // r14
  unsigned __int8 **v56; // rax
  __int64 *v57; // rbp
  __int64 v58; // rax
  __int64 v59; // rbx
  void *v60; // r13
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rcx
  unsigned int v65; // eax
  unsigned __int64 v66; // r9
  __int64 v67; // r15
  unsigned __int64 v68; // r12
  unsigned int v69; // eax
  void *v70; // rcx
  int v71; // eax
  __int64 v72; // rax
  bool v73; // cc
  unsigned int v74; // eax
  unsigned int v75; // ecx
  int v76; // eax
  unsigned __int16 v77; // ax
  unsigned __int16 v78; // cx
  __int16 v79; // ax
  unsigned int v80; // eax
  void *v81; // rcx
  int v82; // eax
  char v83; // al
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // r12
  __int64 v88; // r15
  __int64 v89; // r12
  void *v90; // rdi
  bool v91; // [rsp+7h] [rbp-201h]
  _QWORD *v94; // [rsp+28h] [rbp-1E0h]
  _QWORD *v95; // [rsp+28h] [rbp-1E0h]
  unsigned __int64 v96; // [rsp+38h] [rbp-1D0h]
  unsigned int v97; // [rsp+38h] [rbp-1D0h]
  unsigned __int64 v98; // [rsp+48h] [rbp-1C0h]
  unsigned __int64 v99; // [rsp+50h] [rbp-1B8h]
  int v100; // [rsp+58h] [rbp-1B0h]
  int v101; // [rsp+58h] [rbp-1B0h]
  void *v102; // [rsp+70h] [rbp-198h] BYREF
  unsigned int v103; // [rsp+78h] [rbp-190h]
  void *v104; // [rsp+80h] [rbp-188h] BYREF
  unsigned int v105; // [rsp+88h] [rbp-180h]
  void *v106; // [rsp+90h] [rbp-178h] BYREF
  unsigned int v107; // [rsp+98h] [rbp-170h]
  void *v108; // [rsp+A0h] [rbp-168h] BYREF
  unsigned int v109; // [rsp+A8h] [rbp-160h]
  _BYTE v110[24]; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v111; // [rsp+C8h] [rbp-140h]
  int v112; // [rsp+E0h] [rbp-128h]
  _BYTE v113[24]; // [rsp+F0h] [rbp-118h] BYREF
  __int64 v114; // [rsp+108h] [rbp-100h]
  int v115; // [rsp+120h] [rbp-E8h]
  unsigned __int64 v116; // [rsp+130h] [rbp-D8h] BYREF
  void *v117; // [rsp+138h] [rbp-D0h]
  void *v118; // [rsp+140h] [rbp-C8h]
  __int64 v119; // [rsp+148h] [rbp-C0h]
  _BYTE v120[48]; // [rsp+150h] [rbp-B8h] BYREF
  void *v121; // [rsp+180h] [rbp-88h] BYREF
  void *v122; // [rsp+188h] [rbp-80h]
  void *ptr[2]; // [rsp+190h] [rbp-78h] BYREF
  _BYTE v124[104]; // [rsp+1A0h] [rbp-68h] BYREF

  v9 = sub_98F360(a3, **(_DWORD **)(*(_QWORD *)(a3 + 32) + 448LL));
  sub_A1BFE0(v113, v9);
  v10 = sub_98F360(a3, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 448LL) + 4LL));
  sub_A1BFE0(v110, v10);
  v11 = *(_QWORD *)(*(unsigned __int8 *)(a5 + 3) + a5 + 8LL * ((*(_BYTE *)(a5 + 2) & 8) != 0) + 8 + 16);
  if ( (*(_BYTE *)(v11 + 1) & 6) != 0 )
    v12 = ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 < 2)
        + 13;
  else
    v12 = sub_8CA760(*(__int64 **)(a1 + 192), *(_QWORD *)(v11 + 8));
  v13 = *(_QWORD *)(a1 + 184);
  sub_97E960((__int64)&v106, v13, v12, 0);
  if ( a4 == 179 || a4 == 911 || a4 == 1441 )
  {
    v13 = a2;
    sub_9908C0(a1, a2, a4);
    v14 = v107;
    if ( v107 > 0x40 )
    {
LABEL_6:
      v15 = sub_2587400(&v106);
      v91 = v14 == v15;
      if ( v14 != v15 )
        goto LABEL_7;
LABEL_59:
      sub_97E900(a1, 0, *(_QWORD *)(a5 + 8));
      goto LABEL_53;
    }
  }
  else
  {
    v14 = v107;
    if ( v107 > 0x40 )
      goto LABEL_6;
  }
  v91 = v106 == nullptr;
  if ( !v106 )
    goto LABEL_59;
LABEL_7:
  v16 = a4 - 1440;
  v17 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  if ( a4 - 1440 > 1 )
  {
    if ( (v94 = (_QWORD *)(sub_8E8FB0((__int64)v113) & 0xFFFFFFFFFFFFFFF0LL), !(unsigned __int8)sub_B07E10(*v94, v13))
      && !(unsigned __int8)sub_B07E90(*v94)
      || (v95 = (_QWORD *)(sub_8E8FB0((__int64)v110) & 0xFFFFFFFFFFFFFFF0LL), !(unsigned __int8)sub_B07E10(*v95, v13))
      && !(unsigned __int8)sub_B07E90(*v95) )
    {
      v116 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v50 = (unsigned __int8 **)sub_A2E0C0(a1, &v116, 2232, 0);
      sub_C64680(&v121, v17[2170], a4);
      if ( v50 )
      {
        sub_838D50(v50, v121, (size_t)v122);
        v51 = sub_8E8FB0((__int64)v113);
        sub_8356A0(v50, v51, 8u);
        v52 = sub_8E8FB0((__int64)v110);
        sub_8356A0(v50, v52, 8u);
      }
      else
      {
        sub_8E8FB0((__int64)v113);
        sub_8E8FB0((__int64)v110);
      }
      if ( v121 != ptr )
        operator delete(v121, (unsigned __int64)ptr[0] + 1);
      goto LABEL_53;
    }
  }
  if ( !v115 && v114 && *(_BYTE *)(*(_QWORD *)(v114 + 32) + 52LL)
    || !v112 && v111 && *(_BYTE *)(*(_QWORD *)(v111 + 32) + 52LL) )
  {
    goto LABEL_53;
  }
  v18 = sub_8E5480((__int64)v113);
  v19 = sub_BEDF70(v18);
  v20 = sub_6F6DE0((__int64)v17, *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL));
  v117 = nullptr;
  v116 = v20;
  v118 = v120;
  v21 = (unsigned int)(v20 >> 3);
  v119 = 0x300000000LL;
  v22 = (void *)operator new[](v21);
  v23 = v22;
  if ( (_DWORD)v21 )
    v23 = memset(v22, 0, (unsigned int)v21);
  v24 = v117;
  v117 = v23;
  if ( v24 )
    operator delete[](v24);
  sub_99D4B0(*(_QWORD *)(a1 + 192), v113, &v116, 0);
  if ( *(_BYTE *)(v17[2161] + 272LL) )
  {
    v25 = (char *)v117;
    if ( v116 >> 4 )
    {
      v26 = (char *)v117 + (v116 >> 3) - 1;
      v27 = (char *)v117 + (v116 >> 4);
      do
      {
        v28 = *v26;
        v29 = *v25++;
        --v26;
        *(v25 - 1) = v28;
        v26[1] = v29;
      }
      while ( v25 != v27 );
    }
  }
  v30 = sub_8E5480((__int64)v110);
  v31 = sub_BEDF70(v30);
  v32 = sub_6F6DE0((__int64)v17, *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL));
  ptr[1] = (void *)0x300000000LL;
  v121 = (void *)v32;
  v33 = (unsigned int)(v32 >> 3);
  ptr[0] = v124;
  v122 = nullptr;
  v34 = (void *)operator new[](v33);
  v35 = v34;
  if ( v33 )
    v35 = memset(v34, 0, v33);
  v36 = v122;
  v122 = v35;
  if ( v36 )
    operator delete[](v36);
  sub_99D4B0(*(_QWORD *)(a1 + 192), v110, &v121, 0);
  v37 = (unsigned __int64)v121 >> 3;
  if ( *(_BYTE *)(v17[2161] + 272LL) )
  {
    v38 = (char *)v122;
    if ( (unsigned __int64)v121 >> 4 )
    {
      v39 = (char *)v122 + v37 - 1;
      v40 = (char *)v122 + ((unsigned __int64)v121 >> 4);
      do
      {
        v41 = *v39;
        v42 = *v38++;
        --v39;
        *(v38 - 1) = v41;
        v39[1] = v42;
      }
      while ( v38 != v40 );
      v37 = (unsigned __int64)v121 >> 3;
    }
  }
  v43 = v116 >> 3;
  if ( v116 >> 3 > v37 )
    v43 = v37;
  if ( v16 > 1 )
  {
    v44 = (unsigned __int64)v106;
    if ( v14 <= 0x40 )
    {
      v45 = v106;
      if ( v43 <= (unsigned __int64)v106 )
        v45 = (void *)v43;
      if ( !v45 )
        goto LABEL_72;
    }
    else
    {
      v44 = *(_QWORD *)v106;
      v45 = (void *)v43;
      if ( *(_QWORD *)v106 <= v43 )
        v45 = *(void **)v106;
      if ( !v45 )
        goto LABEL_72;
    }
    v46 = 0;
    while ( 1 )
    {
      v47 = *((_BYTE *)v117 + v46);
      v48 = *((_BYTE *)v122 + v46);
      if ( v47 < v48 )
        goto LABEL_42;
      if ( v48 < v47 )
        goto LABEL_81;
      if ( v45 == (void *)++v46 )
        goto LABEL_72;
    }
  }
  v96 = v43;
  v65 = sub_70E2F0((__int64)v17, v17[2312]);
  v43 = v96;
  if ( v14 <= 0x40 )
    v44 = v65 * (_QWORD)v106;
  else
    v44 = v65 * *(_QWORD *)v106;
  v66 = v44;
  if ( v96 <= v44 )
    v66 = v96;
  if ( !v66 )
    goto LABEL_72;
  v99 = v96;
  v97 = v14;
  v55 = 0;
  v67 = v65;
  v98 = v44;
  v68 = v66;
  while ( 2 )
  {
    v108 = (void *)sub_8CA760(*(__int64 **)(a1 + 192), v17[2312]);
    switch ( (int)v108 )
    {
      case 0:
        v83 = *((_BYTE *)v122 + v55);
        if ( *((char *)v117 + v55) < v83 )
          goto LABEL_116;
        if ( *((char *)v117 + v55) <= v83 )
          goto LABEL_70;
        goto LABEL_80;
      case 1:
      case 10:
        v53 = *((_BYTE *)v117 + v55);
        v54 = *((_BYTE *)v122 + v55);
        if ( v53 < v54 )
          goto LABEL_116;
        if ( v54 >= v53 )
          goto LABEL_70;
        goto LABEL_80;
      case 2:
        v79 = *(_WORD *)((char *)v122 + v55);
        if ( *(__int16 *)((char *)v117 + v55) < v79 )
          goto LABEL_116;
        if ( *(__int16 *)((char *)v117 + v55) > v79 )
          goto LABEL_80;
        goto LABEL_70;
      case 3:
        v77 = *(_WORD *)((char *)v117 + v55);
        v78 = *(_WORD *)((char *)v122 + v55);
        if ( v77 < v78 )
          goto LABEL_116;
        if ( v78 < v77 )
          goto LABEL_80;
        goto LABEL_70;
      case 4:
        v76 = *(_DWORD *)((char *)v122 + v55);
        v73 = *(_DWORD *)((char *)v117 + v55) <= v76;
        if ( *(_DWORD *)((char *)v117 + v55) < v76 )
          goto LABEL_116;
        goto LABEL_110;
      case 5:
        v74 = *(_DWORD *)((char *)v117 + v55);
        v75 = *(_DWORD *)((char *)v122 + v55);
        if ( v74 < v75 )
          goto LABEL_116;
        if ( v75 < v74 )
          goto LABEL_80;
        goto LABEL_70;
      case 6:
        v72 = *(_QWORD *)((char *)v122 + v55);
        v73 = *(_QWORD *)((char *)v117 + v55) <= v72;
        if ( *(_QWORD *)((char *)v117 + v55) < v72 )
          goto LABEL_116;
LABEL_110:
        if ( !v73 )
          goto LABEL_80;
        goto LABEL_70;
      case 7:
        v63 = *(_QWORD *)((char *)v117 + v55);
        v64 = *(_QWORD *)((char *)v122 + v55);
        if ( v63 < v64 )
        {
LABEL_116:
          v14 = v97;
LABEL_42:
          sub_97E900(a1, 0xFFFFFFFF, *(_QWORD *)(a5 + 8));
          goto LABEL_43;
        }
        if ( v64 < v63 )
        {
LABEL_80:
          v14 = v97;
LABEL_81:
          sub_97E900(a1, 1u, *(_QWORD *)(a5 + 8));
          goto LABEL_43;
        }
        goto LABEL_70;
      case 8:
        v103 = *(_DWORD *)((char *)v117 + v55 + 8);
        if ( v103 > 0x40 )
          sub_2585B30(&v102);
        else
          v102 = *(void **)((char *)v117 + v55);
        v69 = *(_DWORD *)((char *)v122 + v55 + 8);
        v105 = v69;
        if ( v69 <= 0x40 )
        {
          v70 = *(void **)((char *)v122 + v55);
          v109 = v69;
          v104 = v70;
LABEL_100:
          v108 = v70;
          v71 = sub_2586820(&v102, &v108);
          goto LABEL_101;
        }
        sub_2585B30(&v104);
        v109 = v105;
        if ( v105 <= 0x40 )
        {
          v70 = v104;
          goto LABEL_100;
        }
        sub_2585B30(&v108);
        v71 = sub_2586820(&v102, &v108);
        if ( v109 > 0x40 && v108 )
        {
          v101 = v71;
          operator delete[](v108);
          v71 = v101;
        }
LABEL_101:
        if ( v71 < 0 )
          goto LABEL_160;
        if ( (int)sub_2586820(&v102, &v104) > 0 )
          goto LABEL_130;
        goto LABEL_103;
      case 9:
        v103 = *(_DWORD *)((char *)v117 + v55 + 8);
        if ( v103 > 0x40 )
          sub_2585B30(&v102);
        else
          v102 = *(void **)((char *)v117 + v55);
        v80 = *(_DWORD *)((char *)v122 + v55 + 8);
        v105 = v80;
        if ( v80 <= 0x40 )
        {
          v81 = *(void **)((char *)v122 + v55);
          v109 = v80;
          v104 = v81;
LABEL_127:
          v108 = v81;
          v82 = sub_2586820(&v102, &v108);
          goto LABEL_128;
        }
        sub_2585B30(&v104);
        v109 = v105;
        if ( v105 <= 0x40 )
        {
          v81 = v104;
          goto LABEL_127;
        }
        sub_2585B30(&v108);
        v82 = sub_2586820(&v102, &v108);
        if ( v109 > 0x40 && v108 )
        {
          v100 = v82;
          operator delete[](v108);
          v82 = v100;
        }
LABEL_128:
        if ( v82 < 0 )
        {
LABEL_160:
          v14 = v97;
          sub_97E900(a1, 0xFFFFFFFF, *(_QWORD *)(a5 + 8));
          goto LABEL_131;
        }
        if ( (int)sub_25867A0(&v102, &v104) <= 0 )
        {
LABEL_103:
          if ( v105 > 0x40 && v104 )
            operator delete[](v104);
          if ( v103 > 0x40 && v102 )
            operator delete[](v102);
LABEL_70:
          v55 += v67;
          if ( v55 == v68 )
          {
            v14 = v97;
            v44 = v98;
            v43 = v99;
LABEL_72:
            if ( v43 >= v44 )
            {
              sub_97E900(a1, 0, *(_QWORD *)(a5 + 8));
              goto LABEL_43;
            }
            v104 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
            v56 = (unsigned __int8 **)sub_A2E0C0(a1, &v104, 2169, 0);
            v57 = (__int64 *)v56;
            if ( v56 )
            {
              sub_8356A0(v56, 0, 2u);
              v58 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
              v59 = *v57;
              v60 = (void *)v58;
              if ( !*v57 )
              {
                v84 = v57[1];
                v85 = *(_DWORD *)(v84 + 14976);
                if ( v85 )
                {
                  v86 = (unsigned int)(v85 - 1);
                  *(_DWORD *)(v84 + 14976) = v86;
                  v59 = *(_QWORD *)(v84 + 8 * v86 + 14848);
                  v87 = *(unsigned int *)(v59 + 536);
                  *(_BYTE *)v59 = 0;
                  v88 = *(_QWORD *)(v59 + 528);
                  *(_DWORD *)(v59 + 424) = 0;
                  v89 = v88 + (v87 << 6);
                  while ( v88 != v89 )
                  {
                    while ( 1 )
                    {
                      v89 -= 64;
                      v90 = *(void **)(v89 + 24);
                      if ( v90 == (void *)(v89 + 40) )
                        break;
                      operator delete(v90, *(_QWORD *)(v89 + 40) + 1LL);
                      if ( v88 == v89 )
                        goto LABEL_158;
                    }
                  }
LABEL_158:
                  *(_DWORD *)(v59 + 536) = 0;
                }
                else
                {
                  v59 = operator new(0x3A0u);
                  *(_BYTE *)v59 = 0;
                  *(_QWORD *)(v59 + 96) = v59 + 112;
                  *(_QWORD *)(v59 + 128) = v59 + 144;
                  *(_QWORD *)(v59 + 160) = v59 + 176;
                  *(_QWORD *)(v59 + 192) = v59 + 208;
                  *(_QWORD *)(v59 + 224) = v59 + 240;
                  *(_QWORD *)(v59 + 256) = v59 + 272;
                  *(_QWORD *)(v59 + 288) = v59 + 304;
                  *(_QWORD *)(v59 + 320) = v59 + 336;
                  *(_QWORD *)(v59 + 352) = v59 + 368;
                  *(_QWORD *)(v59 + 384) = v59 + 400;
                  *(_QWORD *)(v59 + 104) = 0;
                  *(_BYTE *)(v59 + 112) = 0;
                  *(_QWORD *)(v59 + 136) = 0;
                  *(_BYTE *)(v59 + 144) = 0;
                  *(_QWORD *)(v59 + 168) = 0;
                  *(_BYTE *)(v59 + 176) = 0;
                  *(_QWORD *)(v59 + 200) = 0;
                  *(_BYTE *)(v59 + 208) = 0;
                  *(_QWORD *)(v59 + 232) = 0;
                  *(_BYTE *)(v59 + 240) = 0;
                  *(_QWORD *)(v59 + 264) = 0;
                  *(_BYTE *)(v59 + 272) = 0;
                  *(_QWORD *)(v59 + 296) = 0;
                  *(_BYTE *)(v59 + 304) = 0;
                  *(_QWORD *)(v59 + 328) = 0;
                  *(_BYTE *)(v59 + 336) = 0;
                  *(_QWORD *)(v59 + 360) = 0;
                  *(_BYTE *)(v59 + 368) = 0;
                  *(_QWORD *)(v59 + 392) = 0;
                  *(_BYTE *)(v59 + 400) = 0;
                  *(_QWORD *)(v59 + 416) = v59 + 432;
                  *(_QWORD *)(v59 + 424) = 0x800000000LL;
                  *(_QWORD *)(v59 + 528) = v59 + 544;
                  *(_QWORD *)(v59 + 536) = 0x600000000LL;
                }
                *v57 = v59;
              }
              v108 = v60;
              LOBYTE(v109) = 1;
              v61 = *(unsigned int *)(v59 + 424);
              if ( *(unsigned int *)(v59 + 428) < (unsigned __int64)(v61 + 1) )
              {
                sub_25D6060(v59 + 416, v59 + 432, v61 + 1, 12);
                v61 = *(unsigned int *)(v59 + 424);
              }
              v62 = *(_QWORD *)(v59 + 416) + 12 * v61;
              *(_QWORD *)v62 = v108;
              *(_DWORD *)(v62 + 8) = v109;
              ++*(_DWORD *)(v59 + 424);
            }
            else
            {
              sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
            }
            goto LABEL_44;
          }
          continue;
        }
LABEL_130:
        v14 = v97;
        sub_97E900(a1, 1u, *(_QWORD *)(a5 + 8));
LABEL_131:
        if ( v105 > 0x40 && v104 )
          operator delete[](v104);
        if ( v103 > 0x40 && v102 )
          operator delete[](v102);
LABEL_43:
        v91 = 1;
LABEL_44:
        if ( ptr[0] != v124 )
          free(ptr[0]);
        if ( v122 )
          operator delete[](v122);
        v122 = nullptr;
        if ( v118 != v120 )
          free(v118);
        if ( v117 )
          operator delete[](v117);
        v117 = nullptr;
LABEL_53:
        if ( v14 > 0x40 && v106 )
          operator delete[](v106);
        sub_A1C0C0(v110);
        sub_A1C0C0(v113);
        return v91;
    }
  }
}

