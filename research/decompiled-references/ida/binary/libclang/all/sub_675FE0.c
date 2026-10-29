__int64 __fastcall sub_675FE0(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbx
  __int64 *v11; // rbx
  __int64 v12; // r13
  unsigned int v13; // ebp
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 *v17; // rbp
  __int64 v18; // r13
  __int64 *v19; // rbp
  __int64 v20; // r13
  __int64 *v21; // rbx
  __int64 v22; // r13
  __int64 *v23; // rbp
  __int64 v24; // r13
  __int64 *v25; // rbx
  __int64 v26; // r13
  __int64 *v27; // rbp
  __int64 v28; // r13
  __int64 *v29; // rbx
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 *v32; // rbp
  __int64 v33; // r13
  __int64 *v34; // rbp
  __int64 v35; // r13
  __int64 *v36; // rbx
  __int64 v37; // r13
  __int64 *v38; // rbx
  __int64 v39; // r13
  unsigned int v40; // r14d
  __int64 v41; // r13
  __int64 *v42; // rbx
  __int64 v43; // r13
  __int64 *v44; // rbx
  __int64 v45; // r13
  __int64 *v46; // rbx
  __int64 *v47; // rbx
  __int64 v48; // r13
  __int64 *v49; // rbx
  __int64 v50; // r13
  __int64 *v51; // rbp
  __int64 v52; // r13
  __int64 *v53; // rbx
  __int64 v54; // r13
  __int64 *v55; // rbx
  __int64 v56; // r13
  __int64 *v57; // rbp
  __int64 v58; // r13
  __int64 v59; // rax
  __int64 *v60; // rbp
  __int64 v61; // r13
  __int64 *v62; // rbx
  __int64 v63; // r13
  __int64 v64; // rax
  __int64 *v65; // rbp
  __int64 v66; // r13
  __int64 *v67; // rbx
  __int64 v68; // r13
  __int64 *v69; // rbx
  __int64 v70; // r13
  __int64 *v71; // rbx
  __int64 v72; // r13
  int v73; // r13d
  unsigned int v74; // ebp
  __int64 *v75; // rbx
  __int64 v76; // r13
  __int64 *v77; // rbx
  __int64 v78; // r13
  __int64 *v79; // rbp
  __int64 v80; // r13
  __int64 *v81; // rbp
  __int64 v82; // r13
  __int64 v83; // rax
  __int64 *v84; // r13
  __int64 *v85; // r14
  __int64 *v86; // rbp
  __int64 *v87; // r13
  __int64 v88; // rax
  __int64 *v89; // r13
  __int64 *v90; // r14
  __int64 v91; // rdx
  __int64 *v92; // rax
  __int64 *v93; // rbx
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // rdx
  __int64 v96; // rax
  __int64 *v97; // rbx
  __int64 *v98; // r13
  __int64 *v99; // rbp
  __int64 *v100; // r13
  __int64 *v101; // rbp
  __int64 *v102; // r13
  __int64 *v103; // rbp
  __int64 *v104; // r13
  __int64 *v105; // r13
  __int64 *v106; // r14
  __int64 *v107; // rbx
  __int64 *v108; // r13
  __int64 *v109; // rbx
  __int64 *v110; // rbp
  __int64 *v111; // rbx
  __int64 *v112; // rbp
  __int64 v113; // rax
  __int64 *v114; // r13
  __int64 *v115; // r14
  __int64 v116; // rax
  __int64 *v117; // r13
  __int64 *v118; // r14
  __int64 v119; // rax
  __int64 *v120; // r13
  __int64 *v121; // r14
  __int64 v122; // rax
  __int64 *v123; // r13
  __int64 *v124; // r14
  __int64 *v125; // r13
  __int64 *v126; // r14
  __int64 *v127; // rbx
  __int64 *v128; // r13
  __int64 *v129; // r13
  __int64 *v130; // r14
  __int64 *v131; // r13
  __int64 *v132; // r14
  __int64 *v133; // r13
  __int64 *v134; // r14
  __int64 *v135; // r13
  __int64 *v136; // r14
  __int64 *v137; // r13
  __int64 *v138; // r14
  __int64 *v139; // r13
  __int64 *v140; // r14
  __int64 *v141; // r13
  __int64 *v142; // r14
  __int64 *v143; // r13
  __int64 *v144; // r14
  __int64 *v145; // r13
  __int64 *v146; // r14
  __int64 *v147; // rbx
  __int64 *v148; // r13
  __int64 *v149; // rbx
  __int64 *v150; // r13
  __int64 v151; // rsi
  __int64 *v152; // r13
  __int64 *v153; // r14
  __int64 *v154; // rbx
  __int64 *v155; // r13
  __int64 *v156; // r13
  __int64 *v157; // r14
  __int64 v158; // rsi
  __int64 *v159; // r13
  __int64 *v160; // r14
  __int64 v161; // rsi
  __int64 v162; // rax
  __int64 *v163; // rbx
  __int64 *v164; // r13
  __int64 v165; // rsi
  __int64 *v166; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v167; // [rsp+8h] [rbp-40h]

  if ( a2 )
  {
    v10 = a2;
    switch ( *(_DWORD *)(a2 + 8) )
    {
      case 4:
        v40 = sub_672CC0(a1, *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24), a3, a4, a5, a6);
        if ( !(_BYTE)v40 )
          return 0;
        v45 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
        v46 = (__int64 *)(a2 + 24);
        if ( v45 == a2 + 24 )
          return v40;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v46, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v45 == ++v46 )
            return v40;
        }
        return v13;
      case 5:
      case 8:
      case 0xF:
      case 0x17:
      case 0x19:
      case 0x2A:
      case 0x3A:
      case 0x4B:
      case 0x4C:
      case 0x56:
      case 0x5C:
        goto LABEL_9;
      case 6:
        v40 = sub_672CC0(a1, *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24), a3, a4, a5, a6);
        if ( !(_BYTE)v40 )
          return 0;
        v43 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
        v44 = (__int64 *)(a2 + 24);
        if ( v43 == a2 + 24 )
          return v40;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v44, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v43 == ++v44 )
            return v40;
        }
        return v13;
      case 7:
        v40 = sub_672CC0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6);
        if ( !(_BYTE)v40 )
          return 0;
        v41 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 72;
        v42 = (__int64 *)(a2 + 72);
        if ( v41 == a2 + 72 )
          return v40;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v42, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v41 == ++v42 )
            return v40;
        }
        return v13;
      case 0x12:
        v16 = *(unsigned int *)(a2 + 16);
        v17 = (__int64 *)(a2 + 24);
        v18 = a2 + 8 * v16 + 24;
        if ( v18 == a2 + 24 )
          goto LABEL_207;
        while ( (unsigned __int8)sub_672CC0(a1, *v17, a3, a4, a5, a6) )
        {
          if ( (__int64 *)v18 == ++v17 )
          {
            v16 = *(unsigned int *)(a2 + 16);
LABEL_207:
            v99 = (__int64 *)(a2 + 8 * v16 + 24);
            v100 = &v99[v16];
            if ( v99 != v100 )
            {
              do
              {
                if ( !(unsigned __int8)sub_672CC0(a1, *v99, a3, a4, a5, a6) )
                  return 0;
                ++v99;
              }
              while ( v100 != v99 );
              v16 = *(unsigned int *)(a2 + 16);
            }
            v101 = (__int64 *)(a2 + 16 * v16 + 24);
            v102 = &v101[v16];
            if ( v101 != v102 )
            {
              do
              {
                if ( !(unsigned __int8)sub_672CC0(a1, *v101, a3, a4, a5, a6) )
                  return 0;
                ++v101;
              }
              while ( v102 != v101 );
              v16 = *(unsigned int *)(a2 + 16);
            }
            v111 = (__int64 *)(a2 + 8 * (3 * v16 + 3));
            v112 = &v111[v16];
            if ( v111 != v112 )
            {
              while ( (unsigned __int8)sub_672CC0(a1, *v111, a3, a4, a5, a6) )
              {
                if ( v112 == ++v111 )
                  return 1;
              }
              return 0;
            }
            return 1;
          }
        }
        return 0;
      case 0x13:
        v64 = *(unsigned int *)(a2 + 16);
        v65 = (__int64 *)(a2 + 24);
        v66 = a2 + 8 * v64 + 24;
        if ( v66 == a2 + 24 )
          goto LABEL_176;
        do
        {
          if ( !(unsigned __int8)sub_672CC0(a1, *v65, a3, a4, a5, a6) )
            return 0;
          ++v65;
        }
        while ( (__int64 *)v66 != v65 );
        v64 = *(unsigned int *)(a2 + 16);
