__int64 __fastcall sub_6CCE40(__int64 a1)
{
  __int64 v2; // r12
  _QWORD *v3; // r14
  _QWORD *v4; // r12
  __int64 *v5; // rbx
  void *v6; // rbp
  __int64 *v7; // rbp
  __int64 *v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 *v12; // rbp
  __int64 *v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 *v24; // rbp
  __int64 *v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 *v34; // rbp
  __int64 *v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 *v38; // rbp
  __int64 *v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 *v42; // rbp
  __int64 *v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 *v46; // rbp
  __int64 *v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rbp
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rbp
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rbp
  __int64 v60; // rdx
  __int64 v61; // rsi
  void *v62; // rdi
  void *v63; // rdi
  _QWORD *v64; // rax
  char *v65; // rbp
  __int64 v66; // rax
  __int64 v67; // rbx
  char *v68; // r12
  __int64 v69; // rdi
  void *v70; // r14
  __int64 v71; // rsi
  void *v72; // rdi
  void *v73; // rdi
  __int64 *v74; // rbx
  __int64 v75; // rax
  __int64 *v76; // rdi
  __int64 *v77; // rcx
  __int64 *i; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rbx
  void *v85; // rdi
  void *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  void *v90; // rdi
  __int64 *v91; // rbx
  __int64 v92; // rax
  void *v94; // r14
  __int64 v95; // rsi
  unsigned __int64 v96; // [rsp+0h] [rbp-48h]
  unsigned __int64 v97; // [rsp+0h] [rbp-48h]
  void *v98; // [rsp+0h] [rbp-48h]
  void *v99; // [rsp+0h] [rbp-48h]
  unsigned __int64 v100; // [rsp+0h] [rbp-48h]
  void *v101; // [rsp+0h] [rbp-48h]
  void *v102; // [rsp+0h] [rbp-48h]
  unsigned __int64 v103; // [rsp+0h] [rbp-48h]
  unsigned __int64 v104; // [rsp+0h] [rbp-48h]
  unsigned __int64 v105; // [rsp+0h] [rbp-48h]
  unsigned __int64 v106; // [rsp+0h] [rbp-48h]
  void *v107; // [rsp+0h] [rbp-48h]
  void *v108; // [rsp+0h] [rbp-48h]
  void *v109; // [rsp+0h] [rbp-48h]
  void *v110; // [rsp+0h] [rbp-48h]
  __int64 v111; // [rsp+8h] [rbp-40h]
  __int64 v112; // [rsp+8h] [rbp-40h]
  __int64 v113; // [rsp+8h] [rbp-40h]
  __int64 v114; // [rsp+8h] [rbp-40h]
  __int64 v115; // [rsp+8h] [rbp-40h]
  __int64 v116; // [rsp+8h] [rbp-40h]
  __int64 v117; // [rsp+8h] [rbp-40h]
  __int64 v118; // [rsp+8h] [rbp-40h]

  v2 = *(unsigned int *)(a1 + 816);
  v3 = *(_QWORD **)(a1 + 808);
  *(_QWORD *)a1 = &off_1C530F8;
  v4 = &v3[4 * v2];
  if ( v3 != v4 )
  {
    while ( *v3 <= 1u )
    {
      v3 += 4;
      if ( v4 == v3 )
        goto LABEL_131;
    }
    while ( v4 != v3 )
    {
      v5 = (__int64 *)v3[2];
      if ( v5 )
      {
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v5 + 44);
        sub_182CBA0(v6, v5 + 46);
        v7 = (__int64 *)v5[43];
        if ( v7 )
        {
          v8 = &v7[*((unsigned int *)v7 - 1)];
          if ( v7 >= v8 )
            goto LABEL_15;
          do
          {
            while ( 1 )
            {
              v9 = *v7;
              if ( *v7 )
              {
                v10 = v5[42];
                v11 = (*(_DWORD *)(v9 + 8))-- == 1;
                if ( v11 )
                  break;
              }
              if ( ++v7 >= v8 )
                goto LABEL_14;
            }
            v96 = (unsigned __int64)v8;
            ++v7;
            sub_15D7BC0(v10, v9);
            v8 = (__int64 *)v96;
          }
          while ( (unsigned __int64)v7 < v96 );
LABEL_14:
          v7 = (__int64 *)v5[43];
          if ( v7 )
LABEL_15:
            sub_186B220(v7 - 1);
        }
        v12 = (__int64 *)v5[41];
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
                v15 = v5[40];
                v11 = (*(_DWORD *)(v14 + 8))-- == 1;
                if ( v11 )
                  break;
              }
              if ( ++v12 >= v13 )
                goto LABEL_23;
            }
            v97 = (unsigned __int64)v13;
            ++v12;
            sub_15D7BC0(v15, v14);
            v13 = (__int64 *)v97;
          }
          while ( (unsigned __int64)v12 < v97 );
