__int64 __fastcall sub_4CE200(_QWORD *a1, void *a2)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  clr_abits(a2, 4);
  if ( (unsigned __int8)sub_4CDF30(a1, (unsigned __int64)a2) )
    return sub_4CB2B0(a1, (__int64)a2);
  sub_4E0050(*a1, a2);
  sub_52CCE0(2, 0, (_DWORD)a2, v3, v4, v5);
  return mark_builtin_widgets(4, 0, 1);
}
