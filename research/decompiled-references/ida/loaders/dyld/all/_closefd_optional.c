int *__fastcall closefd_optional(int *result, const char *a2)
{
  int v2; // w20
  _DWORD *v4; // x21
  __int64 unsafe; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  int *v9; // x0

  v2 = *result;
  if ( (*result & 0x80000000) == 0 )
  {
    v4 = result;
    result = (int *)close(*result);
    if ( (_DWORD)result )
    {
      unsafe = boot_get_unsafe(result);
      v6 = *(_QWORD *)(*(_QWORD *)unsafe + 8LL);
      v7 = *(_QWORD *)(*(_QWORD *)unsafe + 16LL);
      v8 = (unsigned int)*__error();
      v9 = __error();
      ignition_halt(v6, v8, v7, "failed to close %s [optional]: fd = %d: %d", a2, v2, *v9);
    }
    *v4 = -1;
  }
  return result;
}
