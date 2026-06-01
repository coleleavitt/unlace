void __fastcall sub_B05F50(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r12
  size_t v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // edx
  const char *v11; // rsi
  __int64 v12; // rax
  _BYTE *v13; // rax
  int v14; // edx
  const char *v15; // rsi

  if ( *(_DWORD *)(a1 + 44) == 2 )
  {
    if ( *(_DWORD *)(a1 + 40) <= 1u )
      goto LABEL_3;
  }
  else
  {
    v8 = a2;
    v9 = sub_995540(a2, " device_type(");
    v10 = *(_DWORD *)(a1 + 44);
    if ( v10 == 1 )
    {
      v11 = "nohost";
    }
    else if ( v10 )
    {
      if ( v10 != 2 )
        goto LABEL_25;
      v11 = "any";
    }
    else
    {
      v11 = "host";
    }
    v12 = sub_995540(v9, v11);
    sub_995540(v12, ")");
    if ( *(_DWORD *)(a1 + 40) <= 1u )
    {
LABEL_3:
      v6 = *(_QWORD *)(a1 + 48);
      if ( v6 )
      {
LABEL_4:
        sub_995540(a2, " indirect(");
        v7 = j__strlen("\n");
        sub_F07C00(v6, a2, 0, a3, 0, 0, (__int64)"\n", v7);
        sub_995540(a2, ")");
        return;
      }
      goto LABEL_16;
    }
  }
  v13 = *(_BYTE **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v13 )
  {
    v8 = sub_227BA10(a2, 32);
  }
  else
  {
    v8 = a2;
    *(_QWORD *)(a2 + 32) = v13 + 1;
    *v13 = 32;
  }
  v14 = *(_DWORD *)(a1 + 40);
  if ( v14 == 1 )
  {
    v15 = "enter";
  }
  else
  {
    if ( v14 )
    {
      if ( v14 == 2 )
      {
        v15 = "link";
        goto LABEL_15;
      }
LABEL_25:
      sub_B06110(v8);
      return;
    }
    v15 = "to";
  }
LABEL_15:
  sub_995540(v8, v15);
  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 )
    goto LABEL_4;
LABEL_16:
  if ( *(_BYTE *)(a1 + 56) )
    sub_995540(a2, " indirect");
}
