__int64 __fastcall sub_5FBA20(const __m128i *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __m128i v4; // rax
  __int64 *v5; // r13
  __int64 *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r12
  __m128i v12; // xmm0
  __int64 v13; // rsi
  __int64 *v14; // rbx
  __int64 *v15; // rbx
  __int64 *v16; // rbx
  __int64 *i; // rax
  __int64 v18; // rcx
  __int64 *v19; // rbx
  __int64 *v20; // rbx
  __int64 *v21; // rbx
  __int64 *v22; // rbx
  __int64 *v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 *j; // rax
  __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 *v34; // rbx
  __int64 *v35; // rbx
  __int64 *v36; // rbx
  __int64 *v37; // rbx
  __int64 *k; // rax
  __int64 v39; // rcx
  __int64 *v40; // rax
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 *v44; // rbx
  __int64 *m; // rax
  __int64 v46; // rsi
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 *v49; // rax
  __int64 v50; // rcx
  __int64 *v51; // rax
  __int64 v52; // rcx
  __int64 *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 *v56; // rbx
  __int64 v57; // rax
  __int64 *v58; // rbx
  __int64 *v59; // rbx
  __int64 *v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 *v63; // rax
  __int64 v64; // rcx
  __int64 *v65; // rbx
  __int64 *jj; // rax
  __int64 v67; // rcx
  __int64 *v68; // rax
  __int64 v69; // rcx
  __int64 *v70; // rax
  __int64 v71; // rcx
  __int64 *v72; // rbx
  __int64 v73; // rsi
  __int64 *v74; // rbx
  __int64 *v75; // rbx
  __m128i *v76; // rcx
  __int64 v77; // rbx
  __int64 *n; // rax
  __int64 v79; // rsi
  __int64 v80; // rcx
  __int64 *v81; // rax
  __int64 v82; // rcx
  __int64 *v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rsi
  __int64 *v87; // rax
  __int64 *v88; // rdx
  __int64 v89; // rdx
  __int64 *v90; // rax
  __int64 *v91; // rdx
  __int64 v92; // rax
  __int64 *v93; // rbx
  __int64 *v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 *v97; // rax
  __int64 v98; // rcx
  __int64 *v99; // rbx
  __int64 *v100; // rbx
  __int64 v102; // [rsp+0h] [rbp-A8h]
  __m128i v103; // [rsp+8h] [rbp-A0h]
  __int64 v104; // [rsp+8h] [rbp-A0h]
  __int64 *v105; // [rsp+8h] [rbp-A0h]
  __int64 v106; // [rsp+8h] [rbp-A0h]
  __int64 v107; // [rsp+8h] [rbp-A0h]
  __int64 v108; // [rsp+8h] [rbp-A0h]
  __int64 v109; // [rsp+8h] [rbp-A0h]
  __int64 *v110; // [rsp+8h] [rbp-A0h]
  __int64 *v111; // [rsp+8h] [rbp-A0h]
  __int64 *v112; // [rsp+8h] [rbp-A0h]
  __int64 *v113; // [rsp+8h] [rbp-A0h]
  __int64 *v114; // [rsp+8h] [rbp-A0h]
  __int64 v115; // [rsp+8h] [rbp-A0h]
  __int64 v116; // [rsp+8h] [rbp-A0h]
  __int64 *v117; // [rsp+8h] [rbp-A0h]
  __int64 *v118; // [rsp+8h] [rbp-A0h]
  __int64 *v119; // [rsp+8h] [rbp-A0h]
  __int64 *v120; // [rsp+8h] [rbp-A0h]
  __int64 *v121; // [rsp+8h] [rbp-A0h]
  __int64 *v122; // [rsp+8h] [rbp-A0h]
  __int64 *v123; // [rsp+8h] [rbp-A0h]
  __int64 v124; // [rsp+8h] [rbp-A0h]
  __int64 v125; // [rsp+8h] [rbp-A0h]
  __int64 *v126; // [rsp+8h] [rbp-A0h]
  __int64 *v127; // [rsp+8h] [rbp-A0h]
  __int64 *v128; // [rsp+8h] [rbp-A0h]
  __int64 v129; // [rsp+8h] [rbp-A0h]
  __int64 v130; // [rsp+8h] [rbp-A0h]
  __int64 *v131; // [rsp+8h] [rbp-A0h]
  __int64 *v132; // [rsp+8h] [rbp-A0h]
  __int64 *v133; // [rsp+8h] [rbp-A0h]
  __int64 v134; // [rsp+8h] [rbp-A0h]
  __int64 *v135; // [rsp+8h] [rbp-A0h]
  __int64 v136; // [rsp+8h] [rbp-A0h]
  __int64 *v137; // [rsp+8h] [rbp-A0h]
  __int64 *v138; // [rsp+8h] [rbp-A0h]
  __int64 v139; // [rsp+8h] [rbp-A0h]
  __int64 v140; // [rsp+8h] [rbp-A0h]
  __int64 *v141; // [rsp+8h] [rbp-A0h]
  __int64 *v142; // [rsp+8h] [rbp-A0h]
  __int64 v143; // [rsp+8h] [rbp-A0h]
  __int64 v144; // [rsp+8h] [rbp-A0h]
  __int64 v145; // [rsp+8h] [rbp-A0h]
  __int64 *v146; // [rsp+8h] [rbp-A0h]
  __int64 *v147; // [rsp+8h] [rbp-A0h]
  __int64 *v148; // [rsp+8h] [rbp-A0h]
  __int64 *v149; // [rsp+8h] [rbp-A0h]
  __int64 *v150; // [rsp+8h] [rbp-A0h]
  __int64 v151; // [rsp+8h] [rbp-A0h]
  __int64 v152; // [rsp+8h] [rbp-A0h]
  __int64 v153; // [rsp+8h] [rbp-A0h]
  __int64 *v154; // [rsp+8h] [rbp-A0h]
  __int64 *v155; // [rsp+8h] [rbp-A0h]
  __int64 ii; // [rsp+8h] [rbp-A0h]
  __int64 v157; // [rsp+8h] [rbp-A0h]
  __int64 *v158; // [rsp+8h] [rbp-A0h]
  __int64 v159; // [rsp+8h] [rbp-A0h]
  __int64 v160; // [rsp+8h] [rbp-A0h]
  __int64 *v161; // [rsp+8h] [rbp-A0h]
  __int64 *v162; // [rsp+8h] [rbp-A0h]
  __int64 *v163; // [rsp+8h] [rbp-A0h]
  __m128i *v164; // [rsp+28h] [rbp-80h] BYREF
  __m128i v165; // [rsp+30h] [rbp-78h] BYREF
  __m128i v166; // [rsp+40h] [rbp-68h] BYREF
  __m128i v167[5]; // [rsp+50h] [rbp-58h] BYREF

  sub_5F9AA0(a1, a2);
  v4.m128i_i64[0] = *(_QWORD *)(a2 + 24);
  if ( v4.m128i_i64[0] )
  {
    v5 = (__int64 *)(v4.m128i_i64[0] + 16);
    v4.m128i_i64[0] = *(unsigned int *)v4.m128i_i64[0];
    v6 = &v5[v4.m128i_i64[0]];
    if ( v6 != v5 )
    {
      while ( 1 )
      {
        v7 = *v5;
        v8 = a1->m128i_i64[0];
        v164 = (__m128i *)a1;
        v9 = *(unsigned int *)(v8 + 8);
        v4.m128i_i64[0] = (unsigned int)(*(_DWORD *)(v7 + 8) - 4);
        switch ( *(_DWORD *)(v7 + 8) )
        {
          case 4:
            v57 = 8LL * *(unsigned int *)(v7 + 16);
            a2 = *(_QWORD *)(v7 + v57 + 24);
            v4.m128i_i64[1] = v57 + 24;
            v4.m128i_i64[0] = v7 + 24;
            if ( a2 )
            {
              v103.m128i_i64[1] = v7 + 24;
              sub_5F99B0(a1, a2);
              v4.m128i_i64[0] = v7 + 24;
              v103.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 24;
              if ( v103.m128i_i64[0] == v7 + 24 )
                goto LABEL_15;
            }
            else
            {
              v103.m128i_i64[0] = v7 + v4.m128i_i64[1];
              if ( v7 + v4.m128i_i64[1] == v4.m128i_i64[0] )
                goto LABEL_9;
            }
            v58 = (__int64 *)v4.m128i_i64[0];
            do
            {
              a2 = *v58;
              if ( *v58 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v58;
            }
            while ( (__int64 *)v103.m128i_i64[0] != v58 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 5:
          case 8:
          case 0xF:
          case 0x17:
          case 0x19:
          case 0x23:
          case 0x2A:
          case 0x40:
          case 0x43:
          case 0x4B:
          case 0x4C:
          case 0x56:
          case 0x5C:
            goto LABEL_11;
          case 6:
            v135 = (__int64 *)(v7 + 8LL * *(unsigned int *)(v7 + 16) + 24);
            v4.m128i_i64[0] = v7 + 24;
            if ( v135 == (__int64 *)(v7 + 24) )
            {
              a2 = *v135;
              if ( *v135 )
                goto LABEL_12;
              goto LABEL_9;
            }
            do
            {
              if ( *(_QWORD *)v4.m128i_i64[0] )
              {
                v103.m128i_i64[1] = v4.m128i_i64[0];
                sub_5F99B0(a1, *(_QWORD *)v4.m128i_i64[0]);
                v4.m128i_i64[0] = v103.m128i_i64[1];
              }
              v4.m128i_i64[0] += 8;
            }
            while ( v135 != (__int64 *)v4.m128i_i64[0] );
            v4.m128i_i64[0] = *(unsigned int *)(v7 + 16);
            a2 = *(_QWORD *)(v7 + 8 * v4.m128i_i64[0] + 24);
            if ( a2 )
              goto LABEL_12;
            goto LABEL_15;
          case 7:
            v136 = v7 + 8LL * *(unsigned int *)(v7 + 16) + 72;
            v4.m128i_i64[0] = v7 + 72;
            if ( v136 == v7 + 72 )
              goto LABEL_19;
            do
            {
              if ( *(_QWORD *)v4.m128i_i64[0] )
              {
                v103.m128i_i64[1] = v4.m128i_i64[0];
                sub_5F99B0(a1, *(_QWORD *)v4.m128i_i64[0]);
                v4.m128i_i64[0] = v103.m128i_i64[1];
              }
              v4.m128i_i64[0] += 8;
            }
            while ( v136 != v4.m128i_i64[0] );
            a2 = *(_QWORD *)(v7 + 24);
            if ( !a2 )
              goto LABEL_29;
            goto LABEL_12;
          case 0x12:
            v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
            v61 = 8 * v4.m128i_i64[1];
            v139 = v7 + 8 * v4.m128i_i64[1] + 24;
            v4.m128i_i64[0] = v7 + 24;
            if ( v139 != v7 + 24 )
            {
              do
              {
                a2 = *(_QWORD *)v4.m128i_i64[0];
                if ( *(_QWORD *)v4.m128i_i64[0] )
                {
                  v103.m128i_i64[1] = v4.m128i_i64[0];
                  sub_5F99B0(a1, a2);
                  v4.m128i_i64[0] = v103.m128i_i64[1];
                }
                v4.m128i_i64[0] += 8;
              }
              while ( v139 != v4.m128i_i64[0] );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v61 = 8 * v4.m128i_i64[1];
              v4.m128i_i64[0] = v7 + 8 * v4.m128i_i64[1] + 24;
            }
            v140 = v4.m128i_i64[0] + v61;
            if ( v4.m128i_i64[0] + v61 == v4.m128i_i64[0] )
            {
              v62 = 0;
            }
            else
            {
              do
              {
                a2 = *(_QWORD *)v4.m128i_i64[0];
                if ( *(_QWORD *)v4.m128i_i64[0] )
                {
                  v103.m128i_i64[1] = v4.m128i_i64[0];
                  sub_5F99B0(a1, a2);
                  v4.m128i_i64[0] = v103.m128i_i64[1];
                }
                v4.m128i_i64[0] += 8;
              }
              while ( v140 != v4.m128i_i64[0] );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v62 = v4.m128i_i64[1];
            }
            v63 = (__int64 *)(v7 + 16 * v4.m128i_i64[1] + 24);
            v141 = &v63[v62];
            if ( v63 == &v63[v62] )
            {
              v64 = 0;
            }
            else
            {
              do
              {
                a2 = *v63;
                if ( *v63 )
                {
                  v103.m128i_i64[1] = (__int64)v63;
                  sub_5F99B0(a1, a2);
                  v63 = (__int64 *)v103.m128i_i64[1];
                }
                ++v63;
              }
              while ( v141 != v63 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v64 = v4.m128i_i64[1];
            }
            v65 = (__int64 *)(v7 + 8 * (3 * v4.m128i_i64[1] + 3));
            v4.m128i_i64[0] = (__int64)v65;
            v142 = &v65[v64];
            if ( v4.m128i_i64[0] == v4.m128i_i64[0] + v64 * 8 )
              goto LABEL_15;
            do
            {
              a2 = *v65;
              if ( *v65 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v65;
            }
            while ( v142 != v65 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x13:
            v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
            v95 = 8 * v4.m128i_i64[1];
            v159 = v7 + 8 * v4.m128i_i64[1] + 24;
            v4.m128i_i64[0] = v7 + 24;
            if ( v159 != v7 + 24 )
            {
              do
              {
                a2 = *(_QWORD *)v4.m128i_i64[0];
                if ( *(_QWORD *)v4.m128i_i64[0] )
                {
                  v103.m128i_i64[1] = v4.m128i_i64[0];
                  sub_5F99B0(a1, a2);
                  v4.m128i_i64[0] = v103.m128i_i64[1];
                }
                v4.m128i_i64[0] += 8;
              }
              while ( v159 != v4.m128i_i64[0] );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v95 = 8 * v4.m128i_i64[1];
              v4.m128i_i64[0] = v7 + 8 * v4.m128i_i64[1] + 24;
            }
            v160 = v4.m128i_i64[0] + v95;
            if ( v4.m128i_i64[0] + v95 == v4.m128i_i64[0] )
            {
              v96 = 0;
            }
            else
            {
              do
              {
                a2 = *(_QWORD *)v4.m128i_i64[0];
                if ( *(_QWORD *)v4.m128i_i64[0] )
                {
                  v103.m128i_i64[1] = v4.m128i_i64[0];
                  sub_5F99B0(a1, a2);
                  v4.m128i_i64[0] = v103.m128i_i64[1];
                }
                v4.m128i_i64[0] += 8;
              }
              while ( v160 != v4.m128i_i64[0] );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v96 = v4.m128i_i64[1];
            }
            v97 = (__int64 *)(v7 + 16 * v4.m128i_i64[1] + 24);
            v161 = &v97[v96];
            if ( v97 == &v97[v96] )
            {
              v98 = 0;
            }
            else
            {
              do
              {
                a2 = *v97;
                if ( *v97 )
                {
                  v103.m128i_i64[1] = (__int64)v97;
                  sub_5F99B0(a1, a2);
                  v97 = (__int64 *)v103.m128i_i64[1];
                }
                ++v97;
              }
              while ( v161 != v97 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v98 = v4.m128i_i64[1];
            }
            v99 = (__int64 *)(v7 + 8 * (3 * v4.m128i_i64[1] + 3));
            v4.m128i_i64[0] = (__int64)v99;
            v162 = &v99[v98];
            if ( v4.m128i_i64[0] == v4.m128i_i64[0] + v98 * 8 )
              goto LABEL_15;
            do
            {
              a2 = *v99;
              if ( *v99 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v99;
            }
            while ( v162 != v99 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x16:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 40;
            v100 = (__int64 *)(v7 + 40);
            v163 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v100 )
              goto LABEL_9;
            do
            {
              a2 = *v100;
              if ( *v100 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v100;
            }
            while ( v163 != v100 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x18:
          case 0x69:
            goto LABEL_19;
          case 0x1A:
          case 0x28:
          case 0x44:
            a2 = *(_QWORD *)(v7 + 40);
            if ( a2 )
              goto LABEL_12;
            if ( ++v5 == v6 )
              return v4.m128i_i64[0];
            continue;
          case 0x1C:
            v73 = *(_QWORD *)(v7 + 16);
            if ( v73 )
            {
              v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, v73);
              a2 = *(_QWORD *)(v7 + 48);
              if ( a2 )
                goto LABEL_12;
              goto LABEL_15;
            }
            a2 = *(_QWORD *)(v7 + 48);
            if ( a2 )
              goto LABEL_12;
            goto LABEL_9;
          case 0x1D:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 40;
            v74 = (__int64 *)(v7 + 40);
            v149 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v74 )
              goto LABEL_9;
            do
            {
              a2 = *v74;
              if ( *v74 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v74;
            }
            while ( v149 != v74 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x20:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 24;
            v14 = (__int64 *)(v7 + 24);
            v105 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v14 )
              goto LABEL_9;
            do
            {
              a2 = *v14;
              if ( *v14 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v14;
            }
            while ( v105 != v14 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x22:
          case 0x46:
          case 0x49:
            v13 = *(_QWORD *)(v7 + 24);
            if ( !v13 )
            {
LABEL_11:
              a2 = *(_QWORD *)(v7 + 16);
              if ( !a2 )
                goto LABEL_9;
              goto LABEL_12;
            }
            v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, v13);
            a2 = *(_QWORD *)(v7 + 16);
            if ( a2 )
              goto LABEL_12;
            goto LABEL_15;
          case 0x24:
            v108 = v7 + 8LL * *(unsigned int *)(v7 + 16) + 40;
            for ( i = (__int64 *)(v7 + 40); (__int64 *)v108 != i; ++i )
            {
              if ( *i )
              {
                v103.m128i_i64[1] = (__int64)i;
                sub_5F99B0(a1, *i);
                i = (__int64 *)v103.m128i_i64[1];
              }
            }
            a2 = *(_QWORD *)(v7 + 24);
            if ( a2 )
              sub_5F99B0(a1, a2);
            v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
            v4.m128i_i64[0] = v7 + 8 * v4.m128i_i64[1] + 40;
            v109 = v4.m128i_i64[0] + 8 * v4.m128i_i64[1];
            if ( v4.m128i_i64[0] == v109 )
            {
              v18 = 0;
            }
            else
            {
              do
              {
                a2 = *(_QWORD *)v4.m128i_i64[0];
                if ( *(_QWORD *)v4.m128i_i64[0] )
                {
                  v103.m128i_i64[1] = v4.m128i_i64[0];
                  sub_5F99B0(a1, a2);
                  v4.m128i_i64[0] = v103.m128i_i64[1];
                }
                v4.m128i_i64[0] += 8;
              }
              while ( v109 != v4.m128i_i64[0] );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v18 = v4.m128i_i64[1];
            }
            v19 = (__int64 *)(v7 + 16 * v4.m128i_i64[1] + 40);
            v4.m128i_i64[0] = (__int64)v19;
            v110 = &v19[v18];
            if ( v4.m128i_i64[0] == v4.m128i_i64[0] + v18 * 8 )
              goto LABEL_15;
            do
            {
              a2 = *v19;
              if ( *v19 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v19;
            }
            while ( v110 != v19 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x25:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 24;
            v20 = (__int64 *)(v7 + 24);
            v111 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v20 )
              goto LABEL_9;
            do
            {
              a2 = *v20;
              if ( *v20 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v20;
            }
            while ( v111 != v20 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x26:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 104;
            v21 = (__int64 *)(v7 + 104);
            v112 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v21 )
              goto LABEL_9;
            do
            {
              a2 = *v21;
              if ( *v21 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v21;
            }
            while ( v112 != v21 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x29:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 80;
            v23 = (__int64 *)(v7 + 80);
            v114 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v23 )
              goto LABEL_9;
            do
            {
              a2 = *v23;
              if ( *v23 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v23;
            }
            while ( v114 != v23 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x2C:
            v25 = *(_QWORD *)(v7 + 16);
            if ( !v25 )
              goto LABEL_22;
            v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, v25);
            a2 = *(_QWORD *)(v7 + 32);
            if ( a2 )
              goto LABEL_12;
            goto LABEL_15;
          case 0x2D:
            v115 = v7 + 8LL * *(unsigned int *)(v7 + 16) + 96;
            for ( j = (__int64 *)(v7 + 96); (__int64 *)v115 != j; ++j )
            {
              if ( *j )
              {
                v103.m128i_i64[1] = (__int64)j;
                sub_5F99B0(a1, *j);
                j = (__int64 *)v103.m128i_i64[1];
              }
            }
            a2 = v7 + 24;
            sub_5FB7F0(&v164, (__int64 *)(v7 + 24));
            v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
            v4.m128i_i64[0] = v7 + 8 * v4.m128i_i64[1] + 96;
            v27 = 0;
            v116 = v4.m128i_i64[0] + 8 * v4.m128i_i64[1];
            if ( v4.m128i_i64[0] != v116 )
            {
              do
              {
                a2 = *(_QWORD *)v4.m128i_i64[0];
                if ( *(_QWORD *)v4.m128i_i64[0] )
                {
                  v103.m128i_i64[1] = v4.m128i_i64[0];
                  sub_5F99B0(a1, a2);
                  v4.m128i_i64[0] = v103.m128i_i64[1];
                }
                v4.m128i_i64[0] += 8;
              }
              while ( v116 != v4.m128i_i64[0] );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v27 = v4.m128i_i64[1];
            }
            v28 = (__int64 *)(v7 + 16 * v4.m128i_i64[1] + 96);
            v117 = &v28[v27];
            if ( v28 == &v28[v27] )
            {
              v29 = 0;
            }
            else
            {
              do
              {
                a2 = *v28;
                if ( *v28 )
                {
                  v103.m128i_i64[1] = (__int64)v28;
                  sub_5F99B0(a1, a2);
                  v28 = (__int64 *)v103.m128i_i64[1];
                }
                ++v28;
              }
              while ( v117 != v28 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v29 = v4.m128i_i64[1];
            }
            v30 = (__int64 *)(v7 + 24 * v4.m128i_i64[1] + 96);
            v118 = &v30[v29];
            if ( v30 == &v30[v29] )
            {
              v31 = 0;
            }
            else
            {
              do
              {
                a2 = *v30;
                if ( *v30 )
                {
                  v103.m128i_i64[1] = (__int64)v30;
                  sub_5F99B0(a1, a2);
                  v30 = (__int64 *)v103.m128i_i64[1];
                }
                ++v30;
              }
              while ( v118 != v30 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v31 = v4.m128i_i64[1];
            }
            v32 = (__int64 *)(v7 + 32 * v4.m128i_i64[1] + 96);
            v119 = &v32[v31];
            if ( v32 == &v32[v31] )
            {
              v33 = 0;
            }
            else
            {
              do
              {
                a2 = *v32;
                if ( *v32 )
                {
                  v103.m128i_i64[1] = (__int64)v32;
                  sub_5F99B0(a1, a2);
                  v32 = (__int64 *)v103.m128i_i64[1];
                }
                ++v32;
              }
              while ( v119 != v32 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v33 = v4.m128i_i64[1];
            }
            v34 = (__int64 *)(v7 + 40 * v4.m128i_i64[1] + 96);
            v4.m128i_i64[0] = (__int64)v34;
            v120 = &v34[v33];
            if ( v4.m128i_i64[0] == v4.m128i_i64[0] + v33 * 8 )
              goto LABEL_15;
            do
            {
              a2 = *v34;
              if ( *v34 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v34;
            }
            while ( v120 != v34 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x2F:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 24;
            v35 = (__int64 *)(v7 + 24);
            v121 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v35 )
              goto LABEL_9;
            do
            {
              a2 = *v35;
              if ( *v35 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v35;
            }
            while ( v121 != v35 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x31:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 32;
            v36 = (__int64 *)(v7 + 32);
            v122 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v36 )
              goto LABEL_9;
            do
            {
              a2 = *v36;
              if ( *v36 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v36;
            }
            while ( v122 != v36 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x32:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 80;
            v37 = (__int64 *)(v7 + 80);
            v123 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v37 )
              goto LABEL_9;
            do
            {
              a2 = *v37;
              if ( *v37 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v37;
            }
            while ( v123 != v37 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x33:
            v124 = v7 + 8LL * *(unsigned int *)(v7 + 16) + 64;
            for ( k = (__int64 *)(v7 + 64); (__int64 *)v124 != k; ++k )
            {
              if ( *k )
              {
                v103.m128i_i64[1] = (__int64)k;
                sub_5F99B0(a1, *k);
                k = (__int64 *)v103.m128i_i64[1];
              }
            }
            a2 = v7 + 24;
            sub_5FB7F0(&v164, (__int64 *)(v7 + 24));
            v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
            v4.m128i_i64[0] = v7 + 8 * v4.m128i_i64[1] + 64;
            v39 = 0;
            v125 = v4.m128i_i64[0] + 8 * v4.m128i_i64[1];
            if ( v4.m128i_i64[0] != v125 )
            {
              do
              {
                a2 = *(_QWORD *)v4.m128i_i64[0];
                if ( *(_QWORD *)v4.m128i_i64[0] )
                {
                  v103.m128i_i64[1] = v4.m128i_i64[0];
                  sub_5F99B0(a1, a2);
                  v4.m128i_i64[0] = v103.m128i_i64[1];
                }
                v4.m128i_i64[0] += 8;
              }
              while ( v125 != v4.m128i_i64[0] );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v39 = v4.m128i_i64[1];
            }
            v40 = (__int64 *)(v7 + 16 * v4.m128i_i64[1] + 64);
            v126 = &v40[v39];
            if ( v40 == &v40[v39] )
            {
              v41 = 0;
            }
            else
            {
              do
              {
                a2 = *v40;
                if ( *v40 )
                {
                  v103.m128i_i64[1] = (__int64)v40;
                  sub_5F99B0(a1, a2);
                  v40 = (__int64 *)v103.m128i_i64[1];
                }
                ++v40;
              }
              while ( v126 != v40 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v41 = v4.m128i_i64[1];
            }
            v42 = (__int64 *)(v7 + 24 * v4.m128i_i64[1] + 64);
            v127 = &v42[v41];
            if ( v42 == &v42[v41] )
            {
              v43 = 0;
            }
            else
            {
              do
              {
                a2 = *v42;
                if ( *v42 )
                {
                  v103.m128i_i64[1] = (__int64)v42;
                  sub_5F99B0(a1, a2);
                  v42 = (__int64 *)v103.m128i_i64[1];
                }
                ++v42;
              }
              while ( v127 != v42 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v43 = v4.m128i_i64[1];
            }
            v44 = (__int64 *)(v7 + 32 * v4.m128i_i64[1] + 64);
            v4.m128i_i64[0] = (__int64)v44;
            v128 = &v44[v43];
            if ( v4.m128i_i64[0] == v4.m128i_i64[0] + v43 * 8 )
              goto LABEL_15;
            do
            {
              a2 = *v44;
              if ( *v44 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v44;
            }
            while ( v128 != v44 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x34:
            v129 = v7 + 8LL * *(unsigned int *)(v7 + 16) + 64;
            for ( m = (__int64 *)(v7 + 64); (__int64 *)v129 != m; ++m )
            {
              if ( *m )
              {
                v103.m128i_i64[1] = (__int64)m;
                sub_5F99B0(a1, *m);
                m = (__int64 *)v103.m128i_i64[1];
              }
            }
            v46 = *(_QWORD *)(v7 + 24);
            if ( v46 )
              sub_5F99B0(a1, v46);
            v47 = *(_QWORD *)(v7 + 40);
            if ( v47 )
              sub_5F99B0(a1, v47);
            v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
            v4.m128i_i64[0] = v7 + 8 * v4.m128i_i64[1] + 64;
            v130 = v4.m128i_i64[0] + 8 * v4.m128i_i64[1];
            if ( v4.m128i_i64[0] == v130 )
            {
              v48 = 0;
            }
            else
            {
              do
              {
                if ( *(_QWORD *)v4.m128i_i64[0] )
                {
                  v103.m128i_i64[1] = v4.m128i_i64[0];
                  sub_5F99B0(a1, *(_QWORD *)v4.m128i_i64[0]);
                  v4.m128i_i64[0] = v103.m128i_i64[1];
                }
                v4.m128i_i64[0] += 8;
              }
              while ( v130 != v4.m128i_i64[0] );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v48 = v4.m128i_i64[1];
            }
            v49 = (__int64 *)(v7 + 16 * v4.m128i_i64[1] + 64);
            v131 = &v49[v48];
            if ( v49 == &v49[v48] )
            {
              v50 = 0;
            }
            else
            {
              do
              {
                if ( *v49 )
                {
                  v103.m128i_i64[1] = (__int64)v49;
                  sub_5F99B0(a1, *v49);
                  v49 = (__int64 *)v103.m128i_i64[1];
                }
                ++v49;
              }
              while ( v131 != v49 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v50 = v4.m128i_i64[1];
            }
            v51 = (__int64 *)(v7 + 24 * v4.m128i_i64[1] + 64);
            v132 = &v51[v50];
            if ( v51 == &v51[v50] )
            {
              v52 = 0;
            }
            else
            {
              do
              {
                if ( *v51 )
                {
                  v103.m128i_i64[1] = (__int64)v51;
                  sub_5F99B0(a1, *v51);
                  v51 = (__int64 *)v103.m128i_i64[1];
                }
                ++v51;
              }
              while ( v132 != v51 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v52 = v4.m128i_i64[1];
            }
            v53 = (__int64 *)(v7 + 32 * v4.m128i_i64[1] + 64);
            v133 = &v53[v52];
            if ( v53 != &v53[v52] )
            {
              do
              {
                if ( *v53 )
                {
                  v103.m128i_i64[1] = (__int64)v53;
                  sub_5F99B0(a1, *v53);
                  v53 = (__int64 *)v103.m128i_i64[1];
                }
                ++v53;
              }
              while ( v133 != v53 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
            }
            v4.m128i_i64[0] = v7 + 40 * v4.m128i_i64[1] + 64;
            if ( *(_QWORD *)v4.m128i_i64[0] )
            {
              sub_5F99B0(a1, *(_QWORD *)v4.m128i_i64[0]);
              v4.m128i_i64[0] = v7 + 40LL * *(unsigned int *)(v7 + 16) + 64;
            }
            a2 = *(_QWORD *)(v4.m128i_i64[0] + 8);
            if ( !a2 )
              goto LABEL_15;
            goto LABEL_12;
          case 0x36:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 144;
            v75 = (__int64 *)(v7 + 144);
            v150 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v75 )
              goto LABEL_9;
            do
            {
              a2 = *v75;
              if ( *v75 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v75;
            }
            while ( v150 != v75 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x41:
            v4.m128i_i64[1] = 8LL * *(unsigned int *)(v7 + 16);
            v151 = v7 + v4.m128i_i64[1] + 24;
            v4.m128i_i64[0] = v7 + 24;
            if ( v151 != v7 + 24 )
            {
              do
              {
                a2 = *(_QWORD *)v4.m128i_i64[0];
                if ( *(_QWORD *)v4.m128i_i64[0] )
                {
                  v103.m128i_i64[1] = v4.m128i_i64[0];
                  sub_5F99B0(a1, a2);
                  v4.m128i_i64[0] = v103.m128i_i64[1];
                }
                v4.m128i_i64[0] += 8;
              }
              while ( v151 != v4.m128i_i64[0] );
              v4.m128i_i64[1] = 8LL * *(unsigned int *)(v7 + 16);
              v4.m128i_i64[0] = v7 + v4.m128i_i64[1] + 24;
            }
            v76 = &v165;
            v165 = (__m128i)v4.m128i_u64[0];
            v77 = v4.m128i_i64[0] + v4.m128i_i64[1];
            v4.m128i_i64[1] = 0;
            v103.m128i_i64[0] = (__int64)&v165;
LABEL_304:
            if ( v77 != v4.m128i_i64[0] )
              goto LABEL_305;
LABEL_311:
            if ( !v4.m128i_i64[1] )
              goto LABEL_15;
            if ( (v4.m128i_i8[8] & 3) != 0 )
            {
              while ( 1 )
              {
                a2 = *(_QWORD *)sub_ACE280(
                                  v103.m128i_i64[0],
                                  a2,
                                  v4.m128i_i64[1],
                                  v76,
                                  v2,
                                  v3,
                                  v102,
                                  v103.m128i_i64[0],
                                  v103.m128i_i64[1]);
                if ( a2 )
                  goto LABEL_307;
LABEL_308:
                v4.m128i_i64[1] = v165.m128i_i64[1];
                if ( (v165.m128i_i8[8] & 3) == 0 )
                  break;
                if ( v165.m128i_i64[1] <= 3uLL )
                {
                  a2 = 1;
                  sub_ACE0F0(v103.m128i_i64[0], 1);
                  v4 = v165;
                  goto LABEL_304;
                }
                sub_ACE150(v103.m128i_i64[0]);
                v4 = v165;
                if ( v77 == v165.m128i_i64[0] )
                  goto LABEL_311;
LABEL_305:
                if ( (v4.m128i_i8[8] & 3) == 0 )
                  goto LABEL_313;
              }
              v4.m128i_i64[0] = v165.m128i_i64[0] + 8;
              v165.m128i_i64[0] = v4.m128i_i64[0];
              if ( v77 == v4.m128i_i64[0] )
                goto LABEL_315;
            }
            do
            {
              do
              {
LABEL_313:
                a2 = *(_QWORD *)v4.m128i_i64[0];
                if ( *(_QWORD *)v4.m128i_i64[0] )
                {
LABEL_307:
                  sub_5F99B0(a1, a2);
                  goto LABEL_308;
                }
                v4.m128i_i64[0] += 8;
                v165.m128i_i64[0] = v4.m128i_i64[0];
              }
              while ( v77 != v4.m128i_i64[0] );
LABEL_315:
              ;
            }
            while ( v4.m128i_i64[1] );
            goto LABEL_15;
          case 0x45:
            v104 = v7 + 8LL * *(unsigned int *)(v7 + 16) + 40;
            v4.m128i_i64[0] = v7 + 40;
            if ( v104 == v7 + 40 )
              goto LABEL_19;
            do
            {
              if ( *(_QWORD *)v4.m128i_i64[0] )
              {
                v103.m128i_i64[1] = v4.m128i_i64[0];
                sub_5F99B0(a1, *(_QWORD *)v4.m128i_i64[0]);
                v4.m128i_i64[0] = v103.m128i_i64[1];
              }
              v4.m128i_i64[0] += 8;
            }
            while ( v104 != v4.m128i_i64[0] );
            a2 = *(_QWORD *)(v7 + 24);
            if ( !a2 )
              goto LABEL_29;
            goto LABEL_12;
          case 0x4D:
            v4.m128i_i64[0] = v7 + 24;
            v106 = v7 + 24 + 8LL * *(unsigned int *)(v7 + 16);
            if ( v7 + 24 == v106 )
              goto LABEL_9;
            v15 = (__int64 *)(v7 + 24);
            do
            {
              a2 = *v15;
              if ( *v15 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v15;
            }
            while ( (__int64 *)v106 != v15 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x4E:
LABEL_22:
            a2 = *(_QWORD *)(v7 + 32);
            if ( !a2 )
              goto LABEL_9;
            goto LABEL_12;
          case 0x4F:
            v54 = 8LL * *(unsigned int *)(v7 + 16);
            v4.m128i_i64[1] = v7 + 24;
            v4.m128i_i64[0] = v7 + v54 + 24;
            if ( v4.m128i_i64[0] == v7 + 24 )
            {
              v4.m128i_i64[1] = v4.m128i_i64[0] + v54;
              if ( v4.m128i_i64[0] == v4.m128i_i64[0] + v54 )
                goto LABEL_9;
LABEL_194:
              v56 = (__int64 *)v4.m128i_i64[0];
              do
              {
                a2 = *v56;
                if ( *v56 )
                {
                  v134 = v4.m128i_i64[1];
                  v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
                  v4.m128i_i64[1] = v134;
                }
                ++v56;
              }
              while ( (__int64 *)v4.m128i_i64[1] != v56 );
              v8 = a1->m128i_i64[0];
              v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
              goto LABEL_5;
            }
            do
            {
              a2 = *(_QWORD *)v4.m128i_i64[1];
              if ( *(_QWORD *)v4.m128i_i64[1] )
              {
                v103 = v4;
                sub_5F99B0(a1, a2);
                v4 = v103;
              }
              v4.m128i_i64[1] += 8;
            }
            while ( v4.m128i_i64[0] != v4.m128i_i64[1] );
            v55 = 8LL * *(unsigned int *)(v7 + 16);
            v4.m128i_i64[0] = v7 + v55 + 24;
            v4.m128i_i64[1] = v4.m128i_i64[0] + v55;
            if ( v4.m128i_i64[0] != v4.m128i_i64[1] )
              goto LABEL_194;
            goto LABEL_15;
          case 0x52:
            v152 = v7 + 8LL * *(unsigned int *)(v7 + 16) + 104;
            for ( n = (__int64 *)(v7 + 104); (__int64 *)v152 != n; ++n )
            {
              if ( *n )
              {
                v103.m128i_i64[1] = (__int64)n;
                sub_5F99B0(a1, *n);
                n = (__int64 *)v103.m128i_i64[1];
              }
            }
            v79 = *(_QWORD *)(v7 + 24);
            if ( v79 )
              sub_5F99B0(a1, v79);
            a2 = *(_QWORD *)(v7 + 40);
            if ( a2 )
              sub_5F99B0(a1, a2);
            v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
            v4.m128i_i64[0] = v7 + 8 * v4.m128i_i64[1] + 104;
            v153 = v4.m128i_i64[0] + 8 * v4.m128i_i64[1];
            if ( v4.m128i_i64[0] == v153 )
            {
              v80 = 0;
            }
            else
            {
              do
              {
                a2 = *(_QWORD *)v4.m128i_i64[0];
                if ( *(_QWORD *)v4.m128i_i64[0] )
                {
                  v103.m128i_i64[1] = v4.m128i_i64[0];
                  sub_5F99B0(a1, a2);
                  v4.m128i_i64[0] = v103.m128i_i64[1];
                }
                v4.m128i_i64[0] += 8;
              }
              while ( v153 != v4.m128i_i64[0] );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v80 = v4.m128i_i64[1];
            }
            v81 = (__int64 *)(v7 + 16 * v4.m128i_i64[1] + 104);
            v154 = &v81[v80];
            if ( v81 == &v81[v80] )
            {
              v82 = 0;
            }
            else
            {
              do
              {
                a2 = *v81;
                if ( *v81 )
                {
                  v103.m128i_i64[1] = (__int64)v81;
                  sub_5F99B0(a1, a2);
                  v81 = (__int64 *)v103.m128i_i64[1];
                }
                ++v81;
              }
              while ( v154 != v81 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v82 = v4.m128i_i64[1];
            }
            v83 = (__int64 *)(v7 + 24 * v4.m128i_i64[1] + 104);
            v155 = &v83[v82];
            if ( v83 == &v83[v82] )
            {
              v84 = 0;
            }
            else
            {
              do
              {
                a2 = *v83;
                if ( *v83 )
                {
                  v103.m128i_i64[1] = (__int64)v83;
                  sub_5F99B0(a1, a2);
                  v83 = (__int64 *)v103.m128i_i64[1];
                }
                ++v83;
              }
              while ( v155 != v83 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v84 = 8 * v4.m128i_i64[1];
            }
            v4.m128i_i64[0] = v7 + 32 * v4.m128i_i64[1] + 104;
            for ( ii = v4.m128i_i64[0] + v84; ii != v4.m128i_i64[0]; v4.m128i_i64[0] += 8 )
            {
              a2 = *(_QWORD *)v4.m128i_i64[0];
              if ( *(_QWORD *)v4.m128i_i64[0] )
              {
                v103.m128i_i64[1] = v4.m128i_i64[0];
                sub_5F99B0(a1, a2);
                v4.m128i_i64[0] = v103.m128i_i64[1];
              }
            }
            if ( *(_DWORD *)(v7 + 48) == 1 )
            {
              v85 = *(unsigned int *)(v7 + 16);
              v86 = 8 * v85;
              v87 = (__int64 *)(v7 + 40 * v85 + 104);
              v88 = &v87[v85];
              if ( v87 == v88 )
              {
                v89 = 0;
              }
              else
              {
                do
                {
                  if ( *v87 )
                  {
                    v103.m128i_i64[1] = (__int64)v87;
                    v103.m128i_i64[0] = (__int64)v88;
                    sub_5F99B0(a1, *v87);
                    v87 = (__int64 *)v103.m128i_i64[1];
                    v88 = (__int64 *)v103.m128i_i64[0];
                  }
                  ++v87;
                }
                while ( v88 != v87 );
                v85 = *(unsigned int *)(v7 + 16);
                v86 = 8 * v85;
                v89 = v85;
              }
              v90 = (__int64 *)(v7 + 48 * v85 + 104);
              v91 = &v90[v89];
              if ( v90 == v91 )
              {
                v92 = 0;
              }
              else
              {
                do
                {
                  if ( *v90 )
                  {
                    v103.m128i_i64[1] = (__int64)v90;
                    v103.m128i_i64[0] = (__int64)v91;
                    sub_5F99B0(a1, *v90);
                    v90 = (__int64 *)v103.m128i_i64[1];
                    v91 = (__int64 *)v103.m128i_i64[0];
                  }
                  ++v90;
                }
                while ( v91 != v90 );
                v85 = *(unsigned int *)(v7 + 16);
                v86 = 8 * v85;
                v92 = v85;
              }
              a2 = v86 - v85;
              v93 = (__int64 *)(v7 + 8 * a2 + 104);
              for ( v4.m128i_i64[0] = (__int64)&v93[v92]; (__int64 *)v4.m128i_i64[0] != v93; ++v93 )
              {
                a2 = *v93;
                if ( *v93 )
                {
                  v157 = v4.m128i_i64[0];
                  sub_5F99B0(a1, a2);
                  v4.m128i_i64[0] = v157;
                }
              }
            }
            goto LABEL_15;
          case 0x57:
            v24 = *(_QWORD *)(v7 + 16);
            if ( v24 )
            {
              v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, v24);
              a2 = *(_QWORD *)(v7 + 64);
              if ( a2 )
                goto LABEL_12;
              goto LABEL_15;
            }
            a2 = *(_QWORD *)(v7 + 64);
            if ( a2 )
              goto LABEL_12;
            goto LABEL_9;
          case 0x5A:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 24;
            v22 = (__int64 *)(v7 + 24);
            v113 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v22 )
              goto LABEL_9;
            do
            {
              a2 = *v22;
              if ( *v22 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v22;
            }
            while ( v113 != v22 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x5D:
            v4.m128i_i64[0] = v7 + 24;
            v107 = v7 + 24 + 8LL * *(unsigned int *)(v7 + 16);
            if ( v7 + 24 == v107 )
              goto LABEL_9;
            v16 = (__int64 *)(v7 + 24);
            do
            {
              a2 = *v16;
              if ( *v16 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v16;
            }
            while ( (__int64 *)v107 != v16 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x5E:
            v144 = v7 + 8LL * *(unsigned int *)(v7 + 16) + 96;
            for ( jj = (__int64 *)(v7 + 96); (__int64 *)v144 != jj; ++jj )
            {
              if ( *jj )
              {
                v103.m128i_i64[1] = (__int64)jj;
                sub_5F99B0(a1, *jj);
                jj = (__int64 *)v103.m128i_i64[1];
              }
            }
            a2 = v7 + 24;
            sub_5FB7F0(&v164, (__int64 *)(v7 + 24));
            v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
            v4.m128i_i64[0] = v7 + 8 * v4.m128i_i64[1] + 96;
            v67 = 0;
            v145 = v4.m128i_i64[0] + 8 * v4.m128i_i64[1];
            if ( v4.m128i_i64[0] != v145 )
            {
              do
              {
                a2 = *(_QWORD *)v4.m128i_i64[0];
                if ( *(_QWORD *)v4.m128i_i64[0] )
                {
                  v103.m128i_i64[1] = v4.m128i_i64[0];
                  sub_5F99B0(a1, a2);
                  v4.m128i_i64[0] = v103.m128i_i64[1];
                }
                v4.m128i_i64[0] += 8;
              }
              while ( v145 != v4.m128i_i64[0] );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v67 = v4.m128i_i64[1];
            }
            v68 = (__int64 *)(v7 + 16 * v4.m128i_i64[1] + 96);
            v146 = &v68[v67];
            if ( v68 == &v68[v67] )
            {
              v69 = 0;
            }
            else
            {
              do
              {
                a2 = *v68;
                if ( *v68 )
                {
                  v103.m128i_i64[1] = (__int64)v68;
                  sub_5F99B0(a1, a2);
                  v68 = (__int64 *)v103.m128i_i64[1];
                }
                ++v68;
              }
              while ( v146 != v68 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v69 = v4.m128i_i64[1];
            }
            v70 = (__int64 *)(v7 + 24 * v4.m128i_i64[1] + 96);
            v147 = &v70[v69];
            if ( v70 == &v70[v69] )
            {
              v71 = 0;
            }
            else
            {
              do
              {
                a2 = *v70;
                if ( *v70 )
                {
                  v103.m128i_i64[1] = (__int64)v70;
                  sub_5F99B0(a1, a2);
                  v70 = (__int64 *)v103.m128i_i64[1];
                }
                ++v70;
              }
              while ( v147 != v70 );
              v4.m128i_i64[1] = *(unsigned int *)(v7 + 16);
              v71 = v4.m128i_i64[1];
            }
            v72 = (__int64 *)(v7 + 32 * v4.m128i_i64[1] + 96);
            v4.m128i_i64[0] = (__int64)v72;
            v148 = &v72[v71];
            if ( v4.m128i_i64[0] == v4.m128i_i64[0] + v71 * 8 )
              goto LABEL_15;
            do
            {
              a2 = *v72;
              if ( *v72 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v72;
            }
            while ( v148 != v72 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x5F:
            v143 = v7 + 8LL * *(unsigned int *)(v7 + 16) + 40;
            v4.m128i_i64[0] = v7 + 40;
            if ( v143 == v7 + 40 )
            {
LABEL_19:
              a2 = *(_QWORD *)(v7 + 24);
              if ( a2 )
                goto LABEL_12;
              if ( ++v5 == v6 )
                return v4.m128i_i64[0];
            }
            else
            {
              do
              {
                if ( *(_QWORD *)v4.m128i_i64[0] )
                {
                  v103.m128i_i64[1] = v4.m128i_i64[0];
                  sub_5F99B0(a1, *(_QWORD *)v4.m128i_i64[0]);
                  v4.m128i_i64[0] = v103.m128i_i64[1];
                }
                v4.m128i_i64[0] += 8;
              }
              while ( v143 != v4.m128i_i64[0] );
              a2 = *(_QWORD *)(v7 + 24);
              if ( a2 )
              {
LABEL_12:
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
                v8 = a1->m128i_i64[0];
                v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
                goto LABEL_5;
              }
LABEL_29:
              v8 = a1->m128i_i64[0];
              v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
LABEL_5:
              if ( (_DWORD)v9 != v4.m128i_i32[2] )
              {
                v10 = *(_QWORD *)v8;
                v11 = v9 << 6;
                v4.m128i_i64[1] <<= 6;
                v4.m128i_i64[0] = v10 + v11;
                if ( v11 != v4.m128i_i64[1] )
                {
                  for ( v4.m128i_i64[1] = v10 + v4.m128i_i64[1] - 64;
                        v4.m128i_i64[0] < (unsigned __int64)v4.m128i_i64[1];
                        *(__m128i *)(v4.m128i_i64[1] + 108) = _mm_loadu_si128((const __m128i *)((char *)&v167[0].m128i_u64[1]
                                                                                              + 4)) )
                  {
                    v12 = _mm_loadu_si128((const __m128i *)v4.m128i_i64[0]);
                    v4.m128i_i64[1] -= 64;
                    v4.m128i_i64[0] += 64;
                    v165 = v12;
                    v166 = _mm_loadu_si128((const __m128i *)(v4.m128i_i64[0] - 48));
                    v167[0] = _mm_loadu_si128((const __m128i *)(v4.m128i_i64[0] - 32));
                    v167[1] = _mm_loadu_si128((const __m128i *)(v4.m128i_i64[0] - 16));
                    *(__m128i *)(v4.m128i_i64[0] - 64) = _mm_loadu_si128((const __m128i *)(v4.m128i_i64[1] + 64));
                    *(__m128i *)(v4.m128i_i64[0] - 48) = _mm_loadu_si128((const __m128i *)(v4.m128i_i64[1] + 80));
                    *(__m128i *)(v4.m128i_i64[0] - 32) = _mm_loadu_si128((const __m128i *)(v4.m128i_i64[1] + 96));
                    *(__m128i *)(v4.m128i_i64[0] - 20) = _mm_loadu_si128((const __m128i *)(v4.m128i_i64[1] + 108));
                    *(__m128i *)(v4.m128i_i64[1] + 64) = _mm_load_si128(&v165);
                    *(__m128i *)(v4.m128i_i64[1] + 80) = _mm_load_si128(&v166);
                    *(__m128i *)(v4.m128i_i64[1] + 96) = _mm_load_si128(v167);
                  }
                }
              }
LABEL_9:
              if ( ++v5 == v6 )
                return v4.m128i_i64[0];
            }
            break;
          case 0x62:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 104;
            v94 = (__int64 *)(v7 + 104);
            v158 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v94 )
              goto LABEL_9;
            do
            {
              a2 = *v94;
              if ( *v94 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v94;
            }
            while ( v158 != v94 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x6A:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 80;
            v60 = (__int64 *)(v7 + 80);
            v138 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v60 )
              goto LABEL_9;
            do
            {
              a2 = *v60;
              if ( *v60 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v60;
            }
            while ( v138 != v60 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x6B:
            v4.m128i_i64[0] = v7 + 8LL * *(unsigned int *)(v7 + 16) + 80;
            v59 = (__int64 *)(v7 + 80);
            v137 = (__int64 *)v4.m128i_i64[0];
            if ( (__int64 *)v4.m128i_i64[0] == v59 )
              goto LABEL_9;
            do
            {
              a2 = *v59;
              if ( *v59 )
                v4.m128i_i64[0] = (__int64)sub_5F99B0(a1, a2);
              ++v59;
            }
            while ( v137 != v59 );
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          case 0x6C:
            v4.m128i_i64[0] = *(unsigned int *)(v7 + 16);
            v103.m128i_i32[2] = v4.m128i_i32[0];
            if ( !v4.m128i_i32[0] )
              goto LABEL_9;
            v103.m128i_i32[0] = 0;
            do
            {
              while ( 1 )
              {
                sub_A91B60(&v165, v7, v103.m128i_u32[0]);
                if ( v165.m128i_i64[0] )
                  sub_5F99B0(a1, v165.m128i_i64[0]);
                a2 = v165.m128i_i64[1];
                if ( !v165.m128i_i64[1] )
                  break;
                sub_5F99B0(a1, v165.m128i_i64[1]);
                ++v103.m128i_i32[0];
                v4.m128i_i64[0] = v103.m128i_u32[0];
                if ( v103.m128i_i32[2] == v103.m128i_i32[0] )
                  goto LABEL_15;
              }
              ++v103.m128i_i32[0];
              v4.m128i_i64[0] = v103.m128i_u32[0];
            }
            while ( v103.m128i_i32[2] != v103.m128i_i32[0] );
LABEL_15:
            v8 = a1->m128i_i64[0];
            v4.m128i_i64[1] = *(unsigned int *)(a1->m128i_i64[0] + 8);
            goto LABEL_5;
          default:
            v4.m128i_i64[1] = (unsigned int)v9;
            goto LABEL_5;
        }
      }
    }
  }
  return v4.m128i_i64[0];
}

