_DWORD *__fastcall sub_DC0740(__int64 a1)
{
  _DWORD *result; // rax
  _QWORD *exception; // rbx

  if ( !a1 || (result = *(_DWORD **)(a1 + 8)) == nullptr || *result != 4 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid attribute, not in the scope of a quantifier");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  return result;
}

