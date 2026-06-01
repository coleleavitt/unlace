__int64 __fastcall Z3_mk_string_symbol(__int64 a1, _BYTE *a2)
{
  char v2; // r12
  __int64 result; // rax
  _QWORD v4[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_295100();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 && *a2 )
    {
      sub_180C5A0(v4, a2);
      result = v4[0];
    }
    else
    {
      result = 0;
    }
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 && *a2 )
    {
      sub_180C5A0(v4, a2);
      return v4[0];
    }
    else
    {
      return 0;
    }
  }
  return result;
}

