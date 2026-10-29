__int64 __fastcall Z3_fpa_get_numeral_exponent_bv(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  char v4; // bp
  unsigned int v5; // r15d
  __int64 v6; // r14
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  __int64 result; // rax
  __int64 v10; // r14
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r15
  void *v15; // r12
  __int64 v16; // rax
  void *v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  char v20; // al
  int v21; // [rsp+0h] [rbp-98h]
  unsigned int v22; // [rsp+0h] [rbp-98h]
  __int64 v23; // [rsp+0h] [rbp-98h]
  int v24; // [rsp+Ch] [rbp-8Ch]
  __int64 v25; // [rsp+10h] [rbp-88h] BYREF
  __int64 v26; // [rsp+18h] [rbp-80h]
  __int64 v27; // [rsp+20h] [rbp-78h] BYREF
  __int64 v28; // [rsp+28h] [rbp-70h]
  __int64 v29; // [rsp+30h] [rbp-68h]
  __int16 v30; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v31[16]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-48h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_2A1D20(a1, a2, a3);
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
  v5 = *(_DWORD *)(a1 + 1460);
  v6 = *(_QWORD *)(a1 + 376);
  v21 = sub_15D2690(*(_QWORD *)(a1 + 232), v5);
  if ( *(_WORD *)(a2 + 4)
    || (v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v7 == v5 && v7[1] == 8
    || (v8 = *(_DWORD **)(sub_15D1F10(a2) + 24)) == nullptr
    || *(_DWORD *)(a1 + 384) != *v8
    || (v24 = v8[1]) != 0 )
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    if ( v4 )
    {
      sub_2BB620(0);
      goto LABEL_15;
    }
    return 0;
  }
  v10 = v6 + 24;
  v29 = v10;
  sub_181A6B0(&v30);
  if ( !(unsigned __int8)sub_15C4FC0(v21, a2, (unsigned int)&v30, v11, v12, v13)
    || !(unsigned __int8)sub_181BF40(v10, &v30)
    && !(unsigned __int8)sub_181C060(v10, &v30)
    && !(unsigned __int8)sub_181B190(v10, &v30)
    && !(unsigned __int8)sub_181BE30(v10, &v30) )
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    if ( !v4 )
    {
      sub_182EF00(*(_QWORD *)(v29 + 728), v31);
      return 0;
    }
    sub_2BB620(0);
    sub_182EF00(*(_QWORD *)(v29 + 728), v31);
LABEL_15:
    result = 0;
LABEL_16:
    byte_1C7EBA0 = 1;
    return result;
  }
  v22 = v30 & 0x7FFF;
  if ( a3 )
  {
    if ( (unsigned __int8)sub_181B190(v10, &v30) )
      goto LABEL_27;
    if ( !(unsigned __int8)sub_181BE30(v10, &v30) )
    {
      v18 = sub_181C500(v10, v22, v32);
LABEL_35:
      v19 = v18;
      goto LABEL_36;
    }
LABEL_46:
    v18 = sub_181C470(v10, v22);
    goto LABEL_35;
  }
  if ( (unsigned __int8)sub_181B190(v10, &v30) )
  {
LABEL_27:
    v14 = a1 + 312;
    v25 = 0;
    v26 = 0;
    v27 = 1;
    v15 = qword_1C7F2C0;
    v28 = 0;
LABEL_28:
    LODWORD(v25) = v24;
    goto LABEL_29;
  }
  if ( (unsigned __int8)sub_181BE30(v10, &v30) )
    goto LABEL_46;
  v20 = sub_181C060(v10, &v30);
  v19 = v32;
  if ( v20 )
  {
    v18 = sub_181C4A0(v10, v22);
    goto LABEL_35;
  }
LABEL_36:
  v14 = a1 + 312;
  v25 = 0;
  v26 = 0;
  v27 = 1;
  v15 = qword_1C7F2C0;
  v28 = 0;
  if ( v19 <= 0x7FFFFFFE )
  {
    v24 = v19;
    goto LABEL_28;
  }
  sub_182C550(qword_1C7F2C0, &v25);
LABEL_29:
  sub_182CBA0(v15, &v27);
  BYTE4(v27) &= ~1u;
  LODWORD(v27) = 1;
  v16 = sub_1674520(v14, &v25, v22);
  v17 = qword_1C7F2C0;
  v23 = v16;
  sub_182CBA0(qword_1C7F2C0, &v25);
  sub_182CBA0(v17, &v27);
  sub_251FD0(a1, v23);
  if ( v4 )
  {
    sub_2BB620(v23);
    sub_182EF00(*(_QWORD *)(v29 + 728), v31);
    result = v23;
    goto LABEL_16;
  }
  sub_182EF00(*(_QWORD *)(v29 + 728), v31);
  return v23;
}

