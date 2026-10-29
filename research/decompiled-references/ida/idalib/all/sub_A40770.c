void __fastcall sub_A40770(__int64 a1)
{
  char *v1; // r12
  char *v3; // rbp
  char *v4; // rdi
  void *v5; // rdi
  _QWORD *v6; // r12
  _QWORD *v7; // rbp
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi

  v1 = *(char **)(a1 + 392);
  v3 = *(char **)(a1 + 384);
  if ( v1 != v3 )
  {
    do
    {
      v4 = v3;
      v3 += 408;
      sub_A40770(v4);
    }
    while ( v1 != v3 );
    v3 = *(char **)(a1 + 384);
  }
  if ( v3 )
    operator delete(v3);
  v5 = *(void **)(a1 + 360);
  if ( v5 )
    operator delete(v5);
  v6 = *(_QWORD **)(a1 + 344);
  v7 = *(_QWORD **)(a1 + 336);
  if ( v6 != v7 )
  {
    do
    {
      while ( 1 )
      {
        v8 = (void *)v7[5];
        if ( v8 )
          operator delete(v8);
        v9 = (void *)v7[2];
        if ( !v9 )
          break;
        operator delete(v9);
        v7 += 22;
        if ( v7 == v6 )
          goto LABEL_13;
      }
      v7 += 22;
    }
    while ( v6 != v7 );
LABEL_13:
    v7 = *(_QWORD **)(a1 + 336);
  }
  if ( v7 )
    operator delete(v7);
  if ( *(_BYTE *)(a1 + 304) )
  {
    v10 = *(void **)(a1 + 272);
    if ( v10 != (void *)(a1 + 288) )
      operator delete(v10);
  }
  if ( *(_BYTE *)(a1 + 264) )
  {
    v11 = *(void **)(a1 + 232);
    if ( v11 != (void *)(a1 + 248) )
      operator delete(v11);
  }
  if ( *(_BYTE *)(a1 + 224) )
  {
    v12 = *(void **)(a1 + 192);
    if ( v12 != (void *)(a1 + 208) )
      operator delete(v12);
  }
  if ( *(_BYTE *)(a1 + 184) )
  {
    v13 = *(void **)(a1 + 152);
    if ( v13 != (void *)(a1 + 168) )
      operator delete(v13);
  }
  if ( *(_BYTE *)(a1 + 144) )
  {
    v14 = *(void **)(a1 + 112);
    if ( v14 != (void *)(a1 + 128) )
      operator delete(v14);
  }
}
