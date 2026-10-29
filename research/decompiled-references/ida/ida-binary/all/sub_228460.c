void __fastcall dthr_executor_t__::vfunc_2(char *a1)
{
  char *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 32;
  *((_QWORD *)v2 - 4) = dthr_executor_t___vtable;
  free_debug_event(v2);
  v3 = *((_QWORD *)a1 + 2);
  *(_QWORD *)a1 = &off_86FF78;
  qsem_free(v3);
  operator delete(a1, 0x68u);
}
