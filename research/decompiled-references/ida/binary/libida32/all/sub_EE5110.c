__int64 __fastcall sub_EE5110(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char *v8; // rsi
  const char *v9; // rsi
  __int64 v10; // rdi

  v8 = *(char **)(a2 + 16);
  if ( v8 )
    sub_EE16F0(a1, v8, a3, a4, a5, a6, a7);
  else
    sub_EE0C80(a1);
  v9 = "->isa";
  v10 = *a1;
  if ( !*(_BYTE *)(a2 + 32) )
    v9 = ".isa";
  return sub_971800(v10, v9);
}