LABEL_176:
        v86 = (__int64 *)(a2 + 8 * v64 + 24);
        v87 = &v86[v64];
        if ( v86 != v87 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v86, a3, a4, a5, a6) )
              return 0;
            ++v86;
          }
          while ( v87 != v86 );
          v64 = *(unsigned int *)(a2 + 16);
        }
        v103 = (__int64 *)(a2 + 16 * v64 + 24);
        v104 = &v103[v64];
        if ( v103 != v104 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v103, a3, a4, a5, a6) )
              return 0;
            ++v103;
          }
          while ( v104 != v103 );
          v64 = *(unsigned int *)(a2 + 16);
        }
        v109 = (__int64 *)(a2 + 8 * (3 * v64 + 3));
        v110 = &v109[v64];
        if ( v109 == v110 )
          return 1;
        while ( (unsigned __int8)sub_672CC0(a1, *v109, a3, a4, a5, a6) )
        {
          if ( v110 == ++v109 )
            return 1;
        }
        return 0;
      case 0x16:
        v71 = (__int64 *)(a2 + 40);
        v72 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
        if ( v72 == a2 + 40 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v71, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v72 == ++v71 )
            return 1;
        }
        return v13;
      case 0x18:
      case 0x69:
        goto LABEL_18;
      case 0x1A:
      case 0x28:
      case 0x44:
        if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6) )
          return 0;
        v15 = *(_QWORD *)(a2 + 40);
        return sub_672CC0(a1, v15, a3, a4, a5, a6);
      case 0x1C:
        if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6) )
          return 0;
        v15 = *(_QWORD *)(a2 + 48);
        return sub_672CC0(a1, v15, a3, a4, a5, a6);
      case 0x1D:
        v77 = (__int64 *)(a2 + 40);
        v78 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
        if ( v78 == a2 + 40 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v77, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v78 == ++v77 )
            return 1;
        }
        return v13;
      case 0x20:
        v47 = (__int64 *)(a2 + 24);
        v48 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
        if ( v48 == a2 + 24 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v47, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v48 == ++v47 )
            return 1;
        }
        return v13;
      case 0x22:
      case 0x23:
      case 0x40:
      case 0x43:
      case 0x46:
      case 0x49:
        if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6) )
          return 0;
