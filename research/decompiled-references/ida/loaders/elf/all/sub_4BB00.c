__int64 __fastcall sub_4BB00(__int64 a1, int a2, int *a3)
{
  unsigned int v4; // edx
  __int64 v5; // r15
  __int64 v6; // rbp
  const char *v7; // r13
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  char *v12; // rax
  const char *v13; // r13
  unsigned int v14; // ebp
  unsigned int v15; // ebp
  unsigned int v16; // eax
  __int64 v17; // rdx
  const char *v18; // rbp
  unsigned int v19; // r15d
  __int64 v20; // r13
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  size_t v23; // rax
  __int64 v24; // r13
  size_t v25; // r15
  size_t v26; // r12
  __int64 v27; // rsi
  size_t v28; // rdx
  const char *v29; // rbp
  int v30; // r12d
  __int64 v31; // r13
  unsigned __int64 v32; // r15
  __int64 v33; // rsi
  size_t v34; // rax
  __int64 v35; // r13
  size_t v36; // r15
  size_t v37; // r12
  __int64 v38; // rsi
  size_t v39; // rdx
  __int64 v40; // r13
  unsigned __int64 v41; // r15
  __int64 v42; // rsi
  size_t v43; // rax
  __int64 v44; // r13
  size_t v45; // r15
  size_t v46; // r12
  __int64 v47; // rsi
  size_t v48; // rdx
  int v49; // r14d
  unsigned int v50; // ebp
  const char *v51; // r15
  __int64 v52; // r12
  unsigned __int64 v53; // r13
  __int64 v54; // rsi
  size_t v55; // rax
  __int64 v56; // r13
  unsigned int v57; // r12d
  size_t v58; // r10
  __int64 v59; // rsi
  size_t v60; // rdx
  _DWORD *v61; // r13
  unsigned __int64 v62; // rax
  char *v63; // r13
  unsigned int v64; // r12d
  unsigned int v65; // r12d
  unsigned int v66; // edx
  __int64 v67; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  size_t v77; // [rsp+0h] [rbp-58h]
  size_t v78; // [rsp+8h] [rbp-50h]
  int v80; // [rsp+1Ch] [rbp-3Ch]

  *(_QWORD *)a1 = 0;
  v4 = a2 & 0xF0000000;
  *(_OWORD *)(a1 + 8) = 0;
  if ( (a2 & 0xF0000000) == 0x30000000 )
  {
    v5 = 15;
    v6 = 14;
    v7 = "ARCH_STAR_V3_0";
  }
  else if ( v4 > 0x30000000 )
  {
    v5 = 15;
    v6 = 14;
    if ( v4 == 0x40000000 )
    {
      v7 = "ARCH_STAR_V3_M";
    }
    else
    {
      v7 = "ARCH_STAR_V0_9";
      if ( v4 != -1879048192 )
        goto LABEL_118;
    }
  }
  else if ( v4 == 0x10000000 )
  {
    v5 = 15;
    v6 = 14;
    v7 = "ARCH_STAR_V1_0";
  }
  else
  {
    if ( v4 != 0x20000000 )
    {
      v5 = 19;
      v6 = 18;
      v7 = "ARCH_STAR_RESERVED";
      if ( !v4 )
        goto LABEL_6;
LABEL_118:
      sub_2B240((__int64 *)a1, (__int64)"Arch=0x%X", v4);
      goto LABEL_9;
    }
    v5 = 15;
    v6 = 14;
    v7 = "ARCH_STAR_V2_0";
  }
LABEL_6:
  v8 = qvector_reserve(a1, 0, v5, 1);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = v5;
  *(_BYTE *)(v8 + v6) = 0;
  v9 = *(_QWORD **)a1;
  v10 = *(_QWORD *)a1 + 8LL;
  *v9 = *(_QWORD *)v7;
  v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)((char *)v9 + v6 - 8) = *(_QWORD *)&v7[v6 - 8];
  v12 = (char *)v9 - v11;
  v13 = (const char *)(v7 - v12);
  v14 = ((_DWORD)v12 + v6) & 0xFFFFFFF8;
  if ( v14 >= 8 )
  {
    v15 = v14 & 0xFFFFFFF8;
    v16 = 0;
    do
    {
      v17 = v16;
      v16 += 8;
      *(_QWORD *)(v11 + v17) = *(_QWORD *)&v13[v17];
    }
    while ( v16 < v15 );
  }
