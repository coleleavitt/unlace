__int64 __fastcall sub_FE09E0(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  double v11; // xmm1_8
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  void *v16; // rdx
  __int64 v17; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-60h]
  double v19; // [rsp+18h] [rbp-50h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v17 = a1;
  v18 = a2;
  if ( a2 <= 7 )
    goto LABEL_2;
  if ( *(_QWORD *)a1 == 0x3D73736572646461LL )
  {
    v5 = 1;
    goto LABEL_38;
  }
  if ( a2 <= 0xF )
  {
LABEL_2:
    if ( a2 != 15 )
    {
      if ( a2 <= 9 )
        goto LABEL_4;
      goto LABEL_61;
    }
  }
  else
  {
    v5 = 2;
    v13 = *(_QWORD *)a1 ^ 0x2D7265746E696F70LL;
    if ( !(v13 | *(_QWORD *)(a1 + 8) ^ 0x3D657261706D6F63LL) )
      goto LABEL_38;
    if ( a2 != 16 && !(v13 | *(_QWORD *)(a1 + 8) ^ 0x7463617274627573LL) )
    {
      v5 = 4;
      if ( *(_BYTE *)(a1 + 16) == 61 )
        goto LABEL_38;
    }
  }
  if ( *(_QWORD *)a1 == 0x612D6C656E72656BLL && *(_DWORD *)(a1 + 8) == 1701995620 && *(_WORD *)(a1 + 12) == 29555 )
  {
    v5 = 8;
    if ( *(_BYTE *)(a1 + 14) == 61 )
      goto LABEL_38;
  }
LABEL_61:
  if ( *(_QWORD *)a1 == 0x7365726464617768LL )
  {
    v5 = 16;
    if ( *(_WORD *)(a1 + 8) == 15731 )
      goto LABEL_38;
  }
  if ( a2 > 0x10 )
  {
    if ( !(*(_QWORD *)a1 ^ 0x682D6C656E72656BLL | *(_QWORD *)(a1 + 8) ^ 0x7373657264646177LL) )
    {
      v5 = 32;
      if ( *(_BYTE *)(a1 + 16) == 61 )
        goto LABEL_38;
    }
    goto LABEL_64;
  }
LABEL_4:
  if ( a2 <= 0xC )
  {
    if ( a2 != 12 )
      goto LABEL_6;
    goto LABEL_65;
  }
LABEL_64:
  if ( *(_QWORD *)a1 == 0x732D6761746D656DLL && *(_DWORD *)(a1 + 8) == 1801675124 )
  {
    v5 = 64;
    if ( *(_BYTE *)(a1 + 12) == 61 )
      goto LABEL_38;
  }
LABEL_65:
  if ( *(_QWORD *)a1 == 0x682D6761746D656DLL )
  {
    v5 = 128;
    if ( *(_DWORD *)(a1 + 8) == 1030775141 )
      goto LABEL_38;
  }
