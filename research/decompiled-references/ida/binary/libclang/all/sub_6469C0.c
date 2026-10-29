void __fastcall sub_6469C0(__int64 a1)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 7);
  if ( *(_QWORD *)a1 != v3 )
  {
    do
    {
      v3 -= 128LL;
      v4 = *(void **)(v3 + 96);
      if ( v4 != (void *)(v3 + 112) )
        operator delete(v4, *(_QWORD *)(v3 + 112) + 1LL);
      v5 = *(void **)(v3 + 64);
      if ( v5 != (void *)(v3 + 80) )
        operator delete(v5, *(_QWORD *)(v3 + 80) + 1LL);
      v6 = *(void **)(v3 + 32);
      if ( v6 != (void *)(v3 + 48) )
        operator delete(v6, *(_QWORD *)(v3 + 48) + 1LL);
      if ( *(_QWORD *)v3 != v3 + 16 )
        operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
    }
    while ( v3 != v2 );
    v3 = *(_QWORD *)a1;
  }
  if ( v3 != a1 + 16 )
    free((void *)v3);
}

