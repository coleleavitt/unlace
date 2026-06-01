/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80522DA
// Address: 0x080522DA

//----- (080522DA) --------------------------------------------------------
void __usercall __noreturn sub_80522DA(int a1@<ebx>, int a2, int a3, int a4, int a5)
{
  _DWORD *exception; // eax

  exception = __cxa_allocate_exception(8u);
  *exception = a1 - 420;
  exception[1] = a5;
  __cxa_throw(exception, (struct type_info *)(a1 - 1400), (void (*)(void *))(a1 - 316308));
}
