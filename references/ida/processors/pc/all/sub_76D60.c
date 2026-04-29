unsigned __int64 __fastcall sub_76D60(
        char *a1,
        __int64 a2,
        char a3,
        char a4,
        __int64 (__fastcall *a5)(const char *, __int64),
        __int64 a6)
{
  char v10; // r8
  unsigned int v11; // r9d
  char v12; // si
  signed __int16 v13; // bx
  int v14; // ecx
  unsigned __int16 v15; // ax
  char v16; // si
  char v17; // r10
  char v18; // si
  signed __int16 v19; // ax
  unsigned int v20; // r8d
  unsigned __int64 v21; // r10
  char v22; // bp
  char v23; // dl
  int v24; // eax
  int v25; // ecx
  signed __int16 v26; // ax
  unsigned int v28; // [rsp+0h] [rbp-48h]
  unsigned int v29; // [rsp+0h] [rbp-48h]
  int v30; // [rsp+8h] [rbp-40h]
  int v31; // [rsp+8h] [rbp-40h]
  char v32; // [rsp+Dh] [rbp-3Bh]
  char v33; // [rsp+Dh] [rbp-3Bh]
  char v34; // [rsp+Eh] [rbp-3Ah]
  char v35; // [rsp+Fh] [rbp-39h]

  v10 = a4 & 7;
  v11 = a4 & 7;
  v12 = a4 >> 3;
  v13 = (a4 >> 3) & 7;
  v14 = *(_DWORD *)(a2 + 28);
  v15 = *(_WORD *)(a2 + 24);
  v16 = v12 & 7;
  if ( (v14 & 0x10) == 0 )
  {
    if ( v15 > 0x5C0u )
    {
      if ( v15 > 0x5F1u )
      {
        if ( (unsigned __int16)(v15 - 1532) <= 0xFu )
          goto LABEL_20;
      }
      else if ( v15 > 0x5EDu )
      {
        goto LABEL_20;
      }
    }
    else
    {
      if ( v15 > 0x5BCu )
      {
LABEL_20:
        v33 = a3;
        v31 = *(_DWORD *)(a2 + 28);
        v29 = v11;
        if ( (*(_BYTE *)(a2 + 273) & 0x10) != 0 )
        {
          v26 = sub_22710(a2, v16 | 0x10);
          a3 = v33;
          LOWORD(v14) = v31;
          v11 = v29;
        }
        else
        {
          v26 = sub_22710(a2, v16);
          v11 = v29;
          LOWORD(v14) = v31;
          a3 = v33;
        }
        v13 = v26;
        goto LABEL_23;
      }
      if ( v15 > 0x378u )
      {
        if ( (unsigned __int16)(v15 - 993) <= 3u )
          goto LABEL_20;
      }
      else if ( v15 > 0x374u )
      {
        goto LABEL_20;
      }
    }
LABEL_23:
    v21 = 0;
    v22 = (unsigned __int8)a4 >> 6;
    if ( a3 == 2 )
      goto LABEL_27;
    v24 = v14 & 0x1018;
    v25 = v24;
    goto LABEL_25;
  }
  v17 = *(_BYTE *)(a2 + 33);
  v18 = v16 | 8;
  if ( (v17 & 2) != 0 )
    v13 = v18;
  if ( v15 > 0x5C0u )
  {
    if ( v15 > 0x5F1u )
    {
      if ( (unsigned __int16)(v15 - 1532) > 0xFu )
        goto LABEL_11;
    }
    else if ( v15 <= 0x5EDu )
    {
      goto LABEL_11;
    }
  }
  else if ( v15 <= 0x5BCu )
  {
    if ( v15 > 0x378u )
    {
      if ( (unsigned __int16)(v15 - 993) > 3u )
        goto LABEL_11;
    }
    else if ( v15 <= 0x374u )
    {
      goto LABEL_11;
    }
  }
  v35 = *(_BYTE *)(a2 + 33);
  if ( (*(_BYTE *)(a2 + 273) & 0x10) != 0 )
    v13 |= 0x10u;
  v34 = a3;
  v32 = v10;
  v30 = *(_DWORD *)(a2 + 28);
  v28 = v11;
  v19 = sub_22710(a2, v13);
  v11 = v28;
  LOWORD(v14) = v30;
  v10 = v32;
  a3 = v34;
  v13 = v19;
  v17 = v35;
LABEL_11:
  v20 = v10 | 8;
  if ( (v17 & 1) != 0 )
    v11 = v20;
  v21 = 0;
  v22 = (unsigned __int8)a4 >> 6;
  if ( a3 != 2 )
  {
    v23 = 7;
    v24 = v14 & 0x1018;
    if ( v24 == 4112 )
    {
LABEL_26:
      v21 = sub_76B80(a1, v11, v23, a5, a6);
      goto LABEL_27;
    }
    v25 = v14 & 0x1008;
LABEL_25:
    v23 = (v25 == 0 || v24 == 4104) + 1;
    goto LABEL_26;
  }
LABEL_27:
  if ( v13 != 4 )
    v21 += sub_76C40(a1, a2, v13, a5, a6) << v22;
  return v21;
}
