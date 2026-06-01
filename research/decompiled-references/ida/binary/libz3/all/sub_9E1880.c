__int64 __fastcall sub_9E1880(__int64 a1)
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
  void *v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r14
  void *v25; // r13
  void *v26; // r13
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rax
  _QWORD *v32; // r12
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rbx
  _QWORD *v38; // r13
  void (__fastcall ***v39)(_QWORD); // r12
  _QWORD *v40; // rbx
  _QWORD *v41; // r13
  void (__fastcall ***v42)(_QWORD); // r12
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int *v45; // rdi
  size_t v46; // rdx
  _DWORD *v47; // rax
  int v48; // edx
  _DWORD *v49; // rdx
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v61; // [rsp+8h] [rbp-40h]

  v2 = a1 + 264;
  *(_QWORD *)(v2 - 8) = 0;
  *(_QWORD *)(v2 + 124) = 0;
  memset(
    (void *)(v2 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)a1 - (v2 & 0xFFFFFFF8) + 396) >> 3));
  v3 = *(_QWORD **)(a1 + 632);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v61 = &v3[3 * v4];
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
            while ( v5 != v7 );
            v5 = *v3;
          }
          sub_186B220((void *)(v5 - 8));
        }
        v3 += 3;
      }
      while ( v61 != v3 );
      v3 = *(_QWORD **)(a1 + 632);
    }
    *((_DWORD *)v3 - 1) = 0;
  }
  sub_8E1A60(a1 + 568);
  v10 = *(_QWORD *)(a1 + 640);
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  v11 = *(_QWORD **)(a1 + 648);
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
            v11 = *(_QWORD **)(a1 + 648);
            goto LABEL_21;
          }
        }
        v11 += 2;
      }
      while ( v13 != v11 );
      v11 = *(_QWORD **)(a1 + 648);
    }