LABEL_6:
  if ( a2 > 0xE
    && *(_QWORD *)a1 == 0x672D6761746D656DLL
    && *(_DWORD *)(a1 + 8) == 1633841004
    && *(_WORD *)(a1 + 12) == 29548 )
  {
    v5 = 256;
    if ( *(_BYTE *)(a1 + 14) == 61 )
      goto LABEL_38;
  }
  v5 = (unsigned __int64)(a3 != 0) << 9;
  if ( a2 <= 6 )
  {
    if ( a2 > 4 && *(_DWORD *)a1 == 1701869940 && *(_BYTE *)(a1 + 4) == 61 )
    {
LABEL_357:
      v5 = 0x4000;
      goto LABEL_38;
    }
  }
  else
  {
    if ( *(_DWORD *)a1 == 1953326445 && *(_WORD *)(a1 + 4) == 26465 && *(_BYTE *)(a1 + 6) == 61 )
      goto LABEL_38;
    if ( *(_DWORD *)a1 == 1869440365 && *(_WORD *)(a1 + 4) == 31090 )
    {
      v5 = 1024;
      if ( *(_BYTE *)(a1 + 6) == 61 )
        goto LABEL_38;
    }
    if ( a2 > 0xD && *(_QWORD *)a1 == 0x6D2D6C656E72656BLL && *(_DWORD *)(a1 + 8) == 1919905125 )
    {
      v5 = 2048;
      if ( *(_WORD *)(a1 + 12) == 15737 )
        goto LABEL_38;
    }
    if ( *(_DWORD *)a1 == 2054845798 && *(_WORD *)(a1 + 4) == 29285 )
    {
      v5 = 4096;
      if ( *(_BYTE *)(a1 + 6) == 61 )
        goto LABEL_38;
    }
    if ( a2 > 0xE
      && *(_QWORD *)a1 == 0x6E2D72657A7A7566LL
      && *(_DWORD *)(a1 + 8) == 1768697199
      && *(_WORD *)(a1 + 12) == 27502 )
    {
      v5 = 0x2000;
      if ( *(_BYTE *)(a1 + 14) == 61 )
        goto LABEL_38;
    }
    if ( *(_DWORD *)a1 == 1701869940 && *(_BYTE *)(a1 + 4) == 61 )
      goto LABEL_357;
    if ( *(_DWORD *)a1 == 1701996660 && *(_WORD *)(a1 + 4) == 25697 )
    {
      v5 = 0x8000;
      if ( *(_BYTE *)(a1 + 6) == 61 )
        goto LABEL_38;
    }
    if ( a2 > 9 )
    {
      if ( *(_QWORD *)a1 == 0x61636972656D756ELL )
      {
        v5 = 0x10000;
        if ( *(_WORD *)(a1 + 8) == 15724 )
          goto LABEL_38;
      }
LABEL_19:
      if ( *(_QWORD *)a1 == 0x656D69746C616572LL )
      {
        v5 = 0x20000;
        if ( *(_BYTE *)(a1 + 8) == 61 )
          goto LABEL_38;
      }
      goto LABEL_20;
    }
  }
  if ( a2 == 9 )
    goto LABEL_19;
  if ( a2 <= 4 )
    goto LABEL_73;
LABEL_20:
  if ( *(_DWORD *)a1 == 1801545068 )
  {
    v5 = (__int64)&stru_40000;
    if ( *(_BYTE *)(a1 + 4) == 61 )
      goto LABEL_38;
  }
  if ( a2 > 9 )
  {
    if ( *(_QWORD *)a1 == 0x6E656D6E67696C61LL )
    {
      v5 = 0x80000;
      if ( *(_WORD *)(a1 + 8) == 15732 )
        goto LABEL_38;
    }
    if ( a2 > 0xC && *(_QWORD *)a1 == 0x6F622D7961727261LL && *(_DWORD *)(a1 + 8) == 1935961717 )
    {
      v5 = (__int64)&stru_100000;
      if ( *(_BYTE *)(a1 + 12) == 61 )
        goto LABEL_38;
    }
  }
  if ( *(_DWORD *)a1 == 1819242338 )
  {
    v5 = 0x200000;
    if ( *(_BYTE *)(a1 + 4) == 61 )
      goto LABEL_38;
  }
  if ( a2 > 7 && *(_QWORD *)a1 == 0x3D6E69746C697562LL )
  {
    v5 = (__int64)&loc_400000;
    goto LABEL_38;
  }
  if ( *(_DWORD *)a1 == 1836412517 )
  {
    v5 = 0x800000;
    if ( *(_BYTE *)(a1 + 4) == 61 )
      goto LABEL_38;
  }
  if ( a2 <= 0x13 )
  {
LABEL_73:
    if ( a2 <= 8 )
      goto LABEL_74;
    goto LABEL_32;
  }
  if ( !(*(_QWORD *)a1 ^ 0x61632D74616F6C66LL | *(_QWORD *)(a1 + 8) ^ 0x667265766F2D7473LL) )
  {
    v5 = 0x1000000;
    if ( *(_DWORD *)(a1 + 16) == 1031237484 )
      goto LABEL_38;
  }
  if ( a2 != 20
    && !(*(_QWORD *)a1 ^ 0x69642D74616F6C66LL | *(_QWORD *)(a1 + 8) ^ 0x2D79622D65646976LL)
    && *(_DWORD *)(a1 + 16) == 1869768058 )
  {
    v5 = (__int64)&loc_2000000;
    if ( *(_BYTE *)(a1 + 20) == 61 )
      goto LABEL_38;
  }
