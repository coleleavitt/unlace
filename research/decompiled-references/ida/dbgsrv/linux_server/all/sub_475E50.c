/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475E50
// Address: 0x0000000000475E50

//----- (0000000000475E50) ----------------------------------------------------
void __fastcall __noreturn sub_475E50(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  _QWORD *exception; // rax

  if ( a1 )
    off_4C7FB0(24, 2, a1, a2, (unsigned int)&off_4C7FB0, a6);
  exception = __cxa_allocate_exception(8u);
  *exception = &off_4C4188;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'loader_failure_t, (void (*)(void *))sub_475AD0);
}
// 4C4188: using guessed type __int64 (__fastcall *off_4C4188)();
// 4C4CB0: using guessed type _UNKNOWN *`typeinfo for'loader_failure_t;
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