LABEL_9:
        v15 = *(_QWORD *)(a2 + 16);
        return sub_672CC0(a1, v15, a3, a4, a5, a6);
      case 0x24:
        v57 = (__int64 *)(a2 + 40);
        v58 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
        if ( v58 == a2 + 40 )
          goto LABEL_169;
        do
        {
          if ( !(unsigned __int8)sub_672CC0(a1, *v57, a3, a4, a5, a6) )
            return 0;
          ++v57;
        }
        while ( (__int64 *)v58 != v57 );
LABEL_169:
        v13 = sub_672CC0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6);
        if ( !(_BYTE)v13 )
          return 0;
        v83 = *(unsigned int *)(a2 + 16);
        v84 = (__int64 *)(a2 + 8 * v83 + 40);
        v85 = &v84[v83];
        if ( v84 != v85 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v84, a3, a4, a5, a6) )
              return 0;
            ++v84;
          }
          while ( v85 != v84 );
          v83 = *(unsigned int *)(a2 + 16);
        }
        v107 = (__int64 *)(a2 + 16 * v83 + 40);
        v108 = &v107[v83];
        if ( v107 != v108 )
        {
          while ( (unsigned __int8)sub_672CC0(a1, *v107, a3, a4, a5, a6) )
          {
            if ( v108 == ++v107 )
              return v13;
          }
          return 0;
        }
        return v13;
      case 0x25:
        v55 = (__int64 *)(a2 + 24);
        v56 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
        if ( v56 == a2 + 24 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v55, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v56 == ++v55 )
            return 1;
        }
        return v13;
      case 0x26:
        v49 = (__int64 *)(a2 + 104);
        v50 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 104;
        if ( v50 == a2 + 104 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v49, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v50 == ++v49 )
            return 1;
        }
        return v13;
      case 0x29:
        v53 = (__int64 *)(a2 + 80);
        v54 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
        if ( v54 == a2 + 80 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v53, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v54 == ++v53 )
            return 1;
        }
        return v13;
      case 0x2C:
      case 0x4E:
        if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6) )
          return 0;
        v15 = *(_QWORD *)(a2 + 32);
        return sub_672CC0(a1, v15, a3, a4, a5, a6);
      case 0x2D:
        if ( !(unsigned __int8)sub_674510(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), a3, a4, a5, a6)
          || !(unsigned __int8)sub_675910(a1, *(_QWORD *)(a2 + 72), *(__int64 **)(a2 + 88), a3, a4, a5, a6) )
        {
          return 0;
        }
        v27 = (__int64 *)(a2 + 96);
        v28 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 96;
        if ( v28 == a2 + 96 )
          goto LABEL_266;
        do
        {
          if ( !(unsigned __int8)sub_672CC0(a1, *v27, a3, a4, a5, a6) )
            return 0;
          ++v27;
        }
        while ( (__int64 *)v28 != v27 );
