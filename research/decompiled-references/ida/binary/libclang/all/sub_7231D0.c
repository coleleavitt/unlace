void __fastcall sub_7231D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rbp
  const char *v7; // rsi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rax
  _BYTE *v11; // rax
  __int64 v12; // rdi
  int v13; // edx
  const char *v14; // rsi

  if ( *(_DWORD *)(a1 + 40) == 2 )
  {
    if ( *(_DWORD *)(a1 + 36) <= 1u )
      goto LABEL_3;
LABEL_9:
    v11 = *(_BYTE **)(a2 + 32);
    if ( (unsigned __int64)v11 >= *(_QWORD *)(a2 + 24) )
    {
      v12 = sub_26239D0(a2, 32);
    }
    else
    {
      v12 = a2;
      *(_QWORD *)(a2 + 32) = v11 + 1;
      *v11 = 32;
    }
    v13 = *(_DWORD *)(a1 + 36);
    v14 = "enter";
    if ( v13 != 1 )
    {
      v14 = "link";
      if ( v13 != 2 )
        v14 = "to";
    }
    sub_5FF0F0(v12, v14);
    v6 = *(_QWORD *)(a1 + 48);
    if ( v6 )
      goto LABEL_4;
    goto LABEL_15;
  }
  v7 = "nohost";
  v8 = sub_5FF0F0(a2, " device_type(");
  v9 = *(_DWORD *)(a1 + 40);
  if ( v9 != 1 )
  {
    v7 = "any";
    if ( v9 != 2 )
      v7 = "host";
  }
  v10 = sub_5FF0F0(v8, v7);
  sub_5FF0F0(v10, ")");
  if ( *(_DWORD *)(a1 + 36) > 1u )
    goto LABEL_9;
LABEL_3:
  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 )
  {
LABEL_4:
    sub_5FF0F0(a2, " indirect(");
    sub_AE6C50(v6, a2, 0, a3, 0, 0, "\n", 1u);
    sub_5FF0F0(a2, ")");
    return;
  }
LABEL_15:
  if ( *(_BYTE *)(a1 + 56) )
    sub_5FF0F0(a2, " indirect");
}

