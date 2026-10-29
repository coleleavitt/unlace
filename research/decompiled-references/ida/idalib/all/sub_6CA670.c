unsigned __int64 __fastcall sub_6CA670(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax

  if ( a2 == -1 )
    return -1;
  v2 = *(_QWORD **)(*a1 + 1672LL);
  v3 = sub_7BE710(v2 + 306, *a1, a2, 65);
  return sub_3BDE50(v2, v3 - 1);
}
