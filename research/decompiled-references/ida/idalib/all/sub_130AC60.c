void __fastcall sub_130AC60(__int64 a1)
{
  void **v2; // r12
  void **v3; // rbp
  void **v4; // r12
  void **v5; // rbp
  void *v6; // rdi
  void **v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  void **v10; // r12
  void *v11; // rdi
  void *v12; // rdi
  void **v13; // r12
  void **v14; // rbp
  __int64 v15; // rbp
  void *v16; // rdi
  __int64 v17; // r12
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void **v22; // r12
  void **v23; // rbp
  void **v24; // r12
  void **v25; // rbp
  void *v26; // rdi

  v2 = *(void ***)(a1 + 624);
  v3 = *(void ***)(a1 + 616);
  if ( v2 != v3 )
  {
    do
    {
      while ( *v3 != v3 + 2 )
      {
        operator delete(*v3);
        v3 += 4;
        if ( v2 == v3 )
          goto LABEL_4;
      }
      v3 += 4;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = *(void ***)(a1 + 616);
  }
  if ( v3 )
    operator delete(v3);
  v4 = *(void ***)(a1 + 344);
  v5 = &v4[2 * *(unsigned int *)(a1 + 352)];
  if ( v4 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v5 -= 2;
        v6 = *v5;
        if ( (char *)*v5 + 4096 != nullptr && (char *)*v5 + 0x2000 != nullptr )
        {
          if ( v6 )
            break;
        }
        if ( v4 == v5 )
          goto LABEL_11;
      }
      operator delete[](v6);
    }
    while ( v4 != v5 );
LABEL_11:
    v5 = *(void ***)(a1 + 344);
  }
  if ( v5 != (void **)(a1 + 360) )
    free(v5);
  v7 = *(void ***)(a1 + 320);
  v8 = *(unsigned int *)(a1 + 336);
  v9 = 16 * v8;
  v10 = &v7[2 * v8];
  if ( (_DWORD)v8 )
  {
    do
    {
      while ( 1 )
      {
        v11 = *v7;
        if ( (char *)*v7 + 4096 != nullptr && (char *)*v7 + 0x2000 != nullptr )
        {
          if ( v11 )
            break;
        }
        v7 += 2;
        if ( v10 == v7 )
          goto LABEL_18;
      }
      operator delete[](v11);
      v7 += 2;
    }
    while ( v10 != v7 );
LABEL_18:
    v7 = *(void ***)(a1 + 320);
    v9 = 16LL * *(unsigned int *)(a1 + 336);
  }
  operator delete(v7, v9, 8);
  v12 = *(void **)(a1 + 264);
  if ( v12 != (void *)(a1 + 280) )
    operator delete(v12);
  v13 = *(void ***)(a1 + 248);
  v14 = *(void ***)(a1 + 240);
  if ( v13 != v14 )
  {
    do
    {
      while ( *v14 != v14 + 2 )
      {
        operator delete(*v14);
        v14 += 4;
        if ( v13 == v14 )
          goto LABEL_24;
      }
      v14 += 4;
    }
    while ( v13 != v14 );
LABEL_24:
    v14 = *(void ***)(a1 + 240);
  }
  if ( v14 )
    operator delete(v14);
  v15 = *(_QWORD *)(a1 + 208);
  if ( v15 )
  {
    while ( 1 )
    {
      sub_12DC6A0(a1 + 192, *(_QWORD **)(v15 + 24));
      v16 = *(void **)(v15 + 64);
      v17 = *(_QWORD *)(v15 + 16);
      if ( v16 != (void *)(v15 + 80) )
        operator delete(v16);
      v18 = *(void **)(v15 + 32);
      if ( v18 == (void *)(v15 + 48) )
      {
        operator delete((void *)v15);
        if ( !v17 )
          break;
      }
      else
      {
        operator delete(v18);
        operator delete((void *)v15);
        if ( !v17 )
          break;
      }
      v15 = v17;
    }
  }
  v19 = *(void **)(a1 + 160);
  if ( v19 != (void *)(a1 + 176) )
    operator delete(v19);
  v20 = *(void **)(a1 + 128);
  if ( v20 != (void *)(a1 + 144) )
    operator delete(v20);
  v21 = *(void **)(a1 + 96);
  if ( v21 != (void *)(a1 + 112) )
    operator delete(v21);
  v22 = *(void ***)(a1 + 80);
  v23 = *(void ***)(a1 + 72);
  if ( v22 != v23 )
  {
    do
    {
      while ( *v23 != v23 + 2 )
      {
        operator delete(*v23);
        v23 += 5;
        if ( v22 == v23 )
          goto LABEL_43;
      }
      v23 += 5;
    }
    while ( v22 != v23 );
LABEL_43:
    v23 = *(void ***)(a1 + 72);
  }
  if ( v23 )
    operator delete(v23);
  v24 = *(void ***)(a1 + 56);
  v25 = *(void ***)(a1 + 48);
  if ( v24 != v25 )
  {
    do
    {
      while ( *v25 != v25 + 2 )
      {
        operator delete(*v25);
        v25 += 5;
        if ( v24 == v25 )
          goto LABEL_49;
      }
      v25 += 5;
    }
    while ( v24 != v25 );
LABEL_49:
    v25 = *(void ***)(a1 + 48);
  }
  if ( v25 )
    operator delete(v25);
  v26 = *(void **)(a1 + 16);
  if ( v26 != (void *)(a1 + 32) )
    operator delete(v26);
}
