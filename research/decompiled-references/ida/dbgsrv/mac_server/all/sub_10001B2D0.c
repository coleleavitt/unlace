/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B2D0
// Address: 0x000000010001B2D0

//----- (000000010001B2D0) ----------------------------------------------------
void __fastcall sub_10001B2D0(void **__p)
{
  void *v2; // rdi

  *__p = off_1000A7DB8;
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
// 1000A7DB8: using guessed type void (__fastcall __noreturn *off_1000A7DB8[2])();
