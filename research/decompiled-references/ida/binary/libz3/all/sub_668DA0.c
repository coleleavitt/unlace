__int64 __fastcall sub_668DA0(__int64 a1)
{
  __int64 v2; // rax
  int i; // edx
  __int64 v4; // rdx
  void *v5; // rbp
  int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
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
  char *v25; // r15
  __int64 v26; // rax
  char *v27; // rbp
  char *v28; // r14
  void *v29; // r12
  char *v30; // rsi
  void *v31; // rdi
  void *v32; // rdi
  __int64 v33; // rdi
  __int64 *v34; // rbp
  __int64 *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 *v38; // rbp
  __int64 *v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rdi
  void (__fastcall ***v43)(void *); // rbp
  __int64 *v44; // rbp
  __int64 *v45; // r12
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 *v49; // rbp
  __int64 *v50; // r12
  __int64 v51; // rsi
  __int64 v52; // rdi
  void (__fastcall ***v53)(void *); // rbp
  __int64 result; // rax
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 *v57; // rbp
  __int64 *v58; // r12
  __int64 v59; // rsi
  __int64 v60; // rdi

  *(_QWORD *)a1 = &off_1C68C90;
  *(_QWORD *)(a1 + 72) = off_1C68E48;
  v2 = *(_QWORD *)(a1 + 192);
  if ( v2 )
  {
    for ( i = *(_DWORD *)(v2 - 4); i; *(_DWORD *)(v2 - 4) = i )
    {
      while ( 1 )
      {
        v4 = (unsigned int)(i - 1);
        v5 = *(void **)(v2 + 8 * v4);
        if ( !v5 )
          break;
        sub_F74720(*(_QWORD *)(v2 + 8 * v4));
        sub_186B220(v5);
        v2 = *(_QWORD *)(a1 + 192);
        v6 = *(_DWORD *)(v2 - 4);
        i = v6 - 1;
        *(_DWORD *)(v2 - 4) = v6 - 1;
        if ( v6 == 1 )
          goto LABEL_6;
      }
      i = *(_DWORD *)(v2 - 4) - 1;
    }
  }
LABEL_6:
  v7 = *(_QWORD *)(a1 + 904);
  *(_QWORD *)(a1 + 376) = &off_1C52B58;
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD *)(a1 + 888);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 896);
    v10 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v9, v8);
  }
  v11 = *(_QWORD *)(a1 + 872);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 880);
    v10 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v12, v11);
  }
  v13 = *(_QWORD *)(a1 + 856);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 864);
    v10 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v14, v13);
  }
  *(_QWORD *)(a1 + 704) = &qword_1C637E8;
  sub_15841B0(a1 + 704);
  *(_QWORD *)(a1 + 544) = &qword_1C637E8;
  sub_15841B0(a1 + 544);
  v15 = *(_QWORD *)(a1 + 536);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  sub_15841B0(a1 + 376);
  v16 = *(__int64 **)(a1 + 368);
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 >= v17 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = *(_QWORD *)(a1 + 360);
          v10 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v16 >= v17 )
          goto LABEL_26;
      }
      sub_15D7BC0(v19, v18);
      ++v16;
    }
    while ( v16 < v17 );
LABEL_26:
    v16 = *(__int64 **)(a1 + 368);
    if ( v16 )
