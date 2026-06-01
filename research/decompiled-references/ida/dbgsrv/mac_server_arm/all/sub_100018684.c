/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100018684
// Address: 0x0000000100018684

//----- (0000000100018684) ----------------------------------------------------
void __fastcall sub_100018684(void **__p)
{
  void *v2; // x0

  *__p = off_100099508;
  if ( *((_BYTE *)__p + 48) == 1 )
    close_linput(__p[4]);
  v2 = __p[1];
  if ( v2 )
  {
    __p[2] = nullptr;
    qfree(v2);
  }
  operator delete(__p);
}
// 100099508: using guessed type void (__fastcall __noreturn *off_100099508[2])();
