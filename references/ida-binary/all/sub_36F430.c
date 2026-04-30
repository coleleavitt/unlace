double __fastcall sub_36F430(__int64 a1)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi

  *(_QWORD *)(a1 - 184) = pb_chooser_t___vtable;
  *(_QWORD *)a1 = pb_chooser_t___vtable_at__184;
  unhook_event_listener(3, a1);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    result = qfree(v3, (const char *)a1);
  }
  v5 = a1;
  v6 = a1 - 8;
  v7 = a1 - 104;
  *(_QWORD *)(v7 + 104) = &off_86FB08;
  remove_event_listener(v5);
  *(_QWORD *)(v7 - 80) = &stru_86F6A0;
  while ( v6 != v7 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 - 24);
      v6 -= 24;
      if ( !v8 )
        break;
      *(_QWORD *)(v6 + 8) = 0;
      result = qfree(v8, (const char *)a1);
      if ( v6 == v7 )
        return result;
    }
  }
  return result;
}
