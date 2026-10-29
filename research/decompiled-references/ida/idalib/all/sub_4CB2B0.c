__int64 __fastcall sub_4CB2B0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d

  v2 = ea2node(a2);
  result = netnode_get_name(v2, 0);
  if ( result > 0 )
  {
    sub_4DEFD0(*a1, a2);
    sub_52CCE0(2, 1, a2, v4, v5, v6);
    return mark_builtin_widgets(4, 0, 1);
  }
  return result;
}