LABEL_32:
  if ( *(_QWORD *)a1 == 0x6E6F6974636E7566LL )
  {
    v5 = 0x4000000;
    if ( *(_BYTE *)(a1 + 8) == 61 )
      goto LABEL_38;
  }
  if ( a2 > 0x16 )
  {
    if ( !(*(_QWORD *)a1 ^ 0x2D72656765746E69LL | *(_QWORD *)(a1 + 8) ^ 0x622D656469766964LL)
      && *(_DWORD *)(a1 + 16) == 1702505849
      && *(_WORD *)(a1 + 20) == 28530 )
    {
      v5 = 0x8000000;
      if ( *(_BYTE *)(a1 + 22) == 61 )
        goto LABEL_38;
    }
    goto LABEL_35;
  }
LABEL_74:
  if ( a2 <= 0x11 )
  {
    if ( a2 <= 4 )
      goto LABEL_76;
    goto LABEL_36;
  }
LABEL_35:
  if ( !(*(_QWORD *)a1 ^ 0x2D6C6C756E6E6F6ELL | *(_QWORD *)(a1 + 8) ^ 0x7475626972747461LL) )
  {
    v5 = 0x10000000;
    if ( *(_WORD *)(a1 + 16) == 15717 )
      goto LABEL_38;
  }
LABEL_36:
  if ( *(_DWORD *)a1 == 1819047278 )
  {
    v5 = 0x20000000;
    if ( *(_BYTE *)(a1 + 4) == 61 )
      goto LABEL_38;
  }
LABEL_76:
  if ( a2 > 0xF )
  {
    v5 = 0x40000000;
    v14 = *(_QWORD *)a1 ^ 0x6C6962616C6C756ELL;
    if ( !(v14 | *(_QWORD *)(a1 + 8) ^ 0x3D6772612D797469LL) )
      goto LABEL_38;
    if ( a2 > 0x12 )
    {
      if ( !(v14 | *(_QWORD *)(a1 + 8) ^ 0x697373612D797469LL) && *(_WORD *)(a1 + 16) == 28263 )
      {
        v5 = 0x80000000LL;
        if ( *(_BYTE *)(a1 + 18) == 61 )
          goto LABEL_38;
      }
      if ( !(*(_QWORD *)a1 ^ 0x6C6962616C6C756ELL | *(_QWORD *)(a1 + 8) ^ 0x757465722D797469LL)
        && *(_WORD *)(a1 + 16) == 28274 )
      {
        v5 = 0x100000000LL;
        if ( *(_BYTE *)(a1 + 18) == 61 )
          goto LABEL_38;
      }
    }
  }
  v5 = (unsigned __int64)(a3 != 0) << 33;
  if ( a2 > 0xB )
  {
    if ( *(_QWORD *)a1 == 0x6C6962616C6C756ELL && *(_DWORD *)(a1 + 8) == 1031369833 )
      goto LABEL_38;
    if ( *(_QWORD *)a1 == 0x732D7463656A626FLL )
    {
      v5 = 0x400000000LL;
      if ( *(_DWORD *)(a1 + 8) == 1030060649 )
        goto LABEL_38;
    }
    if ( a2 > 0x10 && !(*(_QWORD *)a1 ^ 0x2D7265746E696F70LL | *(_QWORD *)(a1 + 8) ^ 0x776F6C667265766FLL) )
    {
      v5 = 0x800000000LL;
      if ( *(_BYTE *)(a1 + 16) == 61 )
        goto LABEL_38;
    }
  }
  else if ( a2 <= 6 )
  {
    goto LABEL_85;
  }
  if ( *(_DWORD *)a1 == 1970562418 && *(_WORD *)(a1 + 4) == 28274 )
  {
    v5 = 0x1000000000LL;
    if ( *(_BYTE *)(a1 + 6) == 61 )
      goto LABEL_38;
  }
  if ( a2 <= 0x19 )
  {
LABEL_85:
    if ( a2 <= 0xA )
      goto LABEL_86;
    goto LABEL_128;
  }
  if ( !(*(_QWORD *)a1 ^ 0x2D736E7275746572LL | *(_QWORD *)(a1 + 8) ^ 0x2D6C6C756E6E6F6ELL)
    && *(_QWORD *)(a1 + 16) == 0x7475626972747461LL )
  {
    v5 = 0x2000000000LL;
    if ( *(_WORD *)(a1 + 24) == 15717 )
      goto LABEL_38;
  }
LABEL_128:
  if ( *(_QWORD *)a1 == 0x61622D7466696873LL && *(_WORD *)(a1 + 8) == 25971 )
  {
    v5 = 0x4000000000LL;
    if ( *(_BYTE *)(a1 + 10) == 61 )
      goto LABEL_38;
  }
