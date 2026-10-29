__int64 __fastcall Z3_fpa_get_ebits(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  char v6; // r12
  _DWORD *v7; // rax
  int v8; // edx
  __int64 result; // rax

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    sub_2A1920();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
    {
      a4 = *(_DWORD *)(a2 + 8);
      if ( a4 )
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
  v7 = *(_DWORD **)(a2 + 24);
  v8 = *(_DWORD *)(a1 + 384);
  if ( v7 && v8 == *v7 && !v7[1] )
  {
    result = sub_15C5540((int)a1 + 368, a2, v8, a4, a5, a6);
  }
  else
  {
    sub_24EA30(a1, 3u, "fp sort expected");
    result = 0;
  }
  if ( v6 )
    goto LABEL_15;
  return result;
}

