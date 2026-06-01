void *sub_55CEF0(__int64 a1, const char *a2, ...)
{
  void *result; // rax
  gcc_va_list arg; // [rsp+8h] [rbp-E0h] BYREF

  va_start(arg, a2);
  result = arg[0].reg_save_area;
  if ( *(_QWORD *)(a1 + 152) )
  {
    vsnprintf((char *)(a1 + 192), 0x400u, a2, arg);
    return (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 152))(*(_QWORD *)(a1 + 144), 1, a1 + 192);
  }
  return result;
}
