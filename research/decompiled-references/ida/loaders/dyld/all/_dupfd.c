__int64 __fastcall dupfd(int a1, const char *a2)
{
  __int64 result; // x0
  __int64 unsafe; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  int *v9; // x0

  result = dup(a1);
  if ( a1 < 0 )
  {
    unsafe = boot_get_unsafe(result);
    v6 = *(_QWORD *)(*(_QWORD *)unsafe + 8LL);
    v7 = *(_QWORD *)(*(_QWORD *)unsafe + 16LL);
    v8 = (unsigned int)*__error();
    v9 = __error();
    ignition_halt(v6, v8, v7, "failed to dup %s: fd = %d: %d", a2, a1, *v9);
  }
  return result;
}
