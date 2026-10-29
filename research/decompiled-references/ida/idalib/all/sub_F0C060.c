__int64 __fastcall sub_F0C060(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rsi

  sub_995540(*a1, "{");
  v7 = *(char **)(a2 + 24);
  if ( v7 )
    sub_F05430(a1, v7, v3, v4, v5, v6, a3);
  else
    sub_F049C0(a1);
  return sub_995540(*a1, "}");
}
