__int64 __fastcall sub_587B60(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 *v5; // r9

  switch_dbctx(*(int *)(a1 + 8));
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 1856LL);
  v3 = (unsigned int)sub_587160(v2, a2);
  if ( !v3 )
    sub_586870(v2, a2, v4);
  return sub_587860(v5, v3, (void *)0xFFFFFFFFFFFFFFFFLL);
}
