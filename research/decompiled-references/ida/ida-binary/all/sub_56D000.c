void __fastcall sub_56D000(__int64 a1, unsigned int a2, volatile signed __int32 *a3)
{
  __int64 v4; // rbx

  if ( a2 >= *(_DWORD *)(a1 + 8) )
    __assert_fail(
      "(uint32_t)(version) < (&self->heads)->size",
      "lib/src/./stack.c",
      0x1E7u,
      "ts_stack_set_last_external_token");
  v4 = *(_QWORD *)a1 + 48LL * a2;
  if ( a3 )
    sub_56C560(a3);
  if ( *(_QWORD *)(v4 + 24) )
    sub_56C9A0(*(_QWORD *)(a1 + 72), *(volatile signed __int32 **)(v4 + 24));
  *(_QWORD *)(v4 + 24) = a3;
}
