void __fastcall sub_1FF2FE0(_QWORD *a1)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  void *v4; // rdi
  void *v5; // rdi
  void **v6; // r14
  void **v7; // rbp
  void *v8; // rdi

  v2 = a1[2];
  v3 = a1[1];
  *a1 = &off_2BE4C80;
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v4 = *(void **)(v3 + 120);
        if ( v4 != (void *)(v3 + 136) )
          operator delete(v4);
        v5 = *(void **)(v3 + 88);
        if ( v5 != (void *)(v3 + 104) )
          operator delete(v5);
        v6 = *(void ***)(v3 + 72);
        v7 = *(void ***)(v3 + 64);
        if ( v6 != v7 )
        {
          do
          {
            while ( *v7 != v7 + 2 )
            {
              operator delete(*v7);
              v7 += 4;
              if ( v7 == v6 )
                goto LABEL_9;
            }
            v7 += 4;
          }
          while ( v6 != v7 );
LABEL_9:
          v7 = *(void ***)(v3 + 64);
        }
        if ( v7 )
          operator delete(v7);
        v8 = *(void **)(v3 + 32);
        if ( v8 != (void *)(v3 + 48) )
          operator delete(v8);
        if ( *(_QWORD *)v3 == v3 + 16 )
          break;
        operator delete(*(void **)v3);
        v3 += 152;
        if ( v2 == v3 )
          goto LABEL_16;
      }
      v3 += 152;
    }
    while ( v2 != v3 );
LABEL_16:
    v3 = a1[1];
  }
  if ( v3 )
    operator delete((void *)v3);
  operator delete(a1, 0x20u);
}
