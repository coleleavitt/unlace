void __fastcall sub_EE6EE0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rsi

  v4 = *a1;
  if ( *(_QWORD *)(a2 + 16) )
  {
    sub_971800(v4, "throw ");
    v9 = *(char **)(a2 + 16);
    if ( v9 )
      sub_EE16F0(a1, v9, v5, v6, v7, v8, a3);
    else
      sub_EE0C80(a1);
  }
  else
  {
    sub_971800(v4, "throw");
  }
}

