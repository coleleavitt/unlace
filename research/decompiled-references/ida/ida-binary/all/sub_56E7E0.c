void *__fastcall sub_56E7E0(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 v3; // r14
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r15
  void *result; // rax

  v2 = *((_DWORD *)a1 + 2);
  v3 = a1[9];
  if ( a2 >= v2 )
    __assert_fail("(uint32_t)(version) < (&self->heads)->size", "lib/src/./stack.c", 0x2A0u, "ts_stack_remove_version");
  v5 = *a1;
  v6 = 48LL * a2;
  v7 = *a1 + v6;
  if ( *(_QWORD *)v7 )
  {
    if ( *(_QWORD *)(v7 + 24) )
      sub_56C9A0(a1[9], *(volatile signed __int32 **)(v7 + 24));
    if ( *(_QWORD *)(v7 + 32) )
      sub_56C9A0(v3, *(volatile signed __int32 **)(v7 + 32));
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 )
    {
      if ( *(_QWORD *)v8 )
      {
        off_8C52A0(*(void **)v8);
        *(_QWORD *)v8 = 0;
        *(_QWORD *)(v8 + 8) = 0;
        v8 = *(_QWORD *)(v7 + 8);
      }
      off_8C52A0((void *)v8);
    }
    sub_56CDC0(*(__m128i **)v7, (__int64)(a1 + 6), v3);
    v2 = *((_DWORD *)a1 + 2);
    if ( a2 >= v2 )
      sub_55D280();
    v5 = *a1;
    v7 = *a1 + v6;
  }
  result = memmove((void *)v7, (const void *)(48LL * (a2 + 1) + v5), 48LL * (v2 - a2 - 1));
  --*((_DWORD *)a1 + 2);
  return result;
}
