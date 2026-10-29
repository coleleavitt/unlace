__int64 __fastcall sub_EB67D0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  const char *v4; // rax

  result = sub_995540(*a1, "fail");
  if ( a2 )
  {
    sub_995540(*a1, "(");
    v3 = *a1;
    v4 = (const char *)sub_FFDD70(*(unsigned int *)(a2 + 8));
    sub_995540(v3, v4);
    return sub_995540(*a1, ")");
  }
  return result;
}
