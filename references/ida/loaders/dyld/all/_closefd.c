__int64 __fastcall closefd(int *a1, const char *a2)
{
  int v4; // w20
  __int64 result; // x0
  __int64 unsafe; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  int *v10; // x0

  v4 = *a1;
  result = close(*a1);
  if ( (_DWORD)result )
  {
    unsafe = boot_get_unsafe(result);
    v7 = *(_QWORD *)(*(_QWORD *)unsafe + 8LL);
    v8 = *(_QWORD *)(*(_QWORD *)unsafe + 16LL);
    v9 = (unsigned int)*__error();
    v10 = __error();
    ignition_halt(v7, v9, v8, "failed to close %s: fd = %d: %d", a2, v4, *v10);
  }
  *a1 = -1;
  return result;
}
