__int64 __fastcall Z3_mk_int_symbol(__int64 a1, int a2)
{
  char v2; // r12
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_2950D0(a1, (unsigned int)a2);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 < 0 )
    {
      sub_24EA30(a1, 2u, nullptr);
      result = 0;
    }
    else
    {
      result = 8LL * a2 + 1;
    }
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 < 0 )
    {
      sub_24EA30(a1, 2u, nullptr);
      return 0;
    }
    else
    {
      return 8LL * a2 + 1;
    }
  }
  return result;
}

