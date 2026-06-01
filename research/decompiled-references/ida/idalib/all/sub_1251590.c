void __fastcall sub_1251590(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rbx
  void *v5; // rdi
  void **v6; // r12
  void **v7; // rbx

  v2 = *(void **)(a1 + 72);
  if ( v2 )
    operator delete(v2);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 48);
  if ( v3 != v4 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *(void **)(v4 + 32);
        if ( v5 != (void *)(v4 + 48) )
          operator delete(v5);
        if ( *(_QWORD *)v4 == v4 + 16 )
          break;
        operator delete(*(void **)v4);
        v4 += 64;
        if ( v3 == v4 )
          goto LABEL_8;
      }
      v4 += 64;
    }
    while ( v3 != v4 );
LABEL_8:
    v4 = *(_QWORD *)(a1 + 48);
  }
  if ( v4 )
    operator delete((void *)v4);
  v6 = *(void ***)(a1 + 32);
  v7 = *(void ***)(a1 + 24);
  if ( v6 != v7 )
  {
    do
    {
      while ( *v7 != v7 + 2 )
      {
        operator delete(*v7);
        v7 += 4;
        if ( v6 == v7 )
          goto LABEL_14;
      }
      v7 += 4;
    }
    while ( v6 != v7 );
LABEL_14:
    v7 = *(void ***)(a1 + 24);
  }
  if ( v7 )
    operator delete(v7);
  if ( *(_QWORD *)a1 )
    operator delete(*(void **)a1);
}
