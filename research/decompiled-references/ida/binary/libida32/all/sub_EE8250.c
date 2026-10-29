__int64 __fastcall sub_EE8250(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rsi
  __int64 v15; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char *v26; // rsi

  v9 = *(char **)(a2 + 24);
  if ( v9 )
    sub_EE16F0(a1, v9, a3, a4, a5, a6, a7);
  else
    sub_EE0C80(a1);
  sub_971800(*a1, "[");
  v14 = *(char **)(a2 + 32);
  if ( v14 )
    sub_EE16F0(a1, v14, v10, v11, v12, v13, a7);
  v15 = *a1;
  if ( *(_DWORD *)(a2 + 56) )
  {
    sub_971800(v15, ":");
    v21 = *(char **)(a2 + 40);
    if ( v21 )
      sub_EE16F0(a1, v21, v17, v18, v19, v20, a7);
    v15 = *a1;
  }
  if ( !*(_DWORD *)(a2 + 16) && *(_DWORD *)(a2 + 60) )
  {
    sub_971800(v15, ":");
    v26 = *(char **)(a2 + 48);
    if ( v26 )
      sub_EE16F0(a1, v26, v22, v23, v24, v25, a7);
    v15 = *a1;
  }
  return sub_971800(v15, "]");
}

