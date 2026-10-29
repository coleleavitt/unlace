void __fastcall clang_IndexAction_dispose(_QWORD *a1)
{
  void *v1; // rbp

  if ( a1 )
  {
    v1 = (void *)a1[1];
    if ( v1 )
    {
      operator delete();
      operator delete(v1, 0x40u);
    }
    a1[1] = 0;
    operator delete(a1, 0x10u);
  }
}

