void __fastcall sub_1A445B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edx
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // r13
  _QWORD *v10; // r15
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  unsigned __int64 *v13; // rax
  __int64 *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r15
  int v18; // edi
  _QWORD *v19; // r14
  _QWORD *v20; // r15
  _QWORD *v21; // rbp
  unsigned __int64 v22; // r14
  char *v23; // rdx
  __int64 v24; // rsi
  unsigned __int64 *v25; // rcx
  char *v26; // rax
  char *v27; // rcx
  char *v28; // rax
  char *v29; // rdx
  _QWORD *v30; // r14
  unsigned __int64 v31; // rdx
  _QWORD *v32; // r8
  char v33; // bl
  _QWORD *j; // r14
  unsigned __int64 v35; // rsi
  _QWORD *v36; // rax
  char *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r14
  _QWORD *v40; // r15
  _QWORD *v41; // r14
  __int64 *v42; // rcx
  __int64 v43; // rax
  char v44; // dl
  __int64 v45; // r12
  unsigned int v46; // edx
  int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rsi
  _QWORD **v50; // rbx
  _QWORD **v51; // rbp
  __int64 *v52; // rbp
  __int64 v53; // rax
  __int64 v54; // r15
  __int64 i; // rbp
  __int64 v56; // rax
  _QWORD **v57; // rbp
  _QWORD **v58; // r12
  __int64 v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // r14
  _QWORD *v62; // rbp
  unsigned __int64 v63; // r13
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  void *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r15
  void *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rsi
  unsigned __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rax
  _QWORD *v89; // rax
  int v90; // eax
  __int64 v91; // r13
  void *v92; // rdi
  _QWORD *v93; // rbx
  _QWORD *v94; // r14
  _QWORD *v95; // rdi
  _QWORD *v96; // r12
  int v97; // ebx
  char *v98; // rdi
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // r12
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  void *v110; // rax
  _QWORD *v111; // rax
  unsigned int v113; // [rsp+8h] [rbp-180h]
  __int64 v114; // [rsp+8h] [rbp-180h]
  __int64 v115; // [rsp+10h] [rbp-178h]
  unsigned __int64 v116; // [rsp+10h] [rbp-178h]
  __int64 v117; // [rsp+10h] [rbp-178h]
  unsigned __int64 v118; // [rsp+10h] [rbp-178h]
  __int64 v119; // [rsp+10h] [rbp-178h]
  __int64 *v120; // [rsp+18h] [rbp-170h]
  __int64 v121; // [rsp+38h] [rbp-150h]
  __int64 v122; // [rsp+40h] [rbp-148h] BYREF
  __int64 v123; // [rsp+48h] [rbp-140h] BYREF
  __int64 v124; // [rsp+50h] [rbp-138h] BYREF
  __int64 v125; // [rsp+58h] [rbp-130h] BYREF
  void *ptr; // [rsp+60h] [rbp-128h] BYREF
  signed __int64 v127; // [rsp+68h] [rbp-120h] BYREF
  void *v128; // [rsp+70h] [rbp-118h] BYREF
  _QWORD v129[9]; // [rsp+78h] [rbp-110h] BYREF
  _QWORD v130[2]; // [rsp+C0h] [rbp-C8h] BYREF
  _QWORD *v131; // [rsp+D0h] [rbp-B8h]
  unsigned __int8 *v132[11]; // [rsp+E0h] [rbp-A8h] BYREF
  char v133; // [rsp+138h] [rbp-50h]
  unsigned int v134; // [rsp+140h] [rbp-48h]
  char v135; // [rsp+144h] [rbp-44h]

  v5 = *(_DWORD *)(a2 + 128);
  v122 = *(_QWORD *)(a2 + 120);
  v125 = *(_QWORD *)(a2 + 144);
  v6 = a2;
  switch ( *(_DWORD *)(a2 + 4) )
  {
    case 0:
      v120 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v130, (__int64 *)(a1 + 8), v5, 0xBAFu, 0);
      v38 = sub_17B3DD0((__int64)v130, &v122);
      sub_15884C0(v38, &v125);
      sub_15F7200(v130);
      v39 = *(_QWORD *)(a2 + 88);
      LODWORD(v127) = 0;
      v128 = nullptr;
      v40 = *(_QWORD **)(v39 + 8);
      v41 = (_QWORD *)(v39 + 8);
      v129[0] = &v127;
      v129[1] = &v127;
      v129[2] = 0;
      if ( v41 != v40 )
      {
        do
        {
          v42 = (__int64 *)(v40[17] & 0xFFFFFFFFFFFFFFF8LL);
          v43 = (__int64)v42;
          if ( (v40[17] & 4) != 0 )
          {
            v43 = 0;
            if ( v42 )
              v43 = *v42;
          }
          v123 = v43;
          if ( (*(_WORD *)(v43 + 30) & 0x3FFF & *(_DWORD *)(v6 + 156)) != 0 )
          {
            sub_1A3A830(&ptr, (unsigned __int64 *)&v123);
            if ( v44 )
            {
              v115 = v123;
              v45 = sub_16C47B0(v123);
              v46 = *(_DWORD *)(v115 + 24);
              v47 = *(_BYTE *)(v45 + 28) & 0x7F;
              if ( (unsigned int)(v47 - 64) > 2 )
              {
                if ( (unsigned int)(v47 - 58) > 9 )
                {
                  sub_168B9F0((__int64)v130, v120, v46, 0x1689u, 0);
                }
                else
                {
                  sub_168B9F0((__int64)v130, v120, v46, 0x168Au, 0);
                  v81 = *(_QWORD *)(v45 + 48);
                  if ( v81 )
                    v82 = v81 & 0xFFFFFFFFFFFFFFF0LL;
                  else
                    v82 = sub_A7AA70(*(_QWORD *)(a1 + 248), v45, v77, v78, v79, v80);
                  if ( v133 )
                  {
                    sub_AE9DF0(v132, v82, 8u);
                  }
                  else if ( v135 )
                  {
                    v118 = v82;
                    v83 = sub_168B9E0(v130);
                    v86 = v118;
                    v87 = v83;
                    v88 = (__int64)v131;
                    if ( v131 )
                    {
                      v121 = v87;
                      v88 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, unsigned __int64))(*v131 + 32LL))(
                              v131,
                              *v131,
                              v87,
                              v118);
                      v87 = v121;
                      v86 = v118;
                    }
                    v119 = v86;
                    v124 = v88;
                    v89 = sub_1587BC0(v87, &v124, v87, v86, v84, v85);
                    sub_AE9DF0((unsigned __int8 **)(*v89 + 32LL * v134 + 8), v119, 8u);
                  }
                }
              }
              else
              {
                sub_168B9F0((__int64)v130, v120, v46, 0x168Au, 0);
                v48 = *(_QWORD *)(v45 + 80);
                if ( (v48 & 4) != 0 )
                  v49 = *(_QWORD *)((v48 & 0xFFFFFFFFFFFFFFF8LL) + 8);
                else
                  v49 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF8LL);
                v124 = v49;
                if ( v133 )
                {
                  sub_AE9DF0(v132, v49, 8u);
                }
                else if ( v135 )
                {
                  sub_1A41500((__int64)v130, &v124);
                }
              }
              sub_15F7200(v130);
            }
          }
          v40 = (_QWORD *)*v40;
        }
        while ( v41 != v40 );
        v50 = (_QWORD **)v128;
        if ( v128 )
        {
          do
          {
            sub_13BE820((__int64)&ptr, v50[3]);
            v51 = (_QWORD **)v50[2];
            operator delete(v50);
            v50 = v51;
          }
          while ( v51 );
        }
      }
      return;
    case 1:
      v52 = *(__int64 **)(a2 + 88);
      v113 = v5;
      v116 = sub_1A386B0(
               *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v52[1] + 16) + 24LL * *(unsigned int *)(v52[1] + 24) - 24) + 16LL),
               a2,
               *(_QWORD *)(v52[1] + 16),
               v52[1],
               a5);
      sub_168B9F0((__int64)v130, (__int64 *)(a1 + 8), v113, 0xBB0u, 0);
      v53 = sub_17B3DD0((__int64)v130, &v122);
      v54 = v53;
      if ( *(_BYTE *)(v53 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v53 + 32), v116, 8u);
      }
      else if ( *(_BYTE *)(v53 + 132) )
      {
        v106 = sub_168B9E0((_QWORD *)v53);
        v110 = *(void **)(v54 + 16);
        if ( v110 )
        {
          v114 = v106;
          v110 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v110 + 32LL))(v110);
          v106 = v114;
        }
        ptr = v110;
        v111 = sub_1587BC0(v106, (__int64 *)&ptr, v106, v107, v108, v109);
        sub_AE9DF0((unsigned __int8 **)(*v111 + 32LL * *(unsigned int *)(v54 + 128) + 8), v116, 8u);
      }
      sub_1841240((__int64)&ptr, a1, v52);
      if ( *(_BYTE *)(v54 + 120) )
      {
        sub_AEC220((unsigned __int8 **)(v54 + 32), ptr, v127);
      }
      else if ( *(_BYTE *)(v54 + 132) )
      {
        v103 = sub_168B9E0((_QWORD *)v54);
        v104 = *(_QWORD *)(v54 + 16);
        if ( v104 )
          v104 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v104 + 32LL))(*(_QWORD *)(v54 + 16));
        v124 = v104;
        v105 = sub_1587BC0(v103, &v124, v99, v100, v101, v102);
        sub_AEC220((unsigned __int8 **)(*v105 + 32LL * *(unsigned int *)(v54 + 128) + 8), ptr, v127);
      }
      sub_15884C0(v54, &v125);
      if ( ptr != &v128 )
        operator delete(ptr);
      sub_15F7200(v130);
      for ( i = *(_QWORD *)(v52[1] + 136); ; i = (__int64)v57[1] )
      {
        while ( 1 )
        {
          v56 = i;
          v57 = (_QWORD **)(i & 0xFFFFFFFFFFFFFFF8LL);
          v58 = v57;
          if ( ((v56 >> 2) & 1) != 0 )
            break;
          if ( (*((_BYTE *)v57 + 28) & 0x7Fu) - 35 > 3 || !sub_B979F0(v57) )
            goto LABEL_2;
          i = 0;
        }
        if ( !v57 )
          goto LABEL_2;
        if ( (*((_BYTE *)*v57 + 28) & 0x7Fu) - 35 > 3 || !sub_B979F0(*v57) )
          break;
      }
      v58 = (_QWORD **)*v57;
