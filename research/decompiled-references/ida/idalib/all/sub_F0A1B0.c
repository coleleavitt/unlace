__int64 __fastcall sub_F0A1B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v8 = *(char **)(a2 + 32);
  if ( v8 )
    sub_F05430(a1, v8, a3, a4, a5, a6, a7);
  else
    sub_F049C0(a1);
  sub_995540(*a1, "(");
  sub_F0A0D0(a1, a2, v9, v10, v11, v12, a7);
  return sub_995540(*a1, ")");
}
