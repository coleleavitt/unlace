__int64 __fastcall Z3_get_index_value(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29ACC0();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 && *(_WORD *)(a2 + 4) == 1 )
    {
      result = *(unsigned int *)(a2 + 16);
    }
    else
    {
      sub_24EA30(a1, 3u, nullptr);
      result = 0;
    }
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 && *(_WORD *)(a2 + 4) == 1 )
    {
      return *(unsigned int *)(a2 + 16);
    }
    else
    {
      sub_24EA30(a1, 3u, nullptr);
      return 0;
    }
  }
  return result;
}