LABEL_2:
      sub_168B9F0((__int64)v130, (__int64 *)(a1 + 8), *((_DWORD *)v58 + 6), 0x1689u, 0);
      sub_15F7200(v130);
      return;
    case 2:
      sub_168B9F0((__int64)v130, (__int64 *)(a1 + 8), v5, 0xBB2u, 0);
      v59 = sub_17B3DD0((__int64)v130, &v122);
      sub_15884C0(v59, &v125);
      sub_15F7200(v130);
      v60 = *(_QWORD **)(a2 + 8);
      v61 = &v60[*(unsigned int *)(a2 + 16)];
      if ( v61 != v60 )
      {
        v62 = *(_QWORD **)(a2 + 8);
        do
        {
          v63 = *v62 & 0xFFFFFFFFFFFFFFF8LL;
          sub_168B9F0((__int64)v130, (__int64 *)(a1 + 8), *(_DWORD *)(v63 + 24), 0x1687u, 0);
          if ( v133 )
          {
            sub_AE9DF0(v132, v63, 0xAu);
          }
          else if ( v135 )
          {
            v74 = sub_168B9E0(v130);
            v75 = v131;
            if ( v131 )
              v75 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v131 + 32LL))(v131);
            ptr = v75;
            v76 = sub_1587BC0(v74, (__int64 *)&ptr, v70, v71, v72, v73);
            sub_AE9DF0((unsigned __int8 **)(*v76 + 32LL * v134 + 8), v63, 0xAu);
          }
          ++v62;
          sub_15F7200(v130);
        }
        while ( v61 != v62 );
      }
      return;
    case 3:
      v7 = 0;
      sub_168B9F0((__int64)v130, (__int64 *)(a1 + 8), v5, 0x1528u, 0);
      v8 = sub_17B3DD0((__int64)v130, &v122);
      sub_15884C0(v8, &v125);
      sub_15F7200(v130);
      v9 = *(_QWORD **)(a2 + 8);
      v10 = &v9[*(unsigned int *)(a2 + 16)];
      if ( v10 == v9 )
        return;
      while ( 1 )
      {
        v11 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
        sub_168B9F0((__int64)v130, (__int64 *)(a1 + 8), *(_DWORD *)(v11 + 24), 0x18C7u, 0);
        if ( v133 )
        {
          sub_AE9DF0(v132, v11, 0xAu);
        }
        else if ( v135 )
        {
          v64 = sub_168B9E0(v130);
          v68 = v131;
          if ( v131 )
          {
            v117 = v64;
            v68 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v131 + 32LL))(v131);
            v64 = v117;
          }
          ptr = v68;
          v69 = sub_1587BC0(v64, (__int64 *)&ptr, v64, v65, v66, v67);
          sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v134 + 8), v11, 0xAu);
        }
        sub_15F7200(v130);
        v12 = *(_QWORD *)(v11 + 16);
        v13 = (unsigned __int64 *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v7 )
          break;
        if ( (v12 & 4) == 0 )
        {
          if ( (unsigned __int64 *)v7 != v13 )
            return;
LABEL_7:
          v7 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_8;
        }
        if ( *v13 != v7 )
          return;
