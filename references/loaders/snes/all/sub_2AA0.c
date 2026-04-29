unsigned __int64 __fastcall sub_2AA0(unsigned int *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  const char *v7; // rdx
  unsigned int v8; // eax
  const char *v9; // rdx
  char *v10; // rdx
  unsigned int v11; // eax
  const char *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v30; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v31; // [rsp+8h] [rbp-20h]

  v3 = *a1;
  v4 = *a2;
  v31 = __readfsqword(0x28u);
  v30 = v3;
  netnode_hashset(v4, "rom_size", &v30, 8, 72);
  v30 = a1[1];
  netnode_hashset(*a2, "ram_size", &v30, 8, 72);
  v5 = *a2;
  v30 = *((unsigned __int8 *)a1 + 8);
  netnode_hashset(v5, "firmware_appended", &v30, 8, 72);
  v6 = *a2;
  v30 = a1[3];
  netnode_hashset(v6, "header_offset", &v30, 8, 72);
  switch ( a1[4] )
  {
    case 0u:
      v7 = "TypeNormal";
      break;
    case 1u:
      v7 = "TypeBsxSlotted";
      break;
    case 2u:
      v7 = "TypeBsxBios";
      break;
    case 3u:
      v7 = "TypeBsx";
      break;
    case 4u:
      v7 = "TypeSufamiTurboBios";
      break;
    case 5u:
      v7 = "TypeSufamiTurbo";
      break;
    case 6u:
      v7 = "TypeSuperGameBoy1Bios";
      break;
    case 7u:
      v7 = "TypeSuperGameBoy2Bios";
      break;
    case 8u:
      v7 = "TypeGameBoy";
      break;
    case 9u:
      v7 = "TypeUnknown";
      break;
    default:
      v7 = nullptr;
      break;
  }
  netnode_hashset(*a2, "type", v7, 0, 72);
  v8 = a1[5];
  v9 = "NTSC";
  if ( v8 )
  {
    v9 = "PAL";
    if ( v8 != 1 )
      v9 = nullptr;
  }
  netnode_hashset(*a2, "region", v9, 0, 72);
  switch ( a1[6] )
  {
    case 0u:
      v10 = "LoROM";
      break;
    case 1u:
      v10 = "HiROM";
      break;
    case 2u:
      v10 = "ExLoROM";
      break;
    case 3u:
      v10 = "ExHiROM";
      break;
    case 4u:
      v10 = "SuperFXROM";
      break;
    case 5u:
      v10 = "SA1ROM";
      break;
    case 6u:
      v10 = "SPC7110ROM";
      break;
    case 7u:
      v10 = "BSCLoROM";
      break;
    case 8u:
      v10 = "BSCHiROM";
      break;
    case 9u:
      v10 = "BSXROM";
      break;
    case 0xAu:
      v10 = "STROM";
      break;
    default:
      v10 = nullptr;
      break;
  }
  netnode_hashset(*a2, "mapper", v10, 0, 72);
  v11 = a1[7];
  v12 = "DSP1LoROM2MB";
  if ( v11 != 2 )
  {
    if ( v11 > 2 )
    {
      v12 = "DSP1HiROM";
      if ( v11 != 3 )
        v12 = nullptr;
    }
    else
    {
      v12 = "DSP1Unmapped";
      if ( v11 )
        v12 = "DSP1LoROM1MB";
    }
  }
  netnode_hashset(*a2, "dsp1_mapper", v12, 0, 72);
  v13 = *a2;
  v30 = *((unsigned __int8 *)a1 + 32);
  netnode_hashset(v13, "has_bsx_slot", &v30, 8, 72);
  v14 = *a2;
  v30 = *((unsigned __int8 *)a1 + 33);
  netnode_hashset(v14, "has_superfx", &v30, 8, 72);
  v15 = *a2;
  v30 = *((unsigned __int8 *)a1 + 34);
  netnode_hashset(v15, "has_sa1", &v30, 8, 72);
  v16 = *a2;
  v30 = *((unsigned __int8 *)a1 + 35);
  netnode_hashset(v16, "has_sharprtc", &v30, 8, 72);
  v17 = *a2;
  v30 = *((unsigned __int8 *)a1 + 36);
  netnode_hashset(v17, "has_epsonrtc", &v30, 8, 72);
  v18 = *a2;
  v30 = *((unsigned __int8 *)a1 + 37);
  netnode_hashset(v18, "has_sdd1", &v30, 8, 72);
  v19 = *a2;
  v30 = *((unsigned __int8 *)a1 + 38);
  netnode_hashset(v19, "has_spc7110", &v30, 8, 72);
  v20 = *a2;
  v30 = *((unsigned __int8 *)a1 + 39);
  netnode_hashset(v20, "has_cx4", &v30, 8, 72);
  v21 = *a2;
  v30 = *((unsigned __int8 *)a1 + 40);
  netnode_hashset(v21, "has_dsp1", &v30, 8, 72);
  v22 = *a2;
  v30 = *((unsigned __int8 *)a1 + 41);
  netnode_hashset(v22, "has_dsp2", &v30, 8, 72);
  v23 = *a2;
  v30 = *((unsigned __int8 *)a1 + 42);
  netnode_hashset(v23, "has_dsp3", &v30, 8, 72);
  v24 = *a2;
  v30 = *((unsigned __int8 *)a1 + 43);
  netnode_hashset(v24, "has_dsp4", &v30, 8, 72);
  v25 = *a2;
  v30 = *((unsigned __int8 *)a1 + 44);
  netnode_hashset(v25, "has_obc1", &v30, 8, 72);
  v26 = *a2;
  v30 = *((unsigned __int8 *)a1 + 45);
  netnode_hashset(v26, "has_st010", &v30, 8, 72);
  v27 = *a2;
  v30 = *((unsigned __int8 *)a1 + 46);
  netnode_hashset(v27, "has_st011", &v30, 8, 72);
  v28 = *a2;
  v30 = *((unsigned __int8 *)a1 + 47);
  netnode_hashset(v28, "has_st018", &v30, 8, 72);
  return v31 - __readfsqword(0x28u);
}
