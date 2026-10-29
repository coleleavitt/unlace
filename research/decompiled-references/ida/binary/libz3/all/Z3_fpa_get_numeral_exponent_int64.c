__int64 __fastcall Z3_fpa_get_numeral_exponent_int64(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  char v6; // bp
  unsigned int v7; // r15d
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  unsigned int v10; // r14d
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  char v15; // dl
  __int64 v16; // rax
  char v17; // cl
  char v18; // cl
  int v19; // [rsp+0h] [rbp-78h]
  unsigned int v20; // [rsp+0h] [rbp-78h]
  __int64 v21; // [rsp+8h] [rbp-70h]
  __int64 v22; // [rsp+8h] [rbp-70h]
  __int16 v23; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v24[16]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v25; // [rsp+30h] [rbp-48h]

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( !v6 )
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
  sub_2A1CE0(a1, a2, a3, (unsigned __int8)a4);
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
    v10 = 0;
    goto LABEL_18;
  }
LABEL_4:
  if ( !a3 )
  {
    sub_24EA30(a1, 3u, "invalid null argument");
    goto LABEL_11;
  }
  v7 = *(_DWORD *)(a1 + 1460);
  v21 = *(_QWORD *)(a1 + 376);
  v19 = sub_15D2690(*(_QWORD *)(a1 + 232), v7);
  if ( *(_WORD *)(a2 + 4)
    || (v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v8 == v7 && v8[1] == 8
    || (v9 = *(_DWORD **)(sub_15D1F10(a2) + 24)) == nullptr
    || *(_DWORD *)(a1 + 384) != *v9
    || v9[1] )
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    *a3 = 0;
LABEL_11:
    v10 = 0;
    goto LABEL_12;
  }
  v22 = v21 + 24;
  sub_181A6B0(&v23);
  v10 = sub_15C4FC0(v19, a2, (unsigned int)&v23, v12, v13, v14);
  if ( (_BYTE)v10
    && ((unsigned __int8)sub_181BF40(v22, &v23)
     || (unsigned __int8)sub_181C060(v22, &v23)
     || (unsigned __int8)sub_181B190(v22, &v23)
     || (unsigned __int8)sub_181BE30(v22, &v23)) )
  {
    v20 = v23 & 0x7FFF;
    if ( (_BYTE)a4 )
    {
      v15 = sub_181B190(v22, &v23);
      v16 = 0;
      if ( !v15 )
      {
        if ( (unsigned __int8)sub_181BE30(v22, &v23) )
          v16 = sub_181C470(v22, v20);
        else
          v16 = sub_181C500(v22, v20, v25);
      }
      v10 = a4;
    }
    else
    {
      v17 = sub_181B190(v22, &v23);
      v16 = 0;
      if ( !v17 )
      {
        if ( (unsigned __int8)sub_181BE30(v22, &v23) )
        {
          v16 = sub_181C470(v22, v20);
        }
        else
        {
          v18 = sub_181C060(v22, &v23);
          v16 = v25;
          if ( v18 )
            v16 = sub_181C4A0(v22, v20);
        }
      }
    }
  }
  else
  {
    sub_24EA30(a1, 3u, "invalid expression argument, expecting a valid fp, not a NaN");
    v16 = 0;
    v10 = 0;
  }
  *a3 = v16;
  sub_182EF00(*(_QWORD *)(v22 + 728), v24);
LABEL_12:
  if ( v6 )
LABEL_18:
    byte_1C7EBA0 = 1;
  return v10;
}

