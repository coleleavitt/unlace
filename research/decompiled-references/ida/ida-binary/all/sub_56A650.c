__int64 __fastcall sub_56A650(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  if ( a2 >= *(_DWORD *)(a1 + 8) )
    __assert_fail("(uint32_t)(version) < (&self->heads)->size", "lib/src/./stack.c", 0x2E2u, "ts_stack_pause");
  result = *(_QWORD *)a1 + 48LL * a2;
  *(_QWORD *)(result + 32) = a3;
  v4 = *(_QWORD *)result;
  *(_DWORD *)(result + 40) = 1;
  *(_DWORD *)(result + 16) = *(_DWORD *)(v4 + 220);
  return result;
}
