__int64 __fastcall sub_56E460(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  __int64 v4; // rdx
  _QWORD *v5; // r9

  switch_dbctx(*(int *)(a1 + 8));
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 1664LL);
  v3 = sub_56D600(v2, a2);
  if ( !v3 )
    sub_56CD60(v2, a2, v4);
  return sub_56DFC0(v5, v3, 0xFFFFFFFF);
}

