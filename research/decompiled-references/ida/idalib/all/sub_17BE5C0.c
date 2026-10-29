__int64 __fastcall sub_17BE5C0(__int64 a1, int *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rax
  int *v23; // r12
  unsigned __int8 v24; // al
  __int64 *v25; // rax
  __int64 *v26; // r12
  __int64 v27; // rax
  int *v28; // rdi
  int *v29; // rax
  int *v30; // r13
  int *v31; // r12
  int **v32; // rdx
  unsigned __int8 v33; // al
  __int64 *v34; // rax
  __int64 *v35; // r12
  __int64 v36; // rax
  int *v37; // rdi
  int *v38; // rax
  int *v39; // r13
  int *v40; // r12
  int **v41; // rdx
  unsigned __int8 v42; // al
  __int64 *v43; // rax
  __int64 *v44; // r13
  __int64 v45; // rax
  __int16 v46; // ax
  __int16 v47; // ax
  int *v48; // rax
  __int16 v49; // di
  __int16 v50; // di
  int *v51; // rdi
  __int64 v52; // r13
  __int64 *v53; // rdx
  unsigned __int64 v54; // rdi
  int v55; // r12d
  unsigned __int64 v56; // rdi
  __int64 v57; // rax
  bool v58; // r14
  __int64 v59; // rdi
  unsigned __int64 v60; // rdi
  bool v61; // r14
  unsigned __int8 v62; // al
  int *v63; // r12
  int **v64; // rdx
  unsigned __int8 v65; // al
  __int64 *v66; // rax
  __int64 v67; // rcx
  __int64 *v68; // rax
  __int64 v69; // rcx
  __int64 *v70; // rax
  __int64 v71; // rcx
  int *v72; // rax
  __int64 v73; // rax
  unsigned __int8 v74; // al
  unsigned __int8 v75; // al
  unsigned __int8 v76; // al
  unsigned __int8 v77; // al
  unsigned __int64 *v78; // rax
  unsigned __int64 v79; // rax
  __int64 *v80; // rax
  __int64 v81; // rcx
  int *v82; // rax
  __int64 v83; // rax
  __int64 *v84; // rax
  __int64 *v85; // rax
  __int64 v86; // rcx
  int *v87; // rax
  __int16 v88; // dx
  int *v89; // r12
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r14
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // r14
  __int64 v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rax
  __int64 v106; // r12
  _QWORD *v107; // r13
  __int16 v108; // ax
  __int16 v109; // ax
  __int16 v110; // ax
  int v111; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v112; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v113[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v114; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v115[11]; // [rsp+30h] [rbp-98h] BYREF
  char v116; // [rsp+88h] [rbp-40h]
  unsigned int v117; // [rsp+90h] [rbp-38h]
  char v118; // [rsp+94h] [rbp-34h]

  v7 = (__int64)a2;
  if ( (*((_BYTE *)a2 + 29) & 1) == 0 )
    goto LABEL_13;
  v8 = sub_B8C3D0((__int64)a2, (__int64)a2, a3, a4, a5, a6);
  a3 = *v8;
  v9 = *v8 + 8LL * *((unsigned int *)v8 + 2);
  if ( a3 < v9 )
  {
    a4 = a3;
    a2 = *(int **)a3;
    if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 399 )
    {
      do
      {
        a4 += 8;
        if ( v9 == a4 )
          goto LABEL_8;
        a2 = *(int **)a4;
      }
      while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 399 );
    }
    if ( v9 == a4 )
      goto LABEL_8;
  }
  else
  {
    if ( a3 == v9 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 399 )
    {
      v10 = (__int64 *)(v9 + 8);
      do
      {
        a4 = (__int64)v10;
        if ( (__int64 *)a3 == v10 )
          goto LABEL_8;
        v11 = *v10++;
      }
      while ( *(_WORD *)(v11 + 36) != 399 );
    }
  }
  while ( 1 )
  {
    v23 = *(int **)a3;
    if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) == 399 )
      break;
    a3 += 8LL;
  }
  v24 = sub_B81B70(v7);
  if ( !v24 )
    goto LABEL_306;
  if ( v24 <= 3u )
  {
    a2 = (int *)(a1 + 8);
    sub_168B9F0((__int64)v113, (__int64 *)(a1 + 8), v23[6], 0xCA2u, 0);
    sub_15F7200(v113);
    if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
      goto LABEL_13;
    v25 = sub_B8C3D0(v7, (__int64)a2, a3, a4, a5, a6);
    a6 = *v25;
    v26 = v25;
    a5 = 8LL * *((unsigned int *)v25 + 2);
    a2 = (int *)(*v25 + a5);
    v27 = a5 >> 3;
    a4 = a5 >> 5;
    if ( a5 >> 5 )
    {
      if ( *(_WORD *)(*(_QWORD *)a6 + 36LL) == 399 )
      {
        v28 = (int *)a6;
      }
      else
      {
        v28 = (int *)(a6 + 8);
        if ( *(_WORD *)(*(_QWORD *)(a6 + 8) + 36LL) != 399 )
        {
          v28 = (int *)(a6 + 16);
          if ( *(_WORD *)(*(_QWORD *)(a6 + 16) + 36LL) != 399 )
          {
            a3 = *(_QWORD *)(a6 + 24);
            v29 = (int *)a6;
            v28 = (int *)(a6 + 24);
            a4 = a6 + 32 * a4;
            if ( *(_WORD *)(a3 + 36) != 399 )
            {
              while ( 1 )
              {
                v28 = v29 + 8;
                if ( (int *)a4 == v29 + 8 )
                {
                  v27 = ((char *)a2 - (char *)v28) >> 3;
                  goto LABEL_54;
                }
                a3 = *((_QWORD *)v29 + 4);
                if ( *(_WORD *)(a3 + 36) == 399 )
                  goto LABEL_211;
                a3 = *((_QWORD *)v29 + 5);
                if ( *(_WORD *)(a3 + 36) == 399 )
                {
                  v28 = v29 + 10;
                  goto LABEL_211;
                }
                a3 = *((_QWORD *)v29 + 6);
                if ( *(_WORD *)(a3 + 36) == 399 )
                {
                  v28 = v29 + 12;
                  goto LABEL_211;
                }
                a3 = *((_QWORD *)v29 + 7);
                if ( *(_WORD *)(a3 + 36) == 399 )
                  break;
                v29 += 8;
              }
              v28 = v29 + 14;
            }
          }
        }
      }
LABEL_211:
      if ( a2 != v28 )
      {
        v82 = v28 + 2;
        if ( a2 == v28 + 2 )
        {
          v30 = v28;
        }
        else
        {
          do
          {
            if ( *(_WORD *)(*(_QWORD *)v82 + 36LL) != 399 )
            {
              *(_QWORD *)v28 = *(_QWORD *)v82;
              v28 += 2;
            }
            v82 += 2;
          }
          while ( a2 != v82 );
          a6 = *v26;
          a5 += *v26;
          a3 = a5 - (_QWORD)a2;
          v30 = (int *)((char *)v28 + a5 - (_QWORD)a2);
          if ( a2 != (int *)a5 )
          {
            memmove(v28, a2, a3);
            a6 = *v26;
          }
        }
        goto LABEL_218;
      }
      goto LABEL_57;
    }
    v28 = (int *)a6;
LABEL_54:
    if ( v27 != 2 )
    {
      if ( v27 != 3 )
      {
        if ( v27 != 1 )
        {
LABEL_57:
          v30 = a2;
          goto LABEL_218;
        }
        goto LABEL_286;
      }
      if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) == 399 )
        goto LABEL_211;
      v28 += 2;
    }
    if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) == 399 )
      goto LABEL_211;
    v28 += 2;
