void __fastcall sub_115A9A0(unsigned int *a1)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  void *v4; // rdi
  void *v5; // rdi
  void **v6; // rdi
  void **v7; // r12
  void **v8; // rbp
  void *v9; // rdi
  void *v10; // rdi

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)a1 + 192LL * a1[2];
  if ( *(_QWORD *)a1 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 192;
        if ( *(_BYTE *)(v3 + 184) )
        {
          v4 = *(void **)(v3 + 152);
          if ( v4 != (void *)(v3 + 168) )
            operator delete(v4);
        }
        v5 = *(void **)(v3 + 120);
        if ( v5 != (void *)(v3 + 136) )
          operator delete(v5);
        v6 = *(void ***)(v3 + 96);
        v7 = *(void ***)(v3 + 104);
        v8 = v6;
        if ( v7 != v6 )
        {
          do
          {
            while ( *v8 != v8 + 2 )
            {
              operator delete(*v8);
              v8 += 4;
              if ( v8 == v7 )
                goto LABEL_10;
            }
            v8 += 4;
          }
          while ( v7 != v8 );
LABEL_10:
          v6 = *(void ***)(v3 + 96);
        }
        if ( v6 )
          operator delete(v6);
        v9 = *(void **)(v3 + 64);
        if ( v9 != (void *)(v3 + 80) )
          operator delete(v9);
        v10 = *(void **)(v3 + 32);
        if ( v10 != (void *)(v3 + 48) )
          operator delete(v10);
        if ( *(_QWORD *)v3 == v3 + 16 )
          break;
        operator delete(*(void **)v3);
        if ( v3 == v2 )
          goto LABEL_19;
      }
    }
    while ( v3 != v2 );
LABEL_19:
    v3 = *(_QWORD *)a1;
  }
  if ( (unsigned int *)v3 != a1 + 4 )
    free((void *)v3);
}

