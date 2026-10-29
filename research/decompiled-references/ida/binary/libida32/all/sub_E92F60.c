__int64 __fastcall sub_E92F60(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  const char *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // r10d

  sub_971800(*a1, "num_tasks(");
  if ( *(_DWORD *)(a2 + 32) != 1 )
  {
    v2 = *a1;
    v3 = (const char *)sub_FDA030(*(unsigned int *)(a2 + 8));
    v4 = sub_971800(v2, v3);
    sub_971800(v4, ": ");
  }
  v5 = sub_E90F10();
  sub_EE3EC0(v6, *a1, 0, a1[1], 0, 0, (__int64)"\n", v5);
  return sub_971800(*a1, ")");
}

