__int64 __fastcall Z3_model_get_func_decl(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  char v4; // r13
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_29B640(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      result = 0;
LABEL_10:
      v7 = result;
      sub_2BB620(result);
      byte_1C7EBA0 = 1;
      return v7;
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
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 88LL);
  if ( v5 && (unsigned int)v3 < *(_DWORD *)(v5 - 4) )
  {
    result = *(_QWORD *)(v5 + 8 * v3);
  }
  else
  {
    sub_24EA30(a1, 2u, nullptr);
    result = 0;
  }
  if ( v4 )
    goto LABEL_10;
  return result;
}

