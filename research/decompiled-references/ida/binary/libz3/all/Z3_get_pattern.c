__int64 __fastcall Z3_get_pattern(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  char v4; // r13
  __int64 result; // rax
  __int64 v6; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29AC80(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 232), a2) )
  {
    sub_24EA30(a1, 1u, nullptr);
    if ( !v4 )
      return 0;
    sub_2BB620(0);
    result = 0;
LABEL_9:
    byte_1C7EBA0 = 1;
    return result;
  }
  result = *(_QWORD *)(a2 + 8 * v3 + 32);
  if ( v4 )
  {
    v6 = *(_QWORD *)(a2 + 8 * v3 + 32);
    sub_2BB620(v6);
    result = v6;
    goto LABEL_9;
  }
  return result;
}

