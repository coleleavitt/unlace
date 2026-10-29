void __fastcall clang_ModuleMapDescriptor_dispose(void **a1)
{
  void **v2; // rdi

  if ( a1 )
  {
    v2 = (void **)a1[4];
    if ( v2 != a1 + 6 )
      operator delete(v2, (unsigned __int64)a1[6] + 1);
    if ( *a1 != a1 + 2 )
      operator delete(*a1, (unsigned __int64)a1[2] + 1);
    operator delete(a1, 0x40u);
  }
}

