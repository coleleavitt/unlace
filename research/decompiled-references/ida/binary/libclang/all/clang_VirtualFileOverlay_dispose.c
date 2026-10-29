void __fastcall clang_VirtualFileOverlay_dispose(__int64 *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rbx
  void *v5; // rdi

  if ( a1 )
  {
    v2 = (__int64 *)a1[4];
    if ( v2 != a1 + 6 )
      operator delete(v2, a1[6] + 1);
    v3 = a1[1];
    v4 = *a1;
    if ( v3 != *a1 )
    {
      do
      {
        v5 = *(void **)(v4 + 32);
        if ( v5 != (void *)(v4 + 48) )
          operator delete(v5, *(_QWORD *)(v4 + 48) + 1LL);
        if ( *(_QWORD *)v4 != v4 + 16 )
          operator delete(*(void **)v4, *(_QWORD *)(v4 + 16) + 1LL);
        v4 += 72;
      }
      while ( v3 != v4 );
      v4 = *a1;
    }
    if ( v4 )
      operator delete((void *)v4, a1[2] - v4);
    operator delete(a1, 0x40u);
  }
}

