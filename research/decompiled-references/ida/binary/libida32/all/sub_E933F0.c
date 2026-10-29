__int64 __fastcall sub_E933F0(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  const char *v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax

  v2 = sub_971800(*a1, "dist_schedule(");
  v3 = (const char *)sub_FDA030(28);
  sub_971800(v2, v3);
  v4 = *(_QWORD *)(a2 + 48);
  if ( v4 )
  {
    sub_971800(*a1, ", ");
    v5 = sub_E90F10();
    sub_EE3EC0(v4, *a1, 0, a1[1], 0, 0, (__int64)"\n", v5);
  }
  return sub_971800(*a1, ")");
}

