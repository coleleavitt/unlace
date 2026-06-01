void __fastcall sub_646940(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    do
    {
      v3 -= 80;
      v4 = *(void **)(v3 + 32);
      if ( v4 != (void *)(v3 + 48) )
        operator delete(v4, *(_QWORD *)(v3 + 48) + 1LL);
      if ( *(_QWORD *)v3 != v3 + 16 )
        operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
    }
    while ( v3 != v2 );
    v3 = *(_QWORD *)a1;
  }
  if ( v3 != a1 + 16 )
    free((void *)v3);
}

