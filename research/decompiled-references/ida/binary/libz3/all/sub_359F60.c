void __fastcall sub_359F60(_QWORD *a1)
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
  __int64 *v78; // rbx
  __int64 v79; // rax
  __int64 *v80; // r12
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rdi
  __int64 *v85; // rbx
  __int64 *v86; // r12
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 *v89; // rbx
  __int64 *v90; // r12
  __int64 v91; // rsi
  __int64 v92; // rdi
  unsigned __int64 v93; // [rsp+8h] [rbp-40h]
  unsigned __int64 v94; // [rsp+8h] [rbp-40h]
  unsigned __int64 v95; // [rsp+8h] [rbp-40h]
  unsigned __int64 v96; // [rsp+8h] [rbp-40h]
  unsigned __int64 v97; // [rsp+8h] [rbp-40h]
  unsigned __int64 v98; // [rsp+8h] [rbp-40h]
  unsigned __int64 v99; // [rsp+8h] [rbp-40h]
  unsigned __int64 v100; // [rsp+8h] [rbp-40h]

  v2 = (_QWORD *)a1[3];
  if ( v2 )
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
              goto LABEL_13;
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
                  goto LABEL_12;
              }
              v93 = (unsigned __int64)v7;
              ++v6;
              sub_15D7BC0(v9, v8);
              v7 = (__int64 *)v93;
            }
            while ( (unsigned __int64)v6 < v93 );
LABEL_12:
            v6 = (__int64 *)v5[3];
            if ( v6 )
LABEL_13:
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
              goto LABEL_24;
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
                  goto LABEL_23;
              }
              v94 = (unsigned __int64)v13;
              ++v12;
              sub_15D7BC0(v15, v14);
              v13 = (__int64 *)v94;
            }
            while ( (unsigned __int64)v12 < v94 );
LABEL_23:
            v12 = (__int64 *)v11[3];
            if ( v12 )
LABEL_24:
              sub_186B220(v12 - 1);
          }
          sub_186B220(v11);
        }
        v16 = (__int64 *)v4[3];
        if ( v16 )
        {
          v17 = &v16[*((unsigned int *)v16 - 1)];
          if ( v16 >= v17 )
            goto LABEL_34;
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
                goto LABEL_33;
            }
            sub_15D7BC0(v19, v18);
            ++v16;
          }
          while ( v16 < v17 );
LABEL_33:
          v16 = (__int64 *)v4[3];
          if ( v16 )
LABEL_34:
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
              goto LABEL_46;
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
                  goto LABEL_45;
              }
              v95 = (unsigned __int64)v23;
              ++v22;
              sub_15D7BC0(v25, v24);
              v23 = (__int64 *)v95;
            }
            while ( (unsigned __int64)v22 < v95 );
LABEL_45:
            v22 = (__int64 *)v21[3];
            if ( v22 )
LABEL_46:
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
              goto LABEL_57;
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
                  goto LABEL_56;
              }
              v96 = (unsigned __int64)v28;
              ++v27;
              sub_15D7BC0(v30, v29);
              v28 = (__int64 *)v96;
            }
            while ( (unsigned __int64)v27 < v96 );
LABEL_56:
            v27 = (__int64 *)v26[3];
            if ( v27 )
LABEL_57:
              sub_186B220(v27 - 1);
          }
          sub_186B220(v26);
        }
        v31 = (__int64 *)v20[3];
        if ( v31 )
        {
          v32 = &v31[*((unsigned int *)v31 - 1)];
          if ( v31 >= v32 )
            goto LABEL_67;
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
                goto LABEL_66;
            }
            sub_15D7BC0(v34, v33);
            ++v31;
          }
          while ( v31 < v32 );
LABEL_66:
          v31 = (__int64 *)v20[3];
          if ( v31 )
LABEL_67:
            sub_186B220(v31 - 1);
        }
        sub_186B220(v20);
      }
      v35 = (__int64 *)v3[3];
      if ( v35 )
      {
        v36 = &v35[*((unsigned int *)v35 - 1)];
        if ( v35 >= v36 )
          goto LABEL_77;
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
              goto LABEL_76;
          }
          sub_15D7BC0(v38, v37);
          ++v35;
        }
        while ( v35 < v36 );
LABEL_76:
        v35 = (__int64 *)v3[3];
        if ( v35 )
LABEL_77:
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
              goto LABEL_90;
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
                  goto LABEL_89;
              }
              v97 = (unsigned __int64)v43;
              ++v42;
              sub_15D7BC0(v45, v44);
              v43 = (__int64 *)v97;
            }
            while ( (unsigned __int64)v42 < v97 );
LABEL_89:
            v42 = (__int64 *)v41[3];
            if ( v42 )
LABEL_90:
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
              goto LABEL_101;
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
                  goto LABEL_100;
              }
              v98 = (unsigned __int64)v48;
              ++v47;
              sub_15D7BC0(v50, v49);
              v48 = (__int64 *)v98;
            }
            while ( (unsigned __int64)v47 < v98 );
LABEL_100:
            v47 = (__int64 *)v46[3];
            if ( v47 )
