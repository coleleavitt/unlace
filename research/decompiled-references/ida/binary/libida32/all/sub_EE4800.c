__int64 __fastcall sub_EE4800(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rsi
  __int64 v9; // rsi
  __int64 v11; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v12[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v13; // [rsp+30h] [rbp-28h]

  sub_971800(*a1, "__builtin_va_arg(");
  v8 = *(char **)(a2 + 16);
  if ( v8 )
    sub_EE16F0(a1, v8, v4, v5, v6, v7, a3);
  else
    sub_EE0C80(a1);
  sub_971800(*a1, ", ");
  v9 = *a1;
  v11 = *(_QWORD *)(a2 + 8);
  v13 = 257;
  sub_F50AF0(&v11, v9, a1 + 3, v12, 0);
  return sub_971800(*a1, ")");
}

