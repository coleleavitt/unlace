void __fastcall sub_F0AC20(__int64 *a1, __int64 a2, double a3)
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
    sub_995540(v4, "throw ");
    v9 = *(char **)(a2 + 16);
    if ( v9 )
      sub_F05430(a1, v9, v5, v6, v7, v8, a3);
    else
      sub_F049C0(a1);
  }
  else
  {
    sub_995540(v4, "throw");
  }
}