LABEL_266:
        v13 = sub_672E00(a1, (__int64 *)(a2 + 24), a3, a4, a5, a6);
        if ( !(_BYTE)v13 )
          return 0;
        v122 = *(unsigned int *)(a2 + 16);
        v123 = (__int64 *)(a2 + 8 * v122 + 96);
        v124 = &v123[v122];
        if ( v123 != v124 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v123, a3, a4, a5, a6) )
              return 0;
            ++v123;
          }
          while ( v124 != v123 );
          v122 = *(unsigned int *)(a2 + 16);
        }
        v135 = (__int64 *)(a2 + 16 * v122 + 96);
        v136 = &v135[v122];
        if ( v135 != v136 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v135, a3, a4, a5, a6) )
              return 0;
            ++v135;
          }
          while ( v136 != v135 );
          v122 = *(unsigned int *)(a2 + 16);
        }
        v137 = (__int64 *)(a2 + 24 * v122 + 96);
        v138 = &v137[v122];
        if ( v137 != v138 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v137, a3, a4, a5, a6) )
              return 0;
            ++v137;
          }
          while ( v138 != v137 );
          v122 = *(unsigned int *)(a2 + 16);
        }
        v145 = (__int64 *)(a2 + 32 * v122 + 96);
        v146 = &v145[v122];
        if ( v145 != v146 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v145, a3, a4, a5, a6) )
              return 0;
            ++v145;
          }
          while ( v146 != v145 );
          v122 = *(unsigned int *)(a2 + 16);
        }
        v149 = (__int64 *)(a2 + 40 * v122 + 96);
        v150 = &v149[v122];
        while ( v150 != v149 )
        {
          v151 = *v149++;
          if ( !(unsigned __int8)sub_672CC0(a1, v151, a3, a4, a5, a6) )
            return 0;
        }
        return v13;
      case 0x2F:
        v69 = (__int64 *)(a2 + 24);
        v70 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
        if ( v70 == a2 + 24 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v69, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v70 == ++v69 )
            return 1;
        }
        return v13;
      case 0x31:
        v67 = (__int64 *)(a2 + 32);
        v68 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 32;
        if ( v68 == a2 + 32 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v67, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v68 == ++v67 )
            return 1;
        }
        return v13;
      case 0x32:
        v25 = (__int64 *)(a2 + 80);
        v26 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
        if ( v26 == a2 + 80 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v25, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v26 == ++v25 )
            return 1;
        }
        return v13;
      case 0x33:
        v23 = (__int64 *)(a2 + 64);
        v24 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 64;
        if ( v24 == a2 + 64 )
          goto LABEL_181;
        do
        {
          if ( !(unsigned __int8)sub_672CC0(a1, *v23, a3, a4, a5, a6) )
            return 0;
          ++v23;
        }
        while ( (__int64 *)v24 != v23 );
