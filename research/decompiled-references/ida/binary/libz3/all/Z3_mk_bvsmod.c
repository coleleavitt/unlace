__int64 __fastcall Z3_mk_bvsmod(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r13
  __int64 v5; // r15
  int v7[2]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v8; // [rsp+8h] [rbp-38h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_296830();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      goto LABEL_12;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      return 0;
    }
  }
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 <= 1
    || !a3
    || (unsigned int)*(unsigned __int16 *)(a3 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
    if ( !v4 )
      return 0;
LABEL_12:
    v5 = 0;
LABEL_13:
    byte_1C7EBA0 = 1;
    return v5;
  }
  *(_QWORD *)v7 = a2;
  v8 = a3;
  v5 = sub_15DCAD0(*(_QWORD *)(a1 + 232), (int)v7, 0);
  sub_251FD0(a1, v5);
  sub_24FE40(a1, v5);
  if ( v4 )
  {
    sub_2BB620(v5);
    goto LABEL_13;
  }
  return v5;
}

