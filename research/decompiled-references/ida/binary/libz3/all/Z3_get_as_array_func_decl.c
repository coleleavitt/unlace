__int64 __fastcall Z3_get_as_array_func_decl(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  __int64 result; // rax
  __int64 *v5; // rax
  __int64 v6; // [rsp+8h] [rbp-30h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29B7C0();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, nullptr);
LABEL_11:
      sub_2BB620(0);
      result = 0;
LABEL_12:
      byte_1C7EBA0 = 1;
      return result;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, nullptr);
      return 0;
    }
  }
  if ( *(_WORD *)(a2 + 4)
    || (v3 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL)) == 0
    || *(_DWORD *)(a1 + 1440) != *(_DWORD *)v3
    || *(_DWORD *)(v3 + 4) != 13 )
  {
    sub_24EA30(a1, 3u, nullptr);
    if ( !v2 )
      return 0;
    goto LABEL_11;
  }
  v5 = *(__int64 **)(v3 + 8);
  if ( *((_BYTE *)v5 + 8) != 1 )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  result = *v5;
  if ( v2 )
  {
    v6 = result;
    sub_2BB620(result);
    result = v6;
    goto LABEL_12;
  }
  return result;
}

