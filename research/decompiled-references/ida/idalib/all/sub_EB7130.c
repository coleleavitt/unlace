__int64 __fastcall sub_EB7130(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  const char *v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax

  v2 = sub_995540(*a1, "dist_schedule(");
  v3 = (const char *)sub_FFDD70(28);
  sub_995540(v2, v3);
  v4 = *(_QWORD *)(a2 + 48);
  if ( v4 )
  {
    sub_995540(*a1, ", ");
    v5 = sub_EB4C50();
    sub_F07C00(v4, *a1, 0, a1[1], 0, 0, (__int64)"\n", v5);
  }
  return sub_995540(*a1, ")");
}
