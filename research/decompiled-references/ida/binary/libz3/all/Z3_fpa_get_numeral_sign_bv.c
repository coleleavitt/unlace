__int64 __fastcall Z3_fpa_get_numeral_sign_bv(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned int v3; // r15d
  __int64 v4; // r14
  int v5; // r13d
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // r14
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  void *v14; // r14
  __int64 v15; // [rsp+8h] [rbp-90h]
  _QWORD v16[2]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v18; // [rsp+30h] [rbp-68h]
  _BYTE v19[8]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v20[88]; // [rsp+40h] [rbp-58h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_2A1B60();
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
  v3 = *(_DWORD *)(a1 + 1460);
  v4 = *(_QWORD *)(a1 + 376);
  v5 = sub_15D2690(*(_QWORD *)(a1 + 232), v3);
  if ( *(_WORD *)(a2 + 4)
    || (v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v6 == v3 && v6[1] == 8
    || (v7 = *(_DWORD **)(sub_15D1F10(a2) + 24)) == nullptr
    || *(_DWORD *)(a1 + 384) != *v7
    || v7[1] )
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    if ( !v2 )
      return 0;
    sub_2BB620(0);
LABEL_15:
    result = 0;
LABEL_16:
    byte_1C7EBA0 = 1;
    return result;
  }
  v9 = v4 + 24;
  v18 = v9;
  sub_181A6B0(v19);
  if ( !(unsigned __int8)sub_15C4FC0(v5, a2, (unsigned int)v19, v10, v11, v12) || (unsigned __int8)sub_181BDE0(v9, v19) )
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    sub_182EF00(*(_QWORD *)(v18 + 728), v20);
    if ( v2 )
      goto LABEL_15;
    return 0;
  }
  v16[0] = (unsigned __int8)sub_181B270(v9, v19) == 0;
  v16[1] = 0;
  v17[0] = 1;
  v17[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v17);
  BYTE4(v17[0]) &= ~1u;
  LODWORD(v17[0]) = 1;
  v13 = sub_1674520(a1 + 312, v16, 1);
  v14 = qword_1C7F2C0;
  v15 = v13;
  sub_182CBA0(qword_1C7F2C0, v16);
  sub_182CBA0(v14, v17);
  sub_251FD0(a1, v15);
  if ( v2 )
  {
    sub_2BB620(v15);
    sub_182EF00(*(_QWORD *)(v18 + 728), v20);
    result = v15;
    goto LABEL_16;
  }
  sub_182EF00(*(_QWORD *)(v18 + 728), v20);
  return v15;
}

