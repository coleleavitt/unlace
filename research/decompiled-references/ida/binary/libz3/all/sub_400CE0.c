__int64 __fastcall sub_400CE0(__int64 a1, double a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 *v5; // rbp
  __int64 v6; // r12
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdx
  _QWORD *v11; // r14
  __int64 v12; // rcx
  _QWORD *v13; // r13
  void *v14; // rdi
  __int64 *v15; // r13
  __int64 *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  _QWORD *v19; // r14
  __int64 v20; // rcx
  _QWORD *v21; // r13
  void *v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 *v25; // r13
  __int64 *v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  _QWORD *v31; // r13
  __int64 v32; // rax
  void **v33; // rbp
  void **v34; // r13
  _QWORD *v35; // r12
  void (__fastcall ***v36)(void *); // r15
  void *v37; // rdi
  void **v38; // rbp
  void **v39; // r13
  _QWORD *v40; // r12
  void (__fastcall ***v41)(void *); // r15
  void *v42; // rdi
  void **v43; // rbp
  void **v44; // r13
  _QWORD *v45; // r12
  void (__fastcall ***v46)(void *); // r15
  void *v47; // rdi
  _DWORD **v48; // rbp
  _DWORD **v49; // r13
  _DWORD *v50; // r12
  char *v51; // r12
  __int64 v52; // rax
  __int64 v53; // rbp
  char *v54; // r13
  void *v55; // rdi
  void (__fastcall ***v56)(void *); // rbp
  __int64 *v57; // rbp
  void *v58; // rdi
  __int64 v59; // rax
  __int64 *v60; // r13
  __int64 *v61; // r12
  void (__fastcall ***v62)(__int64); // r15
  __int64 v63; // rdi
  void (__fastcall ***v64)(void *); // r12
  void (__fastcall ***v65)(void *); // r12
  __int64 v66; // rax
  _QWORD *v67; // r12
  _QWORD *v68; // r13
  _QWORD *v69; // r15
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 *v72; // rbp
  __int64 *v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdi
  _QWORD *v79; // rax
  __int64 *v80; // rbp
  __int64 v81; // rsi
  __int64 v82; // rdi
  _QWORD *v83; // rax
  __int64 v84; // rcx
  void *v85; // rdi
  _QWORD *v86; // rdx
  int v87; // esi
  unsigned int v88; // ebx
  unsigned int v89; // ebp
  size_t v90; // rbx
  _OWORD *v91; // rax
  _OWORD *v92; // rcx
  _OWORD *v93; // rdx
  void (***v95)(void); // rdi
  void *v96; // rdi
  void *v97; // rdi
  void *v98; // rdi
  __int64 v99; // rax
  __int64 *v100; // r12
  __int64 v101; // rsi
  __int64 v102; // rdi
  size_t v103; // rcx
  _QWORD *v104; // [rsp+0h] [rbp-68h]
  __int64 *v105; // [rsp+8h] [rbp-60h]
  unsigned __int64 v106; // [rsp+8h] [rbp-60h]
  _QWORD *v107; // [rsp+10h] [rbp-58h]
  __int64 v108; // [rsp+18h] [rbp-50h]

  sub_3FE030((__int64 *)(a1 + 312), a2);
  v2 = *(_QWORD **)(a1 + 264);
  v3 = 2LL * *(unsigned int *)(a1 + 272);
  v104 = v2;
  v107 = &v2[v3];
  if ( v2 == &v2[v3] )
  {
    if ( *(_DWORD *)(a1 + 276) )
      goto LABEL_203;
  }
  else
  {
    while ( *v104 <= 1u )
    {
      v104 += 2;
      if ( v107 == v104 )
        goto LABEL_233;
    }
    if ( v107 == v104 )
    {
LABEL_233:
      if ( !*(_DWORD *)(a1 + 276) )
        goto LABEL_189;
      v85 = *(void **)(a1 + 264);
      v84 = *(unsigned int *)(a1 + 272);
      v86 = &v2[2 * v84];
      goto LABEL_191;
    }
LABEL_6:
    v4 = v104[1];
    if ( v4 )
    {
      v5 = *(__int64 **)(v4 + 456);
      if ( v5 )
      {
        v105 = &v5[*((unsigned int *)v5 - 1)];
        if ( v5 >= v105 )
          goto LABEL_65;
        do
        {
          while ( 1 )
          {
            v6 = *v5;
            if ( *v5 )
            {
              v7 = (*(_DWORD *)(v6 + 48))-- == 1;
              if ( v7 )
                break;
            }
            if ( ++v5 >= v105 )
              goto LABEL_64;
          }
          v8 = *(_QWORD *)(v6 + 136);
          if ( v8 )
            sub_186B220((void *)(v8 - 8));
          sub_2334C0((__int64 *)(v6 + 112));
          v9 = *(_QWORD *)(v6 + 80);
          if ( v9 )
          {
            v10 = *(unsigned int *)(v9 - 4);
            if ( (_DWORD)v10 )
            {
              v108 = v9 + 136 * v10;
              do
              {
                v11 = *(_QWORD **)(v9 + 112);
                if ( v11 )
                {
                  v12 = *((unsigned int *)v11 - 1);
                  if ( (_DWORD)v12 )
                  {
                    v13 = &v11[v12];
                    do
                    {
                      while ( *v11 )
                      {
                        v14 = (void *)(*v11++ - 8LL);
                        sub_186B220(v14);
                        if ( v13 == v11 )
                          goto LABEL_23;
                      }
                      ++v11;
                    }
                    while ( v11 != v13 );
LABEL_23:
                    v11 = *(_QWORD **)(v9 + 112);
                  }
                  sub_186B220(v11 - 1);
                }
                v15 = *(__int64 **)(v9 + 104);
                if ( v15 )
                {
                  v16 = &v15[*((unsigned int *)v15 - 1)];
                  if ( v15 >= v16 )
                    goto LABEL_33;
                  do
                  {
                    while ( 1 )
                    {
                      v17 = *v15;
                      if ( *v15 )
                      {
                        v18 = *(_QWORD *)(v9 + 96);
                        v7 = (*(_DWORD *)(v17 + 8))-- == 1;
                        if ( v7 )
                          break;
                      }
                      if ( ++v15 >= v16 )
                        goto LABEL_32;
                    }
                    sub_15D7BC0(v18, v17);
                    ++v15;
                  }
                  while ( v15 < v16 );
LABEL_32:
                  v15 = *(__int64 **)(v9 + 104);
                  if ( v15 )
LABEL_33:
                    sub_186B220(v15 - 1);
                }
                v19 = *(_QWORD **)(v9 + 80);
                if ( v19 )
                {
                  v20 = *((unsigned int *)v19 - 1);
                  if ( (_DWORD)v20 )
                  {
                    v21 = &v19[v20];
                    do
                    {
                      while ( *v19 )
                      {
                        v22 = (void *)(*v19++ - 8LL);
                        sub_186B220(v22);
                        if ( v21 == v19 )
                          goto LABEL_39;
                      }
                      ++v19;
                    }
                    while ( v19 != v21 );
LABEL_39:
                    v19 = *(_QWORD **)(v9 + 80);
                  }
                  sub_186B220(v19 - 1);
                }
                v23 = *(_QWORD *)(v9 + 72);
                if ( v23 )
                  sub_186B220((void *)(v23 - 8));
                v24 = *(_QWORD *)(v9 + 64);
                if ( v24 )
                  sub_186B220((void *)(v24 - 8));
                v25 = *(__int64 **)(v9 + 56);
                if ( v25 )
                {
                  v26 = &v25[*((unsigned int *)v25 - 1)];
                  if ( v25 >= v26 )
                    goto LABEL_53;
                  do
                  {
                    while ( 1 )
                    {
                      v27 = *v25;
                      if ( *v25 )
                      {
                        v28 = *(_QWORD *)(v9 + 48);
                        v7 = (*(_DWORD *)(v27 + 8))-- == 1;
                        if ( v7 )
                          break;
                      }
                      if ( ++v25 >= v26 )
                        goto LABEL_52;
                    }
                    sub_15D7BC0(v28, v27);
                    ++v25;
                  }
                  while ( v25 < v26 );
LABEL_52:
                  v25 = *(__int64 **)(v9 + 56);
                  if ( v25 )
LABEL_53:
                    sub_186B220(v25 - 1);
                }
                v29 = *(_QWORD *)(v9 + 40);
                if ( v29 )
                  sub_186B220((void *)(v29 - 8));
                v30 = *(_QWORD *)(v9 + 16);
                if ( v30 )
                  sub_186B220((void *)(v30 - 8));
                v31 = *(_QWORD **)v9;
                if ( *(_QWORD *)v9 )
                {
                  v7 = (*(_DWORD *)v31)-- == 1;
                  if ( v7 )
                  {
                    v95 = (void (***)(void))v31[11];
                    if ( v95 )
                    {
                      v7 = (*((_DWORD *)v95 + 4))-- == 1;
                      if ( v7 )
                      {
                        (**v95)();
                        sub_186B220(v95);
                      }
                    }
                    v96 = (void *)v31[10];
                    if ( v96 )
                      sub_41CD50(v96);
                    sub_2B4F40(v31 + 8);
                    sub_2B4F40(v31 + 6);
                    sub_2334C0(v31 + 4);
                    sub_3FCDF0(v31[2], v31[3]);
                    sub_186B220(v31);
                  }
                }
                v9 += 136;
              }
              while ( v9 != v108 );
              v9 = *(_QWORD *)(v6 + 80);
            }
            sub_186B220((void *)(v9 - 8));
          }
          ++v5;
          sub_3FCDF0(*(_QWORD *)(v6 + 56), *(_QWORD *)(v6 + 64));
          sub_186B220((void *)v6);
        }
        while ( v5 < v105 );
LABEL_64:
        v5 = *(__int64 **)(v4 + 456);
        if ( v5 )
LABEL_65:
          sub_186B220(v5 - 1);
      }
      v32 = *(_QWORD *)(v4 + 320);
      if ( v32 )
        sub_186B220((void *)(v32 - 8));
      sub_3FCDD0(*(_QWORD *)(v4 + 296), *(_QWORD *)(v4 + 304));
      sub_3FCDD0(*(_QWORD *)(v4 + 280), *(_QWORD *)(v4 + 288));
      sub_3FCDF0(*(_QWORD *)(v4 + 264), *(_QWORD *)(v4 + 272));
      sub_3FCDF0(*(_QWORD *)(v4 + 248), *(_QWORD *)(v4 + 256));
      sub_2334C0((__int64 *)(v4 + 232));
      sub_41D1C0(v4 + 216);
      v33 = *(void ***)(v4 + 200);
      if ( v33 )
      {
        v34 = &v33[*((unsigned int *)v33 - 1)];
        if ( v33 >= v34 )
          goto LABEL_81;
        do
        {
          while ( 1 )
          {
            v35 = *v33;
            if ( *v33 )
            {
              v7 = (*(_DWORD *)v35)-- == 1;
              if ( v7 )
                break;
            }
            if ( ++v33 >= v34 )
              goto LABEL_80;
          }
          v36 = (void (__fastcall ***)(void *))v35[11];
          if ( v36 )
          {
            v7 = (*((_DWORD *)v36 + 4))-- == 1;
            if ( v7 )
            {
              (**v36)(v36);
              sub_186B220(v36);
            }
          }
          v37 = (void *)v35[10];
          if ( v37 )
            sub_41CD50(v37);
          ++v33;
          sub_2B4F40(v35 + 8);
          sub_2B4F40(v35 + 6);
          sub_2334C0(v35 + 4);
          sub_3FCDF0(v35[2], v35[3]);
          sub_186B220(v35);
        }
        while ( v33 < v34 );
LABEL_80:
        v33 = *(void ***)(v4 + 200);
        if ( v33 )
LABEL_81:
          sub_186B220(v33 - 1);
      }
      v38 = *(void ***)(v4 + 192);
      if ( v38 )
      {
        v39 = &v38[*((unsigned int *)v38 - 1)];
        if ( v38 >= v39 )
          goto LABEL_95;
        do
        {
          while ( 1 )
          {
            v40 = *v38;
            if ( *v38 )
            {
              v7 = (*(_DWORD *)v40)-- == 1;
              if ( v7 )
                break;
            }
            if ( ++v38 >= v39 )
              goto LABEL_94;
          }
          v41 = (void (__fastcall ***)(void *))v40[11];
          if ( v41 )
          {
            v7 = (*((_DWORD *)v41 + 4))-- == 1;
            if ( v7 )
            {
              (**v41)(v41);
              sub_186B220(v41);
            }
          }
          v42 = (void *)v40[10];
          if ( v42 )
            sub_41CD50(v42);
          ++v38;
          sub_2B4F40(v40 + 8);
          sub_2B4F40(v40 + 6);
          sub_2334C0(v40 + 4);
          sub_3FCDF0(v40[2], v40[3]);
          sub_186B220(v40);
        }
        while ( v38 < v39 );
LABEL_94:
        v38 = *(void ***)(v4 + 192);
        if ( v38 )
LABEL_95:
          sub_186B220(v38 - 1);
      }
      v43 = *(void ***)(v4 + 184);
      if ( v43 )
      {
        v44 = &v43[*((unsigned int *)v43 - 1)];
        if ( v43 >= v44 )
          goto LABEL_109;
        do
        {
          while ( 1 )
          {
            v45 = *v43;
            if ( *v43 )
            {
              v7 = (*(_DWORD *)v45)-- == 1;
              if ( v7 )
                break;
            }
            if ( ++v43 >= v44 )
              goto LABEL_108;
          }
          v46 = (void (__fastcall ***)(void *))v45[11];
          if ( v46 )
          {
            v7 = (*((_DWORD *)v46 + 4))-- == 1;
            if ( v7 )
            {
              (**v46)(v46);
              sub_186B220(v46);
            }
          }
          v47 = (void *)v45[10];
          if ( v47 )
            sub_41CD50(v47);
          ++v43;
          sub_2B4F40(v45 + 8);
          sub_2B4F40(v45 + 6);
          sub_2334C0(v45 + 4);
          sub_3FCDF0(v45[2], v45[3]);
          sub_186B220(v45);
        }
        while ( v43 < v44 );
LABEL_108:
        v43 = *(void ***)(v4 + 184);
        if ( v43 )
LABEL_109:
          sub_186B220(v43 - 1);
      }
      v48 = *(_DWORD ***)(v4 + 168);
      if ( v48 )
      {
        v49 = &v48[*((unsigned int *)v48 - 1)];
        if ( v48 >= v49 )
          goto LABEL_118;
        do
        {
          while ( 1 )
          {
            v50 = *v48;
            if ( *v48 )
            {
              v7 = (*v50)-- == 1;
              if ( v7 )
                break;
            }
            if ( ++v48 >= v49 )
              goto LABEL_117;
          }
          ++v48;
          sub_41CB00(v50);
          sub_186B220(v50);
        }
        while ( v48 < v49 );
LABEL_117:
        v48 = *(_DWORD ***)(v4 + 168);
        if ( v48 )
LABEL_118:
          sub_186B220(v48 - 1);
      }
      v51 = *(char **)(v4 + 144);
      if ( v51 )
      {
        v52 = *(unsigned int *)(v4 + 152);
        if ( (_DWORD)v52 )
        {
          v53 = *(_QWORD *)(v4 + 144);
          v54 = &v51[32 * v52];
          do
          {
            while ( 1 )
            {
              v55 = *(void **)(v53 + 8);
              if ( v55 == (void *)(v53 + 24) || !v55 )
                break;
              sub_186B220(v55);
              v53 += 32;
              if ( (char *)v53 == v54 )
                goto LABEL_125;
            }
            v53 += 32;
          }
          while ( (char *)v53 != v54 );
        }
LABEL_125:
        sub_186B220(v51);
      }
      v56 = *(void (__fastcall ****)(void *))(v4 + 128);
      if ( v56 )
      {
        v7 = (*((_DWORD *)v56 + 12))-- == 1;
        if ( v7 )
        {
          (**v56)(v56);
          sub_186B220(v56);
        }
      }
      v57 = *(__int64 **)(v4 + 120);
      if ( v57 )
      {
        v58 = (void *)v57[12];
        if ( v58 )
          sub_186B220(v58);
        sub_2B4F40(v57 + 10);
        sub_2B4F40(v57 + 8);
        v59 = v57[7];
        if ( v59 )
          sub_186B220((void *)(v59 - 8));
        v60 = v57 + 5;
        v61 = v57 + 3;
        do
        {
          while ( 1 )
          {
            v62 = (void (__fastcall ***)(__int64))*v60;
            if ( !*v60 )
              break;
            v63 = *v60--;
            (**v62)(v63);
            sub_186B220(v62);
            if ( v61 == v60 )
              goto LABEL_137;
          }
          --v60;
        }
        while ( v60 != v61 );
LABEL_137:
        v64 = (void (__fastcall ***)(void *))v57[3];
        if ( v64 )
        {
          v7 = (*((_DWORD *)v64 + 12))-- == 1;
          if ( v7 )
          {
            (**v64)(v64);
            sub_186B220(v64);
          }
        }
        v65 = (void (__fastcall ***)(void *))v57[2];
        if ( v65 )
        {
          v7 = (*((_DWORD *)v65 + 12))-- == 1;
          if ( v7 )
          {
            (**v65)(v65);
            sub_186B220(v65);
          }
        }
        sub_186B220(v57);
      }
      v66 = *(_QWORD *)(v4 + 112);
      if ( v66 )
        sub_186B220((void *)(v66 - 8));
      v67 = *(_QWORD **)(v4 + 64);
      v68 = &v67[2 * *(unsigned int *)(v4 + 72)];
      if ( v67 != v68 )
      {
        while ( *v67 <= 1u )
        {
          v67 += 2;
          if ( v68 == v67 )
            goto LABEL_213;
        }
        while ( v67 != v68 )
        {
          v69 = (_QWORD *)v67[1];
          if ( v69 )
          {
            v70 = v69[6];
            if ( v70 )
            {
              v71 = v69[7];
              v7 = (*(_DWORD *)(v70 + 8))-- == 1;
              if ( v7 )
                sub_15D7BC0(v71, v70);
            }
            v72 = (__int64 *)v69[5];
            if ( v72 )
            {
              v73 = &v72[*((unsigned int *)v72 - 1)];
              if ( v72 >= v73 )
                goto LABEL_163;
              do
              {
                while ( 1 )
                {
                  v74 = *v72;
                  if ( *v72 )
                  {
                    v75 = v69[4];
                    v7 = (*(_DWORD *)(v74 + 8))-- == 1;
                    if ( v7 )
                      break;
                  }
                  if ( ++v72 >= v73 )
                    goto LABEL_162;
                }
                v106 = (unsigned __int64)v73;
                ++v72;
                sub_15D7BC0(v75, v74);
                v73 = (__int64 *)v106;
              }
              while ( (unsigned __int64)v72 < v106 );
LABEL_162:
              v72 = (__int64 *)v69[5];
              if ( v72 )
LABEL_163:
                sub_186B220(v72 - 1);
            }
            v76 = v69[3];
            if ( v76 )
              sub_186B220((void *)(v76 - 8));
            v77 = v69[1];
            if ( v77 )
            {
              v78 = v69[2];
              v7 = (*(_DWORD *)(v77 + 8))-- == 1;
              if ( v7 )
                sub_15D7BC0(v78, v77);
            }
            sub_186B220(v69);
          }
          v79 = v67 + 2;
          if ( v68 == v67 + 2 )
            break;
          while ( 1 )
          {
            v67 = v79;
            if ( *v79 > 1u )
              break;
            v79 += 2;
            if ( v68 == v79 )
              goto LABEL_213;
          }
        }
      }
LABEL_213:
      v97 = *(void **)(v4 + 88);
      if ( v97 )
        sub_186B220(v97);
      v98 = *(void **)(v4 + 64);
      if ( v98 )
        sub_186B220(v98);
      v99 = *(_QWORD *)(v4 + 56);
      if ( v99 )
        sub_186B220((void *)(v99 - 8));
      v80 = *(__int64 **)(v4 + 48);
      if ( v80 )
      {
        v100 = &v80[*((unsigned int *)v80 - 1)];
        if ( v80 >= v100 )
          goto LABEL_180;
        do
        {
          v101 = *v80;
          if ( *v80 )
          {
            v102 = *(_QWORD *)(v4 + 40);
            v7 = (*(_DWORD *)(v101 + 8))-- == 1;
            if ( v7 )
              sub_15D7BC0(v102, v101);
          }
          ++v80;
        }
        while ( v80 < v100 );
        v80 = *(__int64 **)(v4 + 48);
        if ( v80 )
LABEL_180:
          sub_186B220(v80 - 1);
      }
      v81 = *(_QWORD *)(v4 + 24);
      if ( v81 )
      {
        v82 = *(_QWORD *)(v4 + 32);
        v7 = (*(_DWORD *)(v81 + 8))-- == 1;
        if ( v7 )
          sub_15D7BC0(v82, v81);
      }
      sub_186B220((void *)v4);
    }
    v83 = v104;
    while ( 1 )
    {
      v83 += 2;
      if ( v107 == v83 )
        break;
      v104 = v83;
      if ( *v83 > 1u )
      {
        if ( v107 != v83 )
          goto LABEL_6;
        break;
      }
    }
    if ( *(_DWORD *)(a1 + 276) )
      goto LABEL_190;
  }
LABEL_189:
  if ( *(_DWORD *)(a1 + 280) )
  {
LABEL_190:
    v2 = *(_QWORD **)(a1 + 264);
    v84 = *(unsigned int *)(a1 + 272);
    v85 = v2;
    v86 = &v2[2 * v84];
    if ( v2 == v86 )
    {
LABEL_203:
      *(_QWORD *)(a1 + 276) = 0;
      goto LABEL_204;
    }
LABEL_191:
    v87 = 0;
    do
    {
      while ( *v2 )
      {
        *v2 = 0;
        v2 += 2;
        if ( v2 == v86 )
          goto LABEL_195;
      }
      v2 += 2;
      ++v87;
    }
    while ( v2 != v86 );
LABEL_195:
    if ( (unsigned int)v84 <= 0x10 || 3 * (int)v84 >= (unsigned int)(4 * v87) )
      goto LABEL_203;
    if ( v85 )
    {
      sub_186B220(v85);
      v88 = *(_DWORD *)(a1 + 272);
      *(_QWORD *)(a1 + 264) = 0;
      v89 = v88 >> 1;
      *(_DWORD *)(a1 + 272) = v88 >> 1;
      v90 = v88 >> 1;
      v91 = (_OWORD *)sub_186B270(v90 * 16);
      if ( !v89 )
      {
LABEL_202:
        *(_QWORD *)(a1 + 264) = v91;
        goto LABEL_203;
      }
    }
    else
    {
      v103 = (unsigned int)v84 >> 1;
      *(_DWORD *)(a1 + 272) = v103;
      v90 = v103;
      *(_QWORD *)(a1 + 264) = 0;
      v91 = (_OWORD *)sub_186B270(16 * v103);
    }
    v92 = &v91[v90];
    v93 = v91;
    if ( ((v90 * 16) & 0x10) == 0 || (v93 = v91 + 1, *v91 = 0, v92 != v91 + 1) )
    {
      do
      {
        *v93 = 0;
        v93 += 2;
        *(v93 - 1) = 0;
      }
      while ( v92 != v93 );
    }
    goto LABEL_202;
  }
LABEL_204:
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  return a1;
}

