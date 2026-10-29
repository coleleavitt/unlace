void __fastcall sub_21C94C0(char *a1)
{
  char *i; // rbp
  void **v3; // rdi
  void **v4; // r12
  void **v5; // rbx
  char *v6; // rax

  if ( a1 )
  {
    for ( i = a1 + 48; ; i = v6 )
    {
      v3 = *(void ***)i;
      v4 = *((void ***)i + 1);
      v5 = *(void ***)i;
      if ( v4 != *(void ***)i )
      {
        do
        {
          while ( *v5 )
          {
            operator delete(*v5);
            v5 += 3;
            if ( v4 == v5 )
              goto LABEL_6;
          }
          v5 += 3;
        }
        while ( v4 != v5 );
LABEL_6:
        v3 = *(void ***)i;
      }
      if ( v3 )
      {
        operator delete(v3);
        v6 = i - 24;
        if ( i == a1 )
          goto LABEL_13;
      }
      else
      {
        v6 = i - 24;
        if ( i == a1 )
        {
LABEL_13:
          operator delete(a1, 0x48u);
          return;
        }
      }
    }
  }
}