LABEL_86:
  if ( a2 <= 0xE )
  {
    v5 = (unsigned __int64)(a3 != 0) << 40;
    goto LABEL_88;
  }
  if ( *(_QWORD *)a1 == 0x78652D7466696873LL && *(_DWORD *)(a1 + 8) == 1701736304 && *(_WORD *)(a1 + 12) == 29806 )
  {
    v5 = 0x8000000000LL;
    if ( *(_BYTE *)(a1 + 14) == 61 )
      goto LABEL_38;
  }
  v5 = 0x10000000000LL;
  if ( !a3 )
  {
    v5 = 0;
LABEL_88:
    if ( a2 <= 5 )
      goto LABEL_89;
  }
  if ( *(_DWORD *)a1 == 1718184051 && *(_WORD *)(a1 + 4) == 15732 )
    goto LABEL_38;
  if ( a2 > 0x17 )
  {
    if ( !(*(_QWORD *)a1 ^ 0x692D64656E676973LL | *(_QWORD *)(a1 + 8) ^ 0x6F2D72656765746ELL) )
    {
      v5 = 0x20000000000LL;
      if ( *(_QWORD *)(a1 + 16) == 0x3D776F6C66726576LL )
        goto LABEL_38;
    }
LABEL_194:
    if ( *(_QWORD *)a1 == 0x6168636165726E75LL )
    {
      v5 = 0x40000000000LL;
      if ( *(_DWORD *)(a1 + 8) == 1030057058 )
        goto LABEL_38;
    }
    goto LABEL_195;
  }
LABEL_89:
  if ( a2 > 0xB )
    goto LABEL_194;
  if ( a2 <= 9 )
  {
    if ( a2 <= 4 )
      goto LABEL_92;
    goto LABEL_196;
  }
LABEL_195:
  if ( *(_QWORD *)a1 == 0x6E756F622D616C76LL )
  {
    v5 = 0x80000000000LL;
    if ( *(_WORD *)(a1 + 8) == 15716 )
      goto LABEL_38;
  }
LABEL_196:
  if ( *(_DWORD *)a1 == 1920233590 )
  {
    v5 = 0x100000000000LL;
    if ( *(_BYTE *)(a1 + 4) == 61 )
      goto LABEL_38;
  }
  if ( a2 > 0x19 )
  {
    if ( !(*(_QWORD *)a1 ^ 0x64656E6769736E75LL | *(_QWORD *)(a1 + 8) ^ 0x72656765746E692DLL)
      && *(_QWORD *)(a1 + 16) == 0x6F6C667265766F2DLL )
    {
      v5 = 0x200000000000LL;
      if ( *(_WORD *)(a1 + 24) == 15735 )
        goto LABEL_38;
    }
    goto LABEL_200;
  }
LABEL_92:
  if ( a2 <= 0x13 )
  {
    if ( a2 <= 8 )
      goto LABEL_94;
    goto LABEL_202;
  }
LABEL_200:
  if ( !(*(_QWORD *)a1 ^ 0x64656E6769736E75LL | *(_QWORD *)(a1 + 8) ^ 0x622D74666968732DLL) )
  {
    v5 = 0x400000000000LL;
    if ( *(_DWORD *)(a1 + 16) == 1030058849 )
      goto LABEL_38;
  }
LABEL_202:
  if ( *(_QWORD *)a1 == 0x776F6C6661746164LL )
  {
    v5 = 0x800000000000LL;
    if ( *(_BYTE *)(a1 + 8) == 61 )
      goto LABEL_38;
  }
LABEL_94:
  if ( a2 > 0xF )
  {
    v5 = 0x1000000000000LL;
    if ( !(*(_QWORD *)a1 ^ 0x747361632D696663LL | *(_QWORD *)(a1 + 8) ^ 0x3D7463697274732DLL) )
      goto LABEL_38;
    if ( a2 != 16 && !(*(_QWORD *)a1 ^ 0x697265642D696663LL | *(_QWORD *)(a1 + 8) ^ 0x747361632D646576LL) )
    {
      v5 = 0x2000000000000LL;
      if ( *(_BYTE *)(a1 + 16) == 61 )
        goto LABEL_38;
    }
  }
  else if ( a2 <= 9 )
  {
    goto LABEL_96;
  }
  if ( *(_QWORD *)a1 == 0x6C6163692D696663LL )
  {
    v5 = 0x4000000000000LL;
    if ( *(_WORD *)(a1 + 8) == 15724 )
      goto LABEL_38;
  }