LABEL_23:
          v12 = (__int64 *)v5[41];
          if ( v12 )
LABEL_24:
            sub_186B220(v12 - 1);
        }
        v16 = v5[39];
        if ( v16 )
        {
          v17 = *(unsigned int *)(v16 - 4);
          if ( (_DWORD)v17 )
          {
            v111 = v16 + 32 * v17;
            do
            {
              v98 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v16);
              v18 = v16 + 16;
              v16 += 32;
              sub_182CBA0(v98, v18);
            }
            while ( v111 != v16 );
            v16 = v5[39];
          }
          sub_186B220((void *)(v16 - 8));
        }
        v19 = v5[38];
        if ( v19 )
        {
          v20 = *(unsigned int *)(v19 - 4);
          if ( (_DWORD)v20 )
          {
            v112 = v19 + 32 * v20;
            do
            {
              v99 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v19);
              v21 = v19 + 16;
              v19 += 32;
              sub_182CBA0(v99, v21);
            }
            while ( v19 != v112 );
            v19 = v5[38];
          }
          sub_186B220((void *)(v19 - 8));
        }
        sub_2334C0(v5 + 36);
        v22 = v5[34];
        if ( v22 )
        {
          v23 = v5[35];
          v11 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v11 )
            sub_15D7BC0(v23, v22);
        }
        v24 = (__int64 *)v5[33];
        if ( v24 )
        {
          v25 = &v24[*((unsigned int *)v24 - 1)];
          if ( v24 >= v25 )
            goto LABEL_48;
          do
          {
            while ( 1 )
            {
              v26 = *v24;
              if ( *v24 )
              {
                v27 = v5[32];
                v11 = (*(_DWORD *)(v26 + 8))-- == 1;
                if ( v11 )
                  break;
              }
              if ( ++v24 >= v25 )
                goto LABEL_47;
            }
            v100 = (unsigned __int64)v25;
            ++v24;
            sub_15D7BC0(v27, v26);
            v25 = (__int64 *)v100;
          }
          while ( (unsigned __int64)v24 < v100 );
LABEL_47:
          v24 = (__int64 *)v5[33];
          if ( v24 )
LABEL_48:
            sub_186B220(v24 - 1);
        }
        v28 = v5[31];
        if ( v28 )
        {
          v29 = *(unsigned int *)(v28 - 4);
          if ( (_DWORD)v29 )
          {
            v113 = v28 + 32 * v29;
            do
            {
              v101 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v28);
              v30 = v28 + 16;
              v28 += 32;
              sub_182CBA0(v101, v30);
            }
            while ( v28 != v113 );
            v28 = v5[31];
          }
          sub_186B220((void *)(v28 - 8));
        }
        v31 = v5[30];
        if ( v31 )
        {
          v32 = *(unsigned int *)(v31 - 4);
          if ( (_DWORD)v32 )
          {
            v114 = v31 + 32 * v32;
            do
            {
              v102 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v31);
              v33 = v31 + 16;
              v31 += 32;
              sub_182CBA0(v102, v33);
            }
            while ( v31 != v114 );
            v31 = v5[30];
          }
          sub_186B220((void *)(v31 - 8));
        }
        sub_2334C0(v5 + 28);
        v34 = (__int64 *)v5[27];
        if ( v34 )
        {
          v35 = &v34[*((unsigned int *)v34 - 1)];
          if ( v34 >= v35 )
            goto LABEL_69;
          do
          {
            while ( 1 )
            {
              v36 = *v34;
              if ( *v34 )
              {
                v37 = v5[26];
                v11 = (*(_DWORD *)(v36 + 8))-- == 1;
                if ( v11 )
                  break;
              }
              if ( ++v34 >= v35 )
                goto LABEL_68;
            }
            v103 = (unsigned __int64)v35;
            ++v34;
            sub_15D7BC0(v37, v36);
            v35 = (__int64 *)v103;
          }
          while ( (unsigned __int64)v34 < v103 );
LABEL_68:
          v34 = (__int64 *)v5[27];
          if ( v34 )
LABEL_69:
            sub_186B220(v34 - 1);
        }
        v38 = (__int64 *)v5[25];
        if ( v38 )
        {
          v39 = &v38[*((unsigned int *)v38 - 1)];
          if ( v38 >= v39 )
            goto LABEL_78;
          do
          {
            while ( 1 )
            {
              v40 = *v38;
              if ( *v38 )
              {
                v41 = v5[24];
                v11 = (*(_DWORD *)(v40 + 8))-- == 1;
                if ( v11 )
                  break;
              }
              if ( ++v38 >= v39 )
                goto LABEL_77;
            }
            v104 = (unsigned __int64)v39;
            ++v38;
            sub_15D7BC0(v41, v40);
            v39 = (__int64 *)v104;
          }
          while ( (unsigned __int64)v38 < v104 );
LABEL_77:
          v38 = (__int64 *)v5[25];
          if ( v38 )
LABEL_78:
            sub_186B220(v38 - 1);
        }
        v42 = (__int64 *)v5[23];
        if ( v42 )
        {
          v43 = &v42[*((unsigned int *)v42 - 1)];
          if ( v42 >= v43 )
            goto LABEL_87;
          do
          {
            while ( 1 )
            {
              v44 = *v42;
              if ( *v42 )
              {
                v45 = v5[22];
                v11 = (*(_DWORD *)(v44 + 8))-- == 1;
                if ( v11 )
                  break;
              }
              if ( ++v42 >= v43 )
                goto LABEL_86;
            }
            v105 = (unsigned __int64)v43;
            ++v42;
            sub_15D7BC0(v45, v44);
            v43 = (__int64 *)v105;
          }
          while ( (unsigned __int64)v42 < v105 );
LABEL_86:
          v42 = (__int64 *)v5[23];
          if ( v42 )
LABEL_87:
            sub_186B220(v42 - 1);
        }
        v46 = (__int64 *)v5[21];
        if ( v46 )
        {
          v47 = &v46[*((unsigned int *)v46 - 1)];
          if ( v46 >= v47 )
            goto LABEL_96;
          do
          {
            while ( 1 )
            {
              v48 = *v46;
              if ( *v46 )
              {
                v49 = v5[20];
                v11 = (*(_DWORD *)(v48 + 8))-- == 1;
                if ( v11 )
                  break;
              }
              if ( ++v46 >= v47 )
                goto LABEL_95;
            }
            v106 = (unsigned __int64)v47;
            ++v46;
            sub_15D7BC0(v49, v48);
            v47 = (__int64 *)v106;
          }
          while ( (unsigned __int64)v46 < v106 );
LABEL_95:
          v46 = (__int64 *)v5[21];
          if ( v46 )
LABEL_96:
            sub_186B220(v46 - 1);
        }
        v50 = v5[19];
        if ( v50 )
        {
          v51 = *(unsigned int *)(v50 - 4);
          if ( (_DWORD)v51 )
          {
            v115 = v50 + 32 * v51;
            do
            {
              v107 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v50);
              v52 = v50 + 16;
              v50 += 32;
              sub_182CBA0(v107, v52);
            }
            while ( v50 != v115 );
            v50 = v5[19];
          }
          sub_186B220((void *)(v50 - 8));
        }
        v53 = v5[18];
        if ( v53 )
        {
          v54 = *(unsigned int *)(v53 - 4);
          if ( (_DWORD)v54 )
          {
            v116 = v53 + 32 * v54;
            do
            {
              v108 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v53);
              v55 = v53 + 16;
              v53 += 32;
              sub_182CBA0(v108, v55);
            }
            while ( v53 != v116 );
            v53 = v5[18];
          }
          sub_186B220((void *)(v53 - 8));
        }
        v56 = v5[17];
        if ( v56 )
        {
          v57 = *(unsigned int *)(v56 - 4);
          if ( (_DWORD)v57 )
          {
            v117 = v56 + 32 * v57;
            do
            {
              v109 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v56);
              v58 = v56 + 16;
              v56 += 32;
              sub_182CBA0(v109, v58);
            }
            while ( v56 != v117 );
            v56 = v5[17];
          }
          sub_186B220((void *)(v56 - 8));
        }
        v59 = v5[16];
        if ( v59 )
        {
          v60 = *(unsigned int *)(v59 - 4);
          if ( (_DWORD)v60 )
          {
            v118 = v59 + 32 * v60;
            do
            {
              v110 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v59);
              v61 = v59 + 16;
              v59 += 32;
              sub_182CBA0(v110, v61);
            }
            while ( v59 != v118 );
            v59 = v5[16];
          }
          sub_186B220((void *)(v59 - 8));
        }
        sub_2334C0(v5 + 14);
        sub_2334C0(v5 + 12);
        sub_2334C0(v5 + 10);
        sub_2334C0(v5 + 8);
        v62 = (void *)v5[7];
        v5[1] = (__int64)&off_1C62200;
        if ( v62 )
          sub_186B220(v62);
        v63 = (void *)v5[4];
        if ( v63 )
          sub_186B220(v63);
        sub_186B220(v5);
      }
      v64 = v3 + 4;
      if ( v4 == v3 + 4 )
        break;
      while ( 1 )
      {
        v3 = v64;
        if ( *v64 > 1u )
          break;
        v64 += 4;
        if ( v4 == v64 )
          goto LABEL_131;
      }
    }
  }
