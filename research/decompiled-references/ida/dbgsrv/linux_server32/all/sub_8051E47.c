/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8051E47
// Address: 0x08051E47

//----- (08051E47) --------------------------------------------------------
void __usercall __noreturn sub_8051E47(int a1@<ebx>, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD *exception; // eax

  exception = __cxa_allocate_exception(4u);
  *exception = a1 - 1904;
  if ( a8 == __readgsdword(0x14u) )
    __cxa_throw(exception, (struct type_info *)(a1 - 460), (void (*)(void *))(a1 - 367780));
  sub_80D7AB0();
}
