/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80018
// Address: 0x00080018

//----- (00080018) --------------------------------------------------------
int __fastcall sub_80018(char a1, int a2, int a3)
{
  int v4; // r7
  char *v6; // r5
  char *v7; // r4
  unsigned int v8; // r6
  int v9; // r4
  char *v10; // r1
  unsigned int v11; // r0
  int v12; // r4
  char *v13; // r5
  char *v14; // r1
  unsigned int v15; // r0
  int v16; // r4
  char *v17; // r5
  char *v18; // r1
  int v19; // r0
  int v20; // r4
  unsigned int v21; // r0
  int v22; // r1
  char v23; // t1
  int v24; // r3
  int v25; // r5
  int v26; // r5
  int v27; // r5
  unsigned int v28; // r5
  unsigned int v29; // r3
  _BYTE *v30; // r3
  int v31; // r9
  unsigned int v32; // r1
  _BYTE *v33; // r5
  int v34; // r2
  int v35; // r6
  unsigned int v36; // r1
  char v37; // r0
  char v38; // t1
  int v39; // r2
  int v40; // r2
  int v41; // r3
  int v42; // r7
  int v43; // r3
  int v44; // r7
  char *v45; // r0
  int v46; // r3
  int v47; // r6
  int v48; // r2
  int v49; // t1
  int v50; // t1
  unsigned int v51; // r2
  int v52; // [sp+Ch] [bp-58h]
  char v53; // [sp+10h] [bp-54h]
  unsigned __int8 *LanguageSpecificData; // [sp+14h] [bp-50h]
  int v55; // [sp+24h] [bp-40h]
  unsigned int v56; // [sp+30h] [bp-34h] BYREF
  int v57; // [sp+34h] [bp-30h] BYREF
  int v58; // [sp+38h] [bp-2Ch] BYREF
  int v59; // [sp+3Ch] [bp-28h] BYREF
  unsigned int v60; // [sp+40h] [bp-24h] BYREF
  unsigned int v61; // [sp+44h] [bp-20h] BYREF
  int v62; // [sp+48h] [bp-1Ch] BYREF
  int v63; // [sp+4Ch] [bp-18h]
  char *v64; // [sp+50h] [bp-14h]
  int v65; // [sp+54h] [bp-10h]
  unsigned int v66; // [sp+58h] [bp-Ch]
  unsigned __int8 v67; // [sp+5Ch] [bp-8h]
  unsigned __int8 v68; // [sp+5Dh] [bp-7h]

  v4 = a3;
  v56 = 0;
  if ( (a1 & 3) == 1 )
  {
    if ( (a1 & 8) != 0 )
    {
      v57 = a2;
      v53 = a1 & 8 | 2;
      Unwind_VRS_Set(a3, 0, 12, 0, &v57);
      goto LABEL_13;
    }
    v25 = *(_DWORD *)(a2 + 32);
    Unwind_VRS_Get(a3, 0, 13, 0, &v62);
    if ( v25 == v62 )
    {
      v57 = a2;
      Unwind_VRS_Set(v4, 0, 12, 0, &v57);
      v52 = *(_DWORD *)(a2 + 48);
      if ( v52 )
      {
        v26 = *(_DWORD *)(a2 + 40);
        LanguageSpecificData = *(unsigned __int8 **)(a2 + 44);
        goto LABEL_40;
      }
LABEL_32:
      sub_80E40((_BYTE *)a2);
    }
    v53 = 2;
  }
  else
  {
    if ( (a1 & 3) == 2 )
      goto LABEL_6;
    if ( (a1 & 3) != 0 )
LABEL_4:
      abort();
    if ( (a1 & 8) != 0 )
      goto LABEL_6;
    v53 = 1;
  }
  v57 = a2;
  Unwind_VRS_Set(v4, 0, 12, 0, &v57);
LABEL_13:
  LanguageSpecificData = (unsigned __int8 *)Unwind_GetLanguageSpecificData(v4);
  if ( !LanguageSpecificData )
    goto LABEL_6;
  v6 = sub_7FF90(v4, LanguageSpecificData, (int)&v62);
  if ( v67 == 255 )
    v7 = nullptr;
  else
    v7 = (char *)sub_7FF58(v67);
  v64 = v7;
  Unwind_VRS_Get(v4, 0, 15, 0, &v61);
  v8 = (v61 & 0xFFFFFFFE) - 1;
  if ( (unsigned int)v6 >= v66 )
  {
    if ( (v53 & 1) == 0 )
    {
LABEL_28:
      if ( (v53 & 8) != 0 )
        sub_80A40();
      goto LABEL_32;
    }
LABEL_46:
    v20 = 0;
    v52 = 0;
LABEL_47:
    v28 = v56;
    Unwind_VRS_Get(v4, 0, 13, 0, &v60);
    v29 = v60;
    *(_DWORD *)(a2 + 36) = v28;
    *(_DWORD *)(a2 + 40) = v20;
    *(_DWORD *)(a2 + 44) = LanguageSpecificData;
    *(_DWORD *)(a2 + 32) = v29;
    *(_DWORD *)(a2 + 48) = v52;
    return 6;
  }
  while ( 1 )
  {
    v9 = v68;
    v10 = nullptr;
    if ( v68 != 255 )
      v10 = (char *)sub_7FF58(v68);
    v11 = sub_7FE94(v9, v10, v6, (unsigned int *)&v59);
    v12 = v68;
    v13 = (char *)v11;
    v14 = nullptr;
    if ( v68 != 255 )
      v14 = (char *)sub_7FF58(v68);
    v15 = sub_7FE94(v12, v14, v13, &v60);
    v16 = v68;
    v17 = (char *)v15;
    v18 = nullptr;
    if ( v68 != 255 )
      v18 = (char *)sub_7FF58(v68);
    v19 = v16;
    v20 = 0;
    v21 = sub_7FE94(v19, v18, v17, &v61);
    v22 = 0;
    v6 = (char *)v21;
    do
    {
      v23 = *v6++;
      v24 = (v23 & 0x7F) << v22;
      v22 += 7;
      v20 |= v24;
    }
    while ( v23 < 0 );
    if ( v62 + v59 > v8 )
    {
LABEL_27:
      if ( (v53 & 1) == 0 )
        goto LABEL_28;
      goto LABEL_46;
    }
    if ( v62 + v59 + v60 > v8 )
      break;
    if ( v66 <= (unsigned int)v6 )
      goto LABEL_27;
  }
  if ( !v61 )
    goto LABEL_6;
  v52 = v61 + v63;
  if ( !v20 )
  {
    if ( !v52 || (v53 & 1) != 0 )
      goto LABEL_6;
LABEL_103:
    v27 = 2;
    goto LABEL_42;
  }
  v30 = (_BYTE *)(v66 + v20 - 1);
  if ( !(v61 + v63) )
  {
LABEL_6:
    if ( _gnu_unwind_frame(a2, v4) )
      return 9;
    else
      return 8;
  }
  if ( !v30 )
  {
LABEL_105:
    if ( (v53 & 1) == 0 )
    {
      v20 = 0;
      goto LABEL_103;
    }
    goto LABEL_6;
  }
  if ( (v53 & 8) != 0 )
  {
    *(_BYTE *)a2 = 71;
    *(_BYTE *)(a2 + 1) = 78;
    *(_BYTE *)(a2 + 2) = 85;
    *(_BYTE *)(a2 + 3) = 67;
    *(_BYTE *)(a2 + 4) = 70;
    *(_BYTE *)(a2 + 5) = 79;
    *(_BYTE *)(a2 + 6) = 82;
    *(_BYTE *)(a2 + 7) = 0;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 7) == 1 )
      v51 = *(_DWORD *)(a2 - 32);
    else
      v51 = a2 + 88;
    v56 = v51;
  }
  v31 = 0;
  v55 = v4;
  while ( 1 )
  {
    v20 = 0;
    v32 = 0;
    while ( 1 )
    {
      v33 = v30 + 1;
      v34 = (*v30 & 0x7F) << v32;
      v32 += 7;
      v20 |= v34;
      if ( (*v30 & 0x80) == 0 )
        break;
      ++v30;
    }
    if ( v32 <= 0x1F && (*v30 & 0x40) != 0 )
      v20 |= -(1 << v32);
    v35 = 0;
    v36 = 0;
    do
    {
      v38 = *++v30;
      v37 = v38;
      v39 = (v38 & 0x7F) << v36;
      v36 += 7;
      v35 |= v39;
    }
    while ( v38 < 0 );
    if ( v36 <= 0x1F && (v37 & 0x40) != 0 )
      v35 |= -(1 << v36);
    if ( !v20 )
    {
      v31 = 1;
      goto LABEL_73;
    }
    if ( v20 > 0 )
      break;
    v40 = a2;
    v41 = 4 * (v20 + 1);
    if ( a2 )
      v40 = 1;
    if ( (v53 & 8) != 0 )
      v40 = 0;
    v42 = v65 - v41;
    v43 = *(_DWORD *)(v65 - v41);
    if ( v40 )
    {
      v61 = v56;
      if ( !v43 )
        goto LABEL_79;
      while ( !_cxa_type_match((_BYTE *)a2, *(_DWORD *)(v42 + v43), 0, &v61) )
      {
        v50 = *(_DWORD *)(v42 + 4);
        v42 += 4;
        v43 = v50;
        if ( !v50 )
          goto LABEL_79;
      }
    }
    else if ( !v43 )
    {
      goto LABEL_79;
    }
LABEL_73:
    if ( !v35 )
    {
      v4 = v55;
      if ( !v31 )
        goto LABEL_6;
      goto LABEL_105;
    }
    v30 = &v33[v35];
  }
  if ( v67 != 255 )
  {
    switch ( v67 & 7 )
    {
      case 0:
      case 3:
        v44 = -4 * v20;
        goto LABEL_76;
      case 2:
        v44 = -2 * v20;
        goto LABEL_76;
      case 4:
        v44 = -8 * v20;
        goto LABEL_76;
      default:
        goto LABEL_4;
    }
  }
  v44 = 0;