LABEL_8:
        if ( v10 == ++v9 )
          return;
      }
      if ( (v12 & 4) != 0 )
      {
        v7 = *v13;
        goto LABEL_8;
      }
      goto LABEL_7;
    case 4:
      v14 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v130, (__int64 *)(a1 + 8), v5, 0xBB4u, 0);
      v15 = sub_17B3DD0((__int64)v130, &v122);
      sub_15884C0(v15, &v125);
      sub_15F7200(v130);
      v16 = *(unsigned int *)(a2 + 16);
      v17 = *(_QWORD **)(a2 + 8);
      ptr = v129;
      LODWORD(v128) = 0;
      v18 = v16;
      v127 = 8;
      BYTE4(v128) = 1;
      if ( &v17[v16] == v17 )
        goto LABEL_40;
      v19 = v17;
      v20 = &v17[v16];
      v21 = v19;
      break;
    default:
      return;
  }
  do
  {
    v22 = *v21 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v22 + 28) & 0x7Fu) - 58 > 4 )
      goto LABEL_33;
    if ( BYTE4(v128) )
    {
      v23 = (char *)ptr;
      v24 = 8LL * HIDWORD(v127);
      v25 = (unsigned __int64 *)((char *)ptr + v24);
      if ( ptr != (char *)ptr + v24 )
      {
        v26 = (char *)ptr;
        if ( *(_QWORD *)ptr == v22 )
          goto LABEL_26;
        while ( 1 )
        {
          v26 += 8;
          if ( v25 == (unsigned __int64 *)v26 )
            break;
          if ( v22 == *(_QWORD *)v26 )
            goto LABEL_26;
        }
      }
      if ( HIDWORD(v127) < (unsigned int)v127 )
      {
        ++HIDWORD(v127);
        *v25 = v22;
        v23 = (char *)ptr;
        v26 = (char *)ptr + v24;
LABEL_26:
        v27 = &v23[8 * HIDWORD(v127)];
        goto LABEL_27;
      }
    }
    v26 = (char *)sub_2236760(&ptr, *v21 & 0xFFFFFFFFFFFFFFF8LL);
    v23 = (char *)ptr;
    if ( BYTE4(v128) )
      goto LABEL_26;
    v27 = (char *)ptr + 8 * (unsigned int)v127;
