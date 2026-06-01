__int64 __fastcall Z3_get_sort(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-30h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29A5C0();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
LABEL_13:
      result = 0;
      goto LABEL_10;
    }
    if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 > 1 )
    {
      v4 = sub_15D1F10(a2);
      sub_2BB620(v4);
      result = v4;
LABEL_10:
      byte_1C7EBA0 = 1;
      return result;
    }
LABEL_7:
    sub_24EA30(a1, 3u, "ast is not an expression");
    if ( !v2 )
      return 0;
    goto LABEL_13;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 )
  {
    if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 > 1 )
      return sub_15D1F10(a2);
    goto LABEL_7;
  }
  sub_24EA30(a1, 3u, "ast is not an expression");
  return 0;
}

