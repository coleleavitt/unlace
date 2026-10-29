__int64 __fastcall sub_8A9080(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  void *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // r12
  void *v11; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // r12
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int *v22; // rdi
  size_t v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // r13
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r15
  void *v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // r14
  void *v40; // r13
  __int64 v41; // rsi
  _QWORD *v42; // r13
  __int64 v43; // rax
  _QWORD *v44; // r12
  __int64 *v45; // rbx
  __int64 *v46; // r14
  __int64 v47; // rsi
  __int64 v48; // rdi
  _QWORD *v51; // [rsp+8h] [rbp-50h]
  unsigned int v52[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 632);
  if ( v3 )
  {
    while ( v2 < *(_DWORD *)(v3 - 4) )
    {
      v4 = *(void **)(v3 + 8LL * v2);
      if ( v4 )
      {
        sub_186B220(v4);
        v3 = *(_QWORD *)(a1 + 632);
        ++v2;
        if ( !v3 )
          break;
      }
      else
      {
        ++v2;
      }
    }
  }
  v5 = *(_QWORD *)(a1 + 208);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = *(_QWORD *)(a1 + 216);
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  v7 = *(_QWORD *)(a1 + 224);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  v8 = *(_QWORD **)(a1 + 240);
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v9 )
    {
      v10 = &v8[v9];
      do
      {
        while ( *v8 )
        {
          v11 = (void *)(*v8++ - 8LL);
          sub_186B220(v11);
          if ( v10 == v8 )
          {
            v8 = *(_QWORD **)(a1 + 240);
            goto LABEL_17;
          }
        }
        ++v8;
      }
      while ( v8 != v10 );
      v8 = *(_QWORD **)(a1 + 240);
    }
LABEL_17:
    *((_DWORD *)v8 - 1) = 0;
  }
  v12 = *(_QWORD **)(a1 + 232);
  if ( v12 )
  {
    v13 = *((unsigned int *)v12 - 1);
    if ( (_DWORD)v13 )
    {
      v14 = &v12[v13];
      do
      {
        while ( *v12 )
        {
          v15 = (void *)(*v12++ - 8LL);
          sub_186B220(v15);
          if ( v14 == v12 )
          {
            v12 = *(_QWORD **)(a1 + 232);
            goto LABEL_24;
          }
        }
        ++v12;
      }
      while ( v12 != v14 );
      v12 = *(_QWORD **)(a1 + 232);
    }
LABEL_24:
    *((_DWORD *)v12 - 1) = 0;
  }
  v16 = *(_QWORD *)(a1 + 248);
  if ( v16 )
    *(_DWORD *)(v16 - 4) = 0;
  v17 = *(_QWORD *)(a1 + 256);
  if ( v17 )
    *(_DWORD *)(v17 - 4) = 0;
  v18 = *(_QWORD *)(a1 + 264);
  if ( v18 )
    *(_DWORD *)(v18 - 4) = 0;
  v19 = *(_QWORD *)(a1 + 272);
  if ( v19 )
    *(_DWORD *)(v19 - 4) = 0;
  v20 = *(_QWORD *)(a1 + 280);
  if ( v20 )
    *(_DWORD *)(v20 - 4) = 0;
  v21 = *(_QWORD *)(a1 + 296);
  if ( !v21 || *(_DWORD *)(v21 - 4) != 1 )
  {
    v22 = *(unsigned int **)(a1 + 304);
    if ( v22 )
      v23 = 4LL * *(v22 - 1);
    else
      v23 = 0;
    memset(v22, 0, v23);
    v24 = *(_QWORD *)(a1 + 296);
    if ( v24 )
      *(_DWORD *)(v24 - 4) = 0;
    v52[0] = -1;
    sub_893B90((unsigned int **)(a1 + 296), v52);
  }
  v25 = *(_QWORD *)(a1 + 320);
  if ( v25 )
    *(_DWORD *)(v25 - 4) = 0;
  v26 = *(_QWORD *)(a1 + 368);
  if ( v26 )
    *(_DWORD *)(v26 - 4) = 0;
  v27 = *(_QWORD *)(a1 + 632);
  *(_QWORD *)(a1 + 556) = -1;
  if ( v27 )
    *(_DWORD *)(v27 - 4) = 0;
  v28 = *(_QWORD *)(a1 + 640);
  if ( v28 )
    *(_DWORD *)(v28 - 4) = 0;
  v29 = *(_QWORD *)(a1 + 680);
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  if ( v29 )
    *(_DWORD *)(v29 - 4) = 0;
  v30 = *(_QWORD **)(a1 + 768);
  *(_DWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 688) = 0;
  *(_QWORD *)(a1 + 696) = 0x3FE0000000000000LL;
  *(_DWORD *)(a1 + 704) = 0;
  *(_BYTE *)(a1 + 708) = 0;
  if ( v30 )
  {
    v31 = *((unsigned int *)v30 - 1);
    if ( (_DWORD)v31 )
    {
      v51 = &v30[v31];
      do
      {
        v32 = *v30;
        if ( *v30 )
        {
          v33 = *(unsigned int *)(v32 - 4);
          if ( (_DWORD)v33 )
          {
            v34 = v32 + 40 * v33;
            do
            {
              v35 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v32 + 8);
              v36 = v32 + 24;
              v32 += 40;
              sub_182CBA0(v35, v36);
            }
            while ( v34 != v32 );
            v32 = *v30;
          }
          sub_186B220((void *)(v32 - 8));
        }
        ++v30;
      }
      while ( v51 != v30 );
      v30 = *(_QWORD **)(a1 + 768);
    }
    *((_DWORD *)v30 - 1) = 0;
  }
  v37 = *(_QWORD *)(a1 + 776);
  if ( v37 )
  {
    v38 = *(unsigned int *)(v37 - 4);
    if ( (_DWORD)v38 )
    {
      v39 = v37 + 32 * v38;
      do
      {
        v40 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v37);
        v41 = v37 + 16;
        v37 += 32;
        sub_182CBA0(v40, v41);
      }
      while ( v39 != v37 );
      v37 = *(_QWORD *)(a1 + 776);
    }
    *(_DWORD *)(v37 - 4) = 0;
  }
  v42 = *(_QWORD **)(a1 + 784);
  if ( v42 )
  {
    v43 = *((unsigned int *)v42 - 1);
    if ( (_DWORD)v43 )
    {
      v44 = &v42[2 * v43];
      do
      {
        v45 = (__int64 *)v42[1];
        if ( v45 )
        {
          v46 = &v45[*((unsigned int *)v45 - 1)];
          if ( v45 >= v46 )
            goto LABEL_81;
          do
          {
            while ( 1 )
            {
              v47 = *v45;
              if ( *v45 )
              {
                v48 = *v42;
                if ( (*(_DWORD *)(v47 + 8))-- == 1 )
                  break;
              }
              if ( ++v45 >= v46 )
                goto LABEL_80;
            }
            sub_15D7BC0(v48, v47);
            ++v45;
          }
          while ( v45 < v46 );
LABEL_80:
          v45 = (__int64 *)v42[1];
          if ( v45 )
LABEL_81:
            sub_186B220(v45 - 1);
        }
        v42 += 2;
      }
      while ( v44 != v42 );
      v42 = *(_QWORD **)(a1 + 784);
    }
    *((_DWORD *)v42 - 1) = 0;
  }
  return sub_965AC0(a1);
}

