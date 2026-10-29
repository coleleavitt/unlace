__int64 __fastcall sub_1151BC0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rbp
  void *v10; // rdi
  __int64 v11; // rbp
  void *v12; // rdi
  __int64 v13; // r12
  void *v14; // rdi
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
  char *v28; // rdi
  int v29; // eax
  __int64 v30; // r15
  __int64 v31; // r12
  __int64 v32; // rbp
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  void *v38; // rdi
  void *v39; // rdi
  void **v40; // r12
  void **v41; // rbp
  void *v42; // rdi
  void *v43; // rdi

  if ( *(_BYTE *)(a1 + 1072) )
  {
    v7 = *(unsigned int *)(a1 + 800);
    v8 = *(_QWORD *)(a1 + 792);
    *(_BYTE *)(a1 + 1072) = 0;
    v9 = v8 + (v7 << 6);
    if ( v8 != v9 )
    {
      do
      {
        while ( 1 )
        {
          v9 -= 64;
          v10 = *(void **)(v9 + 32);
          if ( v10 != (void *)(v9 + 48) )
            operator delete(v10);
          if ( *(_QWORD *)v9 == v9 + 24 )
            break;
          free(*(void **)v9);
          if ( v8 == v9 )
            goto LABEL_8;
        }
      }
      while ( v8 != v9 );
LABEL_8:
      v9 = *(_QWORD *)(a1 + 792);
    }
    if ( v9 != a1 + 808 )
      free((void *)v9);
    v11 = *(_QWORD *)(a1 + 760);
    if ( v11 )
    {
      while ( 1 )
      {
        sub_114A0C0(a1 + 744, *(_QWORD **)(v11 + 24));
        v12 = *(void **)(v11 + 40);
        v13 = *(_QWORD *)(v11 + 16);
        if ( v12 == (void *)(v11 + 56) )
        {
          operator delete((void *)v11);
          if ( !v13 )
            break;
        }
        else
        {
          operator delete(v12);
          operator delete((void *)v11);
          if ( !v13 )
            break;
        }
        v11 = v13;
      }
    }
    v14 = *(void **)(a1 + 720);
    if ( (void *)(a1 + 744) != v14 )
      free(v14);
    v15 = *(void **)(a1 + 696);
    if ( (void *)(a1 + 720) != v15 )
      free(v15);
    v16 = *(void **)(a1 + 672);
    if ( (void *)(a1 + 696) != v16 )
      free(v16);
    v17 = *(void **)(a1 + 648);
    if ( (void *)(a1 + 672) != v17 )
      free(v17);
    v18 = *(void **)(a1 + 624);
    if ( (void *)(a1 + 648) != v18 )
      free(v18);
    v19 = *(void **)(a1 + 600);
    if ( (void *)(a1 + 624) != v19 )
      free(v19);
    v20 = *(void **)(a1 + 576);
    if ( (void *)(a1 + 600) != v20 )
      free(v20);
    v21 = *(void **)(a1 + 552);
    if ( (void *)(a1 + 576) != v21 )
      free(v21);
    v22 = *(void **)(a1 + 528);
    if ( (void *)(a1 + 552) != v22 )
      free(v22);
    v23 = *(void **)(a1 + 504);
    if ( (void *)(a1 + 528) != v23 )
      free(v23);
    v24 = *(void **)(a1 + 480);
    if ( (void *)(a1 + 504) != v24 )
      free(v24);
    v25 = *(void **)(a1 + 456);
    if ( (void *)(a1 + 480) != v25 )
      free(v25);
    v26 = *(void **)(a1 + 432);
    if ( (void *)(a1 + 456) != v26 )
      free(v26);
    v27 = *(void **)(a1 + 408);
    if ( (void *)(a1 + 432) != v27 )
      free(v27);
    v28 = *(char **)(a1 + 384);
    if ( *(_DWORD *)(a1 + 396) )
    {
      v29 = *(_DWORD *)(a1 + 392);
      if ( v29 )
      {
        v30 = 0;
        v31 = 8LL * (unsigned int)(v29 - 1) + 8;
        do
        {
          v32 = *(_QWORD *)&v28[v30];
          if ( v32 != -8 && v32 )
          {
            v33 = *(void **)(v32 + 8);
            if ( v33 != (void *)(v32 + 24) )
              operator delete(v33);
            operator delete();
            v28 = *(char **)(a1 + 384);
          }
          v30 += 8;
        }
        while ( v31 != v30 );
      }
    }
    free(v28);
    v34 = *(void **)(a1 + 360);
    if ( (void *)(a1 + 384) != v34 )
      free(v34);
    v35 = *(void **)(a1 + 336);
    if ( (void *)(a1 + 360) != v35 )
      free(v35);
    v36 = *(void **)(a1 + 312);
    if ( (void *)(a1 + 336) != v36 )
      free(v36);
    v37 = *(void **)(a1 + 288);
    if ( (void *)(a1 + 312) != v37 )
      free(v37);
    v38 = *(void **)(a1 + 264);
    if ( (void *)(a1 + 288) != v38 )
      free(v38);
    v39 = *(void **)(a1 + 240);
    if ( (void *)(a1 + 264) != v39 )
      free(v39);
    v40 = *(void ***)(a1 + 136);
    v41 = *(void ***)(a1 + 128);
    if ( v40 != v41 )
    {
      do
      {
        while ( *v41 != v41 + 2 )
        {
          operator delete(*v41);
          v41 += 4;
          if ( v40 == v41 )
            goto LABEL_70;
        }
        v41 += 4;
      }
      while ( v40 != v41 );
LABEL_70:
      v41 = *(void ***)(a1 + 128);
    }
    if ( v41 )
      operator delete(v41);
    v42 = *(void **)(a1 + 80);
    if ( v42 != (void *)(a1 + 96) )
      operator delete(v42);
    v43 = *(void **)(a1 + 32);
    if ( v43 != (void *)(a1 + 48) )
      operator delete(v43);
  }
  sub_1150E40(a1, a2, a4);
  *(_BYTE *)(a1 + 1072) = 1;
  return a1;
}

