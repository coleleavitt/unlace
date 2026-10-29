void __fastcall sub_6441A0(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  void *v4; // rdi

  v2 = a1[1];
  v3 = *a1;
  if ( v2 != *a1 )
  {
    do
    {
      v4 = *(void **)(v3 + 40);
      if ( v4 != (void *)(v3 + 56) )
        operator delete(v4, *(_QWORD *)(v3 + 56) + 1LL);
      if ( *(_QWORD *)v3 != v3 + 16 )
        operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
      v3 += 80;
    }
    while ( v2 != v3 );
    v3 = *a1;
  }
  if ( v3 )
    operator delete((void *)v3, a1[2] - v3);
}

