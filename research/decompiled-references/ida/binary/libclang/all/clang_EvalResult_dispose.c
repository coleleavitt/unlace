void __fastcall clang_EvalResult_dispose(_QWORD *a1)
{
  void *v2; // rdi

  if ( a1 )
  {
    if ( *(_DWORD *)a1 > 2u )
    {
      v2 = (void *)a1[1];
      if ( v2 )
        operator delete[](v2);
    }
    operator delete(a1, 0x18u);
  }
}

