void *__fastcall vault_with_events_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  void *result; // rax

  v3 = a1 + 2;
  *(v3 - 2) = &vault_with_events_t___vtable;
  *v3 = &event_source_t___vtable;
  unbind_event_source_all(v3);
  v4 = a1[3];
  if ( v4 )
  {
    a1[4] = 0;
    qfree(v4, a2);
  }
  v5 = a1[1];
  result = &unk_874DF8;
  *a1 = &unk_874DF8;
  if ( v5 )
    return (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return result;
}
