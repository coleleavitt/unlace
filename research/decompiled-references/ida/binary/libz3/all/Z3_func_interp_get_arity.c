__int64 __fastcall Z3_func_interp_get_arity(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29BA20();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
    {
      result = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL);
    }
    else
    {
      sub_24EA30(a1, 3u, "ast is null");
      result = 0;
    }
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
    {
      return *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL);
    }
    else
    {
      sub_24EA30(a1, 3u, "ast is null");
      return 0;
    }
  }
  return result;
}

