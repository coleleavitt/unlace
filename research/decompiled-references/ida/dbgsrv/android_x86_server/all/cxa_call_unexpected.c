/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_call_unexpected
// Address: 0x000BE600

//----- (000BE600) --------------------------------------------------------
void __noreturn _cxa_call_unexpected(void *a1)
{
  void (__noreturn *unexpected)(); // eax

  if ( !a1 )
    sub_BE5C0(0, nullptr);
  _cxa_begin_catch(a1);
  if ( *(_DWORD *)a1 & 0xFFFFFF00 ^ 0x432B2B00 | *((_DWORD *)a1 + 1) ^ 0x434C4E47 )
  {
    std::get_terminate();
    unexpected = std::get_unexpected();
  }
  else
  {
    unexpected = *((void (__noreturn **)())a1 - 10);
  }
  sub_BDBE0((void (*)(void))unexpected);
}
