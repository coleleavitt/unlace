void __fastcall sub_6A0380(int *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // r13d
  __int64 v6; // rdx
  unsigned __int64 v7; // r12
  __int64 (__fastcall *v8)(__int64); // rax
  int v9; // r14d
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 (__fastcall *v15)(__int64); // rdx
  int v16; // r12d
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r12
  unsigned __int64 *v27; // r12
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 *n; // r13
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // r14d
  int *v36; // r13
  unsigned int i; // ebp
  __int64 v38; // rsi
  int v39; // r12d
  __int64 v40; // rax
  __int64 v41; // r12
  int *v42; // rsi
  unsigned int v43; // r14d
  unsigned int v44; // ebp
  __int64 v45; // rsi
  int v46; // r12d
  __int64 v47; // rax
  void *v48; // rdi
  unsigned int v49; // r14d
  char v50; // al
  bool v51; // r12
  void *v52; // rax
  unsigned int v53; // ebp
  __int64 v54; // rsi
  int v55; // r12d
  __int64 v56; // rax
  unsigned int v57; // r13d
  unsigned int j; // r12d
  __int64 v59; // rsi
  int v60; // r15d
  __int64 v61; // rax
  unsigned int v62; // r14d
  int *v63; // r13
  unsigned int k; // ebp
  __int64 v65; // rsi
  int v66; // r12d
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r12
  __int64 v70; // r13
  __int64 v71; // rdi
  int v72; // edx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdi
  int v76; // eax
  int v77; // r15d
  int v78; // r12d
  int v79; // r14d
  __int64 v80; // rdx
  char v81; // al
  __int64 v82; // rax
  __int64 v83; // r12
  int *v84; // rsi
  __int64 v85; // r15
  unsigned int v86; // r14d
  unsigned int v87; // r12d
  __int64 v88; // rsi
  int v89; // eax
  __int64 v90; // rdx
  int *v91; // rsi
  unsigned int v92; // r14d
  unsigned int v93; // ebp
  __int64 v94; // rsi
  int v95; // r12d
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // r12
  unsigned __int64 v99; // r12
  unsigned __int64 v100; // rcx
  __int64 v101; // rax
  unsigned __int64 v102; // rcx
  __int64 v103; // rax
  int v104; // r12d
  __int64 v105; // rax
  int v106; // r12d
  unsigned __int64 v107; // rcx
  __int64 v108; // rax
  unsigned __int64 *v109; // r12
  __int64 v110; // rax
  unsigned __int64 *m; // r13
  unsigned __int64 v112; // rbp
  unsigned __int64 v113; // rbp
  unsigned __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // r12
  __int64 v118; // r13
  __int64 v119; // rdi
  int v120; // r13d
  int v121; // r12d
  __int64 v122; // rdx
  __int64 v123; // r13
  __int64 v124; // rax
  int v125; // r13d
  __int64 v126; // rax
  __int64 v127; // r12
  __int64 v128; // rdi
  __int64 v129; // rax
  int v130; // [rsp+0h] [rbp-178h]
  __int64 v131; // [rsp+8h] [rbp-170h]
  void *v132; // [rsp+20h] [rbp-158h] BYREF
  __int64 v133; // [rsp+28h] [rbp-150h]
  _BYTE v134[128]; // [rsp+30h] [rbp-148h] BYREF
  void *ptr[2]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v136[184]; // [rsp+C0h] [rbp-B8h] BYREF

  v4 = *(unsigned int *)(a2 + 8);
  while ( 2 )
  {
    v5 = *a1;
    if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v4 + 1) )
    {
      sub_25D6060(a2, a2 + 16, v4 + 1, 4);
      v4 = *(unsigned int *)(a2 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a2 + 4 * v4) = v5;
    v6 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    *(_DWORD *)(a2 + 8) = v6;
    switch ( *a1 )
    {
      case 0:
      case 1:
        return;
      case 2:
        v35 = a1[4];
        v36 = a1 + 2;
        if ( v35 )
        {
          for ( i = 0; i < v35; i += 32 )
          {
            while ( 1 )
            {
              v38 = v35 - i;
              if ( (unsigned int)v38 > 0x20 )
                v38 = 32;
              v39 = sub_2587110(v36, v38, i);
              v40 = *(unsigned int *)(a2 + 8);
              if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v40 + 1) )
                break;
              i += 32;
              *(_DWORD *)(*(_QWORD *)a2 + 4 * v40) = v39;
              ++*(_DWORD *)(a2 + 8);
              if ( i >= v35 )
                return;
            }
            sub_25D6060(a2, a2 + 16, v40 + 1, 4);
            *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v39;
          }
        }
        return;
      case 3:
        v41 = *((_QWORD *)a1 + 1);
        v42 = a1 + 2;
        if ( v41 == sub_2575D20() )
          sub_25807A0(ptr, v42);
        else
          sub_2580530(ptr, v42);
        v43 = (unsigned int)ptr[1];
        v44 = 0;
        if ( LODWORD(ptr[1]) )
        {
          do
          {
            while ( 1 )
            {
              v45 = v43 - v44;
              if ( (unsigned int)v45 > 0x20 )
                v45 = 32;
              v46 = sub_2587110(ptr, v45, v44);
              v47 = *(unsigned int *)(a2 + 8);
              if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v47 + 1) )
                break;
              v44 += 32;
              *(_DWORD *)(*(_QWORD *)a2 + 4 * v47) = v46;
              ++*(_DWORD *)(a2 + 8);
              if ( v44 >= v43 )
                goto LABEL_51;
            }
            v44 += 32;
            sub_25D6060(a2, a2 + 16, v47 + 1, 4);
            *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v46;
          }
          while ( v44 < v43 );
          goto LABEL_51;
        }
        return;
      case 4:
        v49 = a1[4];
        v50 = *((_BYTE *)a1 + 27) >> 5;
        LODWORD(ptr[1]) = v49;
        v51 = !(v50 & 1);
        if ( v49 > 0x40 )
        {
          sub_2585B30(ptr);
          v49 = (unsigned int)ptr[1];
          v52 = ptr[0];
        }
        else
        {
          v52 = *((void **)a1 + 1);
        }
        LODWORD(v133) = v49;
        v53 = 0;
        v132 = v52;
        BYTE4(v133) = v51;
        if ( v49 )
        {
          do
          {
            while ( 1 )
            {
              v54 = v49 - v53;
              if ( (unsigned int)v54 > 0x20 )
                v54 = 32;
              v55 = sub_2587110(&v132, v54, v53);
              v56 = *(unsigned int *)(a2 + 8);
              if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v56 + 1) )
                break;
              v53 += 32;
              *(_DWORD *)(*(_QWORD *)a2 + 4 * v56) = v55;
              ++*(_DWORD *)(a2 + 8);
              if ( v53 >= v49 )
                goto LABEL_63;
            }
            v53 += 32;
            sub_25D6060(a2, a2 + 16, v56 + 1, 4);
            *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v55;
          }
          while ( v53 < v49 );
