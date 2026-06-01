void __fastcall sub_18C40(void *a1)
{
  void *v1; // r12
  _QWORD *v2; // rbp
  char *v3; // rdx
  __int64 v4; // r13
  __int64 i; // rbx
  char *v6; // rax
  void *v7; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_18C40(*((void **)v1 + 3));
      v3 = *((char **)v1 + 5);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v4 = v2[6];
        if ( v4 )
        {
          for ( i = 0; i != v4; ++i )
          {
            v6 = &v3[24 * i];
            v7 = *(void **)v6;
            if ( *(_QWORD *)v6 )
            {
              *((_QWORD *)v6 + 1) = 0;
              j__free(v7);
              v3 = (char *)v2[5];
            }
          }
        }
        v2[6] = 0;
        j__free(v3);
      }
      operator delete(v2, 0x40u);
    }
    while ( v1 );
  }
}

