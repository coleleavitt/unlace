__int64 __fastcall sub_651D90(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 result; // rax

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 1704);
  if ( !a2 )
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1672) + 8LL);
  result = sub_64CAD0(*(_QWORD *)(a1 + 1704), v4);
  if ( (_BYTE)result )
  {
    sub_547680(a1, v4);
    sub_651E30(v5, v4, a3);
    sub_6511B0(a1, 7u, a3 ^ 1, 0, nullptr);
    return mark_builtin_widgets(512, 0, 1);
  }
  return result;
}
