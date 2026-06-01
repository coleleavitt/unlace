/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D8E0
// Address: 0x000000000004D8E0

//----- (000000000004D8E0) ----------------------------------------------------
__int64 __fastcall sub_4D8E0(__int64 a1, int a2, int *a3)
{
  unsigned int v4; // edx
  const char *v5; // r14
  size_t v6; // rax
  size_t v7; // r15
  size_t v8; // rbx
  _BYTE *v9; // rax
  const char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  _BYTE *v13; // rax
  const char *v14; // r13
  const char *v15; // rbx
  size_t v16; // r14
  __int64 v17; // rax
  __int64 v18; // r13
  _BYTE *v19; // rax
  unsigned __int64 v20; // r12
  const char *v21; // r15
  __int64 v22; // rax
  __int64 v23; // r12
  _BYTE *v24; // rax
  size_t v25; // r14
  __int64 v26; // rax
  __int64 v27; // r13
  _BYTE *v28; // rax
  unsigned __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // r12
  _BYTE *v32; // rax
  int v33; // ebp
  __int64 v34; // r15
  int v35; // r12d
  const char *v36; // r13
  __int64 v37; // rax
  __int64 v38; // rbp
  char *v39; // rax
  size_t v40; // rbx
  __int64 v41; // rax
  __int64 v42; // r14
  char *v43; // rax
  _QWORD *v44; // rbp
  unsigned __int64 v45; // r15
  int v47; // [rsp+Ch] [rbp-4Ch]
  int v48; // [rsp+1Ch] [rbp-3Ch]
  int *v49; // [rsp+20h] [rbp-38h]

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v4 = a2 & 0xF0000000;
  if ( ((a2 & 0xF0000000) + 1879048192) >> 28 > 0xB )
  {
LABEL_6:
    sub_3BBA0(a1, "Arch=0x%X", v4);
  }
  else
  {
    v5 = "ARCH_STAR_RESERVED";
    switch ( (v4 + 1879048192) >> 28 )
    {
      case 0u:
        v5 = "ARCH_STAR_V0_9";
        break;
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
        goto LABEL_6;
      case 7u:
        break;
      case 8u:
        v5 = "ARCH_STAR_V1_0";
        break;
      case 9u:
        v5 = "ARCH_STAR_V2_0";
        break;
      case 0xAu:
        v5 = "ARCH_STAR_V3_0";
        break;
      case 0xBu:
        v5 = "ARCH_STAR_V3_M";
        break;
    }
    v6 = strlen(v5);
    v7 = v6;
    v8 = v6 + 1;
    if ( v6 == -1 )
    {
      v9 = nullptr;
    }
    else
    {
      v9 = qvector_reserve(a1, nullptr, v6 + 1, 1u);
      *(_QWORD *)a1 = v9;
    }
    *(_QWORD *)(a1 + 8) = v8;
    v9[v7] = 0;
    memmove(*(void **)a1, v5, v7);
  }
  v49 = a3;
  if ( (unsigned __int8)((unsigned __int8)(a2 & 0xF0) >> 4) > 5u )
    v10 = nullptr;
  else
    v10 = off_147190[(__int64)((unsigned __int64)((unsigned __int8)(a2 & 0xF0) >> 4) << 60) >> 60];
  v11 = *(_QWORD *)(a1 + 8);
  v12 = v11 - 1;
  if ( !v11 )
    v12 = 0;
  v13 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v12 + 2) )
  {
    v14 = v10;
    v13 = qvector_reserve(a1, *(char **)a1, v12 + 2, 1u);
    *(_QWORD *)a1 = v13;
    v10 = v14;
  }
  *(_QWORD *)(a1 + 8) = v12 + 2;
  v13[v12] = 32;
  *(_BYTE *)(*(_QWORD *)a1 + v12 + 1) = 0;
  if ( v10 )
  {
    v15 = v10;
    v16 = strlen(v10);
    v17 = *(_QWORD *)(a1 + 8);
    v18 = v17 - 1;
    if ( !v17 )
      v18 = 0;
    v19 = *(_BYTE **)a1;
    v20 = v16 + v18 + 1;
    if ( *(_QWORD *)(a1 + 16) < v20 )
    {
      v19 = qvector_reserve(a1, *(char **)a1, v16 + v18 + 1, 1u);
      *(_QWORD *)a1 = v19;
    }
    *(_QWORD *)(a1 + 8) = v20;
    v19[v18 + v16] = 0;
    memmove((void *)(*(_QWORD *)a1 + v18), v15, v16);
  }
  else
  {
    sub_4E030(a1, "ABI=0x%X", a2 & 0xF0);
  }
  if ( (a2 & 0xFu) > 2 )
    v21 = nullptr;
  else
    v21 = off_1471C0[(__int64)((unsigned __int64)(unsigned __int8)a2 << 60) >> 60];
  v22 = *(_QWORD *)(a1 + 8);
  v23 = v22 - 1;
  if ( !v22 )
    v23 = 0;
  v24 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v23 + 2) )
  {
    v24 = qvector_reserve(a1, *(char **)a1, v23 + 2, 1u);
    *(_QWORD *)a1 = v24;
  }
  *(_QWORD *)(a1 + 8) = v23 + 2;
  v24[v23] = 32;
  *(_BYTE *)(*(_QWORD *)a1 + v23 + 1) = 0;
  if ( v21 )
  {
    v25 = strlen(v21);
    v26 = *(_QWORD *)(a1 + 8);
    v27 = v26 - 1;
    if ( !v26 )
      v27 = 0;
    v28 = *(_BYTE **)a1;
    v29 = v25 + v27 + 1;
    if ( *(_QWORD *)(a1 + 16) < v29 )
    {
      v28 = qvector_reserve(a1, *(char **)a1, v25 + v27 + 1, 1u);
      *(_QWORD *)a1 = v28;
    }
    *(_QWORD *)(a1 + 8) = v29;
    v28[v27 + v25] = 0;
    memmove((void *)(*(_QWORD *)a1 + v27), v21, v25);
  }
  else
  {
    sub_4E030(a1, "ELFVER=0x%X", a2 & 0xF);
  }
  if ( (a2 & 0xC00000) == 0 )
    v21 = "8SP_4DP";
  v30 = *(_QWORD *)(a1 + 8);
  v31 = v30 - 1;
  if ( !v30 )
    v31 = 0;
  v32 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v31 + 2) )
  {
    v32 = qvector_reserve(a1, *(char **)a1, v31 + 2, 1u);
    *(_QWORD *)a1 = v32;
  }
  *(_QWORD *)(a1 + 8) = v31 + 2;
  v32[v31] = 32;
  *(_BYTE *)(*(_QWORD *)a1 + v31 + 1) = 0;
  sub_4DFA0(a1, v21);
  v33 = a2 & 0xFFFFF00;
  if ( (a2 & 0xFFFFF00) != 0 )
  {
    v47 = 0;
    v34 = a1;
    while ( 1 )
    {
      while ( 1 )
      {
        v35 = v33 & -v33;
        v48 = v33;
        if ( v35 <= 0x1FFFF )
          break;
        if ( v35 <= 0x1FFFFF )
        {
          if ( v35 > (int)&loc_7FFFF )
          {
            if ( v35 == 0x80000 )
            {
              v36 = "FPU_DP_INST";
              goto LABEL_91;
            }
            if ( v35 == 0x100000 )
            {
              v36 = "MAC_DX_INST";
              goto LABEL_91;
            }
          }
          else
          {
            if ( v35 == (_DWORD)&stru_20000 )
            {
              v36 = "VIDEO_INST";
              goto LABEL_91;
            }
            if ( v35 == 0x40000 )
            {
              v36 = "ENCRIPT_INST";
              goto LABEL_91;
            }
          }
        }
        else if ( v35 <= 0x1FFFFFF )
        {
          if ( v35 == 0x200000 )
          {
            v36 = "L2C_INST";
            goto LABEL_91;
          }
          if ( v35 == 0x1000000 )
          {
            v36 = "FPU_MAC_INST";
            goto LABEL_91;
          }
        }
        else
        {
          switch ( v35 )
          {
            case 0x2000000:
              v36 = "DSP_INST";
              goto LABEL_91;
            case 0x4000000:
              v36 = "PIC";
              goto LABEL_91;
            case 0x8000000:
              v36 = "CUSTOM_SEC";
              goto LABEL_91;
          }
        }
LABEL_101:
        v47 |= v35;
        v33 ^= v35;
        if ( !v33 )
          goto LABEL_104;
      }
      if ( v35 <= 4095 )
      {
        if ( v35 > 1023 )
        {
          if ( v35 == 1024 )
          {
            v36 = "EXT2_INST";
            goto LABEL_91;
          }
          if ( v35 == 2048 )
          {
            v36 = "FPU_INST";
            goto LABEL_91;
          }
        }
        else
        {
          v36 = "MFUSR_PC_INST";
          if ( v35 == 256 )
            goto LABEL_91;
          if ( v35 == 512 )
          {
            v36 = "EXT_INST";
            goto LABEL_91;
          }
        }
        goto LABEL_101;
      }
      if ( v35 <= 0x3FFF )
      {
        if ( v35 == 4096 )
        {
          v36 = "AUDIO_INST";
          goto LABEL_91;
        }
        if ( v35 == 0x2000 )
        {
          v36 = "DIV_DX_INST";
          goto LABEL_91;
        }
        goto LABEL_101;
      }
      if ( v35 == 0x4000 )
      {
        v36 = "16BIT_INST";
        goto LABEL_91;
      }
      if ( v35 == 0x8000 )
      {
        v36 = "STRING_INST";
        goto LABEL_91;
      }
      if ( v35 != 0x10000 )
        goto LABEL_101;
      v36 = "REDUCED_REGS";
LABEL_91:
      v37 = *(_QWORD *)(v34 + 8);
      v38 = v37 - 1;
      if ( !v37 )
        v38 = 0;
      v39 = *(char **)v34;
      if ( *(_QWORD *)(v34 + 16) < (unsigned __int64)(v38 + 2) )
      {
        v39 = (char *)qvector_reserve(v34, *(char **)v34, v38 + 2, 1u);
        *(_QWORD *)v34 = v39;
      }
      *(_QWORD *)(v34 + 8) = v38 + 2;
      v39[v38] = 32;
      *(_BYTE *)(*(_QWORD *)v34 + v38 + 1) = 0;
      v40 = strlen(v36);
      v41 = *(_QWORD *)(v34 + 8);
      v42 = v41 - 1;
      if ( !v41 )
        v42 = 0;
      v43 = *(char **)v34;
      v44 = (_QWORD *)v34;
      v45 = v42 + v40 + 1;
      if ( v44[2] < v45 )
      {
        v43 = (char *)qvector_reserve((__int64)v44, v43, v42 + v40 + 1, 1u);
        *v44 = v43;
      }
      v44[1] = v45;
      v43[v42 + v40] = 0;
      memmove((void *)(*v44 + v42), v36, v40);
      v34 = (__int64)v44;
      v33 = v35 ^ v48;
      if ( v35 == v48 )
        goto LABEL_104;
    }
  }
  v47 = 0;
  v34 = a1;
LABEL_104:
  if ( v49 )
  {
    *v49 = v47;
  }
  else if ( v47 )
  {
    sub_4E030(v34, " 0x%X", v47);
  }
  return v34;
}
// 20000: using guessed type Elf64_Rela stru_20000;
// 147190: using guessed type char *off_147190[9];
// 1471C0: using guessed type char *off_1471C0[3];
