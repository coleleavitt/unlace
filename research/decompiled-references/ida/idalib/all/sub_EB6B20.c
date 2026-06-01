__int64 __fastcall sub_EB6B20(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  const char *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // r10d

  sub_995540(*a1, "device(");
  if ( *(_DWORD *)(a2 + 32) != 2 )
  {
    v2 = *a1;
    v3 = (const char *)sub_FFDD70(*(unsigned int *)(a2 + 8));
    v4 = sub_995540(v2, v3);
    sub_995540(v4, ": ");
  }
  v5 = sub_EB4C50();
  sub_F07C00(v6, *a1, 0, a1[1], 0, 0, (__int64)"\n", v5);
  return sub_995540(*a1, ")");
}