LABEL_9:
  v18 = "ABI_V2FP";
  v19 = a2 & 0xF0;
  if ( v19 != 48 )
  {
    if ( v19 > 0x30 )
    {
      v18 = "ABI_AABI";
      if ( v19 != 64 )
      {
        v18 = "ABI_V2FP_PLUS";
        if ( v19 != 80 )
          v18 = nullptr;
      }
    }
    else
    {
      v18 = "ABI_V1";
      if ( v19 != 16 )
      {
        v18 = "ABI_V2";
        if ( v19 != 32 )
        {
          v18 = "ABI_V0";
          if ( (a2 & 0xF0) != 0 )
            v18 = nullptr;
        }
      }
    }
  }
  v20 = *(_QWORD *)(a1 + 8);
  v21 = 2;
  if ( v20 )
    v21 = v20-- + 1;
  v22 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) < v21 )
  {
    v73 = qvector_reserve(a1, v22, v21, 1);
    *(_QWORD *)a1 = v73;
    v22 = v73;
  }
  *(_QWORD *)(a1 + 8) = v21;
  *(_BYTE *)(v22 + v20) = 32;
  *(_BYTE *)(*(_QWORD *)a1 + v20 + 1) = 0;
  if ( v18 )
  {
    v23 = strlen(v18);
    v24 = *(_QWORD *)(a1 + 8);
    v25 = v23;
    v26 = v23;
    if ( v24 )
    {
      --v24;
      v26 = v23 + v24;
    }
    v27 = *(_QWORD *)a1;
    v28 = v26 + 1;
    if ( *(_QWORD *)(a1 + 16) < v26 + 1 )
    {
      v74 = qvector_reserve(a1, v27, v28, 1);
      *(_QWORD *)a1 = v74;
      v28 = v26 + 1;
      v27 = v74;
    }
    *(_QWORD *)(a1 + 8) = v28;
    *(_BYTE *)(v27 + v26) = 0;
    memmove((void *)(v24 + *(_QWORD *)a1), v18, v25);
  }
  else
  {
    sub_2BDC0((__int64 *)a1, (__int64)"ABI=0x%X", a2 & 0xF0);
  }
  v29 = "ELF_VER_1_3";
  v30 = a2 & 0xF;
  if ( v30 != 1 )
  {
    v29 = "ELF_VER_1_4";
    if ( v30 != 2 )
    {
      v29 = "ELF_VER_1_2";
      if ( (a2 & 0xF) != 0 )
        v29 = nullptr;
    }
  }
  v31 = *(_QWORD *)(a1 + 8);
  v32 = 2;
  if ( v31 )
    v32 = v31-- + 1;
  v33 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) < v32 )
  {
    v72 = qvector_reserve(a1, v33, v32, 1);
    *(_QWORD *)a1 = v72;
    v33 = v72;
  }
  *(_QWORD *)(a1 + 8) = v32;
  *(_BYTE *)(v33 + v31) = 32;
  *(_BYTE *)(*(_QWORD *)a1 + v31 + 1) = 0;
  if ( v29 )
  {
    v34 = strlen(v29);
    v35 = *(_QWORD *)(a1 + 8);
    v36 = v34;
    v37 = v34;
    if ( v35 )
    {
      --v35;
      v37 = v34 + v35;
    }
    v38 = *(_QWORD *)a1;
    v39 = v37 + 1;
    if ( *(_QWORD *)(a1 + 16) < v37 + 1 )
    {
      v75 = qvector_reserve(a1, v38, v39, 1);
      *(_QWORD *)a1 = v75;
      v39 = v37 + 1;
      v38 = v75;
    }
    *(_QWORD *)(a1 + 8) = v39;
    *(_BYTE *)(v38 + v37) = 0;
    memmove((void *)(v35 + *(_QWORD *)a1), v29, v36);
  }
  else
  {
    sub_2BDC0((__int64 *)a1, (__int64)"ELFVER=0x%X", a2 & 0xF);
  }
  v40 = *(_QWORD *)(a1 + 8);
  v41 = 2;
  if ( (a2 & 0xC00000) == 0 )
    v29 = "8SP_4DP";
  if ( v40 )
    v41 = v40-- + 1;
  v42 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) < v41 )
  {
    v71 = qvector_reserve(a1, v42, v41, 1);
    *(_QWORD *)a1 = v71;
    v42 = v71;
  }
  *(_QWORD *)(a1 + 8) = v41;
  *(_BYTE *)(v42 + v40) = 32;
  *(_BYTE *)(*(_QWORD *)a1 + v40 + 1) = 0;
  if ( v29 )
  {
    v43 = strlen(v29);
    v44 = *(_QWORD *)(a1 + 8);
    v45 = v43;
    v46 = v43;
    if ( v44 )
    {
      --v44;
      v46 = v43 + v44;
    }
    v47 = *(_QWORD *)a1;
    v48 = v46 + 1;
    if ( *(_QWORD *)(a1 + 16) < v46 + 1 )
    {
      v76 = qvector_reserve(a1, v47, v48, 1);
      *(_QWORD *)a1 = v76;
      v48 = v46 + 1;
      v47 = v76;
    }
    *(_QWORD *)(a1 + 8) = v48;
    *(_BYTE *)(v47 + v46) = 0;
    memmove((void *)(v44 + *(_QWORD *)a1), v29, v45);
  }
  v80 = 0;
  v49 = a2 & 0xFFFFF00;
  if ( !v49 )
  {
    if ( a3 )
LABEL_80:
      *a3 = v80;
    return a1;
  }
  do
  {
    while ( 1 )
    {
      v50 = v49 & -v49;
      if ( v50 == (_DWORD)&loc_20000 )
      {
        v51 = "VIDEO_INST";
      }
      else if ( v50 > (unsigned int)&loc_20000 )
      {
        if ( v50 == 0x1000000 )
        {
          v51 = "FPU_MAC_INST";
        }
        else if ( v50 > 0x1000000 )
        {
          if ( v50 == 0x4000000 )
          {
            v51 = "PIC";
          }
          else if ( v50 == 0x8000000 )
          {
            v51 = "CUSTOM_SEC";
          }
          else
          {
            v51 = "DSP_INST";
            if ( v50 != 0x2000000 )
            {
              v80 |= v50;
              goto LABEL_57;
            }
          }
        }
        else if ( v50 == 0x100000 )
        {
          v51 = "MAC_DX_INST";
        }
        else if ( v50 > 0x100000 )
        {
          v51 = "L2C_INST";
          if ( v50 != 0x200000 )
            goto LABEL_88;
        }
        else if ( v50 == 0x40000 )
        {
          v51 = "ENCRIPT_INST";
        }
        else
        {
          v51 = "FPU_DP_INST";
          if ( v50 != (_DWORD)&unk_80000 )
            goto LABEL_88;
        }
      }
      else if ( v50 == 4096 )
      {
        v51 = "AUDIO_INST";
      }
      else if ( v50 > 0x1000 )
      {
        if ( v50 == 0x8000 )
        {
          v51 = "STRING_INST";
        }
        else if ( v50 > 0x8000 )
        {
          v51 = "REDUCED_REGS";
          if ( v50 != (_DWORD)sub_10000 )
          {
LABEL_88:
            v80 |= v50;
            goto LABEL_57;
          }
        }
        else if ( v50 == 0x2000 )
        {
          v51 = "DIV_DX_INST";
        }
        else
        {
          v51 = "16BIT_INST";
          if ( v50 != 0x4000 )
            goto LABEL_88;
        }
      }
      else if ( v50 == 1024 )
      {
        v51 = "EXT2_INST";
      }
      else if ( v50 > 0x400 )
      {
        v51 = "FPU_INST";
        if ( v50 != 2048 )
          goto LABEL_88;
      }
      else if ( v50 == 256 )
      {
        v51 = "MFUSR_PC_INST";
      }
      else
      {
        v51 = "EXT_INST";
        if ( v50 != 512 )
          goto LABEL_88;
      }
      v52 = *(_QWORD *)(a1 + 8);
      v53 = 2;
      if ( v52 )
        v53 = v52-- + 1;
      v54 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v53 )
      {
        v69 = qvector_reserve(a1, v54, v53, 1);
        *(_QWORD *)a1 = v69;
        v54 = v69;
      }
      *(_QWORD *)(a1 + 8) = v53;
      *(_BYTE *)(v54 + v52) = 32;
      *(_BYTE *)(*(_QWORD *)a1 + v52 + 1) = 0;
      v55 = strlen(v51);
      v56 = *(_QWORD *)(a1 + 8);
      v57 = v55;
      v58 = v55;
      if ( v56 )
      {
        --v56;
        v58 = v55 + v56;
      }
      v59 = *(_QWORD *)a1;
      v60 = v58 + 1;
      if ( *(_QWORD *)(a1 + 16) < v58 + 1 )
      {
        v78 = v58;
        v77 = v58 + 1;
        v70 = qvector_reserve(a1, v59, v60, 1);
        v58 = v78;
        v60 = v77;
        *(_QWORD *)a1 = v70;
        v59 = v70;
      }
      *(_QWORD *)(a1 + 8) = v60;
      *(_BYTE *)(v59 + v58) = 0;
      v61 = (_DWORD *)(*(_QWORD *)a1 + v56);
      if ( v57 < 8 )
      {
        if ( (v57 & 4) != 0 )
        {
          *v61 = *(_DWORD *)v51;
          *(_DWORD *)((char *)v61 + v57 - 4) = *(_DWORD *)&v51[v57 - 4];
        }
        else if ( v57 )
        {
          *(_BYTE *)v61 = *v51;
          if ( (v57 & 2) != 0 )
            *(_WORD *)((char *)v61 + v57 - 2) = *(_WORD *)&v51[v57 - 2];
        }
        goto LABEL_57;
      }
      *(_QWORD *)v61 = *(_QWORD *)v51;
      *(_QWORD *)((char *)v61 + v57 - 8) = *(_QWORD *)&v51[v57 - 8];
      v62 = (unsigned __int64)(v61 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v63 = (char *)v61 - v62;
      v64 = ((_DWORD)v63 + v57) & 0xFFFFFFF8;
      if ( v64 >= 8 )
        break;
LABEL_57:
      v49 &= ~v50;
      if ( !v49 )
        goto LABEL_79;
    }
    v65 = v64 & 0xFFFFFFF8;
    v66 = 0;
    do
    {
      v67 = v66;
      v66 += 8;
      *(_QWORD *)(v62 + v67) = *(_QWORD *)(v51 - v63 + v67);
    }
    while ( v66 < v65 );
    v49 &= ~v50;
  }
  while ( v49 );
LABEL_79:
  if ( a3 )
    goto LABEL_80;
  if ( v80 )
    sub_2BDC0((__int64 *)a1, (__int64)" 0x%X", v80);
  return a1;
}

