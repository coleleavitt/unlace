__int64 __fastcall try_get_decompiler_call_info(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 (__fastcall *hexdsp)(__int64, _QWORD *); // rax

  *a1 = ctree_visitor_t___vtable;
  v3 = a1[5];
  if ( v3 )
  {
    a1[6] = 0;
    qfree(v3, a2);
  }
  v4 = a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    qfree(v4, a2);
  }
  hexdsp = (__int64 (__fastcall *)(__int64, _QWORD *))get_hexdsp();
  return hexdsp(130, a1);
}
