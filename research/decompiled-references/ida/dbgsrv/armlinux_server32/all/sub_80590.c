/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80590
// Address: 0x00080590

//----- (00080590) --------------------------------------------------------
void __noreturn sub_80590()
{
  char *v0; // r0

  v0 = sub_807D4(4);
  *(_DWORD *)v0 = &off_D2BF4;
  sub_8109C(
    (int)v0,
    (int)&`typeinfo for'__gnu_cxx::__concurrence_lock_error,
    (int)__gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error);
}
// D2BD4: using guessed type int *`typeinfo for'__gnu_cxx::__concurrence_lock_error;
// D2BF4: using guessed type _UNKNOWN *off_D2BF4;
