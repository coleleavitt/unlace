__int64 __fastcall sub_AAFF40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int8 *v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r13
  _QWORD *v22; // r13
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  __int64 *v27; // rdx
  unsigned __int16 v28; // ax
  __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // esi
  unsigned int v32; // r12d
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r13d
  bool v41; // zf
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int8 v49; // dl
  __int64 v50; // rdi
  unsigned __int8 v51; // dl
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // r13
  unsigned int v55; // eax
  __int64 v56; // r14
  __int64 v57; // r13
  __int64 v58; // rax
  __int64 *v59; // rdx
  unsigned __int64 v60; // rcx
  __int64 *v61; // rax
  __int64 *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax

  v5 = *(unsigned __int8 *)(a2 + 16);
  switch ( (char)v5 )
  {
    case 0:
    case 1:
    case 24:
    case 54:
      v7 = *(_QWORD *)(a2 + 40);
      goto LABEL_3;
    case 2:
    case 3:
    case 5:
    case 6:
      v22 = nullptr;
      if ( (unsigned int)(v5 - 2) <= 1 )
      {
        v22 = *(_QWORD **)(a2 + 40);
        if ( (*(_BYTE *)(a2 + 19) & 2) != 0 )
        {
          if ( *((_DWORD *)v22 + 2) <= 0x40u )
            v22 = (_QWORD *)*v22;
          else
            v22 = *(_QWORD **)*v22;
        }
      }
      v12 = sub_A97D20(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL)) * (_QWORD)v22;
      v24 = *(_QWORD *)(a1 + 17448);
      if ( *(_DWORD *)(v24 + 340) != 10 || *(_BYTE *)(v24 + 8) == 64 )
        return v23 * ((v12 != 0) + (v12 - (v12 != 0)) / v23);
      return v12;
    case 4:
    case 15:
      v7 = sub_F5DDD0(a2);
      goto LABEL_3;
    case 7:
      v12 = sub_A97D20(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL));
      if ( !v12 )
        return 8;
      if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 286LL) >= v12 && v12 != 1 )
      {
        _BitScanReverse64(&v44, v12 - 1);
        return 1LL << (64 - ((unsigned __int8)v44 ^ 0x3Fu));
      }
      return v12;
    case 8:
      goto LABEL_12;
    case 9:
    case 12:
    case 27:
    case 40:
      v7 = *(_QWORD *)(a2 + 32);
      goto LABEL_3;
    case 10:
      v29 = *(_QWORD *)(a1 + 17448);
      v30 = (*(_DWORD *)(a2 + 32) >> 1) & 0xFFFFFF;
      if ( *(_BYTE *)(v29 + 40) )
        v31 = *(_DWORD *)(v29 + 36);
      else
        v31 = *(unsigned __int8 *)(v29 + 33);
      v32 = 8;
      if ( v30 )
      {
        if ( v30 != 1 )
        {
          _BitScanReverse64(&v33, v30 - 1LL);
          v34 = 1LL << (64 - ((unsigned __int8)v33 ^ 0x3Fu));
          if ( (unsigned int)v34 > 7 )
          {
            v32 = v34;
            if ( v31 <= (unsigned int)v34 )
              v32 = v31;
          }
        }
      }
      return v32 * ((v30 != 0) + (v30 - (v30 != 0)) / v32);
    case 11:
    case 42:
      v10 = *(unsigned __int8 **)(a1 + 17448);
      v11 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v11 & 8) != 0
        && (*(_DWORD *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v11 & 7)) >> 9 )
      {
        goto LABEL_63;
      }
      return v10[8];
    case 13:
      v28 = (*(_WORD *)(a2 + 18) >> 3) & 0x1FF;
      switch ( v28 )
      {
        case 0u:
        case 1u:
        case 2u:
        case 3u:
        case 4u:
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x16u:
        case 0x17u:
        case 0x18u:
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
        case 0x21u:
        case 0x22u:
        case 0x23u:
        case 0x24u:
        case 0x25u:
        case 0x26u:
        case 0x27u:
        case 0x28u:
        case 0x29u:
        case 0x2Au:
        case 0x2Bu:
        case 0x2Cu:
        case 0x2Du:
        case 0x2Eu:
        case 0x2Fu:
        case 0x1ECu:
        case 0x1EDu:
        case 0x1EEu:
        case 0x1EFu:
        case 0x1F0u:
          v50 = *(_QWORD *)(a1 + 17448);
          if ( v28 == 493 )
          {
            v51 = 2;
          }
          else if ( v28 <= 0x1EDu )
          {
            v51 = 3;
            if ( v28 > 0x23u )
            {
              v51 = 7;
              if ( v28 != 492 )
                v51 = 0;
            }
          }
          else if ( v28 == 495 )
          {
            v51 = 5;
          }
          else
          {
            v51 = 1;
            if ( v28 >= 0x1EFu )
            {
              v51 = 6;
              if ( v28 != 496 )
                v51 = 0;
            }
          }
          v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v50 + 864LL))(v50, v51);
          v10 = *(unsigned __int8 **)(a1 + 17448);
          if ( v52 )
            goto LABEL_63;
          return v10[8];
        case 0x30u:
        case 0x31u:
        case 0x32u:
        case 0x33u:
        case 0x34u:
        case 0x35u:
        case 0x36u:
        case 0x37u:
        case 0x38u:
        case 0x39u:
        case 0x3Au:
        case 0x3Bu:
        case 0x3Cu:
        case 0x3Du:
        case 0x3Eu:
        case 0x3Fu:
        case 0x40u:
        case 0x41u:
        case 0x42u:
        case 0x43u:
        case 0x44u:
        case 0x45u:
        case 0x46u:
        case 0x47u:
        case 0x48u:
        case 0x49u:
        case 0x4Au:
        case 0x4Bu:
        case 0x4Cu:
        case 0x4Du:
        case 0x4Eu:
        case 0x4Fu:
        case 0x50u:
        case 0x51u:
        case 0x52u:
        case 0x53u:
        case 0x54u:
        case 0x55u:
        case 0x56u:
        case 0x57u:
        case 0x58u:
        case 0x59u:
        case 0x5Au:
        case 0x5Bu:
        case 0x5Cu:
        case 0x5Du:
        case 0x5Eu:
        case 0x5Fu:
        case 0x60u:
        case 0x61u:
        case 0x62u:
        case 0x63u:
          return 0;
        case 0x64u:
        case 0x65u:
        case 0x66u:
        case 0x67u:
        case 0x7Au:
        case 0x7Bu:
        case 0x7Cu:
        case 0x7Du:
        case 0x7Eu:
        case 0x7Fu:
        case 0x80u:
        case 0x81u:
        case 0x82u:
        case 0x83u:
        case 0x84u:
        case 0x85u:
        case 0x98u:
        case 0x99u:
        case 0x9Au:
        case 0x9Bu:
        case 0x9Cu:
        case 0x9Du:
        case 0x9Eu:
        case 0x9Fu:
        case 0xA0u:
        case 0xA1u:
        case 0xA2u:
        case 0xA3u:
        case 0xF4u:
        case 0xF5u:
        case 0xF6u:
        case 0xF7u:
        case 0xF8u:
        case 0xF9u:
        case 0xFAu:
        case 0xFBu:
        case 0xFCu:
        case 0xFDu:
        case 0xFEu:
        case 0xFFu:
        case 0x100u:
        case 0x101u:
        case 0x102u:
        case 0x103u:
        case 0x104u:
        case 0x105u:
        case 0x106u:
        case 0x107u:
        case 0x108u:
        case 0x109u:
        case 0x10Au:
        case 0x10Bu:
        case 0x10Cu:
        case 0x10Du:
        case 0x10Eu:
        case 0x10Fu:
        case 0x110u:
        case 0x111u:
        case 0x112u:
        case 0x113u:
        case 0x114u:
        case 0x115u:
        case 0x116u:
        case 0x117u:
        case 0x118u:
        case 0x119u:
        case 0x11Au:
        case 0x11Bu:
        case 0x11Cu:
        case 0x11Du:
        case 0x11Eu:
        case 0x11Fu:
        case 0x120u:
        case 0x121u:
        case 0x122u:
        case 0x123u:
        case 0x124u:
        case 0x125u:
        case 0x160u:
        case 0x161u:
        case 0x162u:
        case 0x163u:
        case 0x164u:
        case 0x165u:
        case 0x166u:
        case 0x167u:
        case 0x168u:
        case 0x169u:
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
        case 0x1A2u:
        case 0x1A3u:
        case 0x1A4u:
        case 0x1A5u:
        case 0x1A6u:
        case 0x1A7u:
        case 0x1A8u:
        case 0x1A9u:
        case 0x1AAu:
        case 0x1ABu:
        case 0x1ACu:
        case 0x1ADu:
        case 0x1AEu:
          return 0;
        case 0x68u:
        case 0x1B5u:
        case 0x1B6u:
        case 0x1B8u:
        case 0x1C0u:
        case 0x1C1u:
          return 8;
        case 0x69u:
          return 1024;
        case 0x6Au:
          return 512;
        case 0x6Bu:
          return 256;
        case 0x6Cu:
        case 0x6Du:
        case 0x6Eu:
        case 0x6Fu:
        case 0x70u:
        case 0x71u:
        case 0x72u:
        case 0x73u:
        case 0x74u:
        case 0x75u:
        case 0x76u:
        case 0x77u:
        case 0x78u:
        case 0x79u:
        case 0xADu:
        case 0xAEu:
        case 0xAFu:
        case 0xB0u:
        case 0xB1u:
        case 0xB2u:
        case 0xB3u:
        case 0xB4u:
        case 0xB5u:
        case 0xB6u:
        case 0xB7u:
        case 0xB8u:
        case 0xB9u:
        case 0xBAu:
        case 0xBBu:
        case 0xBCu:
        case 0xBDu:
        case 0xBEu:
        case 0xBFu:
        case 0xC0u:
        case 0xC1u:
        case 0xC2u:
        case 0xC3u:
        case 0xC4u:
        case 0xC5u:
        case 0xC6u:
        case 0xC7u:
        case 0xC8u:
        case 0xC9u:
        case 0xCAu:
        case 0xCBu:
        case 0xCCu:
        case 0xCDu:
        case 0xCEu:
        case 0xCFu:
        case 0xD0u:
        case 0xD1u:
        case 0xD2u:
        case 0xD3u:
        case 0xD4u:
        case 0xD5u:
        case 0xD6u:
        case 0xD7u:
        case 0xD8u:
        case 0xD9u:
        case 0xDAu:
        case 0xDBu:
        case 0xDCu:
        case 0xDDu:
        case 0xDEu:
        case 0xDFu:
        case 0xE0u:
        case 0xE1u:
        case 0xE2u:
        case 0xE3u:
        case 0xE4u:
        case 0xE5u:
        case 0xE6u:
        case 0xE7u:
        case 0xE8u:
        case 0xE9u:
        case 0xEAu:
        case 0xEBu:
        case 0xECu:
        case 0xEDu:
        case 0xEEu:
        case 0xEFu:
        case 0xF0u:
        case 0xF1u:
        case 0xF2u:
        case 0xF3u:
        case 0x1AFu:
        case 0x1B3u:
          return 0;
        case 0x86u:
        case 0x87u:
        case 0x88u:
        case 0x89u:
        case 0x8Au:
        case 0x8Bu:
        case 0x8Cu:
        case 0x8Du:
        case 0x8Eu:
        case 0x8Fu:
        case 0xA4u:
        case 0xA5u:
        case 0xA6u:
        case 0xA7u:
        case 0xA8u:
        case 0x126u:
        case 0x127u:
        case 0x128u:
        case 0x129u:
        case 0x12Au:
        case 0x12Bu:
        case 0x12Cu:
        case 0x12Du:
        case 0x12Eu:
        case 0x12Fu:
        case 0x130u:
        case 0x131u:
        case 0x132u:
        case 0x133u:
        case 0x134u:
        case 0x135u:
        case 0x136u:
        case 0x137u:
        case 0x138u:
        case 0x139u:
        case 0x13Au:
        case 0x13Bu:
        case 0x13Cu:
        case 0x13Du:
        case 0x13Eu:
        case 0x13Fu:
        case 0x140u:
        case 0x141u:
        case 0x142u:
        case 0x143u:
        case 0x144u:
        case 0x145u:
        case 0x146u:
        case 0x147u:
        case 0x148u:
        case 0x149u:
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
        case 0x184u:
        case 0x185u:
        case 0x186u:
        case 0x187u:
        case 0x188u:
        case 0x189u:
        case 0x18Au:
          return 0;
        case 0x90u:
        case 0x91u:
        case 0x92u:
        case 0x93u:
        case 0x94u:
        case 0x95u:
        case 0x96u:
        case 0x97u:
        case 0xA9u:
        case 0xAAu:
        case 0xABu:
        case 0xACu:
        case 0x14Au:
        case 0x14Bu:
        case 0x14Cu:
        case 0x14Du:
        case 0x14Eu:
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
          return 0;
        case 0x1B0u:
          return 128;
        case 0x1B1u:
          return 128;
        case 0x1B2u:
        case 0x1E8u:
        case 0x1E9u:
        case 0x1EAu:
        case 0x1EBu:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 8LL);
        case 0x1B4u:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 10LL);
        case 0x1B7u:
        case 0x1C2u:
          v12 = (unsigned int)sub_102DB30(*(_QWORD *)(a1 + 17448), *(unsigned int *)(*(_QWORD *)(a1 + 17448) + 152LL));
          sub_102DC90(*(_QWORD *)(a1 + 17448), *(unsigned int *)(*(_QWORD *)(a1 + 17448) + 152LL));
          return v12;
        case 0x1B9u:
          v12 = (unsigned int)sub_102DB30(*(_QWORD *)(a1 + 17448), *(unsigned int *)(*(_QWORD *)(a1 + 17448) + 160LL));
          sub_102DC90(*(_QWORD *)(a1 + 17448), *(unsigned int *)(*(_QWORD *)(a1 + 17448) + 160LL));
          return v12;
        case 0x1BAu:
          v12 = (unsigned int)sub_102DB30(*(_QWORD *)(a1 + 17448), *(unsigned int *)(*(_QWORD *)(a1 + 17448) + 164LL));
          sub_102DC90(*(_QWORD *)(a1 + 17448), *(unsigned int *)(*(_QWORD *)(a1 + 17448) + 164LL));
          return v12;
        case 0x1BBu:
        case 0x1C3u:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 12LL);
        case 0x1BCu:
        case 0x1C4u:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 14LL);
        case 0x1BDu:
        case 0x1C5u:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 30LL);
        case 0x1BEu:
        case 0x1C6u:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 32LL);
        case 0x1BFu:
        case 0x1C7u:
          return 128;
        case 0x1C8u:
        case 0x1CBu:
        case 0x1D4u:
        case 0x1D7u:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 44LL);
        case 0x1C9u:
        case 0x1CCu:
        case 0x1D5u:
        case 0x1D8u:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 46LL);
        case 0x1CAu:
        case 0x1CDu:
        case 0x1D6u:
        case 0x1D9u:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 48LL);
        case 0x1CEu:
        case 0x1D1u:
        case 0x1DAu:
        case 0x1DDu:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 50LL);
        case 0x1CFu:
        case 0x1D2u:
        case 0x1DBu:
        case 0x1DEu:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 52LL);
        case 0x1D0u:
        case 0x1D3u:
        case 0x1DCu:
        case 0x1DFu:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 54LL);
        case 0x1E0u:
        case 0x1E4u:
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 17448) + 104LL))(*(_QWORD *)(a1 + 17448))
            && (v53 = *(_QWORD *)(a1 + 2320), *(_DWORD *)(v53 + 64))
            && (*(_BYTE *)(v53 + 68) & 8) != 0 )
          {
            return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17456) + 16LL);
          }
          else
          {
            return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 16LL);
          }
        case 0x1E1u:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 20LL);
        case 0x1E2u:
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 22LL);
        case 0x1E3u:
          v46 = *(_QWORD *)(a1 + 2320);
          v47 = *(_QWORD *)(a1 + 17448);
          v12 = *(unsigned __int8 *)(v47 + 24);
          if ( *(_DWORD *)(v46 + 64) )
          {
            if ( (*(_BYTE *)(v46 + 68) & 8) != 0 )
            {
              v48 = *(_QWORD *)(a1 + 17456);
              v49 = *(_BYTE *)(v48 + 24);
              if ( v49 != (_BYTE)v12 || *(_BYTE *)(v47 + 25) != *(_BYTE *)(v48 + 25) )
                return v49;
            }
          }
          return v12;
        case 0x1E5u:
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 17448) + 112LL))(*(_QWORD *)(a1 + 17448)) )
            return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 18LL);
          v64 = *(_QWORD *)(a1 + 2320);
          if ( (*(_BYTE *)(v64 + 96) & 0x10) == 0 && (!*(_DWORD *)(v64 + 64) || (*(_BYTE *)(v64 + 68) & 8) == 0)
            || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 17456) + 112LL))(*(_QWORD *)(a1 + 17456)) )
          {
            return 0;
          }
          v12 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 17456) + 18LL);
          break;
        case 0x1E6u:
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 17448) + 96LL))(*(_QWORD *)(a1 + 17448))
            && (v45 = *(_QWORD *)(a1 + 2320), *(_DWORD *)(v45 + 64))
            && (*(_BYTE *)(v45 + 68) & 8) != 0 )
          {
            return 128;
          }
          else
          {
            return 128;
          }
        case 0x1E7u:
          return 128;
      }
      return v12;
    case 14:
      return 2 * sub_A97D20(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL));
    case 16:
    case 17:
    case 30:
    case 35:
      v7 = *(_QWORD *)(a2 + 24);
      goto LABEL_3;
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 29:
    case 32:
    case 38:
    case 39:
      v26 = sub_F5E0F0(a2);
      v27 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      if ( v26 )
        v27 = (__int64 *)(*(_QWORD *)(a2 + 8LL * ((unsigned int)sub_F5E0F0(a2) - 1) + 64) & 0xFFFFFFFFFFFFFFF0LL);
      v8 = *v27;
      return sub_A97D20(a1, v8);
    case 25:
    case 26:
      return 0;
    case 28:
      v35 = *(_DWORD *)(a2 + 36);
      v12 = (unsigned int)(8 * v35);
      if ( !(*(_DWORD *)(a2 + 40) | (8 * v35)) )
        return 32;
      return v12;
    case 31:
      return sub_A97D20(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL))
           * *(unsigned int *)(a2 + 44)
           * (unsigned __int64)*(unsigned int *)(a2 + 40);
    case 33:
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 17432) + 16LL))(
               *(_QWORD *)(a1 + 17432),
               a2);
    case 34:
      return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 8LL);
    case 36:
      if ( *(char *)(sub_F62610(a2, a2, (unsigned __int8)v5, v5, a5) + 28) < 0 )
        return 8;
      sub_F62610(a2, a2, v37, v38, v39);
      v54 = *(_QWORD *)sub_EE3BF0(a1);
      v12 = sub_A97FD0(a1) * v54;
      sub_A97FD0(a1);
      return v12;
    case 37:
      goto LABEL_11;
    case 41:
      v12 = sub_A57040(*(unsigned __int8 **)(a1 + 17448));
      sub_A57070(*(unsigned __int8 **)(a1 + 17448));
      return v12;
    case 43:
    case 44:
      v36 = *(_QWORD *)&byte_8[sub_9B4870(a2, a2, (unsigned __int8)v5, v5, a5) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v36 & 8) == 0 )
      {
        v10 = *(unsigned __int8 **)(a1 + 17448);
        return v10[8];
      }
      v10 = *(unsigned __int8 **)(a1 + 17448);
      if ( !((*(_DWORD *)((char *)&qword_18 + (v36 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v36 & 7)) >> 9) )
        return v10[8];
LABEL_63:
      v12 = sub_A57040(v10);
      sub_A57070(*(unsigned __int8 **)(a1 + 17448));
      return v12;
    case 45:
    case 49:
      if ( (*(_BYTE *)(a2 + 18) & 8) == 0 )
        goto LABEL_11;
      v7 = sub_F5E8A0(a2);
      goto LABEL_3;
    case 46:
      if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
LABEL_12:
        v7 = *(_QWORD *)(a2 + 48);
      else
LABEL_11:
        v7 = *(_QWORD *)(a2 + 8);
      goto LABEL_3;
    case 47:
    case 48:
      if ( *(char *)(sub_F60F10(a2, a2, (unsigned __int8)v5, v5, a5) + 28) < 0 )
        return 8;
      if ( *(_BYTE *)(a2 + 16) == 47 )
      {
        v16 = sub_F60F10(a2, a2, v13, v14, v15);
        v17 = sub_6F3660(v16);
        v20 = sub_F63050(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL), a2, v18, v19);
        v21 = sub_A97D20(a1, v20);
        sub_B8C970(v16);
        return v21;
      }
      v56 = sub_F60F10(a2, a2, v13, v14, v15);
      v57 = *(_QWORD *)sub_EDE580(a1, v56);
      v12 = sub_A97FD0(a1) * v57;
      sub_A97FD0(a1);
      if ( (*(_BYTE *)(v56 + 29) & 1) != 0 )
      {
        v58 = sub_B8C3D0(v56);
        v59 = *(__int64 **)v58;
        v60 = *(_QWORD *)v58 + 8LL * *(unsigned int *)(v58 + 8);
        if ( *(_QWORD *)v58 >= v60 )
        {
          if ( v59 != (__int64 *)v60 && *(_WORD *)(*(_QWORD *)v60 + 36LL) != 126 )
          {
            v62 = (__int64 *)(v60 + 8);
            do
            {
              if ( v62 == v59 )
                break;
              v63 = *v62++;
            }
            while ( *(_WORD *)(v63 + 36) != 126 );
          }
        }
        else
        {
          v61 = *(__int64 **)v58;
          do
          {
            if ( *(_WORD *)(*v61 + 36) == 126 )
              break;
            ++v61;
          }
          while ( (__int64 *)v60 != v61 );
        }
      }
      return v12;
    case 50:
    case 51:
      v7 = sub_F64EA0(a2);
      goto LABEL_3;
    case 52:
      v7 = sub_F64D80(a2);
      goto LABEL_3;
    case 53:
      v25 = sub_F5DAC0(a2);
      v12 = sub_A97D20(a1, *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL));
      sub_B8C970(*(_QWORD *)(a2 + 32));
      return v12;
    case 56:
      v7 = sub_F5DBF0(a2);
LABEL_3:
      v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
      return sub_A97D20(a1, v8);
    case 57:
    case 58:
      v40 = sub_A97D20(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL));
      v41 = (unsigned __int8)sub_F579D0(a2, a1) == 0;
      v42 = *(_DWORD *)(a2 + 20);
      v43 = v42;
      if ( v41 )
      {
        v42 *= v40;
        v43 = v42;
      }
      if ( v43 <= 8 )
        return 8;
      v12 = v42;
      if ( (v43 & (v43 - 1)) != 0 )
      {
        _BitScanReverse(&v55, v43 - 1);
        return (unsigned int)(1 << (32 - (v55 ^ 0x1F))) * ((v12 - 1) / (unsigned int)(1 << (32 - (v55 ^ 0x1F))) + 1);
      }
      return v12;
    default:
      return 0;
  }
}
