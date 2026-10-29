__int64 __fastcall Z3_fpa_get_numeral_sign(__int64 a1, __int64 a2, unsigned int *a3)
{
  char v4; // bp
  unsigned int v5; // r15d
  __int64 v6; // r14
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  unsigned int v9; // r13d
  __int64 v11; // r14
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // [rsp+8h] [rbp-70h]
  _BYTE v16[8]; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v17[88]; // [rsp+20h] [rbp-58h] BYREF

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
  sub_2A1BE0();
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
    sub_24EA30(a1, 3u, "sign cannot be a nullpointer");
    goto LABEL_11;
  }
  v5 = *(_DWORD *)(a1 + 1460);
  v6 = *(_QWORD *)(a1 + 376);
  v15 = sub_15D2690(*(_QWORD *)(a1 + 232), v5);
  if ( *(_WORD *)(a2 + 4)
    || (v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v7 == v5 && v7[1] == 8
    || (v8 = *(_DWORD **)(sub_15D1F10(a2) + 24)) == nullptr
    || *(_DWORD *)(a1 + 384) != *v8
    || v8[1] )
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
LABEL_11:
    v9 = 0;
    goto LABEL_12;
  }
  v11 = v6 + 24;
  sub_181A6B0(v16);
  v9 = sub_15C4FC0(v15, a2, (unsigned int)v16, v12, v13, v14);
  if ( !(_BYTE)v9 || (unsigned __int8)sub_181BDE0(v11, v16) )
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    v9 = 0;
  }
  else
  {
    *a3 = (unsigned int)v16[3] >> 31;
  }
  sub_182EF00(*(_QWORD *)(v11 + 728), v17);
LABEL_12:
  if ( v4 )
LABEL_18:
    byte_1C7EBA0 = 1;
  return v9;
}

