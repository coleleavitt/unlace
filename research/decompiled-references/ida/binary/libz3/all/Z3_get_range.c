__int64 __fastcall Z3_get_range(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-30h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29A180();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 && *(_DWORD *)(a2 + 8) )
    {
      v4 = *(_QWORD *)(a2 + 40);
      sub_2BB620(v4);
      result = v4;
    }
    else
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      result = 0;
    }
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 && *(_DWORD *)(a2 + 8) )
    {
      return *(_QWORD *)(a2 + 40);
    }
    else
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 0;
    }
  }
  return result;
}