LABEL_181:
        v13 = sub_672E00(a1, (__int64 *)(a2 + 24), a3, a4, a5, a6);
        if ( !(_BYTE)v13 )
          return 0;
        v88 = *(unsigned int *)(a2 + 16);
        v89 = (__int64 *)(a2 + 8 * v88 + 64);
        v90 = &v89[v88];
        if ( v89 != v90 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v89, a3, a4, a5, a6) )
              return 0;
            ++v89;
          }
          while ( v90 != v89 );
          v88 = *(unsigned int *)(a2 + 16);
        }
        v105 = (__int64 *)(a2 + 16 * v88 + 64);
        v106 = &v105[v88];
        if ( v105 != v106 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v105, a3, a4, a5, a6) )
              return 0;
            ++v105;
          }
          while ( v106 != v105 );
          v88 = *(unsigned int *)(a2 + 16);
        }
        v125 = (__int64 *)(a2 + 24 * v88 + 64);
        v126 = &v125[v88];
        if ( v125 != v126 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v125, a3, a4, a5, a6) )
              return 0;
            ++v125;
          }
          while ( v126 != v125 );
          v88 = *(unsigned int *)(a2 + 16);
        }
        v127 = (__int64 *)(a2 + 32 * v88 + 64);
        v128 = &v127[v88];
        if ( v127 != v128 )
        {
          while ( (unsigned __int8)sub_672CC0(a1, *v127, a3, a4, a5, a6) )
          {
            if ( v128 == ++v127 )
              return v13;
          }
          return 0;
        }
        return v13;
      case 0x34:
        if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64), a3, a4, a5, a6)
          || !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 72), a3, a4, a5, a6) )
        {
          return 0;
        }
        v19 = (__int64 *)(a2 + 64);
        v20 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 64;
        if ( v20 == a2 + 64 )
          goto LABEL_254;
        do
        {
          if ( !(unsigned __int8)sub_672CC0(a1, *v19, a3, a4, a5, a6) )
            return 0;
          ++v19;
        }
        while ( (__int64 *)v20 != v19 );
LABEL_254:
        v13 = sub_672E00(a1, (__int64 *)(a2 + 24), a3, a4, a5, a6);
        if ( !(_BYTE)v13 )
          return 0;
        v116 = *(unsigned int *)(a2 + 16);
        v117 = (__int64 *)(a2 + 8 * v116 + 64);
        v118 = &v117[v116];
        if ( v117 != v118 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v117, a3, a4, a5, a6) )
              return 0;
            ++v117;
          }
          while ( v118 != v117 );
          v116 = *(unsigned int *)(a2 + 16);
        }
        v133 = (__int64 *)(a2 + 16 * v116 + 64);
        v134 = &v133[v116];
        if ( v133 != v134 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v133, a3, a4, a5, a6) )
              return 0;
            ++v133;
          }
          while ( v134 != v133 );
          v116 = *(unsigned int *)(a2 + 16);
        }
        v143 = (__int64 *)(a2 + 24 * v116 + 64);
        v144 = &v143[v116];
        if ( v143 != v144 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v143, a3, a4, a5, a6) )
              return 0;
            ++v143;
          }
          while ( v144 != v143 );
          v116 = *(unsigned int *)(a2 + 16);
        }
        v147 = (__int64 *)(a2 + 32 * v116 + 64);
        v148 = &v147[v116];
        if ( v147 != v148 )
        {
          while ( (unsigned __int8)sub_672CC0(a1, *v147, a3, a4, a5, a6) )
          {
            if ( v148 == ++v147 )
              return v13;
          }
          return 0;
        }
        return v13;
      case 0x36:
        v75 = (__int64 *)(a2 + 144);
        v76 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 144;
        if ( v76 == a2 + 144 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v75, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v76 == ++v75 )
            return 1;
        }
        return v13;
      case 0x41:
        v31 = *(unsigned int *)(a2 + 16);
        v32 = (__int64 *)(a2 + 24);
        v33 = a2 + 8 * v31 + 24;
        if ( v33 == a2 + 24 )
          goto LABEL_188;
        do
        {
          a2 = *v32;
          if ( !(unsigned __int8)sub_672CC0(a1, *v32, a3, a4, a5, a6) )
            return 0;
          ++v32;
        }
        while ( (__int64 *)v33 != v32 );
        v31 = *(unsigned int *)(v10 + 16);
