__int64 __fastcall Z3_mk_fpa_round_to_integral(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  _DWORD *v5; // rax
  __int64 result; // rax
  _DWORD *v7; // rax
  __int64 v8; // [rsp+8h] [rbp-30h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_2A1300();
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v5
    && *(_DWORD *)(a1 + 384) == *v5
    && v5[1] == 1
    && (v7 = *(_DWORD **)(sub_15D1F10(a3) + 24)) != nullptr
    && *(_DWORD *)(a1 + 384) == *v7
    && !v7[1] )
  {
    v8 = sub_15E1B70(*(_QWORD *)(a1 + 368));
    sub_251FD0(a1, v8);
    result = v8;
    if ( v4 )
    {
      sub_2BB620(v8);
      result = v8;
LABEL_15:
      byte_1C7EBA0 = 1;
    }
  }
  else
  {
    sub_24EA30(a1, 3u, "rm and fp sorts expected");
    if ( v4 )
    {
      sub_2BB620(0);
      result = 0;
      goto LABEL_15;
    }
    return 0;
  }
  return result;
}

