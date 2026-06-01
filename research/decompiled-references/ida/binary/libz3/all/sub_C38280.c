__int64 __fastcall sub_C38280(__int64 a1)
{
  void (__fastcall ***v2)(void *); // rbp
  bool v3; // zf
  __int64 *v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rbp
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rbp
  __int64 *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  void *v20; // rdi
  __int64 *v21; // rbp
  __int64 *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  void *v25; // rbp
  void *v26; // rbp
  void *v27; // rbp
  __int64 result; // rax
  char *v29; // r15
  __int64 v30; // rax
  char *v31; // rbp
  char *v32; // r14
  void *v33; // r13
  void *v34; // r13
  char *v35; // rsi
  char *v36; // r15
  __int64 v37; // rax
  char *v38; // rbp
  char *v39; // r14
  void *v40; // r13
  void *v41; // r13
  char *v42; // rsi
  __int64 *v43; // rbp
  __int64 *v44; // r12
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 *v51; // rbp
  __int64 *v52; // r12
  __int64 v53; // rsi
  __int64 v54; // rdi

  v2 = *(void (__fastcall ****)(void *))(a1 + 632);
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 2))-- == 1;
    if ( v3 )
    {
      (**v2)(v2);
      sub_186B220(v2);
    }
  }
  v4 = *(__int64 **)(a1 + 616);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = *(_QWORD *)(a1 + 608);
          v3 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_11;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_11:
    v4 = *(__int64 **)(a1 + 616);
    if ( v4 )
LABEL_12:
      sub_186B220(v4 - 1);
  }
  v8 = *(__int64 **)(a1 + 600);
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = *(_QWORD *)(a1 + 592);
          v3 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_20;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_20:
    v8 = *(__int64 **)(a1 + 600);
    if ( v8 )
LABEL_21:
      sub_186B220(v8 - 1);
  }
  v12 = *(__int64 **)(a1 + 584);
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_30;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = *(_QWORD *)(a1 + 576);
          v3 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_29;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_29:
    v12 = *(__int64 **)(a1 + 584);
    if ( v12 )
LABEL_30:
      sub_186B220(v12 - 1);
  }
  sub_1695230(a1 + 520);
  sub_F74720(a1 + 392);
  v16 = *(__int64 **)(a1 + 384);
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 >= v17 )
      goto LABEL_39;
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = *(_QWORD *)(a1 + 376);
          v3 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v16 >= v17 )
          goto LABEL_38;
      }
      sub_15D7BC0(v19, v18);
      ++v16;
    }
    while ( v16 < v17 );
LABEL_38:
    v16 = *(__int64 **)(a1 + 384);
    if ( v16 )
LABEL_39:
      sub_186B220(v16 - 1);
  }
  v20 = *(void **)(a1 + 352);
  if ( v20 )
    sub_186B220(v20);
  v21 = *(__int64 **)(a1 + 344);
  if ( v21 )
  {
    v22 = &v21[*((unsigned int *)v21 - 1)];
    if ( v21 >= v22 )
      goto LABEL_50;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = *(_QWORD *)(a1 + 336);
          v3 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_49;
      }
      sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_49:
    v21 = *(__int64 **)(a1 + 344);
    if ( v21 )
LABEL_50:
      sub_186B220(v21 - 1);
  }
  v25 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 280);
  sub_182CBA0(v25, a1 + 296);
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 248);
  sub_182CBA0(v26, a1 + 264);
  v27 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 216);
  result = sub_182CBA0(v27, a1 + 232);
  v29 = *(char **)(a1 + 192);
  if ( v29 )
  {
    v30 = *(unsigned int *)(a1 + 200);
    if ( (_DWORD)v30 )
    {
      v31 = *(char **)(a1 + 192);
      v32 = &v29[80 * v30];
      do
      {
        v33 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v31 + 48);
        sub_182CBA0(v33, v31 + 64);
        v34 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v31 + 16);
        v35 = v31 + 32;
        v31 += 80;
        sub_182CBA0(v34, v35);
      }
      while ( v31 != v32 );
    }
    result = sub_186B220(v29);
  }
  v36 = *(char **)(a1 + 168);
  if ( v36 )
  {
    v37 = *(unsigned int *)(a1 + 176);
    if ( (_DWORD)v37 )
    {
      v38 = *(char **)(a1 + 168);
      v39 = &v36[88 * v37];
      do
      {
        v40 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v38 + 48);
        sub_182CBA0(v40, v38 + 64);
        v41 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v38 + 16);
        v42 = v38 + 32;
        v38 += 88;
        sub_182CBA0(v41, v42);
      }
      while ( v38 != v39 );
    }
    result = sub_186B220(v36);
  }
  v43 = *(__int64 **)(a1 + 160);
  if ( v43 )
  {
    result = *((unsigned int *)v43 - 1);
    v44 = &v43[result];
    if ( v43 >= v44 )
      goto LABEL_69;
    do
    {
      while ( 1 )
      {
        v45 = *v43;
        if ( *v43 )
        {
          v46 = *(_QWORD *)(a1 + 152);
          v3 = (*(_DWORD *)(v45 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v43 >= v44 )
          goto LABEL_68;
      }
      result = sub_15D7BC0(v46, v45);
      ++v43;
    }
    while ( v43 < v44 );
LABEL_68:
    v43 = *(__int64 **)(a1 + 160);
    if ( v43 )
LABEL_69:
      result = sub_186B220(v43 - 1);
  }
  v47 = *(_QWORD *)(a1 + 136);
  if ( v47 )
  {
    v48 = *(_QWORD *)(a1 + 144);
    v3 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v3 )
      result = sub_15D7BC0(v48, v47);
  }
  v49 = *(_QWORD *)(a1 + 120);
  if ( v49 )
  {
    v50 = *(_QWORD *)(a1 + 128);
    v3 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( v3 )
      result = sub_15D7BC0(v50, v49);
  }
  v51 = *(__int64 **)(a1 + 112);
  if ( v51 )
  {
    result = *((unsigned int *)v51 - 1);
    v52 = &v51[result];
    if ( v51 >= v52 )
      return sub_186B220(v51 - 1);
    do
    {
      while ( 1 )
      {
        v53 = *v51;
        if ( *v51 )
        {
          v54 = *(_QWORD *)(a1 + 104);
          v3 = (*(_DWORD *)(v53 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v51 >= v52 )
          goto LABEL_83;
      }
      result = sub_15D7BC0(v54, v53);
      ++v51;
    }
    while ( v51 < v52 );
LABEL_83:
    v51 = *(__int64 **)(a1 + 112);
    if ( v51 )
      return sub_186B220(v51 - 1);
  }
  return result;
}

