__int64 (__fastcall **__fastcall tagged_line_sections_parser_t__::vfunc_0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi

  result = &tagged_line_sections_parser_t___vtable;
  *a1 = &tagged_line_sections_parser_t___vtable;
  v7 = a1[16];
  if ( v7 )
  {
    a1[17] = 0;
    result = (__int64 (__fastcall **)())qfree(v7, a2, a3, a4, a5);
  }
  v8 = a1[13];
  if ( v8 )
  {
    a1[14] = 0;
    result = (__int64 (__fastcall **)())qfree(v8, a2, a3, a4, a5);
  }
  v9 = a1[10];
  if ( v9 )
  {
    a1[11] = 0;
    result = (__int64 (__fastcall **)())qfree(v9, a2, a3, a4, a5);
  }
  v10 = a1[7];
  if ( v10 )
  {
    a1[8] = 0;
    result = (__int64 (__fastcall **)())qfree(v10, a2, a3, a4, a5);
  }
  v11 = a1[4];
  if ( v11 )
  {
    a1[5] = 0;
    result = (__int64 (__fastcall **)())qfree(v11, a2, a3, a4, a5);
  }
  v12 = a1[1];
  if ( v12 )
  {
    a1[2] = 0;
    return (__int64 (__fastcall **)())qfree(v12, a2, a3, a4, a5);
  }
  return result;
}
