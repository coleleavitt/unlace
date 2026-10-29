void __fastcall sub_21CAFA0(__int64 a1)
{
  char *v2; // r12
  char *v3; // rbp
  void **v4; // rdi
  void **v5; // r14
  void **v6; // rbx
  void *v7; // rdi

  v2 = *(char **)(a1 + 48);
  if ( v2 )
  {
    v3 = v2 + 72;
    do
    {
      while ( 1 )
      {
        v3 -= 24;
        v4 = *(void ***)v3;
        v5 = *((void ***)v3 + 1);
        v6 = *(void ***)v3;
        if ( v5 != *(void ***)v3 )
        {
          do
          {
            while ( *v6 )
            {
              operator delete(*v6);
              v6 += 3;
              if ( v6 == v5 )
                goto LABEL_6;
            }
            v6 += 3;
          }
          while ( v5 != v6 );
LABEL_6:
          v4 = *(void ***)v3;
        }
        if ( !v4 )
          break;
        operator delete(v4);
        if ( v2 == v3 )
          goto LABEL_9;
      }
    }
    while ( v2 != v3 );
LABEL_9:
    operator delete(v2, 0x48u);
  }
  v7 = *(void **)(a1 + 24);
  if ( v7 )
    operator delete(v7);
  if ( *(_QWORD *)a1 )
    operator delete(*(void **)a1);
}
