/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_call_unexpected
// Address: 0x00000000000D0530

//----- (00000000000D0530) ----------------------------------------------------
void __noreturn _cxa_call_unexpected(void *a1)
{
  void (__fastcall __noreturn *unexpected)(); // rdi
  __int64 v3; // [rsp+28h] [rbp-70h]
  void (__fastcall __noreturn *terminate)(); // [rsp+30h] [rbp-68h]

  if ( !a1 )
    sub_D0500(0, nullptr);
  _cxa_begin_catch(a1);
  if ( (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFF00LL) == 0x434C4E47432B2B00LL )
  {
    unexpected = *((void (__fastcall __noreturn **)())a1 - 9);
    terminate = *((void (__fastcall __noreturn **)())a1 - 8);
    v3 = *((_QWORD *)a1 - 4);
  }
  else
  {
    terminate = std::get_terminate();
    unexpected = std::get_unexpected();
  }
  sub_CFBE0((void (__fastcall *)(_QWORD))unexpected);
}
