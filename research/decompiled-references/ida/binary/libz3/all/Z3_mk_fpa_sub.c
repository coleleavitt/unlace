__int64 __fastcall Z3_mk_fpa_sub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // bp
  _DWORD *v7; // rax
  __int64 result; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // [rsp+8h] [rbp-40h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_2A10E0();
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v7
    && *(_DWORD *)(a1 + 384) == *v7
    && v7[1] == 1
    && (v9 = *(_DWORD **)(sub_15D1F10(a3) + 24)) != nullptr
    && *(_DWORD *)(a1 + 384) == *v9
    && !v9[1]
    && (v10 = *(_DWORD **)(sub_15D1F10(a4) + 24)) != nullptr
    && *(_DWORD *)(a1 + 384) == *v10
    && !v10[1] )
  {
    v11 = sub_15E1BF0(*(_QWORD *)(a1 + 368));
    sub_251FD0(a1, v11);
    result = v11;
    if ( v6 )
    {
      sub_2BB620(v11);
      result = v11;
LABEL_18:
      byte_1C7EBA0 = 1;
    }
  }
  else
  {
    sub_24EA30(a1, 3u, "rm and fp sorts expected");
    if ( v6 )
    {
      sub_2BB620(0);
      result = 0;
      goto LABEL_18;
    }
    return 0;
  }
  return result;
}

