void __fastcall sub_FE8F00(__int64 a1)
{
  void **v2; // r12
  void **v3; // rbx
  void *v4; // rdi
  void *v5; // rdi

  v2 = *(void ***)(a1 + 96);
  v3 = &v2[4 * *(unsigned int *)(a1 + 104)];
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 4;
        if ( *v3 == v3 + 2 )
          break;
        operator delete(*v3);
        if ( v2 == v3 )
          goto LABEL_4;
      }
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = *(void ***)(a1 + 96);
  }
  if ( v3 != (void **)(a1 + 112) )
    free(v3);
  v4 = *(void **)(a1 + 64);
  if ( v4 != (void *)(a1 + 80) )
    operator delete(v4);
  v5 = *(void **)(a1 + 24);
  if ( v5 != (void *)(a1 + 40) )
    operator delete(v5);
}