LABEL_131:
  v65 = *(char **)(a1 + 832);
  if ( v65 )
  {
    v66 = *(unsigned int *)(a1 + 840);
    if ( (_DWORD)v66 )
    {
      v67 = *(_QWORD *)(a1 + 832);
      v68 = &v65[88 * v66];
      do
      {
        while ( 1 )
        {
          v69 = *(_QWORD *)(v67 + 80);
          if ( !v69 )
            break;
          sub_186B220((void *)(v69 - 8));
          v70 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v67 + 40);
          v71 = v67 + 56;
          v67 += 88;
          sub_182CBA0(v70, v71);
          if ( v68 == (char *)v67 )
            goto LABEL_136;
        }
        v94 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v67 + 40);
        v95 = v67 + 56;
        v67 += 88;
        sub_182CBA0(v94, v95);
      }
      while ( (char *)v67 != v68 );
    }
LABEL_136:
    sub_186B220(v65);
  }
  v72 = *(void **)(a1 + 808);
  if ( v72 )
    sub_186B220(v72);
  sub_2334C0((__int64 *)(a1 + 792));
  v73 = *(void **)(a1 + 744);
  if ( v73 )
    sub_186B220(v73);
  v74 = *(__int64 **)(a1 + 720);
  if ( v74 )
  {
    sub_2334C0(v74 + 11);
    v75 = v74[10];
    if ( v75 )
      sub_186B220((void *)(v75 - 8));
    sub_186B220(v74);
  }
  v76 = *(__int64 **)(a1 + 552);
  v77 = &v76[*(unsigned int *)(a1 + 560)];
  for ( i = v76; i != v77; *(_BYTE *)(v79 + 6) &= ~1u )
    v79 = *i++;
  *(_DWORD *)(a1 + 560) = 0;
  if ( v76 != (__int64 *)(a1 + 568) && v76 )
    sub_186B220(v76);
  v80 = *(_QWORD *)(a1 + 544);
  if ( v80 )
    sub_186B220((void *)(v80 - 8));
  v81 = *(_QWORD *)(a1 + 536);
  if ( v81 )
    sub_186B220((void *)(v81 - 8));
  v82 = *(_QWORD *)(a1 + 528);
  if ( v82 )
    sub_186B220((void *)(v82 - 8));
  v83 = *(_QWORD *)(a1 + 520);
  if ( v83 )
    sub_186B220((void *)(v83 - 8));
  v84 = *(_QWORD **)(a1 + 440);
  while ( v84 )
  {
    v85 = v84;
    v84 = (_QWORD *)*v84;
    operator delete(v85, 0x18u);
  }
  memset(*(void **)(a1 + 424), 0, 8LL * *(_QWORD *)(a1 + 432));
  v86 = *(void **)(a1 + 424);
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  if ( v86 != (void *)(a1 + 472) )
    operator delete(v86, 8LL * *(_QWORD *)(a1 + 432));
  sub_2334C0((__int64 *)(a1 + 408));
  v87 = *(_QWORD *)(a1 + 400);
  if ( v87 )
    sub_186B220((void *)(v87 - 8));
  v88 = *(_QWORD *)(a1 + 392);
  if ( v88 )
    sub_186B220((void *)(v88 - 8));
  v89 = *(_QWORD *)(a1 + 384);
  if ( v89 )
    sub_186B220((void *)(v89 - 8));
  sub_2334C0((__int64 *)(a1 + 368));
  sub_2334C0((__int64 *)(a1 + 352));
  sub_6BFE30(*(_QWORD *)(a1 + 328), *(_QWORD *)(a1 + 336));
  sub_6BFE30(*(_QWORD *)(a1 + 312), *(_QWORD *)(a1 + 320));
  sub_6BFE30(*(_QWORD *)(a1 + 296), *(_QWORD *)(a1 + 304));
  sub_6BFE30(*(_QWORD *)(a1 + 280), *(_QWORD *)(a1 + 288));
  sub_6BFE30(*(_QWORD *)(a1 + 264), *(_QWORD *)(a1 + 272));
  sub_6BFE30(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 256));
  v90 = *(void **)(a1 + 176);
  if ( v90 )
    sub_186B220(v90);
  v91 = *(__int64 **)(a1 + 152);
  if ( v91 )
  {
    sub_2334C0(v91 + 11);
    v92 = v91[10];
    if ( v92 )
      sub_186B220((void *)(v92 - 8));
    sub_186B220(v91);
  }
  sub_18572D0((void *)(a1 + 104));
  sub_2B4F40((__int64 *)(a1 + 80));
  return sub_14B63F0(a1 + 64);
}

