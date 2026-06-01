/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: interr
// Address: 0x0007ECC0

//----- (0007ECC0) --------------------------------------------------------
void __fastcall __noreturn interr(int a1)
{
  _DWORD *exception; // r0

  if ( sub_75D18() )
  {
    exception = _cxa_allocate_exception(8u);
    *exception = &off_DB284;
    exception[1] = a1;
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'interr_exc_t, (void (*)(void *))std::exception::~exception);
  }
  sub_1C9E4("Oops! internal error %d occurred.", a1);
}
// D9C1C: using guessed type int *`typeinfo for'interr_exc_t;
// DB284: using guessed type _UNKNOWN *off_DB284;