LABEL_27:
      sub_186B220(v16 - 1);
  }
  v20 = *(void **)(a1 + 336);
  if ( v20 )
    sub_186B220(v20);
  v21 = *(__int64 **)(a1 + 328);
  if ( v21 )
  {
    v22 = &v21[*((unsigned int *)v21 - 1)];
    if ( v21 >= v22 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = *(_QWORD *)(a1 + 320);
          v10 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_37;
      }
      sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_37:
    v21 = *(__int64 **)(a1 + 328);
    if ( v21 )
LABEL_38:
      sub_186B220(v21 - 1);
  }
  v25 = *(char **)(a1 + 288);
  if ( v25 )
  {
    v26 = *(unsigned int *)(a1 + 296);
    if ( (_DWORD)v26 )
    {
      v27 = *(char **)(a1 + 288);
      v28 = &v25[40 * v26];
      do
      {
        v29 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v27 + 8);
        v30 = v27 + 24;
        v27 += 40;
        sub_182CBA0(v29, v30);
      }
      while ( v27 != v28 );
    }
    sub_186B220(v25);
  }
  v31 = *(void **)(a1 + 264);
  if ( v31 )
    sub_186B220(v31);
  v32 = *(void **)(a1 + 240);
  if ( v32 )
    sub_186B220(v32);
  v33 = *(_QWORD *)(a1 + 232);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = *(__int64 **)(a1 + 224);
  if ( v34 )
  {
    v35 = &v34[*((unsigned int *)v34 - 1)];
    if ( v34 >= v35 )
      goto LABEL_58;
    do
    {
      while ( 1 )
      {
        v36 = *v34;
        if ( *v34 )
        {
          v37 = *(_QWORD *)(a1 + 216);
          v10 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v34 >= v35 )
          goto LABEL_57;
      }
      sub_15D7BC0(v37, v36);
      ++v34;
    }
    while ( v34 < v35 );
LABEL_57:
    v34 = *(__int64 **)(a1 + 224);
    if ( v34 )
LABEL_58:
      sub_186B220(v34 - 1);
  }
  v38 = *(__int64 **)(a1 + 208);
  if ( v38 )
  {
    v39 = &v38[*((unsigned int *)v38 - 1)];
    if ( v38 >= v39 )
      goto LABEL_67;
    do
    {
      while ( 1 )
      {
        v40 = *v38;
        if ( *v38 )
        {
          v41 = *(_QWORD *)(a1 + 200);
          v10 = (*(_DWORD *)(v40 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v38 >= v39 )
          goto LABEL_66;
      }
      sub_15D7BC0(v41, v40);
      ++v38;
    }
    while ( v38 < v39 );
LABEL_66:
    v38 = *(__int64 **)(a1 + 208);
    if ( v38 )
LABEL_67:
      sub_186B220(v38 - 1);
  }
  v42 = *(_QWORD *)(a1 + 192);
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  v43 = *(void (__fastcall ****)(void *))(a1 + 184);
  if ( v43 )
  {
    v10 = (*((_DWORD *)v43 + 12))-- == 1;
    if ( v10 )
    {
      (**v43)(v43);
      sub_186B220(v43);
    }
  }
  v44 = *(__int64 **)(a1 + 176);
  if ( v44 )
  {
    v45 = &v44[*((unsigned int *)v44 - 1)];
    if ( v44 >= v45 )
      goto LABEL_81;
    do
    {
      while ( 1 )
      {
        v46 = *v44;
        if ( *v44 )
        {
          v47 = *(_QWORD *)(a1 + 168);
          v10 = (*(_DWORD *)(v46 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v44 >= v45 )
          goto LABEL_80;
      }
      sub_15D7BC0(v47, v46);
      ++v44;
    }
    while ( v44 < v45 );
LABEL_80:
    v44 = *(__int64 **)(a1 + 176);
    if ( v44 )
LABEL_81:
      sub_186B220(v44 - 1);
  }
  v48 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)a1 = qword_1C75FB0;
  *(_QWORD *)(a1 + 72) = qword_1C76160;
  if ( v48 )
    sub_186B220((void *)(v48 - 8));
  v49 = *(__int64 **)(a1 + 104);
  if ( v49 )
  {
    v50 = &v49[*((unsigned int *)v49 - 1)];
    if ( v49 >= v50 )
      goto LABEL_92;
    do
    {
      while ( 1 )
      {
        v51 = *v49;
        if ( *v49 )
        {
          v52 = *(_QWORD *)(a1 + 96);
          v10 = (*(_DWORD *)(v51 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v49 >= v50 )
          goto LABEL_91;
      }
      sub_15D7BC0(v52, v51);
      ++v49;
    }
    while ( v49 < v50 );
LABEL_91:
    v49 = *(__int64 **)(a1 + 104);
    if ( v49 )
LABEL_92:
      sub_186B220(v49 - 1);
  }
  *(_QWORD *)(a1 + 72) = qword_1C77178;
  *(_QWORD *)a1 = qword_1C76FE8;
  sub_18572D0((void *)(a1 + 80));
  v53 = *(void (__fastcall ****)(void *))(a1 + 56);
  result = (__int64)qword_1C63FB0;
  *(_QWORD *)a1 = qword_1C63FB0;
  if ( v53 )
  {
    v10 = (*((_DWORD *)v53 + 2))-- == 1;
    if ( v10 )
    {
      (**v53)(v53);
      result = sub_186B220(v53);
    }
  }
  v55 = *(_QWORD *)(a1 + 32);
  if ( v55 )
  {
    v56 = *(_QWORD *)(a1 + 40);
    v10 = (*(_DWORD *)(v55 + 8))-- == 1;
    if ( v10 )
      result = sub_15D7BC0(v56, v55);
  }
  v57 = *(__int64 **)(a1 + 24);
  if ( v57 )
  {
    result = *((unsigned int *)v57 - 1);
    v58 = &v57[result];
    if ( v57 >= v58 )
      return sub_186B220(v57 - 1);
    do
    {
      while ( 1 )
      {
        v59 = *v57;
        if ( *v57 )
        {
          v60 = *(_QWORD *)(a1 + 16);
          v10 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v10 )
            break;
        }
        if ( ++v57 >= v58 )
          goto LABEL_106;
      }
      result = sub_15D7BC0(v60, v59);
      ++v57;
    }
    while ( v57 < v58 );
LABEL_106:
    v57 = *(__int64 **)(a1 + 24);
    if ( v57 )
      return sub_186B220(v57 - 1);
  }
  return result;
}

