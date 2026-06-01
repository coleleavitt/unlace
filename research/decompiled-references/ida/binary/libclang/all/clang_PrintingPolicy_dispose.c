void __fastcall clang_PrintingPolicy_dispose(void *a1)
{
  if ( a1 )
    operator delete(a1, 0x10u);
}