LABEL_286:
    v30 = a2;
    if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 399 )
    {
LABEL_218:
      v83 = ((__int64)v30 - a6) >> 3;
      *((_DWORD *)v26 + 2) = v83;
      if ( !(_DWORD)v83 )
        *(_BYTE *)(v7 + 29) &= ~1u;
      goto LABEL_8;
    }
    goto LABEL_211;
  }
  if ( v24 > 6u )
    goto LABEL_306;
LABEL_8:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    goto LABEL_13;
  v12 = sub_B8C3D0(v7, (__int64)a2, a3, a4, a5, a6);
  a3 = *v12;
  v13 = *v12 + 8LL * *((unsigned int *)v12 + 2);
  if ( a3 >= v13 )
  {
    if ( a3 == v13 )
      goto LABEL_13;
    if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 401 )
    {
      v66 = (__int64 *)(v13 + 8);
      do
      {
        a4 = (__int64)v66;
        if ( (__int64 *)a3 == v66 )
          goto LABEL_13;
        v67 = *v66++;
      }
      while ( *(_WORD *)(v67 + 36) != 401 );
    }
  }
  else
  {
    a4 = a3;
    while ( 1 )
    {
      a2 = *(int **)a4;
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 401 )
        break;
      a4 += 8;
      if ( v13 == a4 )
        goto LABEL_13;
    }
    if ( v13 == a4 )
      goto LABEL_13;
  }
  v40 = *(int **)a3;
  if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 401 )
  {
    v41 = (int **)(a3 + 8);
    do
      v40 = *v41++;
    while ( *((_WORD *)v40 + 18) != 401 );
  }
  v42 = sub_B81B70(v7);
  if ( !v42 )
    goto LABEL_306;
  if ( v42 > 3u )
  {
    if ( v42 > 6u )
      goto LABEL_306;
    a2 = (int *)(a1 + 8);
    sub_168B9F0((__int64)v113, (__int64 *)(a1 + 8), v40[6], 0xCA4u, 0);
    sub_15F7200(v113);
    if ( (*(_BYTE *)(v7 + 29) & 1) != 0 )
    {
      v43 = sub_B8C3D0(v7, (__int64)a2, a3, a4, a5, a6);
      a4 = *v43;
      v44 = v43;
      a5 = 8LL * *((unsigned int *)v43 + 2);
      a2 = (int *)(*v43 + a5);
      v45 = a5 >> 3;
      a3 = a5 >> 5;
      if ( a5 >> 5 )
      {
        v46 = *(_WORD *)(*(_QWORD *)a4 + 36LL);
        if ( v46 == 401 || v46 == 411 )
        {
          v51 = (int *)a4;
          goto LABEL_232;
        }
        v47 = *(_WORD *)(*(_QWORD *)(a4 + 8) + 36LL);
        if ( v47 == 411 || v47 == 401 )
        {
          v51 = (int *)(a4 + 8);
          goto LABEL_232;
        }
        v48 = (int *)a4;
        a3 = a4 + 32 * a3;
        while ( 1 )
        {
          v49 = *(_WORD *)(*((_QWORD *)v48 + 2) + 36LL);
          if ( v49 == 411 || v49 == 401 )
          {
            v51 = v48 + 4;
            goto LABEL_232;
          }
          v50 = *(_WORD *)(*((_QWORD *)v48 + 3) + 36LL);
          if ( v50 == 411 || v50 == 401 )
          {
            v51 = v48 + 6;
            goto LABEL_232;
          }
          v51 = v48 + 8;
          if ( (int *)a3 == v48 + 8 )
            break;
          a6 = *(unsigned __int16 *)(*((_QWORD *)v48 + 4) + 36LL);
          if ( (_WORD)a6 == 401 || (_WORD)a6 == 411 )
            goto LABEL_232;
          a6 = *(unsigned __int16 *)(*((_QWORD *)v48 + 5) + 36LL);
          if ( (_WORD)a6 == 411 || (_WORD)a6 == 401 )
          {
            v51 = v48 + 10;
            goto LABEL_232;
          }
          v48 += 8;
        }
        v45 = ((char *)a2 - (char *)v51) >> 3;
      }
      else
      {
        v51 = (int *)a4;
      }
      if ( v45 != 2 )
      {
        if ( v45 != 3 )
        {
          if ( v45 != 1 )
          {
LABEL_269:
            v51 = a2;
            goto LABEL_270;
          }
LABEL_302:
          v110 = *(_WORD *)(*(_QWORD *)v51 + 36LL);
          if ( v110 != 411 && v110 != 401 )
            goto LABEL_269;
LABEL_232:
          if ( a2 != v51 )
          {
            v87 = v51 + 2;
            if ( a2 != v51 + 2 )
            {
              do
              {
                v88 = *(_WORD *)(*(_QWORD *)v87 + 36LL);
                if ( v88 != 401 && v88 != 411 )
                {
                  *(_QWORD *)v51 = *(_QWORD *)v87;
                  v51 += 2;
                }
                v87 += 2;
              }
              while ( a2 != v87 );
              a4 = *v44;
              a5 += *v44;
              a3 = a5 - (_QWORD)a2;
              v89 = (int *)((char *)v51 + a5 - (_QWORD)a2);
              if ( a2 != (int *)a5 )
              {
                memmove(v51, a2, a3);
                a4 = *v44;
              }
              goto LABEL_240;
            }
          }
LABEL_270:
          v89 = v51;
LABEL_240:
          v90 = ((__int64)v89 - a4) >> 3;
          *((_DWORD *)v44 + 2) = v90;
          if ( !(_DWORD)v90 )
            *(_BYTE *)(v7 + 29) &= ~1u;
          goto LABEL_13;
        }
        v108 = *(_WORD *)(*(_QWORD *)v51 + 36LL);
        if ( v108 == 411 || v108 == 401 )
          goto LABEL_232;
        v51 += 2;
      }
      v109 = *(_WORD *)(*(_QWORD *)v51 + 36LL);
      if ( v109 == 411 || v109 == 401 )
        goto LABEL_232;
      v51 += 2;
      goto LABEL_302;
    }
  }
