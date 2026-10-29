__int64 __fastcall Z3_get_bool_value(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29A640();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      result = 0;
LABEL_10:
      byte_1C7EBA0 = 1;
      return result;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      return 0;
    }
  }
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
    result = 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 232);
    if ( a2 == *(_QWORD *)(v3 + 856) )
      result = 1;
    else
      result = (unsigned int)-(*(_QWORD *)(v3 + 864) == a2);
  }
  if ( v2 )
    goto LABEL_10;
  return result;
}

