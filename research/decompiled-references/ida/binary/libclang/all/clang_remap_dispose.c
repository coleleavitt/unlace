void __fastcall clang_remap_dispose(__int64 *a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  void *v4; // rdi

  if ( a1 )
  {
    v2 = a1[1];
    v3 = *a1;
    if ( v2 != *a1 )
    {
      do
      {
        v4 = *(void **)(v3 + 32);
        if ( v4 != (void *)(v3 + 48) )
          operator delete(v4, *(_QWORD *)(v3 + 48) + 1LL);
        if ( *(_QWORD *)v3 != v3 + 16 )
          operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
        v3 += 64;
      }
      while ( v2 != v3 );
      v3 = *a1;
    }
    if ( v3 )
      operator delete((void *)v3, a1[2] - v3);
    operator delete(a1, 0x18u);
  }
}

