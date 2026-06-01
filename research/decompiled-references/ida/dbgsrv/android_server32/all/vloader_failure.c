/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vloader_failure
// Address: 0x0007064C

//----- (0007064C) --------------------------------------------------------
void __fastcall __noreturn vloader_failure(int a1)
{
  _DWORD *exception; // r0

  if ( a1 )
    callui(24, 2, a1);
  exception = _cxa_allocate_exception(4u);
  *exception = &off_DAB78;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'loader_failure_t,
    (void (*)(void *))std::exception::~exception);
}
// DAB34: using guessed type int *`typeinfo for'loader_failure_t;
// DAB78: using guessed type _UNKNOWN *off_DAB78;
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
