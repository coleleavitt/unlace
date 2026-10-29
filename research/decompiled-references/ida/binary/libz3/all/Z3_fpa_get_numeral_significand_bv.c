struct _Unwind_Exception *__fastcall Z3_fpa_get_numeral_significand_bv(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned int v3; // r13d
  __int64 v4; // r12
  int v5; // r14d
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  struct _Unwind_Exception *result; // rax
  __int64 v9; // r12
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  void *v13; // r12
  unsigned int v14; // ecx
  void *v15; // r13
  struct _Unwind_Exception *v16; // rax
  __int64 v17; // rbx
  int v18; // [rsp+8h] [rbp-C0h]
  struct _Unwind_Exception *v19; // [rsp+8h] [rbp-C0h]
  struct _Unwind_Exception *v20; // [rsp+8h] [rbp-C0h]
  unsigned int v21; // [rsp+8h] [rbp-C0h]
  _QWORD v22[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-98h]
  unsigned int v25; // [rsp+38h] [rbp-90h] BYREF
  int v26; // [rsp+40h] [rbp-88h] BYREF
  char v27; // [rsp+44h] [rbp-84h]
  __int64 v28; // [rsp+60h] [rbp-68h]
  _QWORD v29[2]; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v30[10]; // [rsp+78h] [rbp-50h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_2A1BA0();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      goto LABEL_16;
    }
    if ( !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      goto LABEL_16;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      return nullptr;
    }
    if ( !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return nullptr;
    }
  }
  v3 = *(_DWORD *)(a1 + 1460);
  v4 = *(_QWORD *)(a1 + 376);
  v5 = sub_15D2690(*(_QWORD *)(a1 + 232), v3);
  if ( *(_WORD *)(a2 + 4)
    || (v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && v3 == *v6 && v6[1] == 8
    || (v7 = *(_DWORD **)(sub_15D1F10(a2) + 24)) == nullptr
    || *(_DWORD *)(a1 + 384) != *v7
    || v7[1] )
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    if ( v2 )
    {
      sub_2BB620(0);
      goto LABEL_16;
    }
    return nullptr;
  }
  v9 = v4 + 24;
  v24 = v9;
  sub_181A6B0(&v25);
  if ( !(unsigned __int8)sub_15C4FC0(v5, a2, (unsigned int)&v25, v10, v11, v12)
    || !(unsigned __int8)sub_181BF40(v9, &v25)
    && !(unsigned __int8)sub_181C060(v9, &v25)
    && !(unsigned __int8)sub_181B190(v9, &v25)
    && !(unsigned __int8)sub_181BE30(v9, &v25) )
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    if ( !v2 )
    {
      sub_182EF00(*(_QWORD *)(v24 + 728), &v26);
      return nullptr;
    }
    sub_2BB620(0);
    sub_182EF00(*(_QWORD *)(v24 + 728), &v26);
LABEL_16:
    result = nullptr;
LABEL_17:
    byte_1C7EBA0 = 1;
    return result;
  }
  v28 = v9;
  v29[0] = 0;
  v29[1] = 0;
  v30[0] = 1;
  v18 = (unsigned __int16)(v25 >> 15);
  v30[1] = 0;
  if ( (v27 & 1) != 0 )
    sub_182EA00(v9, v29, &v26);
  else
    LODWORD(v29[0]) = v26;
  sub_182EF00(v9, v30);
  BYTE4(v30[0]) &= ~1u;
  LODWORD(v30[0]) = 1;
  if ( (unsigned __int8)sub_181BE30(v9, &v25) )
  {
    BYTE4(v29[0]) &= ~1u;
    LODWORD(v29[0]) = 0;
    sub_182EF00(v9, v30);
    BYTE4(v30[0]) &= ~1u;
    LODWORD(v30[0]) = 1;
  }
  v22[0] = 0;
  v22[1] = 0;
  v23[0] = 1;
  v13 = qword_1C7F2C0;
  v14 = v18 - 1;
  v23[1] = 0;
  if ( (v29[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v22, v29);
    v14 = v18 - 1;
  }
  else
  {
    LODWORD(v22[0]) = v29[0];
  }
  if ( (v30[0] & 0x100000000LL) != 0 )
  {
    v21 = v14;
    sub_182C690(v13, v23, v30);
    v14 = v21;
  }
  else
  {
    BYTE4(v23[0]) &= ~1u;
    LODWORD(v23[0]) = v30[0];
  }
  v19 = (struct _Unwind_Exception *)sub_1674520(a1 + 312, v22, v14);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v22);
  sub_182CBA0(v15, v23);
  sub_251FD0(a1, (__int64)v19);
  v16 = v19;
  if ( v2 )
  {
    sub_2BB620(v19);
    v16 = v19;
  }
  v17 = v28;
  v20 = v16;
  sub_182EF00(v28, v29);
  sub_182EF00(v17, v30);
  sub_182EF00(*(_QWORD *)(v24 + 728), &v26);
  result = v20;
  if ( v2 )
    goto LABEL_17;
  return result;
}

