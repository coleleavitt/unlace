__int64 __fastcall make_name_non_weak(void *a1)
{
  _QWORD *v1; // rbp
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  clr_abits(a1, 8);
  if ( (unsigned __int8)sub_4CDF30(v1, (unsigned __int64)a1) )
    return sub_4CB2B0(v1, (__int64)a1);
  sub_4E0050(*v1, a1);
  sub_52CCE0(2, 0, (_DWORD)a1, v3, v4, v5);
  return mark_builtin_widgets(4, 0, 1);
}