LABEL_13:
  if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_15;
  v112 = v7;
  if ( !sub_B735C0(v7) || (*(_BYTE *)(v112 + 29) & 1) == 0 )
    goto LABEL_15;
  v78 = sub_B8C3D0(v112, (__int64)a2, a3, a4, a5, a6);
  a3 = *v78;
  v79 = *v78 + 8LL * *((unsigned int *)v78 + 2);
  if ( a3 >= v79 )
  {
    if ( a3 == v79 )
      goto LABEL_15;
    if ( *(_WORD *)(*(_QWORD *)v79 + 36LL) != 411 )
    {
      v80 = (__int64 *)(v79 + 8);
      do
      {
        a4 = (__int64)v80;
        if ( (__int64 *)a3 == v80 )
          goto LABEL_15;
        v81 = *v80++;
      }
      while ( *(_WORD *)(v81 + 36) != 411 );
    }
LABEL_250:
    while ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 411 )
      a3 += 8LL;
    sub_168B9F0((__int64)v113, (__int64 *)(a1 + 8), *(_DWORD *)(*(_QWORD *)a3 + 24LL), 0xB98u, 0);
    v105 = sub_17B9080((__int64)v113, &v112);
    a2 = &v111;
    v111 = 0;
    sub_1587D10(v105, &v111);
    sub_15F7200(v113);
    v106 = v112;
    if ( (*(_BYTE *)(v112 + 29) & 1) != 0 )
    {
      v107 = sub_B8C3D0(v112, (__int64)&v111, a3, a4, a5, a6);
      sub_179C6B0((__int64)v107);
      if ( !*((_DWORD *)v107 + 2) )
        *(_BYTE *)(v106 + 29) &= ~1u;
    }
    goto LABEL_15;
  }
  a4 = a3;
  while ( 1 )
  {
    a2 = *(int **)a4;
    if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 411 )
      break;
    a4 += 8;
    if ( v79 == a4 )
      goto LABEL_15;
  }
  if ( v79 != a4 )
    goto LABEL_250;
