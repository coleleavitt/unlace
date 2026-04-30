__int64 __fastcall sub_56A740(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  if ( a2 >= *(_DWORD *)(a1 + 8) )
    __assert_fail("(uint32_t)(version) < (&self->heads)->size", "lib/src/./stack.c", 0x2F5u, "ts_stack_resume");
  v2 = *(_QWORD *)a1 + 48LL * a2;
  if ( *(_DWORD *)(v2 + 40) != 1 )
    __assert_fail("head->status == StackStatusPaused", "lib/src/./stack.c", 0x2F6u, "ts_stack_resume");
  v3 = *(_QWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  return v3;
}
