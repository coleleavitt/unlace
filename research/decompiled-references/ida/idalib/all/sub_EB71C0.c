__int64 __fastcall sub_EB71C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  const char *v3; // rax
  __int64 v4; // r12
  const char *v5; // rax

  sub_995540(*a1, "defaultmap(");
  v2 = *a1;
  v3 = (const char *)sub_FFDD70(21);
  sub_995540(v2, v3);
  if ( *(_DWORD *)(a2 + 24) != 4 )
  {
    sub_995540(*a1, ": ");
    v4 = *a1;
    v5 = (const char *)sub_FFDD70(21);
    sub_995540(v4, v5);
  }
  return sub_995540(*a1, ")");
}
