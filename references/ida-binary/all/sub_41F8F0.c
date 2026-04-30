void *__fastcall sub_41F8F0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  void *result; // rax

  *(a1 - 2) = &vault_with_events_t___vtable;
  *a1 = &event_source_t___vtable;
  unbind_event_source_all(a1);
  v3 = a1[1];
  if ( v3 )
  {
    a1[2] = 0;
    qfree(v3, a2);
  }
  v4 = *(a1 - 1);
  result = &unk_874DF8;
  *(a1 - 2) = &unk_874DF8;
  if ( v4 )
    return (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return result;
}
