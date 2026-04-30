void __fastcall sub_41F9B0(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = a1 - 2;
  *(a1 - 2) = &vault_with_events_t___vtable;
  *a1 = &event_source_t___vtable;
  unbind_event_source_all(a1);
  v4 = a1[1];
  if ( v4 )
  {
    a1[2] = 0;
    qfree(v4, a2);
  }
  v5 = *(a1 - 1);
  *(a1 - 2) = &unk_874DF8;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  operator delete(v2, 0x30u);
}
