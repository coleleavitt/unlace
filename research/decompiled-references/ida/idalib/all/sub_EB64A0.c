__int64 __fastcall sub_EB64A0(__int64 *a1)
{
  __int64 v1; // rbx
  const char *v2; // rax
  __int64 v3; // rax

  v1 = sub_995540(*a1, "severity(");
  v2 = (const char *)sub_FFDD70(93);
  v3 = sub_995540(v1, v2);
  return sub_995540(v3, ")");
}