LABEL_188:
        v91 = v31;
        v167 = 0;
        v92 = (__int64 *)(v10 + 8 * v31 + 24);
        v166 = v92;
        v93 = &v92[v91];
        v94 = 0;
LABEL_189:
        if ( v93 != v92 )
          goto LABEL_190;
LABEL_195:
        if ( !v94 )
          return 1;
LABEL_190:
        v95 = v94 & 3;
        if ( (_DWORD)v95 )
          v92 = (__int64 *)sub_ACE280(&v166, a2, v95, a8, a9, a10);
        while ( 1 )
        {
          a2 = *v92;
          if ( !(unsigned __int8)sub_672CC0(a1, *v92, a3, a4, a5, a6) )
            return 0;
          v94 = v167;
          if ( (v167 & 3) != 0 )
          {
            if ( v167 <= 3 )
            {
              a2 = 1;
              sub_ACE0F0(&v166, 1);
            }
            else
            {
              sub_ACE150(&v166);
            }
            v92 = v166;
            v94 = v167;
            goto LABEL_189;
          }
          v92 = v166 + 1;
          v166 = v92;
          if ( v93 == v92 )
            goto LABEL_195;
        }
      case 0x45:
        v34 = (__int64 *)(a2 + 40);
        v35 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
        if ( v35 == a2 + 40 )
          goto LABEL_18;
        while ( (unsigned __int8)sub_672CC0(a1, *v34, a3, a4, a5, a6) )
        {
          if ( (__int64 *)v35 == ++v34 )
            goto LABEL_18;
        }
        return 0;
      case 0x4D:
        v29 = (__int64 *)(a2 + 24);
        v30 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 16);
        if ( a2 + 24 == v30 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v29, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v30 == ++v29 )
            return 1;
        }
        return v13;
      case 0x4F:
        v59 = *(unsigned int *)(a2 + 16);
        v60 = (__int64 *)(a2 + 24);
        v61 = a2 + 8 * v59 + 24;
        if ( v61 == a2 + 24 )
          goto LABEL_202;
        do
        {
          if ( !(unsigned __int8)sub_672CC0(a1, *v60, a3, a4, a5, a6) )
            return 0;
          ++v60;
        }
        while ( (__int64 *)v61 != v60 );
        v59 = *(unsigned int *)(a2 + 16);
LABEL_202:
        v96 = v59;
        v97 = (__int64 *)(a2 + v96 * 8 + 24);
        v98 = &v97[v96];
        if ( v97 == &v97[v96] )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v97, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( v98 == ++v97 )
            return 1;
        }
        return v13;
      case 0x52:
        if ( !(unsigned __int8)sub_674510(a1, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), a3, a4, a5, a6)
          || !(unsigned __int8)sub_675910(a1, *(_QWORD *)(a2 + 80), *(__int64 **)(a2 + 96), a3, a4, a5, a6) )
        {
          return 0;
        }
        v79 = (__int64 *)(a2 + 104);
        v80 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 104;
        if ( v80 == a2 + 104 )
          goto LABEL_260;
        do
        {
          if ( !(unsigned __int8)sub_672CC0(a1, *v79, a3, a4, a5, a6) )
            return 0;
          ++v79;
        }
        while ( (__int64 *)v80 != v79 );
