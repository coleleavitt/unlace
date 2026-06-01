__int64 __fastcall Z3_optimize_minimize(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r12
  __int64 result; // rax

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_2A0590(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 || !*(_DWORD *)(a3 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      result = 0;
LABEL_12:
      byte_1C7EBA0 = 1;
      return result;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 || !*(_DWORD *)(a3 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 0;
    }
  }
  if ( (unsigned int)*(unsigned __int16 *)(a3 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
    result = 0;
  }
  else
  {
    result = sub_2F7D10(*(_QWORD *)(a2 + 24), a3, 0);
  }
  if ( v4 )
    goto LABEL_12;
  return result;
}

