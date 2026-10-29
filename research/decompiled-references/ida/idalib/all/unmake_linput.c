void __fastcall unmake_linput(void *a1)
{
  if ( a1 )
    operator delete(a1, 0x38u);
}
