void __fastcall sub_1216C70(__int64 *a1)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  void **v4; // r12
  void **v5; // rbx
  void *v6; // rdi
  void *v7; // rdi

  v2 = a1[1];
  v3 = *a1;
  if ( v2 != *a1 )
  {
    do
    {
      while ( 1 )
      {
        v4 = *(void ***)(v3 + 104);
        v5 = *(void ***)(v3 + 96);
        if ( v4 != v5 )
        {
          do
          {
            while ( *v5 != v5 + 2 )
            {
              operator delete(*v5);
              v5 += 4;
              if ( v5 == v4 )
                goto LABEL_5;
            }
            v5 += 4;
          }
          while ( v4 != v5 );
LABEL_5:
          v5 = *(void ***)(v3 + 96);
        }
        if ( v5 )
          operator delete(v5);
        v6 = *(void **)(v3 + 64);
        if ( v6 != (void *)(v3 + 80) )
          operator delete(v6);
        v7 = *(void **)(v3 + 32);
        if ( v7 != (void *)(v3 + 48) )
          operator delete(v7);
        if ( *(_QWORD *)v3 == v3 + 16 )
          break;
        operator delete(*(void **)v3);
        v3 += 120;
        if ( v2 == v3 )
          goto LABEL_14;
      }
      v3 += 120;
    }
    while ( v2 != v3 );
LABEL_14:
    v3 = *a1;
  }
  if ( v3 )
    operator delete((void *)v3);
}
