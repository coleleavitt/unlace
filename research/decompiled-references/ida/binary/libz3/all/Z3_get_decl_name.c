__int64 __fastcall Z3_get_decl_name(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29A040();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 && *(_DWORD *)(a2 + 8) )
    {
      result = *(_QWORD *)(a2 + 16);
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
      return *(_QWORD *)(a2 + 16);
    }
    else
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 0;
    }
  }
  return result;
}

