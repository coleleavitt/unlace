void __fastcall sub_1EAF0A0(__int64 a1)
{
  void **v2; // r12
  void **v3; // rbp
  void *v4; // rdi
  void **v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  void **v8; // r12
  void *v9; // rdi
  void *v10; // rdi
  __int64 v11; // rbp
  void *v12; // rdi
  __int64 v13; // r12
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void **v18; // r12
  void **v19; // rbp
  void **v20; // r12
  void **v21; // rbp

  sub_9B4A30((void ***)(a1 + 600));
  v2 = *(void ***)(a1 + 328);
  v3 = &v2[2 * *(unsigned int *)(a1 + 336)];
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 2;
        v4 = *v3;
        if ( (char *)*v3 + 4096 != nullptr && (char *)*v3 + 0x2000 != nullptr )
        {
          if ( v4 )
            break;
        }
        if ( v2 == v3 )
          goto LABEL_5;
      }
      operator delete[](v4);
    }
    while ( v2 != v3 );
LABEL_5:
    v3 = *(void ***)(a1 + 328);
  }
  if ( v3 != (void **)(a1 + 344) )
    free(v3);
  v5 = *(void ***)(a1 + 304);
  v6 = *(unsigned int *)(a1 + 320);
  v7 = 16 * v6;
  v8 = &v5[2 * v6];
  if ( (_DWORD)v6 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *v5;
        if ( (char *)*v5 + 4096 != nullptr && (char *)*v5 + 0x2000 != nullptr )
        {
          if ( v9 )
            break;
        }
        v5 += 2;
        if ( v8 == v5 )
          goto LABEL_12;
      }
      operator delete[](v9);
      v5 += 2;
    }
    while ( v8 != v5 );
LABEL_12:
    v5 = *(void ***)(a1 + 304);
    v7 = 16LL * *(unsigned int *)(a1 + 320);
  }
  operator delete(v5, v7, 8);
  v10 = *(void **)(a1 + 248);
  if ( v10 != (void *)(a1 + 264) )
    operator delete(v10);
  sub_9B4A30((void ***)(a1 + 224));
  v11 = *(_QWORD *)(a1 + 192);
  if ( v11 )
  {
    while ( 1 )
    {
      sub_12DC6A0(a1 + 176, *(_QWORD **)(v11 + 24));
      v12 = *(void **)(v11 + 64);
      v13 = *(_QWORD *)(v11 + 16);
      if ( v12 != (void *)(v11 + 80) )
        operator delete(v12);
      v14 = *(void **)(v11 + 32);
      if ( v14 == (void *)(v11 + 48) )
      {
        operator delete((void *)v11);
        if ( !v13 )
          break;
      }
      else
      {
        operator delete(v14);
        operator delete((void *)v11);
        if ( !v13 )
          break;
      }
      v11 = v13;
    }
  }
  v15 = *(void **)(a1 + 144);
  if ( v15 != (void *)(a1 + 160) )
    operator delete(v15);
  v16 = *(void **)(a1 + 112);
  if ( v16 != (void *)(a1 + 128) )
    operator delete(v16);
  v17 = *(void **)(a1 + 80);
  if ( v17 != (void *)(a1 + 96) )
    operator delete(v17);
  v18 = *(void ***)(a1 + 64);
  v19 = *(void ***)(a1 + 56);
  if ( v18 != v19 )
  {
    do
    {
      while ( *v19 != v19 + 2 )
      {
        operator delete(*v19);
        v19 += 5;
        if ( v18 == v19 )
          goto LABEL_31;
      }
      v19 += 5;
    }
    while ( v18 != v19 );
LABEL_31:
    v19 = *(void ***)(a1 + 56);
  }
  if ( v19 )
    operator delete(v19);
  v20 = *(void ***)(a1 + 40);
  v21 = *(void ***)(a1 + 32);
  if ( v20 != v21 )
  {
    do
    {
      while ( *v21 != v21 + 2 )
      {
        operator delete(*v21);
        v21 += 5;
        if ( v20 == v21 )
          goto LABEL_37;
      }
      v21 += 5;
    }
    while ( v20 != v21 );
LABEL_37:
    v21 = *(void ***)(a1 + 32);
  }
  if ( v21 )
    operator delete(v21);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}
