__int64 (__fastcall **__fastcall file_outstream_t__::vfunc_0(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  bool v2; // zf
  __int64 v3; // rdi

  result = &file_outstream_t___vtable;
  v2 = *(_BYTE *)(a1 + 32) == 0;
  *(_QWORD *)a1 = &file_outstream_t___vtable;
  if ( !v2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      return (__int64 (__fastcall **)())qfclose(v3);
  }
  return result;
}
