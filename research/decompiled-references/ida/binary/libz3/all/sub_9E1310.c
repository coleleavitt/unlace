__int64 __fastcall sub_9E1310(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // r13
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r15
  void *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // r12
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r14
  void *v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r14
  void *v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rax
  _QWORD *v30; // r12
  void *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rbx
  _QWORD *v36; // r13
  void (__fastcall ***v37)(_QWORD); // r12
  _QWORD *v38; // rbx
  _QWORD *v39; // r13
  void (__fastcall ***v40)(_QWORD); // r12
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int *v43; // rdi
  size_t v44; // rdx
  _DWORD *v45; // rax
  int v46; // edx
  _DWORD *v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v59; // [rsp+8h] [rbp-40h]

  v2 = a1 + 200;
  *(_QWORD *)(v2 - 8) = 0;
  *(_QWORD *)(v2 + 124) = 0;
  memset(
    (void *)(v2 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)a1 - (v2 & 0xFFFFFFF8) + 332) >> 3));
  v3 = *(_QWORD **)(a1 + 568);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v59 = &v3[3 * v4];
      do
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = *(unsigned int *)(v5 - 4);
          if ( (_DWORD)v6 )
          {
            v7 = v5 + 40 * v6;
            do
            {
              v8 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v5);
              v9 = v5 + 16;
              v5 += 40;
              sub_182CBA0(v8, v9);
            }
            while ( v7 != v5 );
            v5 = *v3;
          }
          sub_186B220((void *)(v5 - 8));
        }
        v3 += 3;
      }
      while ( v59 != v3 );
      v3 = *(_QWORD **)(a1 + 568);
    }
    *((_DWORD *)v3 - 1) = 0;
  }
  sub_8E1A60(a1 + 504);
  v10 = *(_QWORD *)(a1 + 576);
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  v11 = *(_QWORD **)(a1 + 584);
  if ( v11 )
  {
    v12 = *((unsigned int *)v11 - 1);
    if ( (_DWORD)v12 )
    {
      v13 = &v11[2 * v12];
      do
      {
        while ( *v11 )
        {
          v14 = (void *)(*v11 - 8LL);
          v11 += 2;
          sub_186B220(v14);
          if ( v13 == v11 )
          {
            v11 = *(_QWORD **)(a1 + 584);
            goto LABEL_21;
          }
        }
        v11 += 2;
      }
      while ( v13 != v11 );
      v11 = *(_QWORD **)(a1 + 584);
    }
LABEL_21:
    *((_DWORD *)v11 - 1) = 0;
  }
  v15 = *(_QWORD *)(a1 + 592);
  if ( v15 )
    *(_DWORD *)(v15 - 4) = 0;
  v16 = *(_QWORD *)(a1 + 600);
  if ( v16 )
  {
    v17 = *(unsigned int *)(v16 - 4);
    if ( (_DWORD)v17 )
    {
      v18 = v16 + 32 * v17;
      do
      {
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v16);
        v20 = v16 + 16;
        v16 += 32;
        sub_182CBA0(v19, v20);
      }
      while ( v16 != v18 );
      v16 = *(_QWORD *)(a1 + 600);
    }
    *(_DWORD *)(v16 - 4) = 0;
  }
  v21 = *(_QWORD *)(a1 + 608);
  if ( v21 )
  {
    v22 = *(unsigned int *)(v21 - 4);
    if ( (_DWORD)v22 )
    {
      v23 = v21 + 32 * v22;
      do
      {
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v21);
        v25 = v21 + 16;
        v21 += 32;
        sub_182CBA0(v24, v25);
      }
      while ( v21 != v23 );
      v21 = *(_QWORD *)(a1 + 608);
    }
    *(_DWORD *)(v21 - 4) = 0;
  }
  v26 = *(_QWORD *)(a1 + 616);
  if ( v26 )
    *(_DWORD *)(v26 - 4) = 0;
  v27 = *(_QWORD *)(a1 + 624);
  if ( v27 )
    *(_DWORD *)(v27 - 4) = 0;
  v28 = *(_QWORD **)(a1 + 632);
  if ( v28 )
  {
    v29 = *((unsigned int *)v28 - 1);
    if ( (_DWORD)v29 )
    {
      v30 = &v28[v29];
      do
      {
        while ( *v28 )
        {
          v31 = (void *)(*v28++ - 8LL);
          sub_186B220(v31);
          if ( v30 == v28 )
          {
            v28 = *(_QWORD **)(a1 + 632);
            goto LABEL_46;
          }
        }
        ++v28;
      }
      while ( v28 != v30 );
      v28 = *(_QWORD **)(a1 + 632);
    }
LABEL_46:
    *((_DWORD *)v28 - 1) = 0;
  }
  v32 = *(_QWORD *)(a1 + 640);
  if ( v32 )
    *(_DWORD *)(v32 - 4) = 0;
  v33 = *(_QWORD *)(a1 + 648);
  if ( v33 )
    *(_DWORD *)(v33 - 4) = 0;
  v34 = *(_QWORD *)(a1 + 656);
  if ( v34 )
    *(_DWORD *)(v34 - 4) = 0;
  v35 = *(_QWORD **)(a1 + 664);
  if ( v35 )
  {
    v36 = &v35[*((unsigned int *)v35 - 1)];
    if ( v35 == v36 )
      goto LABEL_59;
    do
    {
      v37 = (void (__fastcall ***)(_QWORD))*v35;
      if ( *v35 )
      {
        (**v37)(*v35);
        sub_186B220(v37);
      }
      ++v35;
    }
    while ( v35 != v36 );
    v36 = *(_QWORD **)(a1 + 664);
    if ( v36 )
LABEL_59:
      *((_DWORD *)v36 - 1) = 0;
  }
  v38 = *(_QWORD **)(a1 + 960);
  if ( v38 )
  {
    v39 = &v38[*((unsigned int *)v38 - 1)];
    if ( v38 == v39 )
      goto LABEL_66;
    do
    {
      v40 = (void (__fastcall ***)(_QWORD))*v38;
      if ( *v38 )
      {
        (**v40)(*v38);
        sub_186B220(v40);
      }
      ++v38;
    }
    while ( v38 != v39 );
    v39 = *(_QWORD **)(a1 + 960);
    if ( v39 )
LABEL_66:
      *((_DWORD *)v39 - 1) = 0;
  }
  v41 = *(_QWORD *)(a1 + 672);
  if ( v41 )
    *(_DWORD *)(v41 - 4) = 0;
  v42 = *(_QWORD *)(a1 + 800);
  *(_DWORD *)(a1 + 680) = 0;
  if ( !v42 || *(_DWORD *)(v42 - 4) != 1 )
  {
    v43 = *(unsigned int **)(a1 + 808);
    if ( v43 )
      v44 = 4LL * *(v43 - 1);
    else
      v44 = 0;
    memset(v43, 0, v44);
    v45 = *(_DWORD **)(a1 + 800);
    if ( v45 && (v46 = *(v45 - 2), *(v45 - 1) = 0, v46) )
    {
      v47 = v45;
    }
    else
    {
      sub_313C10((unsigned int **)(a1 + 800));
      v45 = *(_DWORD **)(a1 + 800);
      v47 = &v45[*(v45 - 1)];
    }
    *v47 = -1;
    ++*(v45 - 1);
  }
  v48 = *(_DWORD *)(a1 + 816) + 1;
  *(_DWORD *)(a1 + 816) = v48;
  if ( v48 == -1 )
    sub_98ACA0(a1 + 816);
  v49 = *(_QWORD *)(a1 + 840);
  *(_BYTE *)(a1 + 832) = 0;
  if ( v49 )
    *(_DWORD *)(v49 - 4) = 0;
  v50 = *(_DWORD *)(a1 + 848) + 1;
  *(_DWORD *)(a1 + 848) = v50;
  if ( v50 == -1 )
    sub_98ACA0(a1 + 848);
  v51 = *(_QWORD *)(a1 + 864);
  if ( v51 )
    *(_DWORD *)(v51 - 4) = 0;
  v52 = *(_DWORD *)(a1 + 872) + 1;
  *(_DWORD *)(a1 + 872) = v52;
  if ( v52 == -1 )
    sub_98ACA0(a1 + 872);
  v53 = *(_QWORD *)(a1 + 944);
  *(_DWORD *)(a1 + 924) = 0;
  if ( v53 )
    *(_DWORD *)(v53 - 4) = 0;
  v54 = *(_QWORD *)(a1 + 952);
  if ( v54 )
    *(_DWORD *)(v54 - 4) = 0;
  v55 = *(_QWORD *)(a1 + 968);
  if ( v55 )
    *(_DWORD *)(v55 - 4) = 0;
  v56 = *(_QWORD *)(a1 + 696);
  if ( v56 )
    *(_DWORD *)(v56 - 4) = 0;
  v57 = *(_QWORD *)(a1 + 704);
  if ( v57 )
    *(_DWORD *)(v57 - 4) = 0;
  *(_DWORD *)(a1 + 1348) = 0;
  *(_BYTE *)(a1 + 1352) = 0;
  *(_DWORD *)(a1 + 1356) = 0;
  return sub_965AC0(a1);
}

