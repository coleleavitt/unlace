unsigned __int64 __fastcall sub_CA2040(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  char **exception; // rbx
  __int64 v4[7]; // [rsp+0h] [rbp-38h] BYREF

  result = Z3_get_estimated_alloc_size_0(a1, a2);
  if ( *(_QWORD *)(a1 + 496) < result )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_C9E960(v4, off_1C7E178);
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, v4);
    sub_233E40((__int64)v4);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  return result;
}