LABEL_15:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    return sub_17BE150(a1, v7, a3, a4, a5, a6);
  v14 = sub_B8C3D0(v7, (__int64)a2, a3, a4, a5, a6);
  a3 = *v14;
  v15 = *v14 + 8LL * *((unsigned int *)v14 + 2);
  if ( a3 >= v15 )
  {
    if ( a3 == v15 )
      goto LABEL_20;
    while ( 1 )
    {
      a4 = *(_QWORD *)v15;
      if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 357 )
        break;
      v15 += 8LL;
      if ( a3 == v15 )
        goto LABEL_20;
    }
  }
  else
  {
    a4 = a3;
    while ( 1 )
    {
      a2 = *(int **)a4;
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 357 )
        break;
      a4 += 8;
      if ( v15 == a4 )
        goto LABEL_20;
    }
    if ( v15 == a4 )
      goto LABEL_20;
  }
  v31 = *(int **)a3;
  if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 357 )
  {
    v32 = (int **)(a3 + 8);
    do
      v31 = *v32++;
    while ( *((_WORD *)v31 + 18) != 357 );
  }
  if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 34 <= 5 )
    goto LABEL_73;
  v33 = sub_B81B70(v7);
  if ( !v33 )
    goto LABEL_306;
  if ( v33 <= 3u )
  {
LABEL_73:
    sub_168B9F0((__int64)v113, (__int64 *)(a1 + 8), v31[6], 0xC97u, 0);
    sub_15F7200(v113);
    if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
      return sub_17BE150(a1, v7, a3, a4, a5, a6);
    v34 = sub_B8C3D0(v7, a1 + 8, a3, a4, a5, a6);
    a4 = *v34;
    v35 = v34;
    a5 = 8LL * *((unsigned int *)v34 + 2);
    a2 = (int *)(*v34 + a5);
    v36 = a5 >> 3;
    a3 = a5 >> 5;
    if ( a5 >> 5 )
    {
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 357 )
      {
        v37 = (int *)a4;
      }
      else
      {
        v37 = (int *)(a4 + 8);
        if ( *(_WORD *)(*(_QWORD *)(a4 + 8) + 36LL) != 357 )
        {
          v37 = (int *)(a4 + 16);
          if ( *(_WORD *)(*(_QWORD *)(a4 + 16) + 36LL) != 357 )
          {
            v38 = (int *)a4;
            a3 = a4 + 32 * a3;
            if ( *(_WORD *)(*(_QWORD *)(a4 + 24) + 36LL) == 357 )
            {
              v37 = (int *)(a4 + 24);
            }
            else
            {
              while ( 1 )
              {
                v37 = v38 + 8;
                if ( (int *)a3 == v38 + 8 )
                {
                  v36 = ((char *)a2 - (char *)v37) >> 3;
                  goto LABEL_87;
                }
                a6 = *((_QWORD *)v38 + 4);
                if ( *(_WORD *)(a6 + 36) == 357 )
                  goto LABEL_173;
                a6 = *((_QWORD *)v38 + 5);
                if ( *(_WORD *)(a6 + 36) == 357 )
                {
                  v37 = v38 + 10;
                  goto LABEL_173;
                }
                a6 = *((_QWORD *)v38 + 6);
                if ( *(_WORD *)(a6 + 36) == 357 )
                {
                  v37 = v38 + 12;
                  goto LABEL_173;
                }
                a6 = *((_QWORD *)v38 + 7);
                if ( *(_WORD *)(a6 + 36) == 357 )
                  break;
                v38 += 8;
              }
              v37 = v38 + 14;
            }
          }
        }
      }
LABEL_173:
      if ( a2 != v37 )
      {
        v72 = v37 + 2;
        if ( a2 == v37 + 2 )
        {
          v39 = v37;
        }
        else
        {
          do
          {
            if ( *(_WORD *)(*(_QWORD *)v72 + 36LL) != 357 )
            {
              *(_QWORD *)v37 = *(_QWORD *)v72;
              v37 += 2;
            }
            v72 += 2;
          }
          while ( a2 != v72 );
          a4 = *v35;
          a5 += *v35;
          a3 = a5 - (_QWORD)a2;
          v39 = (int *)((char *)v37 + a5 - (_QWORD)a2);
          if ( a2 != (int *)a5 )
          {
            memmove(v37, a2, a3);
            a4 = *v35;
          }
        }
        goto LABEL_180;
      }
      goto LABEL_90;
    }
    v37 = (int *)a4;