LABEL_27:
    if ( v27 != v26 && *(_QWORD *)v26 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v28 = v26 + 8;
      do
      {
        v29 = v28;
        if ( v27 == v28 )
          break;
        v28 += 8;
      }
      while ( *(_QWORD *)v29 >= 0xFFFFFFFFFFFFFFFELL );
    }
    sub_168B9F0((__int64)v130, v14, *(_DWORD *)(v22 + 24), 0x1782u, 0);
    sub_15F7200(v130);
LABEL_33:
    ++v21;
  }
  while ( v20 != v21 );
  v6 = a2;
  v16 = *(unsigned int *)(a2 + 16);
  v17 = *(_QWORD **)(a2 + 8);
  v30 = &v17[v16];
  v18 = *(_DWORD *)(a2 + 16);
  if ( v30 != v17 )
  {
    do
    {
      while ( 1 )
      {
        v31 = *v17 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v31 + 28) & 0x7Fu) - 58 > 4 )
          break;
        if ( v30 == ++v17 )
          goto LABEL_39;
      }
      ++v17;
      sub_168B9F0((__int64)v130, v14, *(_DWORD *)(v31 + 24), 0x1783u, 0);
      sub_15F7200(v130);
    }
    while ( v30 != v17 );
LABEL_39:
    v16 = *(unsigned int *)(a2 + 16);
    v17 = *(_QWORD **)(a2 + 8);
    v18 = *(_DWORD *)(a2 + 16);
  }
