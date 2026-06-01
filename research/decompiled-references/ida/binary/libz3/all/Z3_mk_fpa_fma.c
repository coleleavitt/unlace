__int64 __fastcall Z3_mk_fpa_fma(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v8; // bp
  _DWORD *v9; // rax
  __int64 result; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  __int64 v14; // [rsp+8h] [rbp-60h]

  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v8 )
    sub_2A1220();
  *(_DWORD *)(a1 + 1520) = 0;
  v9 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v9
    && *(_DWORD *)(a1 + 384) == *v9
    && v9[1] == 1
    && (v11 = *(_DWORD **)(sub_15D1F10(a3) + 24)) != nullptr
    && *(_DWORD *)(a1 + 384) == *v11
    && !v11[1]
    && (v12 = *(_DWORD **)(sub_15D1F10(a4) + 24)) != nullptr
    && *(_DWORD *)(a1 + 384) == *v12
    && !v12[1]
    && (v13 = *(_DWORD **)(sub_15D1F10(a5) + 24)) != nullptr
    && *(_DWORD *)(a1 + 384) == *v13
    && !v13[1] )
  {
    v14 = sub_15E1AF0(*(_QWORD *)(a1 + 368));
    sub_251FD0(a1, v14);
    result = v14;
    if ( v8 )
    {
      sub_2BB620(v14);
      result = v14;
LABEL_21:
      byte_1C7EBA0 = 1;
    }
  }
  else
  {
    sub_24EA30(a1, 3u, "rm and fp sorts expected");
    if ( v8 )
    {
      sub_2BB620(0);
      result = 0;
      goto LABEL_21;
    }
    return 0;
  }
  return result;
}