LABEL_96:
  if ( a2 <= 0xA )
  {
    if ( a2 != 10 )
    {
      v5 = (unsigned __int64)(a3 != 0) << 55;
      goto LABEL_134;
    }
  }
  else
  {
    if ( *(_QWORD *)a1 == 0x6163666D2D696663LL && *(_WORD *)(a1 + 8) == 27756 )
    {
      v5 = 0x8000000000000LL;
      if ( *(_BYTE *)(a1 + 10) == 61 )
        goto LABEL_38;
    }
    if ( a2 > 0x12
      && !(*(_QWORD *)a1 ^ 0x65726E752D696663LL | *(_QWORD *)(a1 + 8) ^ 0x61632D646574616CLL)
      && *(_WORD *)(a1 + 16) == 29811 )
    {
      v5 = 0x10000000000000LL;
      if ( *(_BYTE *)(a1 + 18) == 61 )
        goto LABEL_38;
    }
    if ( *(_QWORD *)a1 == 0x6163766E2D696663LL && *(_WORD *)(a1 + 8) == 27756 )
    {
      v5 = 0x20000000000000LL;
      if ( *(_BYTE *)(a1 + 10) == 61 )
        goto LABEL_38;
    }
  }
  if ( *(_QWORD *)a1 == 0x6C6163762D696663LL )
  {
    v5 = 0x40000000000000LL;
    if ( *(_WORD *)(a1 + 8) == 15724 )
      goto LABEL_38;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)a1 == 1030317667 )
    {
      v5 = 0x80000000000000LL;
      goto LABEL_38;
    }
    goto LABEL_103;
  }
  v5 = 0;
LABEL_134:
  if ( a2 <= 3 )
    goto LABEL_135;
  if ( *(_DWORD *)a1 == 1030317667 )
    goto LABEL_38;
LABEL_103:
  if ( a2 > 4 )
  {
    if ( *(_DWORD *)a1 == 1768317803 )
    {
      v5 = 0x100000000000000LL;
      if ( *(_BYTE *)(a1 + 4) == 61 )
        goto LABEL_38;
    }
    if ( a2 > 0xA )
    {
      if ( *(_QWORD *)a1 == 0x6174732D65666173LL && *(_WORD *)(a1 + 8) == 27491 )
      {
        v5 = 0x200000000000000LL;
        if ( *(_BYTE *)(a1 + 10) == 61 )
          goto LABEL_38;
      }
      if ( a2 > 0x11 )
      {
        if ( !(*(_QWORD *)a1 ^ 0x632D776F64616873LL | *(_QWORD *)(a1 + 8) ^ 0x636174732D6C6C61LL) )
        {
          v5 = 0x400000000000000LL;
          if ( *(_WORD *)(a1 + 16) == 15723 )
            goto LABEL_38;
        }
        if ( !a3 )
        {
LABEL_111:
          if ( *(_QWORD *)a1 == 0x656E696665646E75LL )
          {
            v5 = 0;
            if ( *(_WORD *)(a1 + 8) == 15716 )
              goto LABEL_38;
          }
          goto LABEL_301;
        }
        goto LABEL_300;
      }
    }
  }
LABEL_135:
  if ( !a3 )
  {
    if ( a2 <= 9 )
      goto LABEL_168;
    goto LABEL_111;
  }
  v5 = 0x1000000000000000LL;
  if ( a2 > 9 )
  {
LABEL_300:
    if ( *(_QWORD *)a1 == 0x656E696665646E75LL )
    {
      v5 = 0x800000000000000LL;
      if ( *(_WORD *)(a1 + 8) == 15716 )
        goto LABEL_38;
    }
LABEL_301:
    v5 = (unsigned __int64)(a3 != 0) << 60;
  }
  if ( a2 > 0xE )
  {
    if ( *(_QWORD *)a1 == 0x656E696665646E75LL
      && *(_DWORD *)(a1 + 8) == 1920216420
      && *(_WORD *)(a1 + 12) == 28769
      && *(_BYTE *)(a1 + 14) == 61 )
    {
      goto LABEL_38;
    }
    if ( a2 > 0x24 )
    {
      if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x656E6769736E752DLL)
        && !(*(_QWORD *)(a1 + 16) ^ 0x656765746E692D64LL | *(_QWORD *)(a1 + 24) ^ 0x61636E7572742D72LL)
        && *(_DWORD *)(a1 + 32) == 1852795252 )
      {
        v5 = 0x2000000000000000LL;
        if ( *(_BYTE *)(a1 + 36) == 61 )
          goto LABEL_38;
      }
      goto LABEL_143;
    }
  }
