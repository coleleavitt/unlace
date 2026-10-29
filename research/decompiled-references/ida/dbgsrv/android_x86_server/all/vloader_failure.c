/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vloader_failure
// Address: 0x0009B3A0

//----- (0009B3A0) --------------------------------------------------------
void __cdecl __noreturn vloader_failure(int a1, int a2)
{
  _DWORD *exception; // eax
  int v3; // [esp+0h] [ebp-14h] BYREF

  if ( a1 )
    callui((int)&v3);
  exception = _cxa_allocate_exception(4u);
  *exception = &off_138D2C;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'loader_failure_t,
    (void (*)(void *))std::exception::~exception);
}
// 138CE8: using guessed type int `typeinfo for'loader_failure_t;
// 138D2C: using guessed type void (__cdecl *off_138D2C)(std::exception *__hidden this);
// 13BC20: using guessed type int (__stdcall *callui)(int);
