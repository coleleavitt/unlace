__int64 __fastcall Z3_fpa_get_sbits(__int64 a1, __int64 a2)
{
  char v2; // r12
  _DWORD *v3; // rax
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_2A1960();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
    {
      if ( *(_DWORD *)(a2 + 8) )
        goto LABEL_4;
      sub_24EA30(a1, 3u, "not a valid ast");
    }
    else
    {
      sub_24EA30(a1, 3u, "ast is null");
    }
    result = 0;
LABEL_15:
    byte_1C7EBA0 = 1;
    return result;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 )
  {
    sub_24EA30(a1, 3u, "ast is null");
    return 0;
  }
  if ( !*(_DWORD *)(a2 + 8) )
  {
    sub_24EA30(a1, 3u, "not a valid ast");
    return 0;
  }
LABEL_4:
  v3 = *(_DWORD **)(a2 + 24);
  if ( v3 && *(_DWORD *)(a1 + 384) == *v3 && !v3[1] )
  {
    result = sub_15C5560(a1 + 368, a2);
  }
  else
  {
    sub_24EA30(a1, 3u, "fp sort expected");
    result = 0;
  }
  if ( v2 )
    goto LABEL_15;
  return result;
}

