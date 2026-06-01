__int64 __fastcall sub_8A9520(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  void *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  void *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  void *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r14
  void *v18; // r13
  __int64 v19; // rsi
  _QWORD *v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // r12
  void *v23; // rdi
  _QWORD *v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // r12
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r14
  void *v32; // r13
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int *v38; // rdi
  size_t v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // r13
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r15
  void *v51; // r14
  __int64 v52; // rsi
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // r14
  void *v56; // r13
  __int64 v57; // rsi
  _QWORD *v58; // r13
  __int64 v59; // rax
  _QWORD *v60; // r12
  __int64 *v61; // rbx
  __int64 *v62; // r14
  __int64 v63; // rsi
  __int64 v64; // rdi
  _QWORD *v67; // [rsp+8h] [rbp-50h]
  unsigned int v68[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 656);
  if ( v3 )
  {
    while ( v2 < *(_DWORD *)(v3 - 4) )
    {
      v4 = *(void **)(v3 + 8LL * v2);
      if ( v4 )
      {
        sub_186B220(v4);
        v3 = *(_QWORD *)(a1 + 656);
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
  v5 = *(_QWORD *)(a1 + 232);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v5 - 4);
    if ( (_DWORD)v6 )
    {
      v7 = v5 + 32 * v6;
      do
      {
        v8 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v5);
        v9 = v5 + 16;
        v5 += 32;
        sub_182CBA0(v8, v9);
      }
      while ( v5 != v7 );
      v5 = *(_QWORD *)(a1 + 232);
    }
    *(_DWORD *)(v5 - 4) = 0;
  }
  v10 = *(_QWORD *)(a1 + 240);
  if ( v10 )
  {
    v11 = *(unsigned int *)(v10 - 4);
    if ( (_DWORD)v11 )
    {
      v12 = v10 + 40 * v11;
      do
      {
        v13 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v10 + 8);
        v14 = v10 + 24;
        v10 += 40;
        sub_182CBA0(v13, v14);
      }
      while ( v10 != v12 );
      v10 = *(_QWORD *)(a1 + 240);
    }
    *(_DWORD *)(v10 - 4) = 0;
  }
  v15 = *(_QWORD *)(a1 + 248);
  if ( v15 )
  {
    v16 = *(unsigned int *)(v15 - 4);
    if ( (_DWORD)v16 )
    {
      v17 = v15 + 56 * v16;
      do
      {
        v18 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v15 + 8);
        v19 = v15 + 24;
        v15 += 56;
        sub_182CBA0(v18, v19);
      }
      while ( v17 != v15 );
      v15 = *(_QWORD *)(a1 + 248);
    }
    *(_DWORD *)(v15 - 4) = 0;
  }
  v20 = *(_QWORD **)(a1 + 264);
  if ( v20 )
  {
    v21 = *((unsigned int *)v20 - 1);
    if ( (_DWORD)v21 )
    {
      v22 = &v20[v21];
      do
      {
        while ( *v20 )
        {
          v23 = (void *)(*v20++ - 8LL);
          sub_186B220(v23);
          if ( v22 == v20 )
          {
            v20 = *(_QWORD **)(a1 + 264);
            goto LABEL_29;
          }
        }
        ++v20;
      }
      while ( v22 != v20 );
      v20 = *(_QWORD **)(a1 + 264);
    }
LABEL_29:
    *((_DWORD *)v20 - 1) = 0;
  }
  v24 = *(_QWORD **)(a1 + 256);
  if ( v24 )
  {
    v25 = *((unsigned int *)v24 - 1);
    if ( (_DWORD)v25 )
    {
      v26 = &v24[v25];
      do
      {
        while ( *v24 )
        {
          v27 = (void *)(*v24++ - 8LL);
          sub_186B220(v27);
          if ( v26 == v24 )
          {
            v24 = *(_QWORD **)(a1 + 256);
            goto LABEL_36;
          }
        }
        ++v24;
      }
      while ( v26 != v24 );
      v24 = *(_QWORD **)(a1 + 256);
    }
LABEL_36:
    *((_DWORD *)v24 - 1) = 0;
  }
  v28 = *(_QWORD *)(a1 + 272);
  if ( v28 )
    *(_DWORD *)(v28 - 4) = 0;
  v29 = *(_QWORD *)(a1 + 280);
  if ( v29 )
  {
    v30 = *(unsigned int *)(v29 - 4);
    if ( (_DWORD)v30 )
    {
      v31 = v29 + 32 * v30;
      do
      {
        v32 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v29);
        v33 = v29 + 16;
        v29 += 32;
        sub_182CBA0(v32, v33);
      }
      while ( v31 != v29 );
      v29 = *(_QWORD *)(a1 + 280);
    }
    *(_DWORD *)(v29 - 4) = 0;
  }
  v34 = *(_QWORD *)(a1 + 288);
  if ( v34 )
    *(_DWORD *)(v34 - 4) = 0;
  v35 = *(_QWORD *)(a1 + 296);
  if ( v35 )
    *(_DWORD *)(v35 - 4) = 0;
  v36 = *(_QWORD *)(a1 + 304);
  if ( v36 )
    *(_DWORD *)(v36 - 4) = 0;
  v37 = *(_QWORD *)(a1 + 320);
  if ( !v37 || *(_DWORD *)(v37 - 4) != 1 )
  {
    v38 = *(unsigned int **)(a1 + 328);
    if ( v38 )
      v39 = 4LL * *(v38 - 1);
    else
      v39 = 0;
    memset(v38, 0, v39);
    v40 = *(_QWORD *)(a1 + 320);
    if ( v40 )
      *(_DWORD *)(v40 - 4) = 0;
    v68[0] = -1;
    sub_893B90((unsigned int **)(a1 + 320), v68);
  }
  v41 = *(_QWORD *)(a1 + 344);
  if ( v41 )
    *(_DWORD *)(v41 - 4) = 0;
  v42 = *(_QWORD *)(a1 + 392);
  if ( v42 )
    *(_DWORD *)(v42 - 4) = 0;
  v43 = *(_QWORD *)(a1 + 656);
  *(_QWORD *)(a1 + 580) = -1;
  if ( v43 )
    *(_DWORD *)(v43 - 4) = 0;
  v44 = *(_QWORD *)(a1 + 664);
  if ( v44 )
    *(_DWORD *)(v44 - 4) = 0;
  v45 = *(_QWORD *)(a1 + 704);
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  if ( v45 )
    *(_DWORD *)(v45 - 4) = 0;
  v46 = *(_QWORD **)(a1 + 792);
  *(_DWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 720) = 0x3FE0000000000000LL;
  *(_DWORD *)(a1 + 728) = 0;
  *(_BYTE *)(a1 + 732) = 0;
  if ( v46 )
  {
    v47 = *((unsigned int *)v46 - 1);
    if ( (_DWORD)v47 )
    {
      v67 = &v46[v47];
      do
      {
        v48 = *v46;
        if ( *v46 )
        {
          v49 = *(unsigned int *)(v48 - 4);
          if ( (_DWORD)v49 )
          {
            v50 = v48 + 40 * v49;
            do
            {
              v51 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v48 + 8);
              v52 = v48 + 24;
              v48 += 40;
              sub_182CBA0(v51, v52);
            }
            while ( v50 != v48 );
            v48 = *v46;
          }
          sub_186B220((void *)(v48 - 8));
        }
        ++v46;
      }
      while ( v67 != v46 );
      v46 = *(_QWORD **)(a1 + 792);
    }
    *((_DWORD *)v46 - 1) = 0;
  }
  v53 = *(_QWORD *)(a1 + 800);
  if ( v53 )
  {
    v54 = *(unsigned int *)(v53 - 4);
    if ( (_DWORD)v54 )
    {
      v55 = v53 + 32 * v54;
      do
      {
        v56 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v53);
        v57 = v53 + 16;
        v53 += 32;
        sub_182CBA0(v56, v57);
      }
      while ( v55 != v53 );
      v53 = *(_QWORD *)(a1 + 800);
    }
    *(_DWORD *)(v53 - 4) = 0;
  }
  v58 = *(_QWORD **)(a1 + 808);
  if ( v58 )
  {
    v59 = *((unsigned int *)v58 - 1);
    if ( (_DWORD)v59 )
    {
      v60 = &v58[2 * v59];
      do
      {
        v61 = (__int64 *)v58[1];
        if ( v61 )
        {
          v62 = &v61[*((unsigned int *)v61 - 1)];
          if ( v61 >= v62 )
            goto LABEL_97;
          do
          {
            while ( 1 )
            {
              v63 = *v61;
              if ( *v61 )
              {
                v64 = *v58;
                if ( (*(_DWORD *)(v63 + 8))-- == 1 )
                  break;
              }
              if ( ++v61 >= v62 )
                goto LABEL_96;
            }
            sub_15D7BC0(v64, v63);
            ++v61;
          }
          while ( v61 < v62 );
LABEL_96:
          v61 = (__int64 *)v58[1];
          if ( v61 )
LABEL_97:
            sub_186B220(v61 - 1);
        }
        v58 += 2;
      }
      while ( v60 != v58 );
      v58 = *(_QWORD **)(a1 + 808);
    }
    *((_DWORD *)v58 - 1) = 0;
  }
  return sub_965AC0(a1);
}

