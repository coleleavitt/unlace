/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90B40
// Address: 0x0000000000090B40

//----- (0000000000090B40) ----------------------------------------------------
__int64 __fastcall sub_90B40(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // ebp
  __int128 v5; // xmm0
  int v6; // eax
  char v7; // bl
  _BYTE *v8; // rdi
  int v9; // eax
  _QWORD v11[3]; // [rsp+0h] [rbp-2F8h] BYREF
  char v12; // [rsp+18h] [rbp-2E0h]
  void *src[2]; // [rsp+20h] [rbp-2D8h]
  void *ptr[2]; // [rsp+30h] [rbp-2C8h]
  __int128 v15; // [rsp+40h] [rbp-2B8h]
  void *v16[2]; // [rsp+50h] [rbp-2A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-298h]
  __int64 (__fastcall **v18)(); // [rsp+68h] [rbp-290h] BYREF
  void *v19[2]; // [rsp+70h] [rbp-288h]
  __int64 v20; // [rsp+80h] [rbp-278h]
  int v21; // [rsp+B0h] [rbp-248h]
  unsigned __int16 v22; // [rsp+B4h] [rbp-244h]
  unsigned __int16 v23; // [rsp+B6h] [rbp-242h]
  unsigned int v24; // [rsp+BCh] [rbp-23Ch]
  int v25; // [rsp+C0h] [rbp-238h]
  unsigned __int16 v26; // [rsp+C4h] [rbp-234h]
  __int64 v27; // [rsp+2B8h] [rbp-40h]
  unsigned __int64 v28; // [rsp+2C8h] [rbp-30h]

  v2 = a2;
  v28 = __readfsqword(0x28u);
  v18 = off_14E6F0;
  *(_OWORD *)v19 = 0;
  v20 = 0;
  if ( !(unsigned __int8)sub_90FA0((__int64)&v18, a2, 1, 1) )
  {
    v2 = 0;
    goto LABEL_47;
  }
  v4 = -1;
  if ( (__int16)v22 <= 613 )
  {
    switch ( v22 )
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
        v4 = 24;
        goto LABEL_28;
      case 0x1A2u:
      case 0x1A3u:
      case 0x1A4u:
      case 0x1A6u:
      case 0x1A8u:
        v4 = 18;
        goto LABEL_28;
      case 0x1C0u:
      case 0x1C2u:
      case 0x1C4u:
        goto LABEL_24;
      case 0x1F0u:
      case 0x1F1u:
      case 0x1F2u:
        v4 = 15;
        goto LABEL_28;
      case 0x200u:
        v4 = 31;
        goto LABEL_28;
      default:
        if ( v22 == 34404 )
        {
LABEL_20:
          v4 = 0;
        }
        else if ( v22 == 36929 )
        {
          v4 = 37;
        }
        break;
    }
    goto LABEL_28;
  }
  if ( (__int16)v22 <= 1125 )
  {
    if ( v22 != 614 )
    {
      if ( v22 == 616 )
      {
        v4 = 7;
        goto LABEL_28;
      }
      if ( v22 != 870 )
        goto LABEL_28;
    }
  }
  else
  {
    if ( (__int16)v22 > 2559 )
    {
      if ( v22 == 2560 )
      {
LABEL_24:
        v4 = 13;
      }
      else if ( v22 == 3772 )
      {
        v4 = 57;
      }
      goto LABEL_28;
    }
    if ( v22 != 1126 )
    {
      if ( v22 == 1312 )
        v4 = 27;
      goto LABEL_28;
    }
  }
LABEL_4:
  v4 = 12;
LABEL_28:
  v5 = 0;
  *(_OWORD *)v16 = 0;
  v17 = 0;
  if ( v24 )
  {
    sub_9BC80((__int64)v16, a2, v24 + (unsigned __int64)(unsigned int)(18 * v25), 0);
    v5 = 0;
  }
  v11[0] = off_14E770;
  v11[1] = a2;
  v11[2] = v16;
  v12 = 0;
  v15 = v5;
  *(_OWORD *)ptr = v5;
  *(_OWORD *)src = v5;
  if ( v21 == 23126 )
    v6 = v27 + 40;
  else
    v6 = v26 + (_DWORD)v27 + 24;
  sub_9C160((__int64)&v18, a2, v6, v23, (__int64)v11);
  v7 = v12;
  v8 = (_BYTE *)(a1 + 1034);
  if ( (unsigned __int64)v15 > 1 )
    qstrncpy(v8, (__int64)ptr[1], 4096);
  else
    *v8 = 0;
  v9 = (int)src[1];
  if ( (unsigned __int64)SLODWORD(src[1]) > 0x400 )
    v9 = 1024;
  *(_DWORD *)(a1 + 4) = v4;
  *(_WORD *)(a1 + 8) = v9;
  memmove((void *)(a1 + 10), src[0], v9);
  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 1) = v7;
  LOBYTE(v2) = 1;
  if ( !v12 && !src[1] )
    LOBYTE(v2) = (unsigned __int64)v15 > 1;
  v11[0] = off_14E770;
  if ( ptr[1] )
  {
    *(_QWORD *)&v15 = 0;
    qfree(ptr[1]);
    ptr[1] = nullptr;
    *((_QWORD *)&v15 + 1) = 0;
  }
  if ( src[0] )
  {
    src[1] = nullptr;
    qfree(src[0]);
    src[0] = nullptr;
    ptr[0] = nullptr;
  }
  if ( v16[0] )
  {
    v16[1] = nullptr;
    qfree(v16[0]);
    v16[0] = nullptr;
    v17 = 0;
  }
LABEL_47:
  v18 = off_14E6F0;
  if ( v19[0] )
  {
    v19[1] = nullptr;
    qfree(v19[0]);
    v19[0] = nullptr;
    v20 = 0;
  }
  return v2;
}
// 14E6F0: using guessed type __int64 (__fastcall *off_14E6F0[2])();
// 14E770: using guessed type __int64 (__fastcall *off_14E770[3])();
