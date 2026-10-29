/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: interr
// Address: 0x00000000000C3680

//----- (00000000000C3680) ----------------------------------------------------
void __fastcall __noreturn interr(int a1)
{
  _DWORD *exception; // rax

  if ( sub_B7780() )
  {
    exception = _cxa_allocate_exception(0x10u);
    *(_QWORD *)exception = &off_150718;
    exception[2] = a1;
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'interr_exc_t, std::exception::~exception);
  }
  sub_3A5C0("Oops! internal error %d occurred.", a1);
}
// 14DF30: using guessed type __int64 *`typeinfo for'interr_exc_t;
// 150718: using guessed type void (__fastcall *off_150718)(std::exception *__hidden this);
