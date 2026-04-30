unsigned __int64 __fastcall deferred_wait_dialog_t__::vfunc_0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  const char *v3; // rsi

  result = get_nsec_stamp(a1, a2);
  if ( *(_QWORD *)(a1 + 8) < result )
  {
    v3 = &s1;
    if ( *(_QWORD *)(a1 + 32) )
      v3 = *(const char **)(a1 + 24);
    sub_1C76F0((int)"%s", v3);
    result = sub_541C50(a1);
    *(_BYTE *)(a1 + 16) = 1;
  }
  return result;
}
