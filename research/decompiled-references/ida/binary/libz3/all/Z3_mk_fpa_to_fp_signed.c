__int64 __fastcall Z3_mk_fpa_to_fp_signed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // al
  _DWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // [rsp+0h] [rbp-50h]
  char v12; // [rsp+8h] [rbp-48h]
  int v13[2]; // [rsp+10h] [rbp-40h] BYREF
  __int64 v14; // [rsp+18h] [rbp-38h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v12 = v6;
  if ( v6 )
    sub_2A17A0(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( !v7
    || *(_DWORD *)(a1 + 384) != *v7
    || v7[1] != 1
    || (v9 = sub_15D1F10(a3), !(unsigned __int8)sub_1673B10(a1 + 312, v9))
    || (v10 = *(_DWORD **)(a4 + 24)) == nullptr
    || *v10 != *(_DWORD *)(a1 + 384)
    || v10[1] )
  {
    sub_24EA30(a1, 3u, "rm and float sorts expected");
    if ( !v12 )
      return 0;
    result = 0;
    goto LABEL_7;
  }
  *(_QWORD *)v13 = a2;
  v14 = a3;
  v11 = sub_15DCAD0(*(_QWORD *)(a1 + 368), (int)v13, 0);
  sub_251FD0(a1, v11);
  result = v11;
  if ( v12 )
  {
    sub_2BB620(v11);
    result = v11;
LABEL_7:
    byte_1C7EBA0 = 1;
  }
  return result;
}

