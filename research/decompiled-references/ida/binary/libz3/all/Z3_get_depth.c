__int64 __fastcall Z3_get_depth(__int64 a1, __int64 a2)
{
  char v2; // r12
  int v3; // eax
  unsigned int v6; // edx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29A740();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      v6 = 0;
      goto LABEL_16;
    }
    v3 = *(unsigned __int16 *)(a2 + 4);
    if ( (unsigned int)(v3 - 3) > 1 )
    {
      if ( !(_WORD)v3 )
      {
        v6 = *(unsigned __int16 *)(a2 + 28);
        goto LABEL_16;
      }
      goto LABEL_13;
    }
LABEL_7:
    sub_24EA30(a1, 3u, "ast is not an expression");
    v6 = 0;
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
    return 0;
  }
  v3 = *(unsigned __int16 *)(a2 + 4);
  if ( (unsigned int)(v3 - 3) <= 1 )
    goto LABEL_7;
  if ( !(_WORD)v3 )
    return *(unsigned __int16 *)(a2 + 28);
LABEL_13:
  v6 = 1;
  if ( (_WORD)v3 == 2 )
    v6 = *(_DWORD *)(a2 + 40);
LABEL_8:
  if ( !v2 )
    return v6;
LABEL_16:
  byte_1C7EBA0 = 1;
  return v6;
}