LABEL_87:
    if ( v36 != 2 )
    {
      if ( v36 != 3 )
      {
        if ( v36 != 1 )
        {
LABEL_90:
          v39 = a2;
          goto LABEL_180;
        }
        goto LABEL_275;
      }
      if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 357 )
        goto LABEL_173;
      v37 += 2;
    }
    if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 357 )
      goto LABEL_173;
    v37 += 2;
LABEL_275:
    v39 = a2;
    if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) != 357 )
    {
LABEL_180:
      v73 = ((__int64)v39 - a4) >> 3;
      *((_DWORD *)v35 + 2) = v73;
      if ( !(_DWORD)v73 )
        *(_BYTE *)(v7 + 29) &= ~1u;
      goto LABEL_20;
    }
    goto LABEL_173;
  }
  if ( v33 > 6u )
    goto LABEL_306;
LABEL_20:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    return sub_17BE150(a1, v7, a3, a4, a5, a6);
  v16 = sub_B8C3D0(v7, (__int64)a2, a3, a4, a5, a6);
  a3 = *v16;
  v17 = *v16 + 8LL * *((unsigned int *)v16 + 2);
  if ( a3 >= v17 )
  {
    if ( a3 == v17 )
      goto LABEL_25;
    if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 232 )
    {
      v68 = (__int64 *)(v17 + 8);
      do
      {
        a4 = (__int64)v68;
        if ( (__int64 *)a3 == v68 )
          goto LABEL_25;
        v69 = *v68++;
      }
      while ( *(_WORD *)(v69 + 36) != 232 );
    }
  }
  else
  {
    a4 = a3;
    while ( 1 )
    {
      a2 = *(int **)a4;
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 232 )
        break;
      a4 += 8;
      if ( v17 == a4 )
        goto LABEL_25;
    }
    if ( v17 == a4 )
      goto LABEL_25;
  }
  v63 = *(int **)a3;
  if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 232 )
  {
    v64 = (int **)(a3 + 8);
    do
      v63 = *v64++;
    while ( *((_WORD *)v63 + 18) != 232 );
  }
  v65 = sub_B81B70(v7);
  if ( !v65 )
    goto LABEL_306;
  if ( v65 > 3u )
  {
    if ( v65 > 6u )
      goto LABEL_306;
  }
  else
  {
    a2 = (int *)(a1 + 8);
    sub_168B9F0((__int64)v113, (__int64 *)(a1 + 8), v63[6], 0x19A7u, 0);
    sub_15F7200(v113);
  }
