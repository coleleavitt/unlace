void __fastcall sub_63BC90(void ****a1)
{
  void ***v2; // rbx
  void ***v3; // r13
  void **v4; // rbp
  void ***v5; // rdi

  if ( a1 )
  {
    v2 = *a1;
    v3 = a1[1];
    if ( *a1 != v3 )
    {
      do
      {
        v4 = *v2;
        if ( *v2 )
        {
          if ( *v4 != v4 + 2 )
            free(*v4);
          operator delete(v4, 0x50u);
        }
        ++v2;
      }
      while ( v3 != v2 );
    }
    v5 = a1[3];
    if ( v5 )
      operator delete(v5, (char *)a1[5] - (char *)v5);
    if ( *a1 )
      operator delete(*a1, (char *)a1[2] - (char *)*a1);
    operator delete(a1, 0x30u);
  }
}

