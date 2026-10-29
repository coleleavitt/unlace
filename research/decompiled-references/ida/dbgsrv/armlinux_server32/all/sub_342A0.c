/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_342A0
// Address: 0x000342A0

//----- (000342A0) --------------------------------------------------------
int __fastcall sub_342A0(int a1, int a2, int *a3)
{
  unsigned int v4; // r1
  unsigned int v6; // r5
  bool v7; // cc
  const char *v8; // r7
  unsigned int v9; // r7
  int v10; // r5
  const char *v11; // r8
  _BYTE *v12; // r0
  size_t v13; // r2
  int v14; // r3
  int v15; // r8
  unsigned int v16; // r9
  void *v17; // r1
  size_t v18; // r0
  int v19; // r5
  size_t v20; // r9
  size_t v21; // r10
  void *v22; // r1
  const char *v23; // r1
  int v24; // r7
  bool v25; // cf
  int v26; // r3
  int v27; // r8
  unsigned int v28; // r9
  void *v29; // r1
  size_t v30; // r0
  int v31; // r7
  size_t v32; // r9
  size_t v33; // r10
  void *v34; // r1
  int v35; // r7
  int v36; // r8
  unsigned int v37; // r7
  void *v38; // r1
  size_t v39; // r0
  int v40; // r7
  size_t v41; // r9
  size_t v42; // r10
  void *v43; // r1
  int v44; // r6
  int v45; // r9
  unsigned int v46; // r7
  void *v47; // r1
  size_t v48; // r0
  int v49; // r7
  size_t v50; // r9
  size_t v51; // r10
  void *v52; // r1
  unsigned int v53; // r5
  const char *v54; // r8
  int v55; // r7
  const char *v57; // r5
  int v59; // [sp+8h] [bp-14h]

  v4 = a2 & 0xF0000000;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v4 == 0x20000000 )
  {
    v9 = 15;
    v10 = 14;
    v11 = "ARCH_STAR_V2_0";
    goto LABEL_11;
  }
  if ( v4 > 0x20000000 )
  {
    switch ( v4 )
    {
      case 0x40000000u:
        v9 = 15;
        v10 = 14;
        v11 = "ARCH_STAR_V3_M";
        break;
      case 0x90000000:
        v9 = 15;
        v10 = 14;
        v11 = "ARCH_STAR_V0_9";
        break;
      case 0x30000000u:
        v9 = 15;
        v10 = 14;
        v11 = "ARCH_STAR_V3_0";
        break;
      default:
        goto LABEL_6;
    }
LABEL_11:
    v12 = sub_78018(a1, nullptr, v9, 1u);
    *(_DWORD *)a1 = v12;
    *(_DWORD *)(a1 + 4) = v9;
    v13 = v10;
    v12[v10] = 0;
    v6 = a2 & 0xF0;
    memcpy(*(void **)a1, v11, v13);
    v7 = v6 > 0x20;
    if ( v6 == 32 )
      goto LABEL_7;
    goto LABEL_12;
  }
  if ( !v4 )
  {
    v9 = 19;
    v10 = 18;
    v11 = "ARCH_STAR_RESERVED";
    goto LABEL_11;
  }
  if ( v4 == 0x10000000 )
  {
    v9 = 15;
    v10 = 14;
    v11 = "ARCH_STAR_V1_0";
    goto LABEL_11;
  }
LABEL_6:
  sub_188E0(a1, "Arch=0x%X", v4);
  v6 = a2 & 0xF0;
  v7 = v6 > 0x20;
  if ( v6 == 32 )
  {
LABEL_7:
    v8 = "ABI_V2";
    goto LABEL_18;
  }
LABEL_12:
  if ( v7 )
  {
    switch ( v6 )
    {
      case '@':
        v8 = "ABI_AABI";
        break;
      case 'P':
        v8 = "ABI_V2FP_PLUS";
        break;
      case '0':
        v8 = "ABI_V2FP";
        break;
      default:
        goto LABEL_17;
    }
  }
  else
  {
    if ( v6 )
    {
      if ( v6 == 16 )
      {
        v8 = "ABI_V1";
        goto LABEL_18;
      }
LABEL_17:
      v8 = nullptr;
      goto LABEL_18;
    }
    v8 = "ABI_V0";
  }
