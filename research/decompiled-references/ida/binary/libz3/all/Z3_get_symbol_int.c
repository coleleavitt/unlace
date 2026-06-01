__int64 __fastcall Z3_get_symbol_int(__int64 a1, unsigned __int64 a2)
{
  char v2; // r12
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_299650();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( (a2 & 7) == 1 )
    {
      result = (unsigned int)(a2 >> 3);
    }
    else
    {
      sub_24EA30(a1, 3u, nullptr);
      result = 0xFFFFFFFFLL;
    }
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( (a2 & 7) == 1 )
    {
      return (unsigned int)(a2 >> 3);
    }
    else
    {
      sub_24EA30(a1, 3u, nullptr);
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}

