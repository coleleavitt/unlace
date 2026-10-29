__int64 __fastcall Z3_mk_string_to_code(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // r14
  int v5[2]; // [rsp+8h] [rbp-28h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_298310();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      goto LABEL_10;
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
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
    if ( !v2 )
      return 0;
LABEL_10:
    v3 = 0;
    goto LABEL_12;
  }
  *(_QWORD *)v5 = a2;
  v3 = sub_15DCAD0(*(_QWORD *)(a1 + 232), (int)v5, 0);
  sub_251FD0(a1, v3);
  sub_24FE40(a1, v3);
  if ( !v2 )
    return v3;
  sub_2BB620(v3);
LABEL_12:
  byte_1C7EBA0 = 1;
  return v3;
}