LABEL_18:
  v14 = *(_DWORD *)(a1 + 4);
  v15 = v14 - 1;
  v16 = v14 + 1;
  if ( !v14 )
  {
    v15 = 0;
    v16 = 2;
  }
  v17 = *(void **)a1;
  if ( *(_DWORD *)(a1 + 8) < v16 )
  {
    v17 = sub_78018(a1, v17, v16, 1u);
    *(_DWORD *)a1 = v17;
  }
  *(_DWORD *)(a1 + 4) = v16;
  *((_BYTE *)v17 + v15) = 32;
  *(_BYTE *)(*(_DWORD *)a1 + v15 + 1) = 0;
  if ( v8 )
  {
    v18 = strlen(v8);
    v19 = *(_DWORD *)(a1 + 4);
    v20 = v18;
    v21 = v18;
    if ( v19 )
    {
      --v19;
      v21 = v18 + v19;
    }
    v22 = *(void **)a1;
    if ( v21 + 1 > *(_DWORD *)(a1 + 8) )
    {
      v22 = sub_78018(a1, v22, v21 + 1, 1u);
      *(_DWORD *)a1 = v22;
    }
    *(_DWORD *)(a1 + 4) = v21 + 1;
    *((_BYTE *)v22 + v21) = 0;
    v23 = v8;
    v24 = a2 & 0xF;
    memmove((void *)(*(_DWORD *)a1 + v19), v23, v20);
    v25 = v24 != 0;
    if ( v24 != 1 )
      goto LABEL_28;
LABEL_109:
    v57 = "ELF_VER_1_3";
    goto LABEL_33;
  }
  sub_34260(a1, "ABI=0x%X", v6);
  v24 = a2 & 0xF;
  v25 = v24 != 0;
  if ( v24 == 1 )
    goto LABEL_109;
LABEL_28:
  if ( v25 )
  {
    if ( v24 == 2 )
      v57 = "ELF_VER_1_4";
    else
      v57 = nullptr;
  }
  else
  {
    v57 = "ELF_VER_1_2";
  }
