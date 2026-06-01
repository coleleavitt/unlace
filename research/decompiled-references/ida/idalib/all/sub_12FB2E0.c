void __fastcall sub_12FB2E0(__int64 a1)
{
  void **v1; // rbp
  void **v2; // rbx

  v1 = *(void ***)(a1 + 40);
  v2 = *(void ***)(a1 + 32);
  if ( v1 != v2 )
  {
    do
    {
      while ( *v2 != v2 + 2 )
      {
        operator delete(*v2);
        v2 += 4;
        if ( v2 == v1 )
          goto LABEL_4;
      }
      v2 += 4;
    }
    while ( v1 != v2 );
LABEL_4:
    v2 = *(void ***)(a1 + 32);
  }
  if ( v2 )
    operator delete(v2);
}
