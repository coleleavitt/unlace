__int64 __fastcall sub_F09890(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rsi

  sub_995540(*a1, "{");
  sub_995540(*a1, "/*base*/");
  v8 = *(char **)(a2 + 16);
  if ( v8 )
    sub_F05430(a1, v8, v4, v5, v6, v7, a3);
  else
    sub_F049C0(a1);
  sub_995540(*a1, ", ");
  sub_995540(*a1, "/*updater*/");
  v13 = *(char **)(a2 + 24);
  if ( v13 )
    sub_F05430(a1, v13, v9, v10, v11, v12, a3);
  else
    sub_F049C0(a1);
  return sub_995540(*a1, "}");
}
