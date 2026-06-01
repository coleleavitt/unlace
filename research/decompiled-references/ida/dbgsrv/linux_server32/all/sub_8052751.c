/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8052751
// Address: 0x08052751

//----- (08052751) --------------------------------------------------------
void __noreturn sub_8052751()
{
  _DWORD *exception; // eax

  exception = __cxa_allocate_exception(4u);
  *exception = (char *)&`vtable for'std::bad_array_new_length + 8;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_array_new_length,
    (void (*)(void *))&std::bad_array_new_length::~bad_array_new_length);
}
