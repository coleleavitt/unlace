__int64 __fastcall sub_9E0D20(__int64 a1)
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
  void *v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r14
  void *v26; // r13
  void *v27; // r13
  void *v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rbx
  __int64 v33; // rax
  _QWORD *v34; // r12
  void *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rbx
  _QWORD *v40; // r13
  void (__fastcall ***v41)(_QWORD); // r12
  _QWORD *v42; // rbx
  _QWORD *v43; // r13
  void (__fastcall ***v44)(_QWORD); // r12
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int *v47; // rdi
  size_t v48; // rdx
  _DWORD *v49; // rax
  int v50; // edx
  _DWORD *v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v63; // [rsp+8h] [rbp-40h]

  v2 = a1 + 328;
  *(_QWORD *)(v2 - 8) = 0;
  *(_QWORD *)(v2 + 124) = 0;
  memset(
    (void *)(v2 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)a1 - (v2 & 0xFFFFFFF8) + 460) >> 3));
  v3 = *(_QWORD **)(a1 + 696);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v63 = &v3[3 * v4];
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
      while ( v3 != v63 );
      v3 = *(_QWORD **)(a1 + 696);
    }
    *((_DWORD *)v3 - 1) = 0;
  }
  sub_8E1A60(a1 + 632);
  v10 = *(_QWORD *)(a1 + 704);
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  v11 = *(_QWORD **)(a1 + 712);
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
          if ( v11 == v13 )
          {
            v11 = *(_QWORD **)(a1 + 712);
            goto LABEL_21;
          }
        }
        v11 += 2;
      }
      while ( v11 != v13 );
      v11 = *(_QWORD **)(a1 + 712);
    }