LABEL_33:
  v26 = *(_DWORD *)(a1 + 4);
  v27 = v26 - 1;
  v28 = v26 + 1;
  if ( !v26 )
  {
    v27 = 0;
    v28 = 2;
  }
  v29 = *(void **)a1;
  if ( *(_DWORD *)(a1 + 8) < v28 )
  {
    v29 = sub_78018(a1, v29, v28, 1u);
    *(_DWORD *)a1 = v29;
  }
  *(_DWORD *)(a1 + 4) = v28;
  *((_BYTE *)v29 + v27) = 32;
  *(_BYTE *)(*(_DWORD *)a1 + v27 + 1) = 0;
  if ( v57 )
  {
    v30 = strlen(v57);
    v31 = *(_DWORD *)(a1 + 4);
    v32 = v30;
    v33 = v30;
    if ( v31 )
    {
      --v31;
      v33 = v30 + v31;
    }
    v34 = *(void **)a1;
    if ( v33 + 1 > *(_DWORD *)(a1 + 8) )
    {
      v34 = sub_78018(a1, v34, v33 + 1, 1u);
      *(_DWORD *)a1 = v34;
    }
    *(_DWORD *)(a1 + 4) = v33 + 1;
    *((_BYTE *)v34 + v33) = 0;
    memmove((void *)(*(_DWORD *)a1 + v31), v57, v32);
  }
  else
  {
    sub_34260(a1, "ELFVER=0x%X", v24);
  }
  switch ( a2 & 0xC00000 )
  {
    case 0:
      v57 = "8SP_4DP";
      goto LABEL_45;
    case 1:
      v57 = "16SP_8DP";
      goto LABEL_45;
    case 2:
      v57 = "32SP_16DP";
      goto LABEL_45;
    case 3:
      v35 = *(_DWORD *)(a1 + 4);
      v57 = "32SP_32DP";
      if ( !v35 )
        goto LABEL_73;
      goto LABEL_46;
    default:
LABEL_45:
      v35 = *(_DWORD *)(a1 + 4);
      if ( v35 )
      {
LABEL_46:
        v36 = v35 - 1;
        v37 = v35 + 1;
        v38 = *(void **)a1;
        if ( *(_DWORD *)(a1 + 8) >= v37 )
          goto LABEL_47;
      }
      else
      {
LABEL_73:
        v36 = v35;
        v37 = 2;
        v38 = *(void **)a1;
        if ( *(_DWORD *)(a1 + 8) >= 2u )
          goto LABEL_47;
      }
      v38 = sub_78018(a1, v38, v37, 1u);
      *(_DWORD *)a1 = v38;
LABEL_47:
      *(_DWORD *)(a1 + 4) = v37;
      *((_BYTE *)v38 + v36) = 32;
      *(_BYTE *)(*(_DWORD *)a1 + v36 + 1) = 0;
      if ( v57 )
      {
        v39 = strlen(v57);
        v40 = *(_DWORD *)(a1 + 4);
        v41 = v39;
        v42 = v39;
        if ( v40 )
        {
          --v40;
          v42 = v39 + v40;
        }
        v43 = *(void **)a1;
        if ( v42 + 1 > *(_DWORD *)(a1 + 8) )
        {
          v43 = sub_78018(a1, v43, v42 + 1, 1u);
          *(_DWORD *)a1 = v43;
        }
        *(_DWORD *)(a1 + 4) = v42 + 1;
        *((_BYTE *)v43 + v42) = 0;
        memmove((void *)(*(_DWORD *)a1 + v40), v57, v41);
      }
      v44 = a2 & 0xFFFFF00;
      if ( !v44 )
      {
        if ( a3 )
        {
          v59 = 0;
LABEL_87:
          *a3 = v59;
        }
        return a1;
      }
      v59 = 0;
      break;
  }
  do
  {
    while ( 1 )
    {
      v53 = -v44 & v44;
      if ( v53 == 0x10000 )
      {
        v54 = "REDUCED_REGS";
        goto LABEL_69;
      }
      if ( v53 <= 0x10000 )
        break;
      if ( v53 == 0x200000 )
      {
        v54 = "L2C_INST";
        goto LABEL_69;
      }
      if ( v53 > 0x200000 )
      {
        if ( v53 == 0x2000000 )
        {
          v54 = "DSP_INST";
        }
        else if ( v53 <= 0x2000000 )
        {
          v54 = "FPU_MAC_INST";
          if ( v53 != 0x1000000 )
            goto LABEL_85;
        }
        else if ( v53 == 0x4000000 )
        {
          v54 = "PIC";
        }
        else
        {
          v54 = "CUSTOM_SEC";
          if ( v53 != 0x8000000 )
            goto LABEL_85;
        }
        goto LABEL_69;
      }
      if ( v53 == 0x40000 )
      {
        v54 = "ENCRIPT_INST";
        goto LABEL_69;
      }
      if ( v53 <= 0x40000 )
      {
        v54 = "VIDEO_INST";
        if ( v53 != 0x20000 )
          goto LABEL_85;
        goto LABEL_69;
      }
      if ( v53 == 0x80000 )
      {
        v54 = "FPU_DP_INST";
        goto LABEL_69;
      }
      v54 = "MAC_DX_INST";
      if ( v53 == 0x100000 )
        goto LABEL_69;
LABEL_85:
      v44 &= ~v53;
      v59 |= v53;
      if ( !v44 )
        goto LABEL_86;
    }
    if ( v53 == 2048 )
    {
      v54 = "FPU_INST";
    }
    else if ( v53 <= 0x800 )
    {
      switch ( v53 )
      {
        case 0x200u:
          v54 = "EXT_INST";
          break;
        case 0x400u:
          v54 = "EXT2_INST";
          break;
        case 0x100u:
          v54 = "MFUSR_PC_INST";
          break;
        default:
          goto LABEL_85;
      }
    }
    else if ( v53 == 0x2000 )
    {
      v54 = "DIV_DX_INST";
    }
    else if ( v53 <= 0x2000 )
    {
      v54 = "AUDIO_INST";
      if ( v53 != 4096 )
        goto LABEL_85;
    }
    else if ( v53 == 0x4000 )
    {
      v54 = "16BIT_INST";
    }
    else
    {
      v54 = "STRING_INST";
      if ( v53 != 0x8000 )
        goto LABEL_85;
    }
LABEL_69:
    v55 = *(_DWORD *)(a1 + 4);
    if ( v55 )
    {
      v45 = v55 - 1;
      v46 = v55 + 1;
      v47 = *(void **)a1;
      if ( *(_DWORD *)(a1 + 8) >= v46 )
        goto LABEL_56;
    }
    else
    {
      v45 = 0;
      v46 = 2;
      v47 = *(void **)a1;
      if ( *(_DWORD *)(a1 + 8) >= 2u )
        goto LABEL_56;
    }
    v47 = sub_78018(a1, v47, v46, 1u);
    *(_DWORD *)a1 = v47;
LABEL_56:
    *(_DWORD *)(a1 + 4) = v46;
    *((_BYTE *)v47 + v45) = 32;
    *(_BYTE *)(*(_DWORD *)a1 + v45 + 1) = 0;
    v48 = strlen(v54);
    v49 = *(_DWORD *)(a1 + 4);
    v50 = v48;
    v51 = v48;
    if ( v49 )
    {
      --v49;
      v51 = v48 + v49;
    }
    v52 = *(void **)a1;
    if ( v51 + 1 > *(_DWORD *)(a1 + 8) )
    {
      v52 = sub_78018(a1, v52, v51 + 1, 1u);
      *(_DWORD *)a1 = v52;
    }
    *(_DWORD *)(a1 + 4) = v51 + 1;
    *((_BYTE *)v52 + v51) = 0;
    memcpy((void *)(*(_DWORD *)a1 + v49), v54, v50);
    v44 &= ~v53;
  }
  while ( v44 );
LABEL_86:
  if ( a3 )
    goto LABEL_87;
  if ( !v59 )
    return a1;
  sub_34260(a1, " 0x%X", v59);
  return a1;
}
