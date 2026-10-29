void __fastcall sub_10E71B0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void **v4; // r12
  void **v5; // rbp
  void *v6; // rdi
  void *v7; // rdi

  if ( *(_BYTE *)(a1 + 184) )
  {
    v2 = *(void **)(a1 + 152);
    if ( v2 != (void *)(a1 + 168) )
      operator delete(v2);
  }
  v3 = *(void **)(a1 + 120);
  if ( v3 != (void *)(a1 + 136) )
    operator delete(v3);
  v4 = *(void ***)(a1 + 104);
  v5 = *(void ***)(a1 + 96);
  if ( v4 != v5 )
  {
    do
    {
      while ( *v5 != v5 + 2 )
      {
        operator delete(*v5);
        v5 += 4;
        if ( v4 == v5 )
          goto LABEL_9;
      }
      v5 += 4;
    }
    while ( v4 != v5 );
LABEL_9:
    v5 = *(void ***)(a1 + 96);
  }
  if ( v5 )
    operator delete(v5);
  v6 = *(void **)(a1 + 64);
  if ( v6 != (void *)(a1 + 80) )
    operator delete(v6);
  v7 = *(void **)(a1 + 32);
  if ( v7 != (void *)(a1 + 48) )
    operator delete(v7);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}

