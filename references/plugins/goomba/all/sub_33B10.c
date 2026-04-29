__int64 __fastcall sub_33B10(__int64 a1)
{
  _QWORD *exception; // rbp
  const char *error_msg; // rax
  __int64 result; // rax
  unsigned int v4; // [rsp+Ch] [rbp-1Ch]

  result = Z3_get_error_code(*(_QWORD *)(a1 + 8));
  if ( (_DWORD)result )
  {
    if ( *(_BYTE *)a1 )
    {
      v4 = result;
      exception = __cxa_allocate_exception(0x10u);
      error_msg = (const char *)Z3_get_error_msg(*(_QWORD *)(a1 + 8), v4);
      sub_105D0(exception, error_msg);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'z3::exception, (void (*)(void *))sub_FF40);
    }
  }
  return result;
}
