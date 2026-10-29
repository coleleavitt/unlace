__int64 __fastcall sub_1175900(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rbp
  void *v11; // rdi
  __int64 v12; // rbp
  void *v13; // rdi
  __int64 v14; // r12
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  char *v29; // rdi
  int v30; // eax
  __int64 v31; // r15
  __int64 v32; // r12
  _QWORD *v33; // rbp
  _QWORD *v34; // rdi
  __int64 v35; // rsi
  void *v36; // rdi
  void *v37; // rdi
  void *v38; // rdi
  void *v39; // rdi
  void *v40; // rdi
  void *v41; // rdi
  void **v42; // r12
  void **v43; // rbp
  void *v44; // rdi
  void *v45; // rdi
  __int64 v46; // [rsp+8h] [rbp-40h]

  if ( *(_BYTE *)(a1 + 1072) )
  {
    v8 = *(unsigned int *)(a1 + 800);
    v9 = *(_QWORD *)(a1 + 792);
    *(_BYTE *)(a1 + 1072) = 0;
    v10 = v9 + (v8 << 6);
    if ( v9 != v10 )
    {
      do
      {
        while ( 1 )
        {
          v10 -= 64;
          v11 = *(void **)(v10 + 32);
          if ( v11 != (void *)(v10 + 48) )
            operator delete(v11);
          if ( *(_QWORD *)v10 == v10 + 24 )
            break;
          free(*(void **)v10);
          if ( v9 == v10 )
            goto LABEL_8;
        }
      }
      while ( v9 != v10 );
LABEL_8:
      v10 = *(_QWORD *)(a1 + 792);
    }
    if ( v10 != a1 + 808 )
      free((void *)v10);
    v12 = *(_QWORD *)(a1 + 760);
    if ( v12 )
    {
      while ( 1 )
      {
        sub_116DE00(a1 + 744, *(_QWORD **)(v12 + 24));
        v13 = *(void **)(v12 + 40);
        v14 = *(_QWORD *)(v12 + 16);
        if ( v13 == (void *)(v12 + 56) )
        {
          operator delete((void *)v12);
          if ( !v14 )
            break;
        }
        else
        {
          operator delete(v13);
          operator delete((void *)v12);
          if ( !v14 )
            break;
        }
        v12 = v14;
      }
    }
    v15 = *(void **)(a1 + 720);
    if ( (void *)(a1 + 744) != v15 )
      free(v15);
    v16 = *(void **)(a1 + 696);
    if ( (void *)(a1 + 720) != v16 )
      free(v16);
    v17 = *(void **)(a1 + 672);
    if ( (void *)(a1 + 696) != v17 )
      free(v17);
    v18 = *(void **)(a1 + 648);
    if ( (void *)(a1 + 672) != v18 )
      free(v18);
    v19 = *(void **)(a1 + 624);
    if ( (void *)(a1 + 648) != v19 )
      free(v19);
    v20 = *(void **)(a1 + 600);
    if ( (void *)(a1 + 624) != v20 )
      free(v20);
    v21 = *(void **)(a1 + 576);
    if ( (void *)(a1 + 600) != v21 )
      free(v21);
    v22 = *(void **)(a1 + 552);
    if ( (void *)(a1 + 576) != v22 )
      free(v22);
    v23 = *(void **)(a1 + 528);
    if ( (void *)(a1 + 552) != v23 )
      free(v23);
    v24 = *(void **)(a1 + 504);
    if ( (void *)(a1 + 528) != v24 )
      free(v24);
    v25 = *(void **)(a1 + 480);
    if ( (void *)(a1 + 504) != v25 )
      free(v25);
    v26 = *(void **)(a1 + 456);
    if ( (void *)(a1 + 480) != v26 )
      free(v26);
    v27 = *(void **)(a1 + 432);
    if ( (void *)(a1 + 456) != v27 )
      free(v27);
    v28 = *(void **)(a1 + 408);
    if ( (void *)(a1 + 432) != v28 )
      free(v28);
    v29 = *(char **)(a1 + 384);
    if ( *(_DWORD *)(a1 + 396) )
    {
      v30 = *(_DWORD *)(a1 + 392);
      if ( v30 )
      {
        v31 = 0;
        v32 = 8LL * (unsigned int)(v30 - 1) + 8;
        do
        {
          v33 = *(_QWORD **)&v29[v31];
          if ( v33 != (_QWORD *)-8LL && v33 )
          {
            v34 = (_QWORD *)v33[1];
            v35 = *v33 + 41LL;
            if ( v34 != v33 + 3 )
            {
              v46 = *v33 + 41LL;
              operator delete(v34);
              v35 = v46;
            }
            operator delete(v33, v35, 8);
            v29 = *(char **)(a1 + 384);
          }
          v31 += 8;
        }
        while ( v32 != v31 );
      }
    }
    free(v29);
    v36 = *(void **)(a1 + 360);
    if ( (void *)(a1 + 384) != v36 )
      free(v36);
    v37 = *(void **)(a1 + 336);
    if ( (void *)(a1 + 360) != v37 )
      free(v37);
    v38 = *(void **)(a1 + 312);
    if ( (void *)(a1 + 336) != v38 )
      free(v38);
    v39 = *(void **)(a1 + 288);
    if ( (void *)(a1 + 312) != v39 )
      free(v39);
    v40 = *(void **)(a1 + 264);
    if ( (void *)(a1 + 288) != v40 )
      free(v40);
    v41 = *(void **)(a1 + 240);
    if ( (void *)(a1 + 264) != v41 )
      free(v41);
    v42 = *(void ***)(a1 + 136);
    v43 = *(void ***)(a1 + 128);
    if ( v42 != v43 )
    {
      do
      {
        while ( *v43 != v43 + 2 )
        {
          operator delete(*v43);
          v43 += 4;
          if ( v42 == v43 )
            goto LABEL_70;
        }
        v43 += 4;
      }
      while ( v42 != v43 );
LABEL_70:
      v43 = *(void ***)(a1 + 128);
    }
    if ( v43 )
      operator delete(v43);
    v44 = *(void **)(a1 + 80);
    if ( v44 != (void *)(a1 + 96) )
      operator delete(v44);
    v45 = *(void **)(a1 + 32);
    if ( v45 != (void *)(a1 + 48) )
      operator delete(v45);
  }
  sub_1174B80(a1, a2, a4);
  *(_BYTE *)(a1 + 1072) = 1;
  return a1;
}
