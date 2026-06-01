__int64 __fastcall Z3_model_get_const_decl(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  char v4; // r13
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_29B5C0(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
LABEL_12:
      result = 0;
      goto LABEL_13;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      return 0;
    }
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 80LL);
  if ( !v5 || (unsigned int)v3 >= *(_DWORD *)(v5 - 4) )
  {
    sub_24EA30(a1, 2u, nullptr);
    if ( !v4 )
      return 0;
    sub_2BB620(0);
    goto LABEL_12;
  }
  result = *(_QWORD *)(v5 + 8 * v3);
  if ( v4 )
  {
    v7 = result;
    sub_2BB620(result);
    result = v7;
LABEL_13:
    byte_1C7EBA0 = 1;
  }
  return result;
}

