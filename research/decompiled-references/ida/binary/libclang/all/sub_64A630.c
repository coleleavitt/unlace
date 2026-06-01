void __fastcall sub_64A630(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rdx
  char *v9; // rax
  __int64 v10; // r8
  char *v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  char *v14; // rcx
  char *v15; // rsi
  __int64 v16; // rsi
  _QWORD *v17; // rdi
  char *v18; // rcx
  char *v19; // rsi
  __int64 v20; // rsi
  _QWORD *v21; // rdi
  char *v22; // rcx
  char *v23; // rsi
  __int64 v24; // r9
  __int64 v25; // rsi
  unsigned __int64 v26; // r14
  void *v27; // rdi
  void *v28; // rdi
  void *v29; // rdi
  int v30; // r14d
  unsigned int v31; // esi
  unsigned int v32; // esi
  unsigned int v33; // r9d
  unsigned int v34; // r9d
  unsigned __int64 v35; // r9
  char *v36; // rdi
  char *v37; // r11
  unsigned int v38; // esi
  unsigned int v39; // esi
  unsigned int v40; // edi
  __int64 v41; // r10
  unsigned __int64 v42; // rsi
  char *v43; // rdi
  char *v44; // r11
  unsigned int v45; // r9d
  unsigned int v46; // r9d
  unsigned int v47; // edi
  __int64 v48; // r10
  unsigned __int64 v49; // rsi
  char *v50; // rdi
  char *v51; // r11
  unsigned int v52; // r9d
  unsigned int v53; // r9d
  unsigned int v54; // edi
  __int64 v55; // r10
  unsigned __int64 v56; // rcx
  unsigned int v57; // esi
  unsigned int v58; // esi
  unsigned int v59; // edi
  __int64 v60; // r9
  __int64 v61[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a1 + 16;
  v4 = sub_25D5F70(a1, a1 + 16, a2, 128, v61);
  v5 = *(_QWORD *)a1;
  v6 = v4;
  v7 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 7);
  if ( *(_QWORD *)a1 == v7 )
    goto LABEL_25;
  v8 = (_QWORD *)(v4 + 16);
  v9 = (char *)(v5 + 16);
  v10 = v6 + v7 - v5 + 16;
  do
  {
    *(v8 - 2) = v8;
    v11 = *((char **)v9 - 2);
    if ( v11 != v9 )
    {
LABEL_4:
      *(v8 - 2) = v11;
      *v8 = *(_QWORD *)v9;
LABEL_5:
      v12 = *((_QWORD *)v9 - 1);
      goto LABEL_6;
    }
    while ( 1 )
    {
      v12 = *((_QWORD *)v9 - 1);
      v32 = v12 + 1;
      if ( (unsigned int)(v12 + 1) >= 8 )
      {
        *v8 = *(_QWORD *)v9;
        *(_QWORD *)((char *)v8 + v32 - 8) = *(_QWORD *)&v9[v32 - 8];
        v56 = (unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v57 = ((_DWORD)v8 - v56 + v32) & 0xFFFFFFF8;
        if ( v57 >= 8 )
        {
          v58 = v57 & 0xFFFFFFF8;
          v59 = 0;
          do
          {
            v60 = v59;
            v59 += 8;
            *(_QWORD *)(v56 + v60) = *(_QWORD *)(v9 - ((char *)v8 - v56) + v60);
          }
          while ( v59 < v58 );
        }
        goto LABEL_5;
      }
      if ( (v32 & 4) != 0 )
      {
        *(_DWORD *)v8 = *(_DWORD *)v9;
        *(_DWORD *)((char *)v8 + v32 - 4) = *(_DWORD *)&v9[v32 - 4];
        v12 = *((_QWORD *)v9 - 1);
      }
      else if ( (_DWORD)v12 != -1 )
      {
        *(_BYTE *)v8 = *v9;
        if ( (v32 & 2) == 0 )
          goto LABEL_5;
        *(_WORD *)((char *)v8 + v32 - 2) = *(_WORD *)&v9[v32 - 2];
        v12 = *((_QWORD *)v9 - 1);
      }
LABEL_6:
      v13 = v8 + 4;
      *(v8 - 1) = v12;
      v14 = v9 + 32;
      *((_QWORD *)v9 - 2) = v9;
      *((_QWORD *)v9 - 1) = 0;
      *v9 = 0;
      v8[2] = v8 + 4;
      v15 = *((char **)v9 + 2);
      if ( v15 != v9 + 32 )
      {
        v8[2] = v15;
        v8[4] = *((_QWORD *)v9 + 4);
LABEL_8:
        v16 = *((_QWORD *)v9 + 3);
        goto LABEL_9;
      }
      v16 = *((_QWORD *)v9 + 3);
      v34 = v16 + 1;
      if ( (unsigned int)(v16 + 1) >= 8 )
      {
        *v13 = *(_QWORD *)v14;
        *(_QWORD *)((char *)v13 + v34 - 8) = *(_QWORD *)&v14[v34 - 8];
        v42 = (unsigned __int64)(v8 + 5) & 0xFFFFFFFFFFFFFFF8LL;
        v43 = (char *)v13 - v42;
        v44 = (char *)(v14 - v43);
        v45 = ((_DWORD)v43 + v34) & 0xFFFFFFF8;
        if ( v45 >= 8 )
        {
          v46 = v45 & 0xFFFFFFF8;
          v47 = 0;
          do
          {
            v48 = v47;
            v47 += 8;
            *(_QWORD *)(v42 + v48) = *(_QWORD *)&v44[v48];
          }
          while ( v47 < v46 );
        }
        goto LABEL_8;
      }
      if ( (v34 & 4) != 0 )
      {
        *(_DWORD *)v13 = *(_DWORD *)v14;
        *(_DWORD *)((char *)v13 + v34 - 4) = *(_DWORD *)&v14[v34 - 4];
        v16 = *((_QWORD *)v9 + 3);
      }
      else if ( (_DWORD)v16 != -1 )
      {
        *(_BYTE *)v13 = *v14;
        if ( (v34 & 2) == 0 )
          goto LABEL_8;
        *(_WORD *)((char *)v13 + v34 - 2) = *(_WORD *)&v14[v34 - 2];
        v16 = *((_QWORD *)v9 + 3);
      }
LABEL_9:
      v17 = v8 + 8;
      v8[3] = v16;
      *((_QWORD *)v9 + 2) = v14;
      v18 = v9 + 64;
      *((_QWORD *)v9 + 3) = 0;
      v9[32] = 0;
      v8[6] = v8 + 8;
      v19 = *((char **)v9 + 6);
      if ( v19 != v9 + 64 )
      {
        v8[6] = v19;
        v8[8] = *((_QWORD *)v9 + 8);
LABEL_11:
        v20 = *((_QWORD *)v9 + 7);
        goto LABEL_12;
      }
      v20 = *((_QWORD *)v9 + 7);
      v33 = v20 + 1;
      if ( (unsigned int)(v20 + 1) >= 8 )
      {
        *v17 = *(_QWORD *)v18;
        *(_QWORD *)((char *)v17 + v33 - 8) = *(_QWORD *)&v18[v33 - 8];
        v49 = (unsigned __int64)(v8 + 9) & 0xFFFFFFFFFFFFFFF8LL;
        v50 = (char *)v17 - v49;
        v51 = (char *)(v18 - v50);
        v52 = ((_DWORD)v50 + v33) & 0xFFFFFFF8;
        if ( v52 >= 8 )
        {
          v53 = v52 & 0xFFFFFFF8;
          v54 = 0;
          do
          {
            v55 = v54;
            v54 += 8;
            *(_QWORD *)(v49 + v55) = *(_QWORD *)&v51[v55];
          }
          while ( v54 < v53 );
        }
        goto LABEL_11;
      }
      if ( (v33 & 4) != 0 )
      {
        *(_DWORD *)v17 = *(_DWORD *)v18;
        *(_DWORD *)((char *)v17 + v33 - 4) = *(_DWORD *)&v18[v33 - 4];
        v20 = *((_QWORD *)v9 + 7);
      }
      else if ( (_DWORD)v20 != -1 )
      {
        *(_BYTE *)v17 = *v18;
        if ( (v33 & 2) == 0 )
          goto LABEL_11;
        *(_WORD *)((char *)v17 + v33 - 2) = *(_WORD *)&v18[v33 - 2];
        v20 = *((_QWORD *)v9 + 7);
      }
LABEL_12:
      v21 = v8 + 12;
      v8[7] = v20;
      *((_QWORD *)v9 + 6) = v18;
      v22 = v9 + 96;
      *((_QWORD *)v9 + 7) = 0;
      v9[64] = 0;
      v8[10] = v8 + 12;
      v23 = *((char **)v9 + 10);
      v24 = *((_QWORD *)v9 + 11);
      if ( v23 != v9 + 96 )
        break;
      v31 = v24 + 1;
      if ( (unsigned int)(v24 + 1) >= 8 )
      {
        *v21 = *(_QWORD *)v22;
        *(_QWORD *)((char *)v21 + v31 - 8) = *(_QWORD *)&v22[v31 - 8];
        v35 = (unsigned __int64)(v8 + 13) & 0xFFFFFFFFFFFFFFF8LL;
        v36 = (char *)v21 - v35;
        v37 = (char *)(v22 - v36);
        v38 = ((_DWORD)v36 + v31) & 0xFFFFFFF8;
        if ( v38 >= 8 )
        {
          v39 = v38 & 0xFFFFFFF8;
          v40 = 0;
          do
          {
            v41 = v40;
            v40 += 8;
            *(_QWORD *)(v35 + v41) = *(_QWORD *)&v37[v41];
          }
          while ( v40 < v39 );
        }
LABEL_51:
        v24 = *((_QWORD *)v9 + 11);
        goto LABEL_31;
      }
      if ( (v31 & 4) != 0 )
      {
        *(_DWORD *)v21 = *(_DWORD *)v22;
        *(_DWORD *)((char *)v21 + v31 - 4) = *(_DWORD *)&v22[v31 - 4];
        v24 = *((_QWORD *)v9 + 11);
        goto LABEL_31;
      }
      if ( (_DWORD)v24 != -1 )
      {
        *(_BYTE *)v21 = *v22;
        if ( (v31 & 2) != 0 )
        {
          *(_WORD *)((char *)v21 + v31 - 2) = *(_WORD *)&v22[v31 - 2];
          v24 = *((_QWORD *)v9 + 11);
          goto LABEL_31;
        }
        goto LABEL_51;
      }
LABEL_31:
      v8[11] = v24;
      v8 += 16;
      v9 += 128;
      *((_QWORD *)v9 - 6) = v22;
      *((_QWORD *)v9 - 5) = 0;
      *(v9 - 32) = 0;
      if ( v8 == (_QWORD *)v10 )
        goto LABEL_14;
      *(v8 - 2) = v8;
      v11 = *((char **)v9 - 2);
      if ( v11 != v9 )
        goto LABEL_4;
    }
    v8[10] = v23;
    v25 = *((_QWORD *)v9 + 12);
    v8 += 16;
    v9 += 128;
    *(v8 - 5) = v24;
    *(v8 - 4) = v25;
    *((_QWORD *)v9 - 6) = v22;
    *((_QWORD *)v9 - 5) = 0;
    *(v9 - 32) = 0;
  }
  while ( (_QWORD *)v10 != v8 );
LABEL_14:
  v26 = *(_QWORD *)a1;
  v7 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 7);
  if ( *(_QWORD *)a1 != v7 )
  {
    do
    {
      v7 -= 128LL;
      v27 = *(void **)(v7 + 96);
      if ( v27 != (void *)(v7 + 112) )
        operator delete(v27, *(_QWORD *)(v7 + 112) + 1LL);
      v28 = *(void **)(v7 + 64);
      if ( v28 != (void *)(v7 + 80) )
        operator delete(v28, *(_QWORD *)(v7 + 80) + 1LL);
      v29 = *(void **)(v7 + 32);
      if ( v29 != (void *)(v7 + 48) )
        operator delete(v29, *(_QWORD *)(v7 + 48) + 1LL);
      if ( *(_QWORD *)v7 != v7 + 16 )
        operator delete(*(void **)v7, *(_QWORD *)(v7 + 16) + 1LL);
    }
    while ( v26 != v7 );
    v7 = *(_QWORD *)a1;
  }
LABEL_25:
  v30 = v61[0];
  if ( v2 != v7 )
    free((void *)v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v30;
}

