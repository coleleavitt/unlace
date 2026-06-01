void __fastcall clang_disposeSourceRangeList(_QWORD *a1)
{
  void *v2; // rdi

  if ( a1 )
  {
    v2 = (void *)a1[1];
    if ( v2 )
      operator delete[](v2);
    operator delete(a1, 0x10u);
  }
}

