__int64 __fastcall sub_E93500(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  const char *v3; // rax
  __int64 v4; // rbx
  const char *v5; // rax
  __int64 v6; // rax

  sub_971800(*a1, "order(");
  if ( *(_DWORD *)(a2 + 24) != 1 )
  {
    v2 = *a1;
    v3 = (const char *)sub_FDA030(76);
    sub_971800(v2, v3);
    sub_971800(*a1, ": ");
  }
  v4 = *a1;
  v5 = (const char *)sub_FDA030(76);
  v6 = sub_971800(v4, v5);
  return sub_971800(v6, ")");
}

