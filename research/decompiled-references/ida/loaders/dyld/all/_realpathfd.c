__int64 __fastcall realpathfd(int a1, __int64 a2, const char *a3)
{
  __int64 v5; // x0
  __int64 unsafe; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  int *v11; // x0

  v5 = fcntl(a1, 50, a2);
  if ( (_DWORD)v5 == -1 )
  {
    unsafe = boot_get_unsafe(v5);
    v8 = *(_QWORD *)(*(_QWORD *)unsafe + 8LL);
    v9 = *(_QWORD *)(*(_QWORD *)unsafe + 16LL);
    v10 = (unsigned int)*__error();
    v11 = __error();
    ignition_halt(v8, v10, v9, "failed to realpath %s: %d", a3, *v11);
  }
  return a2;
}
