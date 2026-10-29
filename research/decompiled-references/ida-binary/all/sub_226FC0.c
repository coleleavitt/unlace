__int64 __fastcall dthr_executor_t__::vfunc_1(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 4;
  *(v2 - 4) = dthr_executor_t___vtable;
  free_debug_event(v2);
  v3 = a1[2];
  *a1 = &off_86FF78;
  return qsem_free(v3);
}
