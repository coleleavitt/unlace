void __fastcall clang_CompileCommands_dispose(__int64 *a1)
{
  __int64 v2; // r13
  __int64 v3; // r14
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rbx
  void *v8; // rdi

  if ( a1 )
  {
    v2 = a1[1];
    v3 = *a1;
    if ( v2 != *a1 )
    {
      do
      {
        v4 = *(void **)(v3 + 120);
        if ( v4 != (void *)(v3 + 136) )
          operator delete(v4, *(_QWORD *)(v3 + 136) + 1LL);
        v5 = *(void **)(v3 + 88);
        if ( v5 != (void *)(v3 + 104) )
          operator delete(v5, *(_QWORD *)(v3 + 104) + 1LL);
        v6 = *(_QWORD *)(v3 + 72);
        v7 = *(_QWORD *)(v3 + 64);
        if ( v6 != v7 )
        {
          do
          {
            if ( *(_QWORD *)v7 != v7 + 16 )
              operator delete(*(void **)v7, *(_QWORD *)(v7 + 16) + 1LL);
            v7 += 32;
          }
          while ( v6 != v7 );
          v7 = *(_QWORD *)(v3 + 64);
        }
        if ( v7 )
          operator delete((void *)v7, *(_QWORD *)(v3 + 80) - v7);
        v8 = *(void **)(v3 + 32);
        if ( v8 != (void *)(v3 + 48) )
          operator delete(v8, *(_QWORD *)(v3 + 48) + 1LL);
        if ( *(_QWORD *)v3 != v3 + 16 )
          operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
        v3 += 152;
      }
      while ( v2 != v3 );
      v3 = *a1;
    }
    if ( v3 )
      operator delete((void *)v3, a1[2] - v3);
    operator delete(a1, 0x18u);
  }
}

