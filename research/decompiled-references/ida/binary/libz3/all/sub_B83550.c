__int64 __fastcall sub_B83550(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r14
  __int64 v4; // r14
  void *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  void *v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r14
  void *v15; // r13
  __int64 v16; // rsi
  _QWORD *v17; // rbp
  __int64 v18; // rax
  _QWORD *v19; // r12
  void *v20; // rdi
  _QWORD *v21; // rbp
  __int64 v22; // rax
  _QWORD *v23; // r12
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r14
  __int64 v28; // r14
  void *v29; // r13
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int *v35; // rdi
  size_t v36; // rdx
  _DWORD *v37; // rax
  int v38; // edx
  _DWORD *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax

  v1 = *(_QWORD *)(a1 + 984);
  if ( v1 )
  {
    v3 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v1 + 32 * v3;
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1);
        v6 = v1 + 16;
        v1 += 32;
        sub_182CBA0(v5, v6);
      }
      while ( v1 != v4 );
      v1 = *(_QWORD *)(a1 + 984);
    }
    *(_DWORD *)(v1 - 4) = 0;
  }
  v7 = *(_QWORD *)(a1 + 992);
  if ( v7 )
  {
    v8 = *(unsigned int *)(v7 - 4);
    if ( (_DWORD)v8 )
    {
      v9 = v7 + 40 * v8;
      do
      {
        v10 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v7 + 8);
        v11 = v7 + 24;
        v7 += 40;
        sub_182CBA0(v10, v11);
      }
      while ( v7 != v9 );
      v7 = *(_QWORD *)(a1 + 992);
    }
    *(_DWORD *)(v7 - 4) = 0;
  }
  v12 = *(_QWORD *)(a1 + 1000);
  if ( v12 )
  {
    v13 = *(unsigned int *)(v12 - 4);
    if ( (_DWORD)v13 )
    {
      v14 = v12 + 56 * v13;
      do
      {
        v15 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v12 + 8);
        v16 = v12 + 24;
        v12 += 56;
        sub_182CBA0(v15, v16);
      }
      while ( v12 != v14 );
      v12 = *(_QWORD *)(a1 + 1000);
    }
    *(_DWORD *)(v12 - 4) = 0;
  }
  v17 = *(_QWORD **)(a1 + 1016);
  if ( v17 )
  {
    v18 = *((unsigned int *)v17 - 1);
    if ( (_DWORD)v18 )
    {
      v19 = &v17[v18];
      do
      {
        while ( *v17 )
        {
          v20 = (void *)(*v17++ - 8LL);
          sub_186B220(v20);
          if ( v19 == v17 )
          {
            v17 = *(_QWORD **)(a1 + 1016);
            goto LABEL_25;
          }
        }
        ++v17;
      }
      while ( v19 != v17 );
      v17 = *(_QWORD **)(a1 + 1016);
    }
LABEL_25:
    *((_DWORD *)v17 - 1) = 0;
  }
  v21 = *(_QWORD **)(a1 + 1008);
  if ( v21 )
  {
    v22 = *((unsigned int *)v21 - 1);
    if ( (_DWORD)v22 )
    {
      v23 = &v21[v22];
      do
      {
        while ( *v21 )
        {
          v24 = (void *)(*v21++ - 8LL);
          sub_186B220(v24);
          if ( v21 == v23 )
          {
            v21 = *(_QWORD **)(a1 + 1008);
            goto LABEL_32;
          }
        }
        ++v21;
      }
      while ( v21 != v23 );
      v21 = *(_QWORD **)(a1 + 1008);
    }
LABEL_32:
    *((_DWORD *)v21 - 1) = 0;
  }
  v25 = *(_QWORD *)(a1 + 1024);
  if ( v25 )
    *(_DWORD *)(v25 - 4) = 0;
  v26 = *(_QWORD *)(a1 + 1032);
  if ( v26 )
  {
    v27 = *(unsigned int *)(v26 - 4);
    if ( (_DWORD)v27 )
    {
      v28 = v26 + 32 * v27;
      do
      {
        v29 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v26);
        v30 = v26 + 16;
        v26 += 32;
        sub_182CBA0(v29, v30);
      }
      while ( v26 != v28 );
      v26 = *(_QWORD *)(a1 + 1032);
    }
    *(_DWORD *)(v26 - 4) = 0;
  }
  v31 = *(_QWORD *)(a1 + 1040);
  if ( v31 )
    *(_DWORD *)(v31 - 4) = 0;
  v32 = *(_QWORD *)(a1 + 1048);
  if ( v32 )
    *(_DWORD *)(v32 - 4) = 0;
  v33 = *(_QWORD *)(a1 + 1056);
  if ( v33 )
    *(_DWORD *)(v33 - 4) = 0;
  v34 = *(_QWORD *)(a1 + 1072);
  if ( !v34 || *(_DWORD *)(v34 - 4) != 1 )
  {
    v35 = *(unsigned int **)(a1 + 1080);
    if ( v35 )
      v36 = 4LL * *(v35 - 1);
    else
      v36 = 0;
    memset(v35, 0, v36);
    v37 = *(_DWORD **)(a1 + 1072);
    if ( v37 && (v38 = *(v37 - 2), *(v37 - 1) = 0, v38) )
    {
      v39 = v37;
    }
    else
    {
      sub_313C10((unsigned int **)(a1 + 1072));
      v37 = *(_DWORD **)(a1 + 1072);
      v39 = &v37[*(v37 - 1)];
    }
    *v39 = -1;
    ++*(v37 - 1);
  }
  v40 = *(_QWORD *)(a1 + 1096);
  if ( v40 )
    *(_DWORD *)(v40 - 4) = 0;
  v41 = *(_QWORD *)(a1 + 1144);
  if ( v41 )
    *(_DWORD *)(v41 - 4) = 0;
  v42 = *(_QWORD *)(a1 + 1352);
  *(_QWORD *)(a1 + 948) = -1;
  if ( v42 )
    *(_DWORD *)(v42 - 4) = 0;
  v43 = *(_QWORD *)(a1 + 1360);
  if ( v43 )
    *(_DWORD *)(v43 - 4) = 0;
  v44 = *(_QWORD *)(a1 + 1400);
  *(_OWORD *)(a1 + 88) = 0;
  if ( v44 )
    *(_DWORD *)(v44 - 4) = 0;
  *(_BYTE *)(a1 + 1418) = 0;
  *(_DWORD *)(a1 + 1368) = 0;
  *(_QWORD *)(a1 + 1408) = 0x3FE0000000000000LL;
  *(_WORD *)(a1 + 1416) = 0;
  return sub_965AC0(a1);
}