LABEL_25:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    return sub_17BE150(a1, v7, a3, a4, a5, a6);
  v18 = sub_B8C3D0(v7, (__int64)a2, a3, a4, a5, a6);
  a3 = *v18;
  v19 = *v18 + 8LL * *((unsigned int *)v18 + 2);
  if ( a3 >= v19 )
  {
    if ( a3 != v19 )
    {
      if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) == 197 )
      {
LABEL_122:
        v52 = *(_QWORD *)a3;
        if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 197 )
        {
          v53 = (__int64 *)(a3 + 8);
          do
            v52 = *v53++;
          while ( *(_WORD *)(v52 + 36) != 197 );
        }
        goto LABEL_125;
      }
      v70 = (__int64 *)(v19 + 8);
      while ( 1 )
      {
        a4 = (__int64)v70;
        if ( (__int64 *)a3 == v70 )
          break;
        v71 = *v70++;
        if ( *(_WORD *)(v71 + 36) == 197 )
          goto LABEL_122;
      }
    }
  }
  else
  {
    a4 = a3;
    while ( 1 )
    {
      a2 = *(int **)a4;
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 197 )
        break;
      a4 += 8;
      if ( v19 == a4 )
        goto LABEL_30;
    }
    if ( v19 != a4 )
      goto LABEL_122;
  }
LABEL_30:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    return sub_17BE150(a1, v7, a3, a4, a5, a6);
  v20 = sub_B8C3D0(v7, (__int64)a2, a3, a4, a5, a6);
  a3 = *v20;
  v21 = *v20 + 8LL * *((unsigned int *)v20 + 2);
  if ( a3 >= v21 )
  {
    if ( a3 == v21 )
      return sub_17BE150(a1, v7, a3, a4, a5, a6);
    if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 195 )
    {
      v85 = (__int64 *)(v21 + 8);
      do
      {
        a4 = (__int64)v85;
        if ( (__int64 *)a3 == v85 )
          return sub_17BE150(a1, v7, a3, a4, a5, a6);
        v86 = *v85++;
      }
      while ( *(_WORD *)(v86 + 36) != 195 );
    }
  }
  else
  {
    a4 = a3;
    while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 195 )
    {
      a4 += 8;
      if ( v21 == a4 )
        return sub_17BE150(a1, v7, a3, a4, a5, a6);
    }
    if ( v21 == a4 )
      return sub_17BE150(a1, v7, a3, a4, a5, a6);
  }
  v52 = *(_QWORD *)a3;
  if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 195 )
  {
    v84 = (__int64 *)(a3 + 8);
    do
      v52 = *v84++;
    while ( *(_WORD *)(v52 + 36) != 195 );
  }