LABEL_40:
  v32 = v17;
  v33 = 0;
LABEL_41:
  for ( j = v17; j != &v32[v16]; v17 = j )
  {
    v35 = *j & 0xFFFFFFFFFFFFFFF8LL;
    if ( BYTE4(v128) )
    {
      v36 = ptr;
      v37 = (char *)ptr + 8 * HIDWORD(v127);
      if ( ptr != v37 )
      {
        while ( v35 != *v36 )
        {
          if ( v37 == (char *)++v36 )
            goto LABEL_99;
        }
LABEL_47:
        v33 = 1;
        v130[1] = j;
        sub_17A18A0((__int64 *)(v6 + 8), j);
        v16 = *(unsigned int *)(v6 + 16);
        v32 = *(_QWORD **)(v6 + 8);
        v18 = *(_DWORD *)(v6 + 16);
        goto LABEL_41;
      }
    }
    else
    {
      if ( sub_2236570(&ptr, v35) )
        goto LABEL_47;
      v16 = *(unsigned int *)(v6 + 16);
      v32 = *(_QWORD **)(v6 + 8);
      v18 = *(_DWORD *)(v6 + 16);
    }
LABEL_99:
    ++j;
  }
  if ( v33 )
  {
    v90 = *(_DWORD *)v6;
    if ( v18 )
    {
      v97 = 0;
      if ( v90 == 5 )
        v97 = *(_DWORD *)(v6 + 4);
      *(_DWORD *)v6 = 2;
      sub_1A43500(v6);
      if ( *(_DWORD *)v6 == 5 )
      {
        *(_DWORD *)(v6 + 4) = v97;
      }
      else
      {
        v98 = *(char **)(v6 + 88);
        if ( v98 )
        {
          sub_1A38860(v98);
          *(_QWORD *)(v6 + 88) = 0;
        }
      }
    }
    else
    {
      if ( v90 != 1 )
        *(_DWORD *)v6 = 0;
      v91 = *(_QWORD *)(v6 + 88);
      if ( v91 )
      {
        v92 = *(void **)(v91 + 232);
        if ( v92 != (void *)(v91 + 248) )
          free(v92);
        if ( !*(_BYTE *)(v91 + 188) )
          free(*(void **)(v91 + 168));
        if ( (*(_BYTE *)(v91 + 32) & 1) == 0 )
          operator delete(*(_QWORD *)(v91 + 40), 16LL * *(unsigned int *)(v91 + 48), 8);
        v93 = *(_QWORD **)(v91 + 8);
        v94 = (_QWORD *)(v91 + 8);
        if ( (_QWORD *)(v91 + 8) != v93 )
        {
          while ( 1 )
          {
            v95 = (_QWORD *)v93[2];
            v96 = (_QWORD *)*v93;
            if ( v95 == v93 + 4 )
            {
              operator delete(v93);
              if ( v94 == v96 )
                break;
            }
            else
            {
              free(v95);
              operator delete(v93);
              if ( v94 == v96 )
                break;
            }
            v93 = v96;
          }
        }
        operator delete((void *)v91, 0x170u);
        *(_QWORD *)(v6 + 88) = 0;
      }
    }
  }
  if ( !BYTE4(v128) )
    free(ptr);
}
