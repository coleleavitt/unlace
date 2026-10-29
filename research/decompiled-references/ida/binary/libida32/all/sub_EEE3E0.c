void __fastcall sub_EEE3E0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  v4 = sub_C709A0(a2);
  if ( v4 && (*(_BYTE *)(v4 + 28) & 0x7F) == 0x25 )
  {
    v14 = (char *)sub_C70940(a2);
    if ( v14 )
      sub_EE16F0(a1, v14, v15, v16, v17, v18, a3);
    else
      sub_EE0C80(a1);
  }
  else
  {
    v9 = *(char **)(a2 + 32);
    if ( v9 )
      sub_EE16F0(a1, v9, v5, v6, v7, v8, a3);
    else
      sub_EE0C80(a1);
    sub_971800(*a1, "(");
    sub_EE6390(a1, a2, v10, v11, v12, v13, a3);
    sub_971800(*a1, ")");
  }
}