LABEL_125:
  if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 40 > 6 )
  {
    v76 = sub_B81B70(v7);
    if ( v76 )
    {
      if ( v76 <= 6u )
      {
        v77 = sub_B81B70(v7);
        if ( v77 )
        {
          if ( v77 <= 3u )
            goto LABEL_142;
          if ( v77 <= 6u )
            return sub_17BE150(a1, v7, a3, a4, a5, a6);
        }
      }
    }
LABEL_306:
    BUG();
  }
  v54 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
    v54 = *(_QWORD *)v54;
  if ( (*(_BYTE *)(v54 + 8) & 0x7F) != 0x18 )
  {
    v74 = sub_B81B70(v7);
    if ( !v74 )
      goto LABEL_306;
    if ( v74 <= 3u )
      goto LABEL_185;
    goto LABEL_184;
  }
  v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 340LL);
  v56 = v54 - 48;
  if ( !v56 )
  {
    v74 = sub_B81B70(v7);
    if ( !v74 )
      goto LABEL_306;
    if ( v74 <= 3u )
      goto LABEL_185;
LABEL_184:
    if ( v74 > 6u )
      goto LABEL_306;
    goto LABEL_185;
  }
  do
  {
    v57 = *(_QWORD *)(v56 + 40);
    v58 = 1;
    if ( (v57 & 7) == 0 )
      v58 = (v57 & 0xFFFFFFFFFFFFFFF8LL) == 0;
    v59 = *(_QWORD *)(sub_B8C1B0(v56 + 48) + 16);
    if ( (v59 & 4) != 0 )
      v60 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v60 = v59 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v60 + 8) & 0x7F) != 0x18 )
      break;
    v56 = v60 - 48;
  }
  while ( !v58 && v56 != 0 );
  v61 = v55 == 10 && v58;
  v62 = sub_B81B70(v7);
  if ( !v62 )
    goto LABEL_306;
  if ( v62 > 3u )
  {
    if ( v62 > 6u )
      goto LABEL_306;
    if ( v61 )
      goto LABEL_142;
  }
  else if ( v61 )
  {
    return sub_17BE150(a1, v7, a3, a4, a5, a6);
  }
LABEL_185:
  v75 = sub_B81B70(v7);
  if ( !v75 )
    goto LABEL_306;
  if ( v75 <= 3u )
    goto LABEL_142;
  if ( v75 > 6u )
    goto LABEL_306;
  a3 = *(_BYTE *)(v7 + 96) & 7;
  if ( ((_DWORD)a3 == 2 || (*(_BYTE *)(v7 + 96) & 7) == 0 && ((*(_BYTE *)(v7 + 96) >> 3) & 3) == 2) && !sub_A5EB90(v7) )
  {
LABEL_142:
    sub_168B9F0((__int64)v113, (__int64 *)(a1 + 8), *(_DWORD *)(v7 + 24), 0xC68u, 0);
    if ( v116 )
    {
      sub_AE9DF0(v115, v7, 0xAu);
    }
    else
    {
      if ( !v118 )
      {
LABEL_144:
        sub_15F7200(v113);
        sub_B88650(v7, 1);
        return sub_17BE150(a1, v7, a3, a4, a5, a6);
      }
      v95 = sub_168B9E0(v113);
      v96 = v114;
      if ( v114 )
        v96 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v114 + 32LL))(v114);
      v112 = v96;
      v97 = sub_1587BC0(v95, &v112, v91, v92, v93, v94);
      sub_AE9DF0((unsigned __int8 **)(*v97 + 32LL * v117 + 8), v7, 0xAu);
    }
    if ( v116 )
    {
      sub_AE9DF0(v115, v52, 0xEu);
    }
    else if ( v118 )
    {
      v102 = sub_168B9E0(v113);
      v103 = v114;
      if ( v114 )
        v103 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v114 + 32LL))(v114);
      v112 = v103;
      v104 = sub_1587BC0(v102, &v112, v98, v99, v100, v101);
      sub_AE9DF0((unsigned __int8 **)(*v104 + 32LL * v117 + 8), v52, 0xEu);
    }
    goto LABEL_144;
  }
  return sub_17BE150(a1, v7, a3, a4, a5, a6);
}
