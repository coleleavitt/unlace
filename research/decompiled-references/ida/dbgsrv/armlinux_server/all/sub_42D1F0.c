/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D1F0
// Address: 0x000000000042D1F0

//----- (000000000042D1F0) ----------------------------------------------------
__int64 __usercall sub_42D1F0@<X0>(int a1@<W0>, int *a2@<X1>, __int64 a3@<X8>)
{
  unsigned int v3; // w2
  unsigned int v7; // w23
  bool v8; // cc
  __int64 v9; // x20
  const char *v10; // x22
  unsigned __int64 v11; // x20
  __int64 v12; // x24
  void *v13; // x0
  _BYTE *v14; // x0
  int v15; // w23
  __int64 v16; // x22
  const char *v17; // x20
  unsigned __int64 v18; // x22
  __int64 v19; // x24
  void *v20; // x0
  _BYTE *v21; // x0
  int v22; // w0
  __int64 v23; // x22
  unsigned __int64 v24; // x22
  __int64 v25; // x23
  void *v26; // x0
  const char *v27; // x20
  unsigned __int64 v28; // x23
  size_t v29; // x22
  _BYTE *v30; // x0
  size_t v31; // x0
  __int64 v32; // x20
  size_t v33; // x25
  __int64 v34; // x20
  size_t v35; // x24
  void *v36; // x0
  unsigned __int64 v37; // x23
  size_t v38; // x0
  __int64 v39; // x22
  size_t v40; // x25
  __int64 v41; // x22
  size_t v42; // x24
  void *v43; // x0
  unsigned __int64 v44; // x23
  size_t v45; // x0
  __int64 v46; // x22
  size_t v47; // x25
  __int64 v48; // x22
  size_t v49; // x24
  _BYTE *v50; // x0
  unsigned __int64 v51; // x23
  int v52; // w21
  __int64 v53; // x24
  unsigned __int64 v54; // x23
  void *v55; // x1
  size_t v56; // x0
  __int64 v57; // x23
  size_t v58; // x24
  size_t v59; // x25
  _BYTE *v60; // x0
  unsigned int v61; // w20
  const char *v62; // x22
  __int64 v63; // x23
  int v65; // [xsp+6Ch] [xbp-14h]

  v3 = a1 & 0xF0000000;
  *(_QWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0;
  *(_QWORD *)(a3 + 16) = 0;
  if ( (a1 & 0xF0000000) == 0x20000000 )
  {
    v28 = 15;
    v27 = "ARCH_STAR_V2_0";
    v29 = 14;
  }
  else if ( v3 <= 0x20000000 )
  {
    if ( v3 )
    {
      if ( v3 != 0x10000000 )
      {
LABEL_6:
        sub_40CD68(a3, "Arch=0x%X", v3);
        v7 = a1 & 0xF0;
        v8 = v7 > 0x20;
        if ( v7 == 32 )
          goto LABEL_7;
        goto LABEL_22;
      }
      v27 = "ARCH_STAR_V1_0";
      v28 = 15;
      v29 = 14;
    }
    else
    {
      v28 = 19;
      v29 = 18;
      v27 = "ARCH_STAR_RESERVED";
    }
  }
  else
  {
    switch ( v3 )
    {
      case 0x40000000u:
        v28 = 15;
        v29 = 14;
        v27 = "ARCH_STAR_V3_M";
        break;
      case 0x90000000:
        v28 = 15;
        v29 = 14;
        v27 = "ARCH_STAR_V0_9";
        break;
      case 0x30000000u:
        v28 = 15;
        v29 = 14;
        v27 = "ARCH_STAR_V3_0";
        break;
      default:
        goto LABEL_6;
    }
  }
  v30 = sub_491288(a3, nullptr, v28, 1u);
  *(_QWORD *)a3 = v30;
  *(_QWORD *)(a3 + 8) = v28;
  v30[v29] = 0;
  v7 = a1 & 0xF0;
  memcpy(*(void **)a3, v27, v29);
  v8 = v7 > 0x20;
  if ( v7 == 32 )
  {
LABEL_7:
    v9 = *(_QWORD *)(a3 + 8);
    v10 = "ABI_V2";
    if ( !v9 )
      goto LABEL_8;
    goto LABEL_29;
  }
LABEL_22:
  if ( v8 )
  {
    switch ( v7 )
    {
      case '@':
        v10 = "ABI_AABI";
        break;
      case 'P':
        v10 = "ABI_V2FP_PLUS";
        break;
      case '0':
        v10 = "ABI_V2FP";
        break;
      default:
LABEL_27:
        v10 = nullptr;
        break;
    }
  }
  else if ( v7 )
  {
    v10 = "ABI_V1";
    if ( v7 != 16 )
      goto LABEL_27;
  }
  else
  {
    v10 = "ABI_V0";
  }
  v9 = *(_QWORD *)(a3 + 8);
  if ( !v9 )
  {
LABEL_8:
    v11 = 2;
    v12 = 0;
    v13 = *(void **)a3;
    if ( *(_QWORD *)(a3 + 16) < 2u )
      goto LABEL_9;
    goto LABEL_30;
  }
LABEL_29:
  v12 = v9 - 1;
  v11 = v9 + 1;
  v13 = *(void **)a3;
  if ( *(_QWORD *)(a3 + 16) < v11 )
  {
LABEL_9:
    v14 = sub_491288(a3, v13, v11, 1u);
    *(_QWORD *)a3 = v14;
    *(_QWORD *)(a3 + 8) = v11;
    v14[v12] = 32;
    *(_BYTE *)(*(_QWORD *)a3 + v12 + 1) = 0;
    if ( !v10 )
      goto LABEL_10;
    goto LABEL_31;
  }
LABEL_30:
  *(_QWORD *)(a3 + 8) = v11;
  *((_BYTE *)v13 + v12) = 32;
  *(_BYTE *)(*(_QWORD *)a3 + v12 + 1) = 0;
  if ( !v10 )
  {
LABEL_10:
    sub_42D148(a3, "ABI=0x%X", v7);
    v15 = a1 & 0xF;
    if ( v15 == 1 )
      goto LABEL_11;
    goto LABEL_34;
  }
LABEL_31:
  v31 = strlen(v10);
  v32 = *(_QWORD *)(a3 + 8);
  v33 = v31;
  if ( v32 )
  {
    v34 = v32 - 1;
    v35 = v31 + v34;
    v36 = *(void **)a3;
    v37 = v35 + 1;
    if ( v35 + 1 <= *(_QWORD *)(a3 + 16) )
      goto LABEL_33;
  }
  else
  {
    v35 = v31;
    v37 = v31 + 1;
    v34 = 0;
    v36 = *(void **)a3;
    if ( v37 <= *(_QWORD *)(a3 + 16) )
      goto LABEL_33;
  }
  v36 = sub_491288(a3, v36, v37, 1u);
  *(_QWORD *)a3 = v36;
LABEL_33:
  *(_QWORD *)(a3 + 8) = v37;
  *((_BYTE *)v36 + v35) = 0;
  v15 = a1 & 0xF;
  memmove((void *)(*(_QWORD *)a3 + v34), v10, v33);
  if ( v15 == 1 )
  {
LABEL_11:
    v16 = *(_QWORD *)(a3 + 8);
    v17 = "ELF_VER_1_3";
    if ( !v16 )
      goto LABEL_12;
    goto LABEL_38;
  }
LABEL_34:
  if ( v15 )
  {
    v17 = "ELF_VER_1_4";
    if ( v15 != 2 )
      v17 = nullptr;
  }
  else
  {
    v17 = "ELF_VER_1_2";
  }
  v16 = *(_QWORD *)(a3 + 8);
  if ( !v16 )
  {
LABEL_12:
    v18 = 2;
    v19 = 0;
    v20 = *(void **)a3;
    if ( *(_QWORD *)(a3 + 16) < 2u )
      goto LABEL_13;
    goto LABEL_39;
  }
LABEL_38:
  v19 = v16 - 1;
  v18 = v16 + 1;
  v20 = *(void **)a3;
  if ( *(_QWORD *)(a3 + 16) < v18 )
  {
LABEL_13:
    v21 = sub_491288(a3, v20, v18, 1u);
    *(_QWORD *)a3 = v21;
    *(_QWORD *)(a3 + 8) = v18;
    v21[v19] = 32;
    *(_BYTE *)(*(_QWORD *)a3 + v19 + 1) = 0;
    if ( !v17 )
      goto LABEL_14;
    goto LABEL_40;
  }
LABEL_39:
  *(_QWORD *)(a3 + 8) = v18;
  *((_BYTE *)v20 + v19) = 32;
  *(_BYTE *)(*(_QWORD *)a3 + v19 + 1) = 0;
  if ( !v17 )
  {
LABEL_14:
    sub_42D148(a3, "ELFVER=0x%X", v15);
    v22 = a1 & 0xC00000;
    if ( (a1 & 0xC00000) == 1 )
      goto LABEL_15;
    goto LABEL_43;
  }
LABEL_40:
  v38 = strlen(v17);
  v39 = *(_QWORD *)(a3 + 8);
  v40 = v38;
  if ( v39 )
  {
    v41 = v39 - 1;
    v42 = v38 + v41;
    v43 = *(void **)a3;
    v44 = v42 + 1;
    if ( v42 + 1 <= *(_QWORD *)(a3 + 16) )
      goto LABEL_42;
  }
  else
  {
    v42 = v38;
    v44 = v38 + 1;
    v41 = 0;
    v43 = *(void **)a3;
    if ( v44 <= *(_QWORD *)(a3 + 16) )
      goto LABEL_42;
  }
  v43 = sub_491288(a3, v43, v44, 1u);
  *(_QWORD *)a3 = v43;
LABEL_42:
  *(_QWORD *)(a3 + 8) = v44;
  *((_BYTE *)v43 + v42) = 0;
  memmove((void *)(*(_QWORD *)a3 + v41), v17, v40);
  v22 = a1 & 0xC00000;
  if ( (a1 & 0xC00000) == 1 )
  {
LABEL_15:
    v23 = *(_QWORD *)(a3 + 8);
    v17 = "16SP_8DP";
    if ( !v23 )
      goto LABEL_16;
    goto LABEL_48;
  }
LABEL_43:
  if ( v22 )
  {
    if ( v22 == 2 )
    {
      v17 = "32SP_16DP";
    }
    else if ( v22 == 3 )
    {
      v17 = "32SP_32DP";
    }
  }
  else
  {
    v17 = "8SP_4DP";
  }
  v23 = *(_QWORD *)(a3 + 8);
  if ( !v23 )
  {
LABEL_16:
    v24 = 2;
    v25 = 0;
    v26 = *(void **)a3;
    if ( *(_QWORD *)(a3 + 16) >= 2u )
      goto LABEL_49;
    goto LABEL_17;
  }
LABEL_48:
  v25 = v23 - 1;
  v24 = v23 + 1;
  v26 = *(void **)a3;
  if ( *(_QWORD *)(a3 + 16) < v24 )
  {
LABEL_17:
    v26 = sub_491288(a3, v26, v24, 1u);
    *(_QWORD *)a3 = v26;
  }
LABEL_49:
  *(_QWORD *)(a3 + 8) = v24;
  *((_BYTE *)v26 + v25) = 32;
  *(_BYTE *)(*(_QWORD *)a3 + v25 + 1) = 0;
  if ( v17 )
  {
    v45 = strlen(v17);
    v46 = *(_QWORD *)(a3 + 8);
    v47 = v45;
    if ( v46 )
    {
      v48 = v46 - 1;
      v49 = v45 + v48;
      v50 = *(_BYTE **)a3;
      v51 = v49 + 1;
      if ( v49 + 1 <= *(_QWORD *)(a3 + 16) )
      {
LABEL_52:
        *(_QWORD *)(a3 + 8) = v51;
        v50[v49] = 0;
        memmove((void *)(*(_QWORD *)a3 + v48), v17, v47);
        goto LABEL_53;
      }
    }
    else
    {
      v49 = v45;
      v51 = v45 + 1;
      v48 = 0;
      v50 = *(_BYTE **)a3;
      if ( v51 <= *(_QWORD *)(a3 + 16) )
        goto LABEL_52;
    }
    v50 = sub_491288(a3, v50, v51, 1u);
    *(_QWORD *)a3 = v50;
    goto LABEL_52;
  }
LABEL_53:
  v52 = a1 & 0xFFFFF00;
  if ( !v52 )
  {
    v65 = 0;
    if ( a2 )
LABEL_83:
      *a2 = v65;
    return a3;
  }
  v65 = 0;
  do
  {
    while ( 1 )
    {
      v61 = -v52 & v52;
      if ( v61 == 0x10000 )
      {
        v62 = "REDUCED_REGS";
        goto LABEL_69;
      }
      if ( v61 <= 0x10000 )
        break;
      if ( v61 == 0x200000 )
      {
        v62 = "L2C_INST";
        goto LABEL_69;
      }
      if ( v61 > 0x200000 )
      {
        if ( v61 == 0x2000000 )
        {
          v62 = "DSP_INST";
        }
        else if ( v61 <= 0x2000000 )
        {
          v62 = "FPU_MAC_INST";
          if ( v61 != 0x1000000 )
            goto LABEL_81;
        }
        else if ( v61 == 0x4000000 )
        {
          v62 = "PIC";
        }
        else
        {
          v62 = "CUSTOM_SEC";
          if ( v61 != 0x8000000 )
            goto LABEL_81;
        }
        goto LABEL_69;
      }
      if ( v61 == 0x40000 )
      {
        v62 = "ENCRIPT_INST";
        goto LABEL_69;
      }
      if ( v61 <= 0x40000 )
      {
        v62 = "VIDEO_INST";
        if ( v61 != 0x20000 )
          goto LABEL_81;
        goto LABEL_69;
      }
      if ( v61 == 0x80000 )
      {
        v62 = "FPU_DP_INST";
        goto LABEL_69;
      }
      v62 = "MAC_DX_INST";
      if ( v61 == 0x100000 )
        goto LABEL_69;
LABEL_81:
      v52 &= ~v61;
      v65 |= v61;
      if ( !v52 )
        goto LABEL_82;
    }
    if ( v61 == 2048 )
    {
      v62 = "FPU_INST";
    }
    else if ( v61 <= 0x800 )
    {
      switch ( v61 )
      {
        case 0x200u:
          v62 = "EXT_INST";
          break;
        case 0x400u:
          v62 = "EXT2_INST";
          break;
        case 0x100u:
          v62 = "MFUSR_PC_INST";
          break;
        default:
          goto LABEL_81;
      }
    }
    else if ( v61 == 0x2000 )
    {
      v62 = "DIV_DX_INST";
    }
    else if ( v61 <= 0x2000 )
    {
      v62 = "AUDIO_INST";
      if ( v61 != 4096 )
        goto LABEL_81;
    }
    else if ( v61 == 0x4000 )
    {
      v62 = "16BIT_INST";
    }
    else
    {
      v62 = "STRING_INST";
      if ( v61 != 0x8000 )
        goto LABEL_81;
    }
LABEL_69:
    v63 = *(_QWORD *)(a3 + 8);
    if ( v63 )
    {
      v53 = v63 - 1;
      v54 = v63 + 1;
      v55 = *(void **)a3;
      if ( *(_QWORD *)(a3 + 16) >= v54 )
        goto LABEL_56;
    }
    else
    {
      v54 = 2;
      v53 = 0;
      v55 = *(void **)a3;
      if ( *(_QWORD *)(a3 + 16) >= 2u )
        goto LABEL_56;
    }
    v55 = sub_491288(a3, v55, v54, 1u);
    *(_QWORD *)a3 = v55;
LABEL_56:
    *(_QWORD *)(a3 + 8) = v54;
    *((_BYTE *)v55 + v53) = 32;
    *(_BYTE *)(*(_QWORD *)a3 + v53 + 1) = 0;
    v56 = strlen(v62);
    v57 = *(_QWORD *)(a3 + 8);
    v58 = v56;
    v59 = v56;
    if ( v57 )
    {
      --v57;
      v59 = v56 + v57;
    }
    v60 = *(_BYTE **)a3;
    if ( v59 + 1 > *(_QWORD *)(a3 + 16) )
    {
      v60 = sub_491288(a3, *(void **)a3, v59 + 1, 1u);
      *(_QWORD *)a3 = v60;
    }
    *(_QWORD *)(a3 + 8) = v59 + 1;
    v60[v59] = 0;
    memcpy((void *)(*(_QWORD *)a3 + v57), v62, v58);
    v52 &= ~v61;
  }
  while ( v52 );
LABEL_82:
  if ( a2 )
    goto LABEL_83;
  if ( !v65 )
    return a3;
  sub_42D148(a3, " 0x%X", v65);
  return a3;
}
