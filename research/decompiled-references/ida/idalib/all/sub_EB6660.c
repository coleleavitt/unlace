__int64 __fastcall sub_EB6660(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rax

  result = sub_995540(*a1, "ordered");
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    sub_995540(*a1, "(");
    v4 = sub_EB4C50();
    sub_F07C00(v3, *a1, 0, a1[1], 0, 0, (__int64)"\n", v4);
    return sub_995540(*a1, ")");
  }
  return result;
}
