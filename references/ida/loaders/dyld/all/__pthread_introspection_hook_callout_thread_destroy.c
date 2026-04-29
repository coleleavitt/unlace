__int64 __fastcall _pthread_introspection_hook_callout_thread_destroy(__int64 a1)
{
  vm_size_t v1; // x3
  unsigned __int64 StatusReg; // x19
  __int16 v3; // w20
  __int64 result; // x0

  v1 = ~(_DWORD)vm_page_mask & (vm_page_mask + 4320);
  StatusReg = _ReadStatusReg(TPIDRRO_EL0);
  v3 = *(_WORD *)(StatusReg - 174);
  *(_WORD *)(StatusReg - 174) = 4;
  result = _pthread_introspection_hook(4, a1, a1, v1);
  *(_WORD *)(StatusReg - 174) = v3;
  return result;
}
