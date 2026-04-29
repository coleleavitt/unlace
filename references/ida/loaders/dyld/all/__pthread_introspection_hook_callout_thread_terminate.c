__int64 __fastcall _pthread_introspection_hook_callout_thread_terminate(__int64 a1)
{
  __int64 v1; // x2
  __int64 v2; // x3
  unsigned __int64 StatusReg; // x19
  __int16 v4; // w20
  __int64 result; // x0

  if ( (_UNKNOWN *)a1 == &_main_thread )
  {
    v2 = qword_A9EB0 - qword_A9EB8 + qword_A9ED0;
    v1 = qword_A9EB8 - qword_A9ED0;
  }
  else
  {
    v1 = *(_QWORD *)(a1 + 192);
    v2 = *(_QWORD *)(a1 + 200) - (~(_DWORD)vm_page_mask & (vm_page_mask + 4320));
  }
  StatusReg = _ReadStatusReg(TPIDRRO_EL0);
  v4 = *(_WORD *)(StatusReg - 174);
  *(_WORD *)(StatusReg - 174) = 3;
  result = _pthread_introspection_hook(3, a1, v1, v2);
  *(_WORD *)(StatusReg - 174) = v4;
  return result;
}