LABEL_76:
  sub_7FE94(v67, v64, (char *)(v65 + v44), &v60);
  if ( v60 && (!a2 || !_cxa_type_match((_BYTE *)a2, v60, 0, &v56)) )
    goto LABEL_73;
LABEL_79:
  v26 = v20;
  v4 = v55;
  if ( (v53 & 1) != 0 )
    goto LABEL_47;
  if ( (v53 & 8) != 0 )
  {
    if ( v20 < 0 )
      sub_80A94();
    goto LABEL_41;
  }
LABEL_40:
  v20 = v26;
  if ( v26 < 0 )
  {
    sub_7FF90(v4, LanguageSpecificData, (int)&v62);
    if ( v67 == 255 )
      v45 = nullptr;
    else
      v45 = (char *)sub_7FF58(v67);
    v64 = v45;
    v46 = *(_DWORD *)(v65 - 4 * (v26 + 1));
    v47 = v65 - 4 * (v26 + 1);
    if ( v46 )
    {
      v48 = v65 - 4 * (v26 + 1);
      v46 = 0;
      do
      {
        v49 = *(_DWORD *)(v48 + 4);
        v48 += 4;
        ++v46;
      }
      while ( v49 );
    }
    *(_DWORD *)(a2 + 40) = v46;
    *(_DWORD *)(a2 + 44) = v45;
    v27 = 3;
    *(_DWORD *)(a2 + 48) = 4;
    *(_DWORD *)(a2 + 52) = v47;
  }
  else
  {
LABEL_41:
    v27 = 3;
  }
LABEL_42:
  v58 = a2;
  Unwind_VRS_Set(v4, 0, 0, 0, &v58);
  v59 = v20;
  Unwind_VRS_Set(v4, 0, 1, 0, &v59);
  Unwind_VRS_Get(v4, 0, 15, 0, &v60);
  v60 = v60 & 1 | v52;
  Unwind_VRS_Set(v4, 0, 15, 0, &v60);
  if ( v27 == 2 )
    _cxa_begin_cleanup((_BYTE *)a2);
  return 7;
}
// 13FFC: using guessed type int __fastcall Unwind_VRS_Get(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 14188: using guessed type int __fastcall Unwind_GetLanguageSpecificData(_DWORD);
// 14408: using guessed type int __fastcall _gnu_unwind_frame(_DWORD, _DWORD);
// 1467C: using guessed type int __fastcall Unwind_VRS_Set(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
