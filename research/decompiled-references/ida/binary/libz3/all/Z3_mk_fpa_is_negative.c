__int64 __fastcall Z3_mk_fpa_is_negative(__int64 a1, __int64 a2)
{
  char v2; // bp
  _DWORD *v3; // rax
  __int64 v4; // r12

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_2A1640();
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( !v3 || *(_DWORD *)(a1 + 384) != *v3 || v3[1] )
  {
    sub_24EA30(a1, 3u, "fp sort expected");
    if ( v2 )
    {
      sub_2BB620(0);
      v4 = 0;
      goto LABEL_11;
    }
    return 0;
  }
  v4 = sub_15E1A70(*(_QWORD *)(a1 + 368));
  sub_251FD0(a1, v4);
  if ( !v2 )
    return v4;
  sub_2BB620(v4);
LABEL_11:
  byte_1C7EBA0 = 1;
  return v4;
}

