void __fastcall sub_EE7890(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char *v8; // rsi
  __int64 v9; // r12
  char *v10; // rax
  size_t v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rsi

  v8 = *(char **)(a2 + 16);
  if ( v8 )
    sub_EE16F0(a1, v8, a3, a4, a5, a6, a7);
  else
    sub_EE0C80(a1);
  v9 = sub_971800(*a1, " ");
  v10 = sub_BD69E0((*(_WORD *)(a2 + 2) >> 3) & 0x3F);
  v12 = sub_9717A0(v9, v10, v11);
  sub_971800(v12, " ");
  v17 = *(char **)(a2 + 24);
  if ( v17 )
    sub_EE16F0(a1, v17, v13, v14, v15, v16, a7);
  else
    sub_EE0C80(a1);
}

