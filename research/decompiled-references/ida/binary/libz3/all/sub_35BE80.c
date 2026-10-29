__int64 __fastcall sub_35BE80(_QWORD *a1)
{
  _QWORD *v2; // r12
  _QWORD *v3; // r13
  _QWORD *v4; // r14
  _QWORD *v5; // r15
  __int64 *v6; // rbx
  __int64 *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  _QWORD *v11; // r15
  __int64 *v12; // rbx
  __int64 *v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 *v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rdi
  _QWORD *v20; // r14
  _QWORD *v21; // r15
  __int64 *v22; // rbx
  __int64 *v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdi
  _QWORD *v26; // r15
  __int64 *v27; // rbx
  __int64 *v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 *v31; // rbx
  __int64 *v32; // r15
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 *v35; // rbx
  __int64 *v36; // r14
  __int64 v37; // rsi
  __int64 v38; // rdi
  _QWORD *v39; // r13
  _QWORD *v40; // r14
  _QWORD *v41; // r15
  __int64 *v42; // rbx
  __int64 *v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdi
  _QWORD *v46; // r15
  __int64 *v47; // rbx
  __int64 *v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 *v51; // rbx
  __int64 *v52; // r15
  __int64 v53; // rsi
  __int64 v54; // rdi
  _QWORD *v55; // r14
  _QWORD *v56; // r15
  __int64 *v57; // rbx
  __int64 *v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rdi
  _QWORD *v61; // r15
  __int64 *v62; // rbx
  __int64 *v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 *v66; // rbx
  __int64 *v67; // r15
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 *v70; // rbx
  __int64 *v71; // r14
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 *v74; // rbx
  __int64 *v75; // r13
  __int64 v76; // rsi
  __int64 v77; // rdi
  _QWORD *v78; // r12
  _QWORD *v79; // r13
  _QWORD *v80; // r14
  _QWORD *v81; // r15
  __int64 *v82; // rbx
  __int64 *v83; // rdx
  __int64 v84; // rsi
  __int64 v85; // rdi
  _QWORD *v86; // r15
  __int64 *v87; // rbx
  __int64 *v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 *v91; // rbx
  __int64 *v92; // r15
  __int64 v93; // rsi
  __int64 v94; // rdi
  _QWORD *v95; // r14
  _QWORD *v96; // r15
  __int64 *v97; // rbx
  __int64 *v98; // rdx
  __int64 v99; // rsi
  __int64 v100; // rdi
  _QWORD *v101; // r15
  __int64 *v102; // rbx
  __int64 *v103; // rdx
  __int64 v104; // rsi
  __int64 v105; // rdi
  __int64 *v106; // rbx
  __int64 *v107; // r15
  __int64 v108; // rsi
  __int64 v109; // rdi
  __int64 *v110; // rbx
  __int64 *v111; // r14
  __int64 v112; // rsi
  __int64 v113; // rdi
  _QWORD *v114; // r13
  _QWORD *v115; // r14
  _QWORD *v116; // r15
  __int64 *v117; // rbx
  __int64 *v118; // rdx
  __int64 v119; // rsi
  __int64 v120; // rdi
  _QWORD *v121; // r15
  __int64 *v122; // rbx
  __int64 *v123; // rdx
  __int64 v124; // rsi
  __int64 v125; // rdi
  __int64 *v126; // rbx
  __int64 *v127; // r15
  __int64 v128; // rsi
  __int64 v129; // rdi
  _QWORD *v130; // r14
  _QWORD *v131; // r15
  __int64 *v132; // rbx
  __int64 *v133; // rdx
  __int64 v134; // rsi
  __int64 v135; // rdi
  _QWORD *v136; // r15
  __int64 *v137; // rbx
  __int64 *v138; // rdx
  __int64 v139; // rsi
  __int64 v140; // rdi
  __int64 *v141; // rbx
  __int64 *v142; // r15
  __int64 v143; // rsi
  __int64 v144; // rdi
  __int64 *v145; // rbx
  __int64 *v146; // r14
  __int64 v147; // rsi
  __int64 v148; // rdi
  __int64 *v149; // rbx
  __int64 *v150; // r13
  __int64 v151; // rsi
  __int64 v152; // rdi
  __int64 *v153; // rbx
  __int64 *v154; // r12
  __int64 v155; // rsi
  __int64 v156; // rdi
  __int64 result; // rax
  unsigned __int64 v158; // [rsp+0h] [rbp-40h]
  unsigned __int64 v159; // [rsp+0h] [rbp-40h]
  unsigned __int64 v160; // [rsp+0h] [rbp-40h]
  unsigned __int64 v161; // [rsp+0h] [rbp-40h]
  unsigned __int64 v162; // [rsp+0h] [rbp-40h]
  unsigned __int64 v163; // [rsp+0h] [rbp-40h]
  unsigned __int64 v164; // [rsp+0h] [rbp-40h]
  unsigned __int64 v165; // [rsp+0h] [rbp-40h]
  unsigned __int64 v166; // [rsp+0h] [rbp-40h]
  unsigned __int64 v167; // [rsp+0h] [rbp-40h]
  unsigned __int64 v168; // [rsp+0h] [rbp-40h]
  unsigned __int64 v169; // [rsp+0h] [rbp-40h]
  unsigned __int64 v170; // [rsp+0h] [rbp-40h]
  unsigned __int64 v171; // [rsp+0h] [rbp-40h]
  unsigned __int64 v172; // [rsp+0h] [rbp-40h]
  unsigned __int64 v173; // [rsp+0h] [rbp-40h]

  if ( a1 )
  {
    v2 = (_QWORD *)*a1;
    if ( *a1 )
    {
      v3 = (_QWORD *)*v2;
      if ( *v2 )
      {
        v4 = (_QWORD *)*v3;
        if ( *v3 )
        {
          v5 = (_QWORD *)*v4;
          if ( *v4 )
          {
            sub_35BE80(*v5);
            sub_35BE80(v5[1]);
            v6 = (__int64 *)v5[3];
            if ( v6 )
            {
              v7 = &v6[*((unsigned int *)v6 - 1)];
              if ( v6 >= v7 )
                goto LABEL_14;
              do
              {
                while ( 1 )
                {
                  v8 = *v6;
                  if ( *v6 )
                  {
                    v9 = v5[2];
                    v10 = (*(_DWORD *)(v8 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v6 >= v7 )
                    goto LABEL_13;
                }
                v158 = (unsigned __int64)v7;
                ++v6;
                sub_15D7BC0(v9, v8);
                v7 = (__int64 *)v158;
              }
              while ( (unsigned __int64)v6 < v158 );
LABEL_13:
              v6 = (__int64 *)v5[3];
              if ( v6 )
LABEL_14:
                sub_186B220(v6 - 1);
            }
            sub_186B220(v5);
          }
          v11 = (_QWORD *)v4[1];
          if ( v11 )
          {
            sub_35BE80(*v11);
            sub_35BE80(v11[1]);
            v12 = (__int64 *)v11[3];
            if ( v12 )
            {
              v13 = &v12[*((unsigned int *)v12 - 1)];
              if ( v12 >= v13 )
                goto LABEL_25;
              do
              {
                while ( 1 )
                {
                  v14 = *v12;
                  if ( *v12 )
                  {
                    v15 = v11[2];
                    v10 = (*(_DWORD *)(v14 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v12 >= v13 )
                    goto LABEL_24;
                }
                v159 = (unsigned __int64)v13;
                ++v12;
                sub_15D7BC0(v15, v14);
                v13 = (__int64 *)v159;
              }
              while ( (unsigned __int64)v12 < v159 );
LABEL_24:
              v12 = (__int64 *)v11[3];
              if ( v12 )
LABEL_25:
                sub_186B220(v12 - 1);
            }
            sub_186B220(v11);
          }
          v16 = (__int64 *)v4[3];
          if ( v16 )
          {
            v17 = &v16[*((unsigned int *)v16 - 1)];
            if ( v16 >= v17 )
              goto LABEL_35;
            do
            {
              while ( 1 )
              {
                v18 = *v16;
                if ( *v16 )
                {
                  v19 = v4[2];
                  v10 = (*(_DWORD *)(v18 + 8))-- == 1;
                  if ( v10 )
                    break;
                }
                if ( ++v16 >= v17 )
                  goto LABEL_34;
              }
              sub_15D7BC0(v19, v18);
              ++v16;
            }
            while ( v16 < v17 );
LABEL_34:
            v16 = (__int64 *)v4[3];
            if ( v16 )
LABEL_35:
              sub_186B220(v16 - 1);
          }
          sub_186B220(v4);
        }
        v20 = (_QWORD *)v3[1];
        if ( v20 )
        {
          v21 = (_QWORD *)*v20;
          if ( *v20 )
          {
            sub_35BE80(*v21);
            sub_35BE80(v21[1]);
            v22 = (__int64 *)v21[3];
            if ( v22 )
            {
              v23 = &v22[*((unsigned int *)v22 - 1)];
              if ( v22 >= v23 )
                goto LABEL_47;
              do
              {
                while ( 1 )
                {
                  v24 = *v22;
                  if ( *v22 )
                  {
                    v25 = v21[2];
                    v10 = (*(_DWORD *)(v24 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v22 >= v23 )
                    goto LABEL_46;
                }
                v160 = (unsigned __int64)v23;
                ++v22;
                sub_15D7BC0(v25, v24);
                v23 = (__int64 *)v160;
              }
              while ( (unsigned __int64)v22 < v160 );
LABEL_46:
              v22 = (__int64 *)v21[3];
              if ( v22 )
LABEL_47:
                sub_186B220(v22 - 1);
            }
            sub_186B220(v21);
          }
          v26 = (_QWORD *)v20[1];
          if ( v26 )
          {
            sub_35BE80(*v26);
            sub_35BE80(v26[1]);
            v27 = (__int64 *)v26[3];
            if ( v27 )
            {
              v28 = &v27[*((unsigned int *)v27 - 1)];
              if ( v27 >= v28 )
                goto LABEL_58;
              do
              {
                while ( 1 )
                {
                  v29 = *v27;
                  if ( *v27 )
                  {
                    v30 = v26[2];
                    v10 = (*(_DWORD *)(v29 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v27 >= v28 )
                    goto LABEL_57;
                }
                v161 = (unsigned __int64)v28;
                ++v27;
                sub_15D7BC0(v30, v29);
                v28 = (__int64 *)v161;
              }
              while ( (unsigned __int64)v27 < v161 );
LABEL_57:
              v27 = (__int64 *)v26[3];
              if ( v27 )
LABEL_58:
                sub_186B220(v27 - 1);
            }
            sub_186B220(v26);
          }
          v31 = (__int64 *)v20[3];
          if ( v31 )
          {
            v32 = &v31[*((unsigned int *)v31 - 1)];
            if ( v31 >= v32 )
              goto LABEL_68;
            do
            {
              while ( 1 )
              {
                v33 = *v31;
                if ( *v31 )
                {
                  v34 = v20[2];
                  v10 = (*(_DWORD *)(v33 + 8))-- == 1;
                  if ( v10 )
                    break;
                }
                if ( ++v31 >= v32 )
                  goto LABEL_67;
              }
              sub_15D7BC0(v34, v33);
              ++v31;
            }
            while ( v31 < v32 );
LABEL_67:
            v31 = (__int64 *)v20[3];
            if ( v31 )
LABEL_68:
              sub_186B220(v31 - 1);
          }
          sub_186B220(v20);
        }
        v35 = (__int64 *)v3[3];
        if ( v35 )
        {
          v36 = &v35[*((unsigned int *)v35 - 1)];
          if ( v35 >= v36 )
            goto LABEL_78;
          do
          {
            while ( 1 )
            {
              v37 = *v35;
              if ( *v35 )
              {
                v38 = v3[2];
                v10 = (*(_DWORD *)(v37 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( ++v35 >= v36 )
                goto LABEL_77;
            }
            sub_15D7BC0(v38, v37);
            ++v35;
          }
          while ( v35 < v36 );
LABEL_77:
          v35 = (__int64 *)v3[3];
          if ( v35 )
LABEL_78:
            sub_186B220(v35 - 1);
        }
        sub_186B220(v3);
      }
      v39 = (_QWORD *)v2[1];
      if ( v39 )
      {
        v40 = (_QWORD *)*v39;
        if ( *v39 )
        {
          v41 = (_QWORD *)*v40;
          if ( *v40 )
          {
            sub_35BE80(*v41);
            sub_35BE80(v41[1]);
            v42 = (__int64 *)v41[3];
            if ( v42 )
            {
              v43 = &v42[*((unsigned int *)v42 - 1)];
              if ( v42 >= v43 )
                goto LABEL_91;
              do
              {
                while ( 1 )
                {
                  v44 = *v42;
                  if ( *v42 )
                  {
                    v45 = v41[2];
                    v10 = (*(_DWORD *)(v44 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v42 >= v43 )
                    goto LABEL_90;
                }
                v162 = (unsigned __int64)v43;
                ++v42;
                sub_15D7BC0(v45, v44);
                v43 = (__int64 *)v162;
              }
              while ( (unsigned __int64)v42 < v162 );
LABEL_90:
              v42 = (__int64 *)v41[3];
              if ( v42 )
LABEL_91:
                sub_186B220(v42 - 1);
            }
            sub_186B220(v41);
          }
          v46 = (_QWORD *)v40[1];
          if ( v46 )
          {
            sub_35BE80(*v46);
            sub_35BE80(v46[1]);
            v47 = (__int64 *)v46[3];
            if ( v47 )
            {
              v48 = &v47[*((unsigned int *)v47 - 1)];
              if ( v47 >= v48 )
                goto LABEL_102;
              do
              {
                while ( 1 )
                {
                  v49 = *v47;
                  if ( *v47 )
                  {
                    v50 = v46[2];
                    v10 = (*(_DWORD *)(v49 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v47 >= v48 )
                    goto LABEL_101;
                }
                v163 = (unsigned __int64)v48;
                ++v47;
                sub_15D7BC0(v50, v49);
                v48 = (__int64 *)v163;
              }
              while ( (unsigned __int64)v47 < v163 );
LABEL_101:
              v47 = (__int64 *)v46[3];
              if ( v47 )
LABEL_102:
                sub_186B220(v47 - 1);
            }
            sub_186B220(v46);
          }
          v51 = (__int64 *)v40[3];
          if ( v51 )
          {
            v52 = &v51[*((unsigned int *)v51 - 1)];
            if ( v51 >= v52 )
              goto LABEL_112;
            do
            {
              while ( 1 )
              {
                v53 = *v51;
                if ( *v51 )
                {
                  v54 = v40[2];
                  v10 = (*(_DWORD *)(v53 + 8))-- == 1;
                  if ( v10 )
                    break;
                }
                if ( ++v51 >= v52 )
                  goto LABEL_111;
              }
              sub_15D7BC0(v54, v53);
              ++v51;
            }
            while ( v51 < v52 );
LABEL_111:
            v51 = (__int64 *)v40[3];
            if ( v51 )
LABEL_112:
              sub_186B220(v51 - 1);
          }
          sub_186B220(v40);
        }
        v55 = (_QWORD *)v39[1];
        if ( v55 )
        {
          v56 = (_QWORD *)*v55;
          if ( *v55 )
          {
            sub_35BE80(*v56);
            sub_35BE80(v56[1]);
            v57 = (__int64 *)v56[3];
            if ( v57 )
            {
              v58 = &v57[*((unsigned int *)v57 - 1)];
              if ( v57 >= v58 )
                goto LABEL_124;
              do
              {
                while ( 1 )
                {
                  v59 = *v57;
                  if ( *v57 )
                  {
                    v60 = v56[2];
                    v10 = (*(_DWORD *)(v59 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v57 >= v58 )
                    goto LABEL_123;
                }
                v164 = (unsigned __int64)v58;
                ++v57;
                sub_15D7BC0(v60, v59);
                v58 = (__int64 *)v164;
              }
              while ( (unsigned __int64)v57 < v164 );
LABEL_123:
              v57 = (__int64 *)v56[3];
              if ( v57 )
LABEL_124:
                sub_186B220(v57 - 1);
            }
            sub_186B220(v56);
          }
          v61 = (_QWORD *)v55[1];
          if ( v61 )
          {
            sub_35BE80(*v61);
            sub_35BE80(v61[1]);
            v62 = (__int64 *)v61[3];
            if ( v62 )
            {
              v63 = &v62[*((unsigned int *)v62 - 1)];
              if ( v62 >= v63 )
                goto LABEL_135;
              do
              {
                while ( 1 )
                {
                  v64 = *v62;
                  if ( *v62 )
                  {
                    v65 = v61[2];
                    v10 = (*(_DWORD *)(v64 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v62 >= v63 )
                    goto LABEL_134;
                }
                v165 = (unsigned __int64)v63;
                ++v62;
                sub_15D7BC0(v65, v64);
                v63 = (__int64 *)v165;
              }
              while ( (unsigned __int64)v62 < v165 );
LABEL_134:
              v62 = (__int64 *)v61[3];
              if ( v62 )
LABEL_135:
                sub_186B220(v62 - 1);
            }
            sub_186B220(v61);
          }
          v66 = (__int64 *)v55[3];
          if ( v66 )
          {
            v67 = &v66[*((unsigned int *)v66 - 1)];
            if ( v66 >= v67 )
              goto LABEL_145;
            do
            {
              while ( 1 )
              {
                v68 = *v66;
                if ( *v66 )
                {
                  v69 = v55[2];
                  v10 = (*(_DWORD *)(v68 + 8))-- == 1;
                  if ( v10 )
                    break;
                }
                if ( ++v66 >= v67 )
                  goto LABEL_144;
              }
              sub_15D7BC0(v69, v68);
              ++v66;
            }
            while ( v66 < v67 );
LABEL_144:
            v66 = (__int64 *)v55[3];
            if ( v66 )
LABEL_145:
              sub_186B220(v66 - 1);
          }
          sub_186B220(v55);
        }
        v70 = (__int64 *)v39[3];
        if ( v70 )
        {
          v71 = &v70[*((unsigned int *)v70 - 1)];
          if ( v70 >= v71 )
            goto LABEL_155;
          do
          {
            while ( 1 )
            {
              v72 = *v70;
              if ( *v70 )
              {
                v73 = v39[2];
                v10 = (*(_DWORD *)(v72 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( ++v70 >= v71 )
                goto LABEL_154;
            }
            sub_15D7BC0(v73, v72);
            ++v70;
          }
          while ( v70 < v71 );
LABEL_154:
          v70 = (__int64 *)v39[3];
          if ( v70 )
LABEL_155:
            sub_186B220(v70 - 1);
        }
        sub_186B220(v39);
      }
      v74 = (__int64 *)v2[3];
      if ( v74 )
      {
        v75 = &v74[*((unsigned int *)v74 - 1)];
        if ( v74 >= v75 )
          goto LABEL_165;
        do
        {
          while ( 1 )
          {
            v76 = *v74;
            if ( *v74 )
            {
              v77 = v2[2];
              v10 = (*(_DWORD *)(v76 + 8))-- == 1;
              if ( v10 )
                break;
            }
            if ( ++v74 >= v75 )
              goto LABEL_164;
          }
          sub_15D7BC0(v77, v76);
          ++v74;
        }
        while ( v74 < v75 );
LABEL_164:
        v74 = (__int64 *)v2[3];
        if ( v74 )
LABEL_165:
          sub_186B220(v74 - 1);
      }
      sub_186B220(v2);
    }
    v78 = (_QWORD *)a1[1];
    if ( v78 )
    {
      v79 = (_QWORD *)*v78;
      if ( *v78 )
      {
        v80 = (_QWORD *)*v79;
        if ( *v79 )
        {
          v81 = (_QWORD *)*v80;
          if ( *v80 )
          {
            sub_35BE80(*v81);
            sub_35BE80(v81[1]);
            v82 = (__int64 *)v81[3];
            if ( v82 )
            {
              v83 = &v82[*((unsigned int *)v82 - 1)];
              if ( v82 >= v83 )
                goto LABEL_179;
              do
              {
                while ( 1 )
                {
                  v84 = *v82;
                  if ( *v82 )
                  {
                    v85 = v81[2];
                    v10 = (*(_DWORD *)(v84 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v82 >= v83 )
                    goto LABEL_178;
                }
                v166 = (unsigned __int64)v83;
                ++v82;
                sub_15D7BC0(v85, v84);
                v83 = (__int64 *)v166;
              }
              while ( (unsigned __int64)v82 < v166 );
LABEL_178:
              v82 = (__int64 *)v81[3];
              if ( v82 )
LABEL_179:
                sub_186B220(v82 - 1);
            }
            sub_186B220(v81);
          }
          v86 = (_QWORD *)v80[1];
          if ( v86 )
          {
            sub_35BE80(*v86);
            sub_35BE80(v86[1]);
            v87 = (__int64 *)v86[3];
            if ( v87 )
            {
              v88 = &v87[*((unsigned int *)v87 - 1)];
              if ( v87 >= v88 )
                goto LABEL_190;
              do
              {
                while ( 1 )
                {
                  v89 = *v87;
                  if ( *v87 )
                  {
                    v90 = v86[2];
                    v10 = (*(_DWORD *)(v89 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v87 >= v88 )
                    goto LABEL_189;
                }
                v167 = (unsigned __int64)v88;
                ++v87;
                sub_15D7BC0(v90, v89);
                v88 = (__int64 *)v167;
              }
              while ( (unsigned __int64)v87 < v167 );
LABEL_189:
              v87 = (__int64 *)v86[3];
              if ( v87 )
LABEL_190:
                sub_186B220(v87 - 1);
            }
            sub_186B220(v86);
          }
          v91 = (__int64 *)v80[3];
          if ( v91 )
          {
            v92 = &v91[*((unsigned int *)v91 - 1)];
            if ( v91 >= v92 )
              goto LABEL_200;
            do
            {
              while ( 1 )
              {
                v93 = *v91;
                if ( *v91 )
                {
                  v94 = v80[2];
                  v10 = (*(_DWORD *)(v93 + 8))-- == 1;
                  if ( v10 )
                    break;
                }
                if ( ++v91 >= v92 )
                  goto LABEL_199;
              }
              sub_15D7BC0(v94, v93);
              ++v91;
            }
            while ( v91 < v92 );
LABEL_199:
            v91 = (__int64 *)v80[3];
            if ( v91 )
LABEL_200:
              sub_186B220(v91 - 1);
          }
          sub_186B220(v80);
        }
        v95 = (_QWORD *)v79[1];
        if ( v95 )
        {
          v96 = (_QWORD *)*v95;
          if ( *v95 )
          {
            sub_35BE80(*v96);
            sub_35BE80(v96[1]);
            v97 = (__int64 *)v96[3];
            if ( v97 )
            {
              v98 = &v97[*((unsigned int *)v97 - 1)];
              if ( v97 >= v98 )
                goto LABEL_212;
              do
              {
                while ( 1 )
                {
                  v99 = *v97;
                  if ( *v97 )
                  {
                    v100 = v96[2];
                    v10 = (*(_DWORD *)(v99 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v97 >= v98 )
                    goto LABEL_211;
                }
                v168 = (unsigned __int64)v98;
                ++v97;
                sub_15D7BC0(v100, v99);
                v98 = (__int64 *)v168;
              }
              while ( (unsigned __int64)v97 < v168 );
LABEL_211:
              v97 = (__int64 *)v96[3];
              if ( v97 )
LABEL_212:
                sub_186B220(v97 - 1);
            }
            sub_186B220(v96);
          }
          v101 = (_QWORD *)v95[1];
          if ( v101 )
          {
            sub_35BE80(*v101);
            sub_35BE80(v101[1]);
            v102 = (__int64 *)v101[3];
            if ( v102 )
            {
              v103 = &v102[*((unsigned int *)v102 - 1)];
              if ( v102 >= v103 )
                goto LABEL_223;
              do
              {
                while ( 1 )
                {
                  v104 = *v102;
                  if ( *v102 )
                  {
                    v105 = v101[2];
                    v10 = (*(_DWORD *)(v104 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v102 >= v103 )
                    goto LABEL_222;
                }
                v169 = (unsigned __int64)v103;
                ++v102;
                sub_15D7BC0(v105, v104);
                v103 = (__int64 *)v169;
              }
              while ( (unsigned __int64)v102 < v169 );
LABEL_222:
              v102 = (__int64 *)v101[3];
              if ( v102 )
LABEL_223:
                sub_186B220(v102 - 1);
            }
            sub_186B220(v101);
          }
          v106 = (__int64 *)v95[3];
          if ( v106 )
          {
            v107 = &v106[*((unsigned int *)v106 - 1)];
            if ( v106 >= v107 )
              goto LABEL_233;
            do
            {
              while ( 1 )
              {
                v108 = *v106;
                if ( *v106 )
                {
                  v109 = v95[2];
                  v10 = (*(_DWORD *)(v108 + 8))-- == 1;
                  if ( v10 )
                    break;
                }
                if ( ++v106 >= v107 )
                  goto LABEL_232;
              }
              sub_15D7BC0(v109, v108);
              ++v106;
            }
            while ( v106 < v107 );
LABEL_232:
            v106 = (__int64 *)v95[3];
            if ( v106 )
LABEL_233:
              sub_186B220(v106 - 1);
          }
          sub_186B220(v95);
        }
        v110 = (__int64 *)v79[3];
        if ( v110 )
        {
          v111 = &v110[*((unsigned int *)v110 - 1)];
          if ( v110 >= v111 )
            goto LABEL_243;
          do
          {
            while ( 1 )
            {
              v112 = *v110;
              if ( *v110 )
              {
                v113 = v79[2];
                v10 = (*(_DWORD *)(v112 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( ++v110 >= v111 )
                goto LABEL_242;
            }
            sub_15D7BC0(v113, v112);
            ++v110;
          }
          while ( v110 < v111 );
LABEL_242:
          v110 = (__int64 *)v79[3];
          if ( v110 )
LABEL_243:
            sub_186B220(v110 - 1);
        }
        sub_186B220(v79);
      }
      v114 = (_QWORD *)v78[1];
      if ( v114 )
      {
        v115 = (_QWORD *)*v114;
        if ( *v114 )
        {
          v116 = (_QWORD *)*v115;
          if ( *v115 )
          {
            sub_35BE80(*v116);
            sub_35BE80(v116[1]);
            v117 = (__int64 *)v116[3];
            if ( v117 )
            {
              v118 = &v117[*((unsigned int *)v117 - 1)];
              if ( v117 >= v118 )
                goto LABEL_256;
              do
              {
                while ( 1 )
                {
                  v119 = *v117;
                  if ( *v117 )
                  {
                    v120 = v116[2];
                    v10 = (*(_DWORD *)(v119 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v117 >= v118 )
                    goto LABEL_255;
                }
                v170 = (unsigned __int64)v118;
                ++v117;
                sub_15D7BC0(v120, v119);
                v118 = (__int64 *)v170;
              }
              while ( (unsigned __int64)v117 < v170 );
LABEL_255:
              v117 = (__int64 *)v116[3];
              if ( v117 )
LABEL_256:
                sub_186B220(v117 - 1);
            }
            sub_186B220(v116);
          }
          v121 = (_QWORD *)v115[1];
          if ( v121 )
          {
            sub_35BE80(*v121);
            sub_35BE80(v121[1]);
            v122 = (__int64 *)v121[3];
            if ( v122 )
            {
              v123 = &v122[*((unsigned int *)v122 - 1)];
              if ( v122 >= v123 )
                goto LABEL_267;
              do
              {
                while ( 1 )
                {
                  v124 = *v122;
                  if ( *v122 )
                  {
                    v125 = v121[2];
                    v10 = (*(_DWORD *)(v124 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v122 >= v123 )
                    goto LABEL_266;
                }
                v171 = (unsigned __int64)v123;
                ++v122;
                sub_15D7BC0(v125, v124);
                v123 = (__int64 *)v171;
              }
              while ( (unsigned __int64)v122 < v171 );
LABEL_266:
              v122 = (__int64 *)v121[3];
              if ( v122 )
LABEL_267:
                sub_186B220(v122 - 1);
            }
            sub_186B220(v121);
          }
          v126 = (__int64 *)v115[3];
          if ( v126 )
          {
            v127 = &v126[*((unsigned int *)v126 - 1)];
            if ( v126 >= v127 )
              goto LABEL_277;
            do
            {
              while ( 1 )
              {
                v128 = *v126;
                if ( *v126 )
                {
                  v129 = v115[2];
                  v10 = (*(_DWORD *)(v128 + 8))-- == 1;
                  if ( v10 )
                    break;
                }
                if ( ++v126 >= v127 )
                  goto LABEL_276;
              }
              sub_15D7BC0(v129, v128);
              ++v126;
            }
            while ( v126 < v127 );
LABEL_276:
            v126 = (__int64 *)v115[3];
            if ( v126 )
LABEL_277:
              sub_186B220(v126 - 1);
          }
          sub_186B220(v115);
        }
        v130 = (_QWORD *)v114[1];
        if ( v130 )
        {
          v131 = (_QWORD *)*v130;
          if ( *v130 )
          {
            sub_35BE80(*v131);
            sub_35BE80(v131[1]);
            v132 = (__int64 *)v131[3];
            if ( v132 )
            {
              v133 = &v132[*((unsigned int *)v132 - 1)];
              if ( v132 >= v133 )
                goto LABEL_289;
              do
              {
                while ( 1 )
                {
                  v134 = *v132;
                  if ( *v132 )
                  {
                    v135 = v131[2];
                    v10 = (*(_DWORD *)(v134 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v132 >= v133 )
                    goto LABEL_288;
                }
                v172 = (unsigned __int64)v133;
                ++v132;
                sub_15D7BC0(v135, v134);
                v133 = (__int64 *)v172;
              }
              while ( (unsigned __int64)v132 < v172 );
LABEL_288:
              v132 = (__int64 *)v131[3];
              if ( v132 )
LABEL_289:
                sub_186B220(v132 - 1);
            }
            sub_186B220(v131);
          }
          v136 = (_QWORD *)v130[1];
          if ( v136 )
          {
            sub_35BE80(*v136);
            sub_35BE80(v136[1]);
            v137 = (__int64 *)v136[3];
            if ( v137 )
            {
              v138 = &v137[*((unsigned int *)v137 - 1)];
              if ( v137 >= v138 )
                goto LABEL_300;
              do
              {
                while ( 1 )
                {
                  v139 = *v137;
                  if ( *v137 )
                  {
                    v140 = v136[2];
                    v10 = (*(_DWORD *)(v139 + 8))-- == 1;
                    if ( v10 )
                      break;
                  }
                  if ( ++v137 >= v138 )
                    goto LABEL_299;
                }
                v173 = (unsigned __int64)v138;
                ++v137;
                sub_15D7BC0(v140, v139);
                v138 = (__int64 *)v173;
              }
              while ( (unsigned __int64)v137 < v173 );
LABEL_299:
              v137 = (__int64 *)v136[3];
              if ( v137 )
LABEL_300:
                sub_186B220(v137 - 1);
            }
            sub_186B220(v136);
          }
          v141 = (__int64 *)v130[3];
          if ( v141 )
          {
            v142 = &v141[*((unsigned int *)v141 - 1)];
            if ( v141 >= v142 )
              goto LABEL_310;
            do
            {
              while ( 1 )
              {
                v143 = *v141;
                if ( *v141 )
                {
                  v144 = v130[2];
                  v10 = (*(_DWORD *)(v143 + 8))-- == 1;
                  if ( v10 )
                    break;
                }
                if ( ++v141 >= v142 )
                  goto LABEL_309;
              }
              sub_15D7BC0(v144, v143);
              ++v141;
            }
            while ( v141 < v142 );
LABEL_309:
            v141 = (__int64 *)v130[3];
            if ( v141 )
LABEL_310:
              sub_186B220(v141 - 1);
          }
          sub_186B220(v130);
        }
        v145 = (__int64 *)v114[3];
        if ( v145 )
        {
          v146 = &v145[*((unsigned int *)v145 - 1)];
          if ( v145 >= v146 )
            goto LABEL_320;
          do
          {
            while ( 1 )
            {
              v147 = *v145;
              if ( *v145 )
              {
                v148 = v114[2];
                v10 = (*(_DWORD *)(v147 + 8))-- == 1;
                if ( v10 )
                  break;
              }
              if ( ++v145 >= v146 )
                goto LABEL_319;
            }
            sub_15D7BC0(v148, v147);
            ++v145;
          }
          while ( v145 < v146 );
LABEL_319:
          v145 = (__int64 *)v114[3];
          if ( v145 )
LABEL_320:
            sub_186B220(v145 - 1);
        }
        sub_186B220(v114);
      }
      v149 = (__int64 *)v78[3];
      if ( v149 )
      {
        v150 = &v149[*((unsigned int *)v149 - 1)];
        if ( v149 >= v150 )
          goto LABEL_330;
        do
        {
          while ( 1 )
          {
            v151 = *v149;
            if ( *v149 )
            {
              v152 = v78[2];
              v10 = (*(_DWORD *)(v151 + 8))-- == 1;
              if ( v10 )
                break;
            }
            if ( ++v149 >= v150 )
              goto LABEL_329;
          }
          sub_15D7BC0(v152, v151);
          ++v149;
        }
        while ( v149 < v150 );
LABEL_329:
        v149 = (__int64 *)v78[3];
        if ( v149 )
LABEL_330:
          sub_186B220(v149 - 1);
      }
      sub_186B220(v78);
    }
    v153 = (__int64 *)a1[3];
    if ( v153 )
    {
      v154 = &v153[*((unsigned int *)v153 - 1)];
      if ( v153 >= v154 )
        goto LABEL_340;
      do
      {
        while ( 1 )
        {
          v155 = *v153;
          if ( *v153 )
          {
            v156 = a1[2];
            v10 = (*(_DWORD *)(v155 + 8))-- == 1;
            if ( v10 )
              break;
          }
          if ( ++v153 >= v154 )
            goto LABEL_339;
        }
        sub_15D7BC0(v156, v155);
        ++v153;
      }
      while ( v153 < v154 );
LABEL_339:
      v153 = (__int64 *)a1[3];
      if ( v153 )
LABEL_340:
        sub_186B220(v153 - 1);
    }
    return sub_186B220(a1);
  }
  return result;
}

