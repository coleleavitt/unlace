/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A380
// Address: 0x0007A380

//----- (0007A380) --------------------------------------------------------
_BOOL4 __cdecl sub_7A380(int a1, int a2)
{
  int v2; // eax
  size_t v3; // ecx
  void *v4; // eax
  __int64 v6; // [esp+8h] [ebp-2B4h]
  int v7; // [esp+1Ch] [ebp-2A0h]
  _BOOL4 v8; // [esp+1Ch] [ebp-2A0h]
  char v9; // [esp+23h] [ebp-299h]
  int v10[3]; // [esp+28h] [ebp-294h] BYREF
  char v11; // [esp+34h] [ebp-288h]
  void *v12; // [esp+38h] [ebp-284h]
  unsigned int v13; // [esp+3Ch] [ebp-280h]
  int v14; // [esp+40h] [ebp-27Ch]
  void *v15; // [esp+44h] [ebp-278h]
  unsigned int v16; // [esp+48h] [ebp-274h]
  int v17; // [esp+4Ch] [ebp-270h]
  int v18; // [esp+50h] [ebp-26Ch] BYREF
  int v19; // [esp+54h] [ebp-268h]
  int v20; // [esp+58h] [ebp-264h]
  int v21; // [esp+60h] [ebp-25Ch] BYREF
  void *v22; // [esp+64h] [ebp-258h]
  int v23; // [esp+68h] [ebp-254h]
  int v24; // [esp+6Ch] [ebp-250h]
  int v25; // [esp+98h] [ebp-224h]
  unsigned __int16 v26; // [esp+9Ch] [ebp-220h]
  unsigned __int16 v27; // [esp+9Eh] [ebp-21Eh]
  int v28; // [esp+A4h] [ebp-218h]
  int v29; // [esp+A8h] [ebp-214h]
  unsigned __int16 v30; // [esp+ACh] [ebp-210h]
  int v31; // [esp+29Ch] [ebp-20h]
  unsigned int v32; // [esp+2A8h] [ebp-14h]

  v32 = __readgsdword(0x14u);
  v21 = (int)&off_13839C;
  v22 = nullptr;
  v23 = 0;
  v24 = 0;
  if ( !sub_7A850((int)&v21, a2, 1, 1u) )
  {
    v8 = 0;
    goto LABEL_47;
  }
  v7 = -1;
  if ( (__int16)v26 <= 613 )
  {
    switch ( v26 )
    {
      case 0x14Cu:
      case 0x14Du:
      case 0x14Eu:
        goto LABEL_20;
      case 0x14Fu:
      case 0x150u:
      case 0x151u:
      case 0x152u:
      case 0x153u:
      case 0x154u:
      case 0x155u:
      case 0x156u:
      case 0x157u:
      case 0x158u:
      case 0x159u:
      case 0x15Au:
      case 0x15Bu:
      case 0x15Cu:
      case 0x15Du:
      case 0x15Eu:
      case 0x15Fu:
      case 0x160u:
      case 0x161u:
      case 0x164u:
      case 0x165u:
      case 0x167u:
      case 0x16Au:
      case 0x16Bu:
      case 0x16Cu:
      case 0x16Du:
      case 0x16Eu:
      case 0x16Fu:
      case 0x170u:
      case 0x171u:
      case 0x172u:
      case 0x173u:
      case 0x174u:
      case 0x175u:
      case 0x176u:
      case 0x177u:
      case 0x178u:
      case 0x179u:
      case 0x17Au:
      case 0x17Bu:
      case 0x17Cu:
      case 0x17Du:
      case 0x17Eu:
      case 0x17Fu:
      case 0x180u:
      case 0x181u:
      case 0x182u:
      case 0x183u:
      case 0x185u:
      case 0x186u:
      case 0x187u:
      case 0x188u:
      case 0x189u:
      case 0x18Au:
      case 0x18Bu:
      case 0x18Cu:
      case 0x18Du:
      case 0x18Eu:
      case 0x18Fu:
      case 0x190u:
      case 0x191u:
      case 0x192u:
      case 0x193u:
      case 0x194u:
      case 0x195u:
      case 0x196u:
      case 0x197u:
      case 0x198u:
      case 0x199u:
      case 0x19Au:
      case 0x19Bu:
      case 0x19Cu:
      case 0x19Du:
      case 0x19Eu:
      case 0x19Fu:
      case 0x1A0u:
      case 0x1A1u:
      case 0x1A5u:
      case 0x1A7u:
      case 0x1A9u:
      case 0x1AAu:
      case 0x1ABu:
      case 0x1ACu:
      case 0x1ADu:
      case 0x1AEu:
      case 0x1AFu:
      case 0x1B0u:
      case 0x1B1u:
      case 0x1B2u:
      case 0x1B3u:
      case 0x1B4u:
      case 0x1B5u:
      case 0x1B6u:
      case 0x1B7u:
      case 0x1B8u:
      case 0x1B9u:
      case 0x1BAu:
      case 0x1BBu:
      case 0x1BCu:
      case 0x1BDu:
      case 0x1BEu:
      case 0x1BFu:
      case 0x1C1u:
      case 0x1C3u:
      case 0x1C5u:
      case 0x1C6u:
      case 0x1C7u:
      case 0x1C8u:
      case 0x1C9u:
      case 0x1CAu:
      case 0x1CBu:
      case 0x1CCu:
      case 0x1CDu:
      case 0x1CEu:
      case 0x1CFu:
      case 0x1D0u:
      case 0x1D1u:
      case 0x1D2u:
      case 0x1D3u:
      case 0x1D4u:
      case 0x1D5u:
      case 0x1D6u:
      case 0x1D7u:
      case 0x1D8u:
      case 0x1D9u:
      case 0x1DAu:
      case 0x1DBu:
      case 0x1DCu:
      case 0x1DDu:
      case 0x1DEu:
      case 0x1DFu:
      case 0x1E0u:
      case 0x1E1u:
      case 0x1E2u:
      case 0x1E3u:
      case 0x1E4u:
      case 0x1E5u:
      case 0x1E6u:
      case 0x1E7u:
      case 0x1E8u:
      case 0x1E9u:
      case 0x1EAu:
      case 0x1EBu:
      case 0x1ECu:
      case 0x1EDu:
      case 0x1EEu:
      case 0x1EFu:
      case 0x1F3u:
      case 0x1F4u:
      case 0x1F5u:
      case 0x1F6u:
      case 0x1F7u:
      case 0x1F8u:
      case 0x1F9u:
      case 0x1FAu:
      case 0x1FBu:
      case 0x1FCu:
      case 0x1FDu:
      case 0x1FEu:
      case 0x1FFu:
        goto LABEL_28;
      case 0x162u:
      case 0x163u:
      case 0x166u:
      case 0x168u:
      case 0x169u:
        goto LABEL_4;
      case 0x184u:
        v7 = 24;
        goto LABEL_28;
      case 0x1A2u:
      case 0x1A3u:
      case 0x1A4u:
      case 0x1A6u:
      case 0x1A8u:
        v7 = 18;
        goto LABEL_28;
      case 0x1C0u:
      case 0x1C2u:
      case 0x1C4u:
        goto LABEL_24;
      case 0x1F0u:
      case 0x1F1u:
      case 0x1F2u:
        v7 = 15;
        goto LABEL_28;
      case 0x200u:
        v7 = 31;
        goto LABEL_28;
      default:
        if ( v26 == 34404 )
        {
LABEL_20:
          v7 = 0;
        }
        else if ( v26 == 36929 )
        {
          v7 = 37;
        }
        break;
    }
    goto LABEL_28;
  }
  if ( (__int16)v26 <= 1125 )
  {
    if ( v26 != 614 )
    {
      if ( v26 == 616 )
      {
        v7 = 7;
        goto LABEL_28;
      }
      if ( v26 != 870 )
        goto LABEL_28;
    }
  }
  else
  {
    if ( (__int16)v26 > 2559 )
    {
      if ( v26 == 2560 )
      {
LABEL_24:
        v7 = 13;
      }
      else if ( v26 == 3772 )
      {
        v7 = 57;
      }
      goto LABEL_28;
    }
    if ( v26 != 1126 )
    {
      if ( v26 == 1312 )
        v7 = 27;
      goto LABEL_28;
    }
  }
LABEL_4:
  v7 = 12;
LABEL_28:
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( v28 )
  {
    LODWORD(v6) = v28 + 18 * v29;
    HIDWORD(v6) = __CFADD__(v28, 18 * v29);
    sub_85F60((int)&v18, a2, v6, 0);
  }
  v10[0] = (int)&off_1383DC;
  v10[1] = a2;
  v10[2] = (int)&v18;
  v11 = 0;
  v13 = 0;
  v12 = nullptr;
  v15 = nullptr;
  v14 = 0;
  v17 = 0;
  v16 = 0;
  if ( v25 == 23126 )
    v2 = v31 + 40;
  else
    v2 = v31 + v30 + 24;
  sub_864C0((int)&v21, a2, v2, v27, (int)v10);
  v9 = v11;
  if ( v16 > 1 )
    qstrncpy(a1 + 1034, (int)v15, 4096);
  else
    *(_BYTE *)(a1 + 1034) = 0;
  v3 = 1024;
  if ( v13 < 0x400 )
    v3 = v13;
  *(_DWORD *)(a1 + 4) = v7;
  *(_WORD *)(a1 + 8) = v3;
  v4 = memmove((void *)(a1 + 10), v12, v3);
  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 1) = v9;
  LOBYTE(v4) = 1;
  v8 = (_BOOL4)v4;
  if ( !v11 && !v13 )
    v8 = v16 > 1;
  v10[0] = (int)&off_1383DC;
  if ( v15 )
  {
    v16 = 0;
    qfree(v15);
    v15 = nullptr;
    v17 = 0;
  }
  if ( v12 )
  {
    v13 = 0;
    qfree(v12);
    v12 = nullptr;
    v14 = 0;
  }
  if ( v18 )
  {
    v19 = 0;
    qfree((void *)v18);
    v18 = 0;
    v20 = 0;
  }
LABEL_47:
  v21 = (int)&off_13839C;
  if ( v22 )
  {
    v23 = 0;
    qfree(v22);
    v22 = nullptr;
    v24 = 0;
  }
  return v8;
}
// 13839C: using guessed type int (__cdecl *off_13839C)(int, int, int off);
// 1383DC: using guessed type int (__cdecl *off_1383DC)(int, int);
