__int64 __fastcall sub_EB7240(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  const char *v3; // rax
  __int64 v4; // rbx
  const char *v5; // rax
  __int64 v6; // rax

  sub_995540(*a1, "order(");
  if ( *(_DWORD *)(a2 + 24) != 1 )
  {
    v2 = *a1;
    v3 = (const char *)sub_FFDD70(76);
    sub_995540(v2, v3);
    sub_995540(*a1, ": ");
  }
  v4 = *a1;
  v5 = (const char *)sub_FFDD70(76);
  v6 = sub_995540(v4, v5);
  return sub_995540(v6, ")");
}