LABEL_63:
          if ( (unsigned int)v133 > 0x40 )
          {
            v48 = v132;
            if ( v132 )
              goto LABEL_53;
          }
        }
        return;
      case 5:
        v57 = a1[4];
        for ( j = 0; j < v57; ++*(_DWORD *)(a2 + 8) )
        {
          while ( 1 )
          {
            v59 = v57 - j;
            if ( (unsigned int)v59 > 0x20 )
              v59 = 32;
            v60 = sub_2587110(a1 + 2, v59, j);
            v61 = *(unsigned int *)(a2 + 8);
            if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v61 + 1) )
              break;
            j += 32;
            *(_DWORD *)(*(_QWORD *)a2 + 4 * v61) = v60;
            ++*(_DWORD *)(a2 + 8);
            if ( j >= v57 )
              goto LABEL_73;
          }
          j += 32;
          sub_25D6060(a2, a2 + 16, v61 + 1, 4);
          *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v60;
        }
LABEL_73:
        v62 = a1[8];
        v63 = a1 + 6;
        for ( k = 0; k < v62; ++*(_DWORD *)(a2 + 8) )
        {
          while ( 1 )
          {
            v65 = v62 - k;
            if ( (unsigned int)v65 > 0x20 )
              v65 = 32;
            v66 = sub_2587110(v63, v65, k);
            v67 = *(unsigned int *)(a2 + 8);
            if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v67 + 1) )
              break;
            k += 32;
            *(_DWORD *)(*(_QWORD *)a2 + 4 * v67) = v66;
            ++*(_DWORD *)(a2 + 8);
            if ( k >= v62 )
              return;
          }
          k += 32;
          sub_25D6060(a2, a2 + 16, v67 + 1, 4);
          *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v66;
        }
        return;
      case 6:
        v83 = *((_QWORD *)a1 + 1);
        v84 = a1 + 2;
        v85 = sub_2575D20();
        if ( v83 == v85 )
          sub_25807A0(ptr, v84);
        else
          sub_2580530(ptr, v84);
        v86 = (unsigned int)ptr[1];
        v87 = 0;
        if ( LODWORD(ptr[1]) )
        {
          do
          {
            while ( 1 )
            {
              v88 = v86 - v87;
              if ( (unsigned int)v88 > 0x20 )
                v88 = 32;
              v89 = sub_2587110(ptr, v88, v87);
              v90 = *(unsigned int *)(a2 + 8);
              if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v90 + 1) )
                break;
              v87 += 32;
              *(_DWORD *)(*(_QWORD *)a2 + 4 * v90) = v89;
              ++*(_DWORD *)(a2 + 8);
              if ( v87 >= v86 )
                goto LABEL_110;
            }
            v130 = v89;
            v87 += 32;
            sub_25D6060(a2, a2 + 16, v90 + 1, 4);
            *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v130;
          }
          while ( v87 < v86 );