LABEL_21:
    *((_DWORD *)v11 - 1) = 0;
  }
  v15 = *(_QWORD *)(a1 + 656);
  if ( v15 )
    *(_DWORD *)(v15 - 4) = 0;
  v16 = *(_QWORD *)(a1 + 664);
  if ( v16 )
  {
    v17 = *(unsigned int *)(v16 - 4);
    if ( (_DWORD)v17 )
    {
      v18 = v16 + (v17 << 6);
      do
      {
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v16 + 32);
        sub_182CBA0(v19, v16 + 48);
        v20 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v16);
        v21 = v16 + 16;
        v16 += 64;
        sub_182CBA0(v20, v21);
      }
      while ( v18 != v16 );
      v16 = *(_QWORD *)(a1 + 664);
    }
    *(_DWORD *)(v16 - 4) = 0;
  }
  v22 = *(_QWORD *)(a1 + 672);
  if ( v22 )
  {
    v23 = *(unsigned int *)(v22 - 4);
    if ( (_DWORD)v23 )
    {
      v24 = v22 + (v23 << 6);
      do
      {
        v25 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v22 + 32);
        sub_182CBA0(v25, v22 + 48);
        v26 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v22);
        v27 = v22 + 16;
        v22 += 64;
        sub_182CBA0(v26, v27);
      }
      while ( v22 != v24 );
      v22 = *(_QWORD *)(a1 + 672);
    }
    *(_DWORD *)(v22 - 4) = 0;
  }
  v28 = *(_QWORD *)(a1 + 680);
  if ( v28 )
    *(_DWORD *)(v28 - 4) = 0;
  v29 = *(_QWORD *)(a1 + 688);
  if ( v29 )
    *(_DWORD *)(v29 - 4) = 0;
  v30 = *(_QWORD **)(a1 + 696);
  if ( v30 )
  {
    v31 = *((unsigned int *)v30 - 1);
    if ( (_DWORD)v31 )
    {
      v32 = &v30[v31];
      do
      {
        while ( *v30 )
        {
          v33 = (void *)(*v30++ - 8LL);
          sub_186B220(v33);
          if ( v32 == v30 )
          {
            v30 = *(_QWORD **)(a1 + 696);
            goto LABEL_46;
          }
        }
        ++v30;
      }
      while ( v30 != v32 );
      v30 = *(_QWORD **)(a1 + 696);
    }
LABEL_46:
    *((_DWORD *)v30 - 1) = 0;
  }
  v34 = *(_QWORD *)(a1 + 704);
  if ( v34 )
    *(_DWORD *)(v34 - 4) = 0;
  v35 = *(_QWORD *)(a1 + 712);
  if ( v35 )
    *(_DWORD *)(v35 - 4) = 0;
  v36 = *(_QWORD *)(a1 + 720);
  if ( v36 )
    *(_DWORD *)(v36 - 4) = 0;
  v37 = *(_QWORD **)(a1 + 728);
  if ( v37 )
  {
    v38 = &v37[*((unsigned int *)v37 - 1)];
    if ( v37 == v38 )
      goto LABEL_59;
    do
    {
      v39 = (void (__fastcall ***)(_QWORD))*v37;
      if ( *v37 )
      {
        (**v39)(*v37);
        sub_186B220(v39);
      }
      ++v37;
    }
    while ( v37 != v38 );
    v38 = *(_QWORD **)(a1 + 728);
    if ( v38 )
LABEL_59:
      *((_DWORD *)v38 - 1) = 0;
  }
  v40 = *(_QWORD **)(a1 + 1056);
  if ( v40 )
  {
    v41 = &v40[*((unsigned int *)v40 - 1)];
    if ( v40 == v41 )
      goto LABEL_66;
    do
    {
      v42 = (void (__fastcall ***)(_QWORD))*v40;
      if ( *v40 )
      {
        (**v42)(*v40);
        sub_186B220(v42);
      }
      ++v40;
    }
    while ( v40 != v41 );
    v41 = *(_QWORD **)(a1 + 1056);
    if ( v41 )
LABEL_66:
      *((_DWORD *)v41 - 1) = 0;
  }
  v43 = *(_QWORD *)(a1 + 736);
  if ( v43 )
    *(_DWORD *)(v43 - 4) = 0;
  v44 = *(_QWORD *)(a1 + 864);
  *(_DWORD *)(a1 + 744) = 0;
  if ( !v44 || *(_DWORD *)(v44 - 4) != 1 )
  {
    v45 = *(unsigned int **)(a1 + 872);
    if ( v45 )
      v46 = 4LL * *(v45 - 1);
    else
      v46 = 0;
    memset(v45, 0, v46);
    v47 = *(_DWORD **)(a1 + 864);
    if ( v47 && (v48 = *(v47 - 2), *(v47 - 1) = 0, v48) )
    {
      v49 = v47;
    }
    else
    {
      sub_313C10((unsigned int **)(a1 + 864));
      v47 = *(_DWORD **)(a1 + 864);
      v49 = &v47[*(v47 - 1)];
    }
    *v49 = -1;
    ++*(v47 - 1);
  }
  v50 = *(_DWORD *)(a1 + 880) + 1;
  *(_DWORD *)(a1 + 880) = v50;
  if ( v50 == -1 )
    sub_98ACA0(a1 + 880);
  v51 = *(_QWORD *)(a1 + 904);
  *(_BYTE *)(a1 + 896) = 0;
  if ( v51 )
    *(_DWORD *)(v51 - 4) = 0;
  v52 = *(_DWORD *)(a1 + 912) + 1;
  *(_DWORD *)(a1 + 912) = v52;
  if ( v52 == -1 )
    sub_98ACA0(a1 + 912);
  v53 = *(_QWORD *)(a1 + 928);
  if ( v53 )
    *(_DWORD *)(v53 - 4) = 0;
  v54 = *(_DWORD *)(a1 + 936) + 1;
  *(_DWORD *)(a1 + 936) = v54;
  if ( v54 == -1 )
    sub_98ACA0(a1 + 936);
  v55 = *(_QWORD *)(a1 + 1040);
  *(_DWORD *)(a1 + 1020) = 0;
  if ( v55 )
    *(_DWORD *)(v55 - 4) = 0;
  v56 = *(_QWORD *)(a1 + 1048);
  if ( v56 )
    *(_DWORD *)(v56 - 4) = 0;
  v57 = *(_QWORD *)(a1 + 1064);
  if ( v57 )
    *(_DWORD *)(v57 - 4) = 0;
  v58 = *(_QWORD *)(a1 + 760);
  if ( v58 )
    *(_DWORD *)(v58 - 4) = 0;
  v59 = *(_QWORD *)(a1 + 768);
  if ( v59 )
    *(_DWORD *)(v59 - 4) = 0;
  *(_DWORD *)(a1 + 1444) = 0;
  *(_BYTE *)(a1 + 1448) = 0;
  *(_DWORD *)(a1 + 1452) = 0;
  return sub_965AC0(a1);
}

