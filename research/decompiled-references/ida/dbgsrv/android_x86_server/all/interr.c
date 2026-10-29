/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: interr
// Address: 0x000B1290

//----- (000B1290) --------------------------------------------------------
void __cdecl __noreturn interr(int a1)
{
  _DWORD *exception; // eax

  if ( sub_A3E90() )
  {
    exception = _cxa_allocate_exception(8u);
    *exception = &off_139394;
    exception[1] = a1;
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'interr_exc_t, (void (*)(void *))std::exception::~exception);
  }
  sub_1DE10("Oops! internal error %d occurred.", a1);
}
// 137FC0: using guessed type int *`typeinfo for'interr_exc_t;
// 139394: using guessed type void (__cdecl *off_139394)(std::exception *__hidden this);
