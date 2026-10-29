__int64 __fastcall Z3_mk_fpa_to_fp_int_real(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v9; // al
  _DWORD *v10; // rax
  __int64 result; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // [rsp+0h] [rbp-60h]
  char v17; // [rsp+8h] [rbp-58h]
  int v18[2]; // [rsp+10h] [rbp-50h] BYREF
  __int64 v19; // [rsp+18h] [rbp-48h]
  __int64 v20; // [rsp+20h] [rbp-40h]

  v9 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v17 = v9;
  if ( v9 )
    sub_2A1DA0(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  v10 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( !v10
    || *(_DWORD *)(a1 + 384) != *v10
    || v10[1] != 1
    || (v12 = *(_DWORD **)(sub_15D1F10(a3) + 24)) == nullptr
    || *v12 != 5
    || v12[1] != 1
    || (v13 = *(_DWORD **)(sub_15D1F10(a4) + 24)) == nullptr
    || *v13 != 5
    || v13[1]
    || (v14 = *(_DWORD **)(a5 + 24)) == nullptr
    || *v14 != *(_DWORD *)(a1 + 384)
    || v14[1] )
  {
    sub_24EA30(a1, 3u, nullptr);
    if ( !v17 )
      return 0;
    result = 0;
    goto LABEL_7;
  }
  *(_QWORD *)v18 = a2;
  v19 = a3;
  v15 = *(_QWORD *)(a1 + 368);
  v20 = a4;
  v16 = sub_15DCAD0(v15, (int)v18, 0);
  sub_251FD0(a1, v16);
  result = v16;
  if ( v17 )
  {
    sub_2BB620(v16);
    result = v16;
LABEL_7:
    byte_1C7EBA0 = 1;
  }
  return result;
}