LABEL_168:
  if ( a2 <= 0x22 )
  {
    v5 = 0x8000000000000000LL;
    if ( a3 )
    {
      if ( a2 <= 0x1B )
        goto LABEL_171;
      goto LABEL_308;
    }
LABEL_307:
    v5 = 0;
    if ( a2 <= 0x1B )
      goto LABEL_171;
LABEL_308:
    if ( *(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x72656765746E692DLL
      || *(_QWORD *)(a1 + 16) != 0x7461636E7572742DLL
      || *(_DWORD *)(a1 + 24) != 1030647657 )
    {
      goto LABEL_148;
    }
    v6 = 0;
    if ( !a3 )
    {
LABEL_39:
      if ( v5 )
        goto LABEL_40;
      return 0;
    }
LABEL_38:
    v6 = 0;
    goto LABEL_39;
  }
LABEL_143:
  if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x2D64656E6769732DLL)
    && !(*(_QWORD *)(a1 + 16) ^ 0x2D72656765746E69LL | *(_QWORD *)(a1 + 24) ^ 0x697461636E757274LL)
    && *(_WORD *)(a1 + 32) == 28271 )
  {
    v5 = 0x4000000000000000LL;
    if ( *(_BYTE *)(a1 + 34) == 61 )
      goto LABEL_38;
  }
  if ( !a3 )
    goto LABEL_307;
  if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x72656765746E692DLL)
    && *(_QWORD *)(a1 + 16) == 0x7461636E7572742DLL )
  {
    v5 = 0x8000000000000000LL;
    if ( *(_DWORD *)(a1 + 24) == 1030647657 )
      goto LABEL_38;
  }
LABEL_148:
  if ( a2 <= 0x1C )
  {
LABEL_171:
    v6 = 4LL * (a3 != 0);
    goto LABEL_172;
  }
  if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x72656765746E692DLL)
    && *(_QWORD *)(a1 + 16) == 0x68632D6E6769732DLL
    && *(_DWORD *)(a1 + 24) == 1701277281 )
  {
    v6 = 1;
    if ( *(_BYTE *)(a1 + 28) == 61 )
    {
      v5 = 0;
      goto LABEL_40;
    }
  }
  if ( a3 )
  {
    if ( a2 > 0x28 )
    {
      if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x72656765746E692DLL)
        && !(*(_QWORD *)(a1 + 16) ^ 0x656D68746972612DLL | *(_QWORD *)(a1 + 24) ^ 0x756C61762D636974LL)
        && *(_QWORD *)(a1 + 32) == 0x65676E6168632D65LL )
      {
        v6 = 2;
        if ( *(_BYTE *)(a1 + 40) == 61 )
          goto LABEL_166;
      }
      goto LABEL_157;
    }
    v6 = 4;
LABEL_172:
    if ( a2 <= 0x1B )
      goto LABEL_173;
    goto LABEL_158;
  }
  v6 = 0;
  if ( a2 <= 0x28 )
    goto LABEL_172;
  if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x72656765746E692DLL)
    && !(*(_QWORD *)(a1 + 16) ^ 0x656D68746972612DLL | *(_QWORD *)(a1 + 24) ^ 0x756C61762D636974LL)
    && *(_QWORD *)(a1 + 32) == 0x65676E6168632D65LL
    && *(_BYTE *)(a1 + 40) == 61 )
  {
    return 0;
  }
LABEL_157:
  v6 = a3 != 0 ? 4 : 0;
