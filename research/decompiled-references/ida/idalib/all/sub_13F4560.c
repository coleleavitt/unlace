void __fastcall sub_13F4560(__int64 a1)
{
  void **v1; // rbp
  void **v2; // rbx

  v1 = *(void ***)a1;
  v2 = (void **)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
  if ( *(void ***)a1 != v2 )
  {
    do
    {
      while ( 1 )
      {
        v2 -= 5;
        if ( *v2 == v2 + 2 )
          break;
        operator delete(*v2);
        if ( v2 == v1 )
          goto LABEL_4;
      }
    }
    while ( v2 != v1 );
LABEL_4:
    v2 = *(void ***)a1;
  }
  if ( v2 != (void **)(a1 + 16) )
    free(v2);
}
