void __fastcall clang_disposeCXCursorSet(void *a1)
{
  if ( a1 )
  {
    operator delete();
    operator delete(a1, 0x18u);
  }
}

