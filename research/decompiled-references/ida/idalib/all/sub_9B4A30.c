void __fastcall sub_9B4A30(void ***a1)
{
  void **v1; // rbp
  void **v2; // rbx

  v1 = a1[1];
  v2 = *a1;
  if ( v1 != *a1 )
  {
    do
    {
      while ( *v2 != v2 + 2 )
      {
        operator delete(*v2);
        v2 += 4;
        if ( v1 == v2 )
          goto LABEL_4;
      }
      v2 += 4;
    }
    while ( v1 != v2 );
LABEL_4:
    v2 = *a1;
  }
  if ( v2 )
    operator delete(v2);
}
