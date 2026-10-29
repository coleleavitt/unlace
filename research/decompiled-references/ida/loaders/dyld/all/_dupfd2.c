__int64 __fastcall dupfd2(int a1, int a2, const char *a3)
{
  __int64 result; // x0
  __int64 unsafe; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  int *v11; // x0

  result = dup2(a1, a2);
  if ( a1 < 0 )
  {
    unsafe = boot_get_unsafe(result);
    v8 = *(_QWORD *)(*(_QWORD *)unsafe + 8LL);
    v9 = *(_QWORD *)(*(_QWORD *)unsafe + 16LL);
    v10 = (unsigned int)*__error();
    v11 = __error();
    ignition_halt(v8, v10, v9, "failed to dup %s: src fd = %d, dst fd = %d: %d", a3, a1, a2, *v11);
  }
  return result;
}