LABEL_158:
  if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x72656765746E692DLL)
    && *(_QWORD *)(a1 + 16) == 0x737265766E6F632DLL
    && *(_DWORD *)(a1 + 24) == 1030647657 )
  {
LABEL_165:
    if ( !v6 )
      return 0;
    goto LABEL_166;
  }
  if ( a2 > 0x1C )
  {
    if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x6C6569667469622DLL)
      && *(_QWORD *)(a1 + 16) == 0x7265766E6F632D64LL
      && *(_DWORD *)(a1 + 24) == 1852795251 )
    {
      v6 = 8;
      if ( *(_BYTE *)(a1 + 28) == 61 )
      {
        v5 = 0;
        goto LABEL_40;
      }
    }
    if ( a3 )
    {
LABEL_162:
      if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x737265766E6F632DLL) )
      {
        v6 = 16;
        if ( *(_DWORD *)(a1 + 16) == 1030647657 )
        {
LABEL_166:
          v5 = 0;
          goto LABEL_40;
        }
      }
      goto LABEL_163;
    }
LABEL_333:
    if ( !(*(_QWORD *)a1 ^ 0x746963696C706D69LL | *(_QWORD *)(a1 + 8) ^ 0x737265766E6F632DLL)
      && *(_DWORD *)(a1 + 16) == 1030647657 )
    {
      return 0;
    }
LABEL_163:
    v6 = 32LL * (a3 != 0);
    goto LABEL_164;
  }
LABEL_173:
  if ( a3 )
  {
    if ( a2 > 0x13 )
      goto LABEL_162;
    v6 = 32;
  }
  else
  {
    if ( a2 > 0x13 )
      goto LABEL_333;
    v6 = 0;
  }
  if ( a2 <= 7 )
  {
LABEL_177:
    v6 = (unsigned __int64)(a3 != 0) << 8;
    goto LABEL_178;
  }
LABEL_164:
  if ( *(_QWORD *)a1 == 0x3D72656765746E69LL )
    goto LABEL_165;
  if ( a2 <= 9 )
    goto LABEL_177;
  if ( *(_QWORD *)a1 == 0x7361632D636A626FLL )
  {
    v6 = 64;
    if ( *(_WORD *)(a1 + 8) == 15732 )
    {
      v5 = 0;
      goto LABEL_40;
    }
  }
  if ( a2 <= 0xC )
    goto LABEL_177;
  if ( *(_QWORD *)a1 == 0x6F622D6C61636F6CLL && *(_DWORD *)(a1 + 8) == 1935961717 )
  {
    v6 = 128;
    if ( *(_BYTE *)(a1 + 12) == 61 )
    {
      v5 = 0;
      goto LABEL_40;
    }
  }
  if ( a3 )
  {
    if ( *(_DWORD *)a1 == 1853189986 && *(_WORD *)(a1 + 4) == 29540 )
    {
      v6 = 256;
      if ( *(_BYTE *)(a1 + 6) == 61 )
      {
        v5 = 0;
        goto LABEL_40;
      }
    }
    goto LABEL_321;
  }
  v6 = 0;
LABEL_178:
  if ( a2 > 6 )
  {
    if ( *(_DWORD *)a1 == 1853189986 && *(_WORD *)(a1 + 4) == 29540 && *(_BYTE *)(a1 + 6) == 61 )
      goto LABEL_165;
  }
  else if ( a2 != 6 )
  {
    goto LABEL_180;
  }
LABEL_321:
  if ( *(_DWORD *)a1 == 1685414771 && *(_WORD *)(a1 + 4) == 15727 )
  {
    v6 = 512;
    v5 = 0;
    if ( !a3 )
    {
      v6 = 512;
      v5 = 0;
    }
    goto LABEL_40;
  }
LABEL_180:
  if ( !a3 || a2 <= 3 || *(_DWORD *)a1 != 1030515809 )
    return 0;
  v6 = 1024;
  v5 = 0;
LABEL_40:
  LOBYTE(v19) = 61;
  v8 = sub_2222D70(&v17, &v19, 1, 0);
  if ( v8 == -1 )
  {
    v22 = 0;
    v23 = 0;
    v20 = v17;
    v21 = v18;
  }
  else
  {
    v9 = v8 + 1;
    if ( v8 + 1 > v18 )
    {
      v9 = v18;
      v10 = 0;
    }
    else
    {
      v10 = v18 - v9;
    }
    v23 = v10;
    if ( v8 > v18 )
      v8 = v18;
    v20 = v17;
    v21 = v8;
    v22 = v9 + v17;
  }
  if ( (unsigned __int8)sub_2224350(&v22, &v19, 1) )
    return 0;
  v11 = v19;
  if ( v19 < 0.0 || v19 > 1.0 )
    return 0;
  v15 = sub_FE08B0(v5, v6);
  sub_FDD4D0(a4, v15, v16, v11);
  return 1;
}

