__int64 __fastcall Z3_mk_fpa_to_fp_bv(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // rax
  _DWORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // [rsp+0h] [rbp-50h]
  char v11; // [rsp+8h] [rbp-48h]
  int v12[2]; // [rsp+18h] [rbp-38h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v11 = v4;
  if ( v4 )
    sub_2A16C0();
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = sub_15D1F10(a2);
  if ( !(unsigned __int8)sub_1673B10(a1 + 312, v5)
    || (v6 = *(_DWORD **)(a3 + 24)) == nullptr
    || *v6 != *(_DWORD *)(a1 + 384)
    || v6[1] )
  {
    sub_24EA30(a1, 3u, "bv then fp sort expected");
    if ( v11 )
    {
      sub_2BB620(0);
      goto LABEL_14;
    }
    return 0;
  }
  v8 = sub_15D1F10(a2);
  if ( !(unsigned __int8)sub_1673B10(a1 + 312, v8)
    || (v9 = *(_DWORD **)(a3 + 24)) == nullptr
    || *(_DWORD *)(a1 + 384) != *v9
    || v9[1] )
  {
    sub_24EA30(a1, 3u, "bv sort the float sort expected");
    if ( v11 )
    {
LABEL_14:
      result = 0;
LABEL_15:
      byte_1C7EBA0 = 1;
      return result;
    }
    return 0;
  }
  *(_QWORD *)v12 = a2;
  v10 = sub_15DCAD0(*(_QWORD *)(a1 + 368), (int)v12, 0);
  sub_251FD0(a1, v10);
  result = v10;
  if ( v11 )
  {
    sub_2BB620(v10);
    result = v10;
    goto LABEL_15;
  }
  return result;
}

