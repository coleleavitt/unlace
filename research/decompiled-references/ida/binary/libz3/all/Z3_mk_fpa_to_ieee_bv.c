__int64 __fastcall Z3_mk_fpa_to_ieee_bv(__int64 a1, __int64 a2)
{
  char v2; // r12
  _DWORD *v3; // rax
  __int64 v4; // rbp

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_2A1D60();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      goto LABEL_15;
    }
    if ( !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      goto LABEL_15;
    }
  }
  else
  {
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
  }
  v3 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( !v3 || *(_DWORD *)(a1 + 384) != *v3 || v3[1] )
  {
    sub_24EA30(a1, 3u, "fp sort expected");
    if ( !v2 )
      return 0;
    sub_2BB620(0);
LABEL_15:
    v4 = 0;
    goto LABEL_16;
  }
  v4 = sub_15E1A70(*(_QWORD *)(a1 + 368));
  sub_251FD0(a1, v4);
  if ( !v2 )
    return v4;
  sub_2BB620(v4);
LABEL_16:
  byte_1C7EBA0 = 1;
  return v4;
}