LABEL_101:
              sub_186B220(v47 - 1);
          }
          sub_186B220(v46);
        }
        v51 = (__int64 *)v40[3];
        if ( v51 )
        {
          v52 = &v51[*((unsigned int *)v51 - 1)];
          if ( v51 >= v52 )
            goto LABEL_111;
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
                goto LABEL_110;
            }
            sub_15D7BC0(v54, v53);
            ++v51;
          }
          while ( v51 < v52 );
LABEL_110:
          v51 = (__int64 *)v40[3];
          if ( v51 )
LABEL_111:
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
              goto LABEL_123;
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
                  goto LABEL_122;
              }
              v99 = (unsigned __int64)v58;
              ++v57;
              sub_15D7BC0(v60, v59);
              v58 = (__int64 *)v99;
            }
            while ( (unsigned __int64)v57 < v99 );
LABEL_122:
            v57 = (__int64 *)v56[3];
            if ( v57 )
LABEL_123:
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
              goto LABEL_134;
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
                  goto LABEL_133;
              }
              v100 = (unsigned __int64)v63;
              ++v62;
              sub_15D7BC0(v65, v64);
              v63 = (__int64 *)v100;
            }
            while ( (unsigned __int64)v62 < v100 );
LABEL_133:
            v62 = (__int64 *)v61[3];
            if ( v62 )
LABEL_134:
              sub_186B220(v62 - 1);
          }
          sub_186B220(v61);
        }
        v66 = (__int64 *)v55[3];
        if ( v66 )
        {
          v67 = &v66[*((unsigned int *)v66 - 1)];
          if ( v66 >= v67 )
            goto LABEL_144;
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
                goto LABEL_143;
            }
            sub_15D7BC0(v69, v68);
            ++v66;
          }
          while ( v66 < v67 );
LABEL_143:
          v66 = (__int64 *)v55[3];
          if ( v66 )
LABEL_144:
            sub_186B220(v66 - 1);
        }
        sub_186B220(v55);
      }
      v70 = (__int64 *)v39[3];
      if ( v70 )
      {
        v71 = &v70[*((unsigned int *)v70 - 1)];
        if ( v70 >= v71 )
          goto LABEL_154;
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
              goto LABEL_153;
          }
          sub_15D7BC0(v73, v72);
          ++v70;
        }
        while ( v70 < v71 );
LABEL_153:
        v70 = (__int64 *)v39[3];
        if ( v70 )
LABEL_154:
          sub_186B220(v70 - 1);
      }
      sub_186B220(v39);
    }
    v74 = (__int64 *)v2[3];
    if ( v74 )
    {
      v75 = &v74[*((unsigned int *)v74 - 1)];
      if ( v74 >= v75 )
        goto LABEL_164;
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
            goto LABEL_163;
        }
        sub_15D7BC0(v77, v76);
        ++v74;
      }
      while ( v74 < v75 );
LABEL_163:
      v74 = (__int64 *)v2[3];
      if ( v74 )
LABEL_164:
        sub_186B220(v74 - 1);
    }
    sub_186B220(v2);
  }
  v78 = (__int64 *)a1[6];
  if ( v78 )
  {
    v79 = *((unsigned int *)v78 - 1);
    if ( (_DWORD)v79 )
    {
      v80 = &v78[4 * v79];
      do
      {
        v83 = v78[2];
        if ( v83 )
        {
          v84 = v78[3];
          v10 = (*(_DWORD *)(v83 + 8))-- == 1;
          if ( v10 )
            sub_15D7BC0(v84, v83);
        }
        v81 = *v78;
        if ( *v78 )
        {
          v82 = v78[1];
          v10 = (*(_DWORD *)(v81 + 8))-- == 1;
          if ( v10 )
            sub_15D7BC0(v82, v81);
        }
        v78 += 4;
      }
      while ( v78 != v80 );
      v78 = (__int64 *)a1[6];
    }
    sub_186B220(v78 - 1);
  }
  v85 = (__int64 *)a1[5];
  if ( v85 )
  {
    v86 = &v85[*((unsigned int *)v85 - 1)];
    if ( v85 >= v86 )
      goto LABEL_186;
    do
    {
      while ( 1 )
      {
        v87 = *v85;
        if ( *v85 )
        {
          v88 = a1[4];
          v10 = (*(_DWORD *)(v87 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v85 >= v86 )
          goto LABEL_185;
      }
      sub_15D7BC0(v88, v87);
      ++v85;
    }
    while ( v85 < v86 );
LABEL_185:
    v85 = (__int64 *)a1[5];
    if ( v85 )
LABEL_186:
      sub_186B220(v85 - 1);
  }
  v89 = (__int64 *)a1[2];
  if ( v89 )
  {
    v90 = &v89[*((unsigned int *)v89 - 1)];
    if ( v89 >= v90 )
      goto LABEL_195;
    do
    {
      while ( 1 )
      {
        v91 = *v89;
        if ( *v89 )
        {
          v92 = a1[1];
          v10 = (*(_DWORD *)(v91 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v89 >= v90 )
          goto LABEL_194;
      }
      sub_15D7BC0(v92, v91);
      ++v89;
    }
    while ( v89 < v90 );
LABEL_194:
    v89 = (__int64 *)a1[2];
    if ( v89 )
LABEL_195:
      sub_186B220(v89 - 1);
  }
}

