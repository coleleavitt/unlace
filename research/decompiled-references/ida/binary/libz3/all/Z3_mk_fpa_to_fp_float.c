__int64 __fastcall Z3_mk_fpa_to_fp_float(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // al
  _DWORD *v8; // rax
  __int64 result; // rax
  _DWORD *v10; // rax
  int v11; // esi
  _DWORD *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-50h]
  char v14; // [rsp+8h] [rbp-48h]
  int v15[2]; // [rsp+10h] [rbp-40h] BYREF
  __int64 v16; // [rsp+18h] [rbp-38h]

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v14 = v7;
  if ( v7 )
    sub_2A1700();
  *(_DWORD *)(a1 + 1520) = 0;
  v8 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( !v8
    || *(_DWORD *)(a1 + 384) != *v8
    || v8[1] != 1
    || (v10 = *(_DWORD **)(sub_15D1F10(a3) + 24), v11 = *(_DWORD *)(a1 + 384), !v10)
    || v11 != *v10
    || v10[1]
    || (v12 = *(_DWORD **)(a4 + 24)) == nullptr
    || *v12 != v11
    || v12[1] )
  {
    sub_24EA30(a1, 3u, "rm and float sorts expected");
    if ( !v14 )
      return 0;
    result = 0;
    goto LABEL_7;
  }
  *(_QWORD *)v15 = a2;
  v16 = a3;
  v13 = sub_15DCAD0(*(_QWORD *)(a1 + 368), (int)v15, 0);
  sub_251FD0(a1, v13);
  result = v13;
  if ( v14 )
  {
    sub_2BB620(v13);
    result = v13;
LABEL_7:
    byte_1C7EBA0 = 1;
  }
  return result;
}

