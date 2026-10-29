void __fastcall clang_TargetInfo_dispose(void *a1)
{
  if ( a1 )
    operator delete(a1, 8u);
}

