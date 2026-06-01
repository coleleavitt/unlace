__int64 __fastcall Z3_get_app_decl(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-30h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29A440();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( *(_WORD *)(a2 + 4) )
    {
      sub_24EA30(a1, 3u, nullptr);
      sub_2BB620(0);
      result = 0;
    }
    else
    {
      v4 = *(_QWORD *)(a2 + 16);
      sub_2BB620(v4);
      result = v4;
    }
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( *(_WORD *)(a2 + 4) )
    {
      sub_24EA30(a1, 3u, nullptr);
      return 0;
    }
    else
    {
      return *(_QWORD *)(a2 + 16);
    }
  }
  return result;
}