LABEL_260:
        v13 = sub_672E00(a1, (__int64 *)(a2 + 24), a3, a4, a5, a6);
        if ( !(_BYTE)v13 )
          return 0;
        v119 = *(unsigned int *)(a2 + 16);
        v120 = (__int64 *)(a2 + 8 * v119 + 104);
        v121 = &v120[v119];
        if ( v120 != v121 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v120, a3, a4, a5, a6) )
              return 0;
            ++v120;
          }
          while ( v121 != v120 );
          v119 = *(unsigned int *)(a2 + 16);
        }
        v129 = (__int64 *)(a2 + 16 * v119 + 104);
        v130 = &v129[v119];
        if ( v129 != v130 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v129, a3, a4, a5, a6) )
              return 0;
            ++v129;
          }
          while ( v130 != v129 );
          v119 = *(unsigned int *)(a2 + 16);
        }
        v139 = (__int64 *)(a2 + 24 * v119 + 104);
        v140 = &v139[v119];
        if ( v139 != v140 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v139, a3, a4, a5, a6) )
              return 0;
            ++v139;
          }
          while ( v140 != v139 );
          v119 = *(unsigned int *)(a2 + 16);
        }
        v152 = (__int64 *)(a2 + 32 * v119 + 104);
        v153 = &v152[v119];
        if ( v152 == v153 )
        {
LABEL_361:
          if ( *(_DWORD *)(a2 + 48) != 1 )
            return 1;
          v156 = (__int64 *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 104);
          v157 = &v156[*(unsigned int *)(a2 + 16)];
          while ( v157 != v156 )
          {
            v158 = *v156++;
            if ( !(unsigned __int8)sub_672CC0(a1, v158, a3, a4, a5, a6) )
              return 0;
          }
          v159 = (__int64 *)(v10 + 48LL * *(unsigned int *)(v10 + 16) + 104);
          v160 = &v159[*(unsigned int *)(v10 + 16)];
          while ( v160 != v159 )
          {
            v161 = *v159++;
            if ( !(unsigned __int8)sub_672CC0(a1, v161, a3, a4, a5, a6) )
              return 0;
          }
          v162 = *(unsigned int *)(v10 + 16);
          v163 = (__int64 *)(v10 + 56 * v162 + 104);
          v164 = &v163[v162];
          while ( v164 != v163 )
          {
            v165 = *v163++;
            if ( !(unsigned __int8)sub_672CC0(a1, v165, a3, a4, a5, a6) )
              return 0;
          }
        }
        else
        {
          while ( (unsigned __int8)sub_672CC0(a1, *v152, a3, a4, a5, a6) )
          {
            if ( v153 == ++v152 )
              goto LABEL_361;
          }
          return 0;
        }
        return v13;
      case 0x57:
        if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6) )
          return 0;
        v15 = *(_QWORD *)(a2 + 64);
        return sub_672CC0(a1, v15, a3, a4, a5, a6);
      case 0x5A:
        v36 = (__int64 *)(a2 + 24);
        v37 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
        if ( v37 == a2 + 24 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v36, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v37 == ++v36 )
            return 1;
        }
        return v13;
      case 0x5D:
        v38 = (__int64 *)(a2 + 24);
        v39 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 16);
        if ( a2 + 24 == v39 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v38, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v39 == ++v38 )
            return 1;
        }
        return v13;
      case 0x5E:
        if ( !(unsigned __int8)sub_674510(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), a3, a4, a5, a6)
          || !(unsigned __int8)sub_675910(a1, *(_QWORD *)(a2 + 72), *(__int64 **)(a2 + 88), a3, a4, a5, a6) )
        {
          return 0;
        }
        v51 = (__int64 *)(a2 + 96);
        v52 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 96;
        if ( v52 == a2 + 96 )
          goto LABEL_248;
        do
        {
          if ( !(unsigned __int8)sub_672CC0(a1, *v51, a3, a4, a5, a6) )
            return 0;
          ++v51;
        }
        while ( (__int64 *)v52 != v51 );
