void __fastcall sub_9E5FF0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi

  v2 = *(_QWORD *)(a1 + 160);
  v3 = *(_QWORD *)(a1 + 152);
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v4 = *(void **)(v3 + 80);
        if ( v4 != (void *)(v3 + 96) )
          operator delete(v4);
        v5 = *(void **)(v3 + 40);
        if ( v5 != (void *)(v3 + 56) )
          operator delete(v5);
        if ( *(_QWORD *)v3 == v3 + 16 )
          break;
        operator delete(*(void **)v3);
        v3 += 120;
        if ( v2 == v3 )
          goto LABEL_8;
      }
      v3 += 120;
    }
    while ( v2 != v3 );
LABEL_8:
    v3 = *(_QWORD *)(a1 + 152);
  }
  if ( v3 )
    operator delete((void *)v3);
  v6 = *(void **)(a1 + 120);
  if ( v6 != (void *)(a1 + 136) )
    operator delete(v6);
  v7 = *(void **)(a1 + 88);
  if ( v7 != (void *)(a1 + 104) )
    operator delete(v7);
  v8 = *(void **)(a1 + 40);
  if ( v8 != (void *)(a1 + 56) )
    operator delete(v8);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}