LABEL_21:
    *((_DWORD *)v11 - 1) = 0;
  }
  v15 = *(_QWORD *)(a1 + 720);
  if ( v15 )
    *(_DWORD *)(v15 - 4) = 0;
  v16 = *(_QWORD *)(a1 + 728);
  if ( v16 )
  {
    v17 = *(unsigned int *)(v16 - 4);
    if ( (_DWORD)v17 )
    {
      v18 = v16 + 96 * v17;
      do
      {
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v16 + 64);
        sub_182CBA0(v19, v16 + 80);
        v20 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v16 + 32);
        sub_182CBA0(v20, v16 + 48);
        v21 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v16);
        v22 = v16 + 16;
        v16 += 96;
        sub_182CBA0(v21, v22);
      }
      while ( v18 != v16 );
      v16 = *(_QWORD *)(a1 + 728);
    }
    *(_DWORD *)(v16 - 4) = 0;
  }
  v23 = *(_QWORD *)(a1 + 736);
  if ( v23 )
  {
    v24 = *(unsigned int *)(v23 - 4);
    if ( (_DWORD)v24 )
    {
      v25 = v23 + 96 * v24;
      do
      {
        v26 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v23 + 64);
        sub_182CBA0(v26, v23 + 80);
        v27 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v23 + 32);
        sub_182CBA0(v27, v23 + 48);
        v28 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v23);
        v29 = v23 + 16;
        v23 += 96;
        sub_182CBA0(v28, v29);
      }
      while ( v23 != v25 );
      v23 = *(_QWORD *)(a1 + 736);
    }
    *(_DWORD *)(v23 - 4) = 0;
  }
  v30 = *(_QWORD *)(a1 + 744);
  if ( v30 )
    *(_DWORD *)(v30 - 4) = 0;
  v31 = *(_QWORD *)(a1 + 752);
  if ( v31 )
    *(_DWORD *)(v31 - 4) = 0;
  v32 = *(_QWORD **)(a1 + 760);
  if ( v32 )
  {
    v33 = *((unsigned int *)v32 - 1);
    if ( (_DWORD)v33 )
    {
      v34 = &v32[v33];
      do
      {
        while ( *v32 )
        {
          v35 = (void *)(*v32++ - 8LL);
          sub_186B220(v35);
          if ( v34 == v32 )
          {
            v32 = *(_QWORD **)(a1 + 760);
            goto LABEL_46;
          }
        }
        ++v32;
      }
      while ( v32 != v34 );
      v32 = *(_QWORD **)(a1 + 760);
    }
LABEL_46:
    *((_DWORD *)v32 - 1) = 0;
  }
  v36 = *(_QWORD *)(a1 + 768);
  if ( v36 )
    *(_DWORD *)(v36 - 4) = 0;
  v37 = *(_QWORD *)(a1 + 776);
  if ( v37 )
    *(_DWORD *)(v37 - 4) = 0;
  v38 = *(_QWORD *)(a1 + 784);
  if ( v38 )
    *(_DWORD *)(v38 - 4) = 0;
  v39 = *(_QWORD **)(a1 + 792);
  if ( v39 )
  {
    v40 = &v39[*((unsigned int *)v39 - 1)];
    if ( v39 == v40 )
      goto LABEL_59;
    do
    {
      v41 = (void (__fastcall ***)(_QWORD))*v39;
      if ( *v39 )
      {
        (**v41)(*v39);
        sub_186B220(v41);
      }
      ++v39;
    }
    while ( v39 != v40 );
    v40 = *(_QWORD **)(a1 + 792);
    if ( v40 )
LABEL_59:
      *((_DWORD *)v40 - 1) = 0;
  }
  v42 = *(_QWORD **)(a1 + 1152);
  if ( v42 )
  {
    v43 = &v42[*((unsigned int *)v42 - 1)];
    if ( v42 == v43 )
      goto LABEL_66;
    do
    {
      v44 = (void (__fastcall ***)(_QWORD))*v42;
      if ( *v42 )
      {
        (**v44)(*v42);
        sub_186B220(v44);
      }
      ++v42;
    }
    while ( v42 != v43 );
    v43 = *(_QWORD **)(a1 + 1152);
    if ( v43 )
LABEL_66:
      *((_DWORD *)v43 - 1) = 0;
  }
  v45 = *(_QWORD *)(a1 + 800);
  if ( v45 )
    *(_DWORD *)(v45 - 4) = 0;
  v46 = *(_QWORD *)(a1 + 928);
  *(_DWORD *)(a1 + 808) = 0;
  if ( !v46 || *(_DWORD *)(v46 - 4) != 1 )
  {
    v47 = *(unsigned int **)(a1 + 936);
    if ( v47 )
      v48 = 4LL * *(v47 - 1);
    else
      v48 = 0;
    memset(v47, 0, v48);
    v49 = *(_DWORD **)(a1 + 928);
    if ( v49 && (v50 = *(v49 - 2), *(v49 - 1) = 0, v50) )
    {
      v51 = v49;
    }
    else
    {
      sub_313C10((unsigned int **)(a1 + 928));
      v49 = *(_DWORD **)(a1 + 928);
      v51 = &v49[*(v49 - 1)];
    }
    *v51 = -1;
    ++*(v49 - 1);
  }
  v52 = *(_DWORD *)(a1 + 944) + 1;
  *(_DWORD *)(a1 + 944) = v52;
  if ( v52 == -1 )
    sub_98ACA0(a1 + 944);
  v53 = *(_QWORD *)(a1 + 968);
  *(_BYTE *)(a1 + 960) = 0;
  if ( v53 )
    *(_DWORD *)(v53 - 4) = 0;
  v54 = *(_DWORD *)(a1 + 976) + 1;
  *(_DWORD *)(a1 + 976) = v54;
  if ( v54 == -1 )
    sub_98ACA0(a1 + 976);
  v55 = *(_QWORD *)(a1 + 992);
  if ( v55 )
    *(_DWORD *)(v55 - 4) = 0;
  v56 = *(_DWORD *)(a1 + 1000) + 1;
  *(_DWORD *)(a1 + 1000) = v56;
  if ( v56 == -1 )
    sub_98ACA0(a1 + 1000);
  v57 = *(_QWORD *)(a1 + 1136);
  *(_DWORD *)(a1 + 1116) = 0;
  if ( v57 )
    *(_DWORD *)(v57 - 4) = 0;
  v58 = *(_QWORD *)(a1 + 1144);
  if ( v58 )
    *(_DWORD *)(v58 - 4) = 0;
  v59 = *(_QWORD *)(a1 + 1160);
  if ( v59 )
    *(_DWORD *)(v59 - 4) = 0;
  v60 = *(_QWORD *)(a1 + 824);
  if ( v60 )
    *(_DWORD *)(v60 - 4) = 0;
  v61 = *(_QWORD *)(a1 + 832);
  if ( v61 )
    *(_DWORD *)(v61 - 4) = 0;
  *(_DWORD *)(a1 + 1540) = 0;
  *(_BYTE *)(a1 + 1544) = 0;
  *(_DWORD *)(a1 + 1548) = 0;
  return sub_965AC0(a1);
}

