__int64 __fastcall sub_4B4590(_QWORD *a1, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d

  v2 = ea2node(a2);
  result = netnode_get_name(v2, 0);
  if ( result > 0 )
  {
    sub_4C7E80(*a1, a2);
    sub_514A50(2, 1, a2, v4, v5, v6);
    return mark_builtin_widgets(4, 0, 1);
  }
  return result;
}

