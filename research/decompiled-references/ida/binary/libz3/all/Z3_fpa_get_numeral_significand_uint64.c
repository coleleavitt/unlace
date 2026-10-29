__int64 __fastcall Z3_fpa_get_numeral_significand_uint64(__int64 a1, __int64 a2, __int64 *a3)
{
  char v4; // bp
  __int64 v5; // r14
  unsigned int v6; // r13d
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  unsigned int v9; // r13d
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  int v15; // [rsp+8h] [rbp-80h]
  __int64 v16; // [rsp+10h] [rbp-78h]
  __int64 v17; // [rsp+18h] [rbp-70h]
  _BYTE v18[8]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v19[88]; // [rsp+30h] [rbp-58h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( !v4 )
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
    {
      if ( *(_DWORD *)(a2 + 8) )
        goto LABEL_4;
      sub_24EA30(a1, 3u, "not a valid ast");
    }
    else
    {
      sub_24EA30(a1, 3u, "ast is null");
    }
    return 0;
  }
  sub_2A1C60();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 )
  {
    sub_24EA30(a1, 3u, "ast is null");
    goto LABEL_17;
  }
  if ( !*(_DWORD *)(a2 + 8) )
  {
    sub_24EA30(a1, 3u, "not a valid ast");
LABEL_17:
    v9 = 0;
    goto LABEL_18;
  }
LABEL_4:
  if ( !a3 )
  {
    sub_24EA30(a1, 3u, "invalid nullptr argument");
    goto LABEL_11;
  }
  v5 = *(_QWORD *)(a1 + 376);
  v6 = *(_DWORD *)(a1 + 1460);
  v16 = *(_QWORD *)(v5 + 752);
  v15 = sub_15D2690(*(_QWORD *)(a1 + 232), v6);
  if ( *(_WORD *)(a2 + 4)
    || (v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v7 == v6 && v7[1] == 8
    || (v8 = *(_DWORD **)(sub_15D1F10(a2) + 24)) == nullptr
    || *(_DWORD *)(a1 + 384) != *v8
    || v8[1] )
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    *a3 = 0;
LABEL_11:
    v9 = 0;
    goto LABEL_12;
  }
  v17 = v5 + 24;
  sub_181A6B0(v18);
  if ( (unsigned __int8)sub_15C4FC0(v15, a2, (unsigned int)v18, v11, v12, v13)
    && ((unsigned __int8)sub_181BF40(v17, v18)
     || (unsigned __int8)sub_181C060(v17, v18)
     || (unsigned __int8)sub_181B190(v17, v18)
     || (unsigned __int8)sub_181BE30(v17, v18))
    && (v9 = sub_182F2C0(v16, v19), (_BYTE)v9) )
  {
    v14 = sub_182F340(v16, v19);
  }
  else
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    v14 = 0;
    v9 = 0;
  }
  *a3 = v14;
  sub_182EF00(*(_QWORD *)(v5 + 752), v19);
LABEL_12:
  if ( v4 )
LABEL_18:
    byte_1C7EBA0 = 1;
  return v9;
}

