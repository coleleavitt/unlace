void __fastcall clang_disposeCXTUResourceUsage(int a1, int a2, int a3, int a4, int a5, int a6, void **a7)
{
  if ( a7 )
  {
    if ( *a7 )
      operator delete(*a7, (_BYTE *)a7[2] - (_BYTE *)*a7);
    operator delete(a7, 0x18u);
  }
}

