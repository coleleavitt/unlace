unsigned __int64 __fastcall sub_42B820(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // r13
  void *v7; // rax
  const void *v8; // rsi

  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  v4 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)a1 = hvui_merge_handler_t___vtable;
  if ( v4 )
  {
    v7 = (void *)qalloc_or_throw(v4);
    *(_QWORD *)(a1 + 24) = v4;
    v8 = *(const void **)a3;
    *(_QWORD *)(a1 + 8) = v7;
    memcpy(v7, v8, v4);
    *(_QWORD *)(a1 + 16) = v4;
  }
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = &local_site_t___vtable;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  return sub_417360(a2, (_QWORD *)(a1 + 32));
}
