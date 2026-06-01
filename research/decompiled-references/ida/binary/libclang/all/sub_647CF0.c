void __fastcall sub_647CF0(__int64 *a1)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rbx
  void *v6; // rdi

  v2 = a1[1];
  v3 = *a1;
  if ( v2 != *a1 )
  {
    do
    {
      v4 = *(_QWORD *)(v3 + 40);
      v5 = *(_QWORD *)(v3 + 32);
      if ( v4 != v5 )
      {
        do
        {
          v6 = *(void **)(v5 + 40);
          if ( v6 != (void *)(v5 + 56) )
            operator delete(v6, *(_QWORD *)(v5 + 56) + 1LL);
          if ( *(_QWORD *)v5 != v5 + 16 )
            operator delete(*(void **)v5, *(_QWORD *)(v5 + 16) + 1LL);
          v5 += 80;
        }
        while ( v4 != v5 );
        v5 = *(_QWORD *)(v3 + 32);
      }
      if ( v5 )
        operator delete((void *)v5, *(_QWORD *)(v3 + 48) - v5);
      if ( *(_QWORD *)v3 != v3 + 16 )
        operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
      v3 += 56;
    }
    while ( v2 != v3 );
    v3 = *a1;
  }
  if ( v3 )
    operator delete((void *)v3, a1[2] - v3);
}

