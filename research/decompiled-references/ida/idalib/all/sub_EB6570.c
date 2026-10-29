__int64 __fastcall sub_EB6570(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  const char *v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v7; // r12
  const char *v8; // rax
  __int64 v9; // r12
  const char *v10; // rax

  sub_995540(*a1, "schedule(");
  if ( *(_DWORD *)(a2 + 36) != 5 )
  {
    v7 = *a1;
    v8 = (const char *)sub_FFDD70(90);
    sub_995540(v7, v8);
    if ( *(_DWORD *)(a2 + 40) != 5 )
    {
      sub_995540(*a1, ", ");
      v9 = *a1;
      v10 = (const char *)sub_FFDD70(90);
      sub_995540(v9, v10);
    }
    sub_995540(*a1, ": ");
  }
  v2 = *a1;
  v3 = (const char *)sub_FFDD70(90);
  sub_995540(v2, v3);
  v4 = *(_QWORD *)(a2 + 64);
  if ( v4 )
  {
    sub_995540(*a1, ", ");
    v5 = sub_EB4C50();
    sub_F07C00(v4, *a1, 0, a1[1], 0, 0, (__int64)"\n", v5);
  }
  return sub_995540(*a1, ")");
}
