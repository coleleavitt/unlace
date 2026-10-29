/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: interr
// Address: 0x000000010007D200

//----- (000000010007D200) ----------------------------------------------------
void __fastcall interr(unsigned int a1)
{
  _DWORD *exception; // rax

  if ( (unsigned __int8)sub_100074930() )
  {
    exception = __cxa_allocate_exception(0x10u);
    *(_QWORD *)exception = &off_1000AAAD0;
    exception[2] = a1;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'interr_exc_t, (void (__fastcall *)(void *))sub_10007D360);
  }
  sub_100033990("Oops! internal error %d occurred.", a1);
  qexit((int)"Oops! internal error %d occurred.", (__va_list_tag *)a1);
}
// 1000A8D98: using guessed type _UNKNOWN *`typeinfo for'interr_exc_t;
// 1000AAAD0: using guessed type __int64 (__fastcall *off_1000AAAD0)();