LABEL_110:
          if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
            operator delete[](ptr[0]);
        }
        v91 = a1 + 8;
        if ( v85 == *((_QWORD *)a1 + 4) )
          sub_25807A0(ptr, v91);
        else
          sub_2580530(ptr, v91);
        v92 = (unsigned int)ptr[1];
        v93 = 0;
        if ( LODWORD(ptr[1]) )
        {
          do
          {
            while ( 1 )
            {
              v94 = v92 - v93;
              if ( (unsigned int)v94 > 0x20 )
                v94 = 32;
              v95 = sub_2587110(ptr, v94, v93);
              v96 = *(unsigned int *)(a2 + 8);
              if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v96 + 1) )
                break;
              v93 += 32;
              *(_DWORD *)(*(_QWORD *)a2 + 4 * v96) = v95;
              ++*(_DWORD *)(a2 + 8);
              if ( v93 >= v92 )
                goto LABEL_51;
            }
            v93 += 32;
            sub_25D6060(a2, a2 + 16, v96 + 1, 4);
            *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v95;
          }
          while ( v93 < v92 );
LABEL_51:
          if ( LODWORD(ptr[1]) > 0x40 )
          {
            v48 = ptr[0];
            if ( ptr[0] )
LABEL_53:
              operator delete[](v48);
          }
        }
        return;
      case 7:
        *(__m128i *)ptr = _mm_loadu_si128((const __m128i *)(a1 + 2));
        sub_69F430((unsigned __int64 *)ptr, a2);
        v97 = *(unsigned int *)(a2 + 8);
        v98 = *((_QWORD *)a1 + 3);
        if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v97 + 1) )
        {
          sub_25D6060(a2, a2 + 16, v97 + 1, 4);
          v97 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v97) = v98;
        v99 = HIDWORD(v98);
        v100 = *(unsigned int *)(a2 + 12);
        v101 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v101;
        if ( v100 < v101 + 1 )
        {
          sub_25D6060(a2, a2 + 16, v101 + 1, 4);
          v101 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v101) = v99;
        v102 = *(unsigned int *)(a2 + 12);
        v103 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v103;
        v104 = (4 * (a1[8] != -1)) | a1[9] & 1 | (2 * ((a1[9] & 2) != 0));
        if ( v102 < v103 + 1 )
        {
          sub_25D6060(a2, a2 + 16, v103 + 1, 4);
          v103 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v103) = v104;
        v105 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v105;
        v106 = a1[8];
        if ( v106 != -1 )
        {
          if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v105 + 1) )
          {
            sub_25D6060(a2, a2 + 16, v105 + 1, 4);
            v105 = *(unsigned int *)(a2 + 8);
          }
          *(_DWORD *)(*(_QWORD *)a2 + 4 * v105) = v106;
          v107 = *(unsigned int *)(a2 + 12);
          v108 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
          *(_DWORD *)(a2 + 8) = v108;
          if ( v107 < v108 + 1 )
          {
            sub_25D6060(a2, a2 + 16, v108 + 1, 4);
            v108 = *(unsigned int *)(a2 + 8);
          }
          v109 = (unsigned __int64 *)(a1 + 10);
          *(_DWORD *)(*(_QWORD *)a2 + 4 * v108) = 0;
          v110 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
          *(_DWORD *)(a2 + 8) = v110;
          if ( (unsigned int)(a1[8] - 3) <= 0xFFFFFFFB )
            v109 = *((unsigned __int64 **)a1 + 5);
          for ( m = &v109[a1[8]]; m != v109; *(_DWORD *)(a2 + 8) = v110 )
          {
            v112 = *v109;
            if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v110 + 1) )
            {
              sub_25D6060(a2, a2 + 16, v110 + 1, 4);
              v110 = *(unsigned int *)(a2 + 8);
            }
            *(_DWORD *)(*(_QWORD *)a2 + 4 * v110) = v112;
            v113 = HIDWORD(v112);
            v114 = *(unsigned int *)(a2 + 12);
            v115 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
            *(_DWORD *)(a2 + 8) = v115;
            if ( v114 < v115 + 1 )
            {
              sub_25D6060(a2, a2 + 16, v115 + 1, 4);
              *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v113;
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)a2 + 4 * v115) = v113;
            }
            ++v109;
            v110 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
          }
        }
        return;
      case 8:
        v68 = (unsigned int)a1[4];
        if ( (_DWORD)v68 )
        {
          v69 = 0;
          v70 = 56 * v68;
          do
          {
            v71 = v69 + *((_QWORD *)a1 + 1);
            v69 += 56;
            sub_6A0380(v71, a2);
          }
          while ( v69 != v70 );
        }
        return;
      case 9:
        v72 = a1[5];
        if ( !v72 )
          return;
        v132 = v134;
        v133 = 0x2000000000LL;
        v73 = (unsigned int)a1[4];
        v74 = *((_QWORD *)a1 + 1);
        if ( (_DWORD)v73 == v72 )
          v75 = v74 + 56LL * (unsigned int)(v73 - 1);
        else
          v75 = v74 + 56 * v73;
        sub_6A0380(v75, &v132);
        sub_25ABD80(a2, &v132);
        v76 = a1[5];
        v77 = a1[4];
        v78 = v76 - v77;
        if ( !v77 )
        {
LABEL_96:
          v82 = *(unsigned int *)(a2 + 8);
          if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v82 + 1) )
          {
            sub_25D6060(a2, a2 + 16, v82 + 1, 4);
            v82 = *(unsigned int *)(a2 + 8);
          }
          *(_DWORD *)(*(_QWORD *)a2 + 4 * v82) = v78;
          ++*(_DWORD *)(a2 + 8);
          goto LABEL_99;
        }
        v79 = v77 - 1;
        v80 = 56LL * (unsigned int)(v77 - 1);
        break;
      case 10:
        v116 = (unsigned int)a1[4];
        if ( (_DWORD)v116 )
        {
          v117 = 0;
          v118 = 56 * v116;
          do
          {
            v119 = v117 + *((_QWORD *)a1 + 1);
            v117 += 56;
            sub_6A0380(v119, a2);
          }
          while ( v118 != v117 );
        }
        v120 = a1[5];
        v121 = 0;
        if ( v120 )
        {
          do
          {
            v122 = (unsigned int)(a1[4] + v121++);
            sub_6A0380(*((_QWORD *)a1 + 1) + 56 * v122, a2);
          }
          while ( v121 != v120 );
        }
        return;
      case 11:
        v123 = *((_QWORD *)a1 + 1);
        if ( v123 )
        {
          if ( *(char *)(v123 + 29) < 0 )
            v123 = sub_77A0C0(*((_QWORD *)a1 + 1));
          if ( *(_DWORD *)(v123 + 68) <= 0xFu )
            sub_78B660(v123);
          v124 = *(unsigned int *)(a2 + 8);
          v125 = *(_DWORD *)(v123 + 68) >> 4;
          if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v124 + 1) )
          {
            sub_25D6060(a2, a2 + 16, v124 + 1, 4);
            v124 = *(unsigned int *)(a2 + 8);
          }
          *(_DWORD *)(*(_QWORD *)a2 + 4 * v124) = v125;
          v4 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
          *(_DWORD *)(a2 + 8) = v4;
          a1 = *((int **)a1 + 2);
          continue;
        }
        if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v6 + 1) )
        {
          sub_25D6060(a2, a2 + 16, v6 + 1, 4);
          v6 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v6) = 0;
        ++*(_DWORD *)(a2 + 8);
        return;
      case 12:
        v20 = *((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v6 + 1) )
        {
          sub_25D6060(a2, a2 + 16, v6 + 1, 4);
          v6 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v6) = v20;
        v21 = HIDWORD(v20);
        v22 = *(unsigned int *)(a2 + 12);
        v23 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v23;
        if ( v22 < v23 + 1 )
        {
          sub_25D6060(a2, a2 + 16, v23 + 1, 4);
          v23 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v23) = v21;
        v24 = *(unsigned int *)(a2 + 12);
        v25 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v25;
        v26 = (*((__int64 *)a1 + 1) >> 2) & 1;
        if ( v24 < v25 + 1 )
        {
          sub_25D6060(a2, a2 + 16, v25 + 1, 4);
          v25 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v25) = v26;
        v27 = (unsigned __int64 *)(a1 + 6);
        v28 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v28;
        v29 = (unsigned int)a1[4];
        if ( (unsigned int)v29 > 4 )
          v27 = *((unsigned __int64 **)a1 + 3);
        for ( n = &v27[v29]; n != v27; *(_DWORD *)(a2 + 8) = v28 )
        {
          v31 = *v27;
          if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v28 + 1) )
          {
            sub_25D6060(a2, a2 + 16, v28 + 1, 4);
            v28 = *(unsigned int *)(a2 + 8);
          }
          *(_DWORD *)(*(_QWORD *)a2 + 4 * v28) = v31;
          v32 = HIDWORD(v31);
          v33 = *(unsigned int *)(a2 + 12);
          v34 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
          *(_DWORD *)(a2 + 8) = v34;
          if ( v33 < v34 + 1 )
          {
            sub_25D6060(a2, a2 + 16, v34 + 1, 4);
            *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v32;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)a2 + 4 * v34) = v32;
          }
          ++v27;
          v28 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        }
        return;
      case 13:
        v7 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL);
        v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL);
        if ( v8 != sub_69EEA0 )
        {
          v129 = v8(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL));
          v6 = *(unsigned int *)(a2 + 8);
          v7 = v129;
        }
        v9 = v7;
        if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v6 + 1) )
        {
          sub_25D6060(a2, a2 + 16, v6 + 1, 4);
          v6 = *(unsigned int *)(a2 + 8);
        }
        v10 = HIDWORD(v7);
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v6) = v9;
        v11 = *(unsigned int *)(a2 + 12);
        v12 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v12;
        if ( v11 < v12 + 1 )
        {
          sub_25D6060(a2, a2 + 16, v12 + 1, 4);
          v12 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v12) = v10;
        v13 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v13;
        v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL);
        v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL);
        if ( v15 != sub_69EEA0 )
        {
          v14 = v15(v14);
          v13 = *(unsigned int *)(a2 + 8);
        }
        v16 = v14;
        if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v13 + 1) )
        {
          sub_25D6060(a2, a2 + 16, v13 + 1, 4);
          v13 = *(unsigned int *)(a2 + 8);
        }
        v17 = HIDWORD(v14);
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v13) = v16;
        v18 = *(unsigned int *)(a2 + 12);
        v19 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v19;
        if ( v18 < v19 + 1 )
        {
          sub_25D6060(a2, a2 + 16, v19 + 1, 4);
          v19 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v19) = v17;
        ++*(_DWORD *)(a2 + 8);
        return;
    }
    break;
  }
  while ( 1 )
  {
    if ( v77 == v76 )
      goto LABEL_95;
    v131 = v80;
    ptr[0] = v136;
    ptr[1] = (void *)0x2000000000LL;
    sub_6A0380(*((_QWORD *)a1 + 1) + v80, ptr);
    v81 = sub_25ABE00(ptr, &v132);
    v80 = v131;
    if ( !v81 )
      break;
    if ( ptr[0] != v136 )
    {
      free(ptr[0]);
      v80 = v131;
    }
LABEL_95:
    ++v78;
    v80 -= 56;
    if ( !v79 )
      goto LABEL_96;
    v76 = a1[5];
    v77 = v79--;
  }
  v126 = *(unsigned int *)(a2 + 8);
  if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v126 + 1) )
  {
    sub_25D6060(a2, a2 + 16, v126 + 1, 4);
    v126 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v126) = v78;
  ++*(_DWORD *)(a2 + 8);
  sub_25ABD80(a2, ptr);
  if ( ptr[0] != v136 )
    free(ptr[0]);
  if ( v79 )
  {
    v127 = 56LL * (unsigned int)(v77 - 2);
    do
    {
      v128 = v127 + *((_QWORD *)a1 + 1);
      v127 -= 56;
      sub_6A0380(v128, a2);
    }
    while ( v127 != -56 );
  }
LABEL_99:
  if ( v132 != v134 )
    free(v132);
}