LABEL_248:
        v13 = sub_672E00(a1, (__int64 *)(a2 + 24), a3, a4, a5, a6);
        if ( !(_BYTE)v13 )
          return 0;
        v113 = *(unsigned int *)(a2 + 16);
        v114 = (__int64 *)(a2 + 8 * v113 + 96);
        v115 = &v114[v113];
        if ( v114 != v115 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v114, a3, a4, a5, a6) )
              return 0;
            ++v114;
          }
          while ( v115 != v114 );
          v113 = *(unsigned int *)(a2 + 16);
        }
        v131 = (__int64 *)(a2 + 16 * v113 + 96);
        v132 = &v131[v113];
        if ( v131 != v132 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v131, a3, a4, a5, a6) )
              return 0;
            ++v131;
          }
          while ( v132 != v131 );
          v113 = *(unsigned int *)(a2 + 16);
        }
        v141 = (__int64 *)(a2 + 24 * v113 + 96);
        v142 = &v141[v113];
        if ( v141 != v142 )
        {
          do
          {
            if ( !(unsigned __int8)sub_672CC0(a1, *v141, a3, a4, a5, a6) )
              return 0;
            ++v141;
          }
          while ( v142 != v141 );
          v113 = *(unsigned int *)(a2 + 16);
        }
        v154 = (__int64 *)(a2 + 32 * v113 + 96);
        v155 = &v154[v113];
        if ( v154 != v155 )
        {
          while ( (unsigned __int8)sub_672CC0(a1, *v154, a3, a4, a5, a6) )
          {
            if ( v155 == ++v154 )
              return v13;
          }
          return 0;
        }
        return v13;
      case 0x5F:
        v81 = (__int64 *)(a2 + 40);
        v82 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
        if ( v82 == a2 + 40 )
          goto LABEL_18;
        do
        {
          if ( !(unsigned __int8)sub_672CC0(a1, *v81, a3, a4, a5, a6) )
            return 0;
          ++v81;
        }
        while ( (__int64 *)v82 != v81 );
LABEL_18:
        v15 = *(_QWORD *)(a2 + 24);
        return sub_672CC0(a1, v15, a3, a4, a5, a6);
      case 0x62:
        v21 = (__int64 *)(a2 + 104);
        v22 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 104;
        if ( v22 == a2 + 104 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v21, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v22 == ++v21 )
            return 1;
        }
        return v13;
      case 0x6A:
        v62 = (__int64 *)(a2 + 80);
        v63 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
        if ( v63 == a2 + 80 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v62, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v63 == ++v62 )
            return 1;
        }
        return v13;
      case 0x6B:
        v11 = (__int64 *)(a2 + 80);
        v12 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
        if ( v12 == a2 + 80 )
          return 1;
        while ( 1 )
        {
          v13 = sub_672CC0(a1, *v11, a3, a4, a5, a6);
          if ( !(_BYTE)v13 )
            break;
          if ( (__int64 *)v12 == ++v11 )
            return 1;
        }
        return v13;
      case 0x6C:
        v73 = *(_DWORD *)(a2 + 16);
        if ( !v73 )
          return 1;
        v74 = 0;
        break;
      default:
        return 1;
    }
    while ( 1 )
    {
      sub_A91B60(&v166, a2, v74);
      if ( !(unsigned __int8)sub_672CC0(a1, (__int64)v166, a3, a4, a5, a6) )
        break;
      if ( !(unsigned __int8)sub_672CC0(a1, v167, a3, a4, a5, a6) )
        return 0;
      if ( v73 == ++v74 )
        return 1;
    }
    return 0;
  }
  else
  {
    return 1;
  }
}

