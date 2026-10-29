/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30C60
// Address: 0x00030C60

//----- (00030C60) --------------------------------------------------------
int __userpurge sub_30C60@<eax>(int a1, int a2, int *a3)
{
  unsigned int v3; // ecx
  const char *v4; // esi
  size_t v5; // eax
  size_t v6; // esi
  size_t v7; // edi
  _BYTE *v8; // eax
  int v9; // ecx
  const char *v10; // edx
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // esi
  _BYTE *v14; // eax
  size_t v15; // eax
  _DWORD *v16; // edx
  size_t v17; // ecx
  int v18; // eax
  int v19; // esi
  unsigned int v20; // edi
  _BYTE *v21; // eax
  const char *v22; // edx
  _DWORD *v23; // edx
  int v24; // eax
  int v25; // esi
  _BYTE *v26; // eax
  size_t v27; // eax
  _DWORD *v28; // edx
  size_t v29; // ecx
  int v30; // eax
  int v31; // esi
  unsigned int v32; // edi
  _BYTE *v33; // eax
  int v34; // edi
  const char *v35; // ecx
  int v36; // eax
  int v37; // esi
  int v38; // edx
  _BYTE *v39; // eax
  int v40; // ecx
  void **v41; // edi
  int v42; // eax
  const char *v43; // edx
  void *v44; // eax
  void *v45; // ecx
  int v46; // esi
  void *v47; // ecx
  size_t v48; // eax
  _DWORD *v49; // edx
  size_t v50; // edi
  void *v51; // eax
  int v52; // ecx
  int v53; // esi
  unsigned int v54; // edi
  const char *v56; // [esp+8h] [ebp-34h]
  const char *v57; // [esp+8h] [ebp-34h]
  const char *v58; // [esp+8h] [ebp-34h]
  char *v59; // [esp+8h] [ebp-34h]
  const char *v60; // [esp+8h] [ebp-34h]
  size_t v61; // [esp+Ch] [ebp-30h]
  size_t v62; // [esp+Ch] [ebp-30h]
  int v63; // [esp+Ch] [ebp-30h]
  int v64; // [esp+10h] [ebp-2Ch]
  size_t v65; // [esp+14h] [ebp-28h]
  int v66; // [esp+28h] [ebp-14h]

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v3 = ((a2 & 0xF0000000) + 1879048192) >> 28;
  if ( (unsigned __int8)v3 > 0xBu )
  {
LABEL_6:
    sub_1F400(a1, "Arch=0x%X", a2 & 0xF0000000);
  }
  else
  {
    v4 = "ARCH_STAR_RESERVED";
    switch ( v3 )
    {
      case 0u:
        v4 = "ARCH_STAR_V0_9";
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
        v4 = "ARCH_STAR_V1_0";
        break;
      case 9u:
        v4 = "ARCH_STAR_V2_0";
        break;
      case 0xAu:
        v4 = "ARCH_STAR_V3_0";
        break;
      case 0xBu:
        v4 = "ARCH_STAR_V3_M";
        break;
    }
    v56 = v4;
    v5 = strlen(v4);
    v6 = v5;
    v7 = v5 + 1;
    if ( v5 == -1 )
    {
      v9 = a1;
      v8 = *(_BYTE **)a1;
    }
    else
    {
      v8 = qvector_reserve(a1, *(void **)a1, v5 + 1, 1u);
      v9 = a1;
      *(_DWORD *)a1 = v8;
    }
    *(_DWORD *)(v9 + 4) = v7;
    v8[v6] = 0;
    memmove(*(void **)v9, v56, v6);
  }
  v10 = nullptr;
  if ( (unsigned __int8)((unsigned __int8)a2 >> 4) <= 5u )
    v10 = *(char **)((char *)off_134880 + ((char)(a2 & 0xF0) >> 2));
  v11 = (_DWORD *)a1;
  v12 = *(_DWORD *)(a1 + 4);
  v13 = v12 - 1;
  if ( !v12 )
    v13 = 0;
  v57 = v10;
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v13 + 2) )
  {
    v14 = *(_BYTE **)a1;
  }
  else
  {
    v14 = qvector_reserve(a1, *(void **)a1, v13 + 2, 1u);
    v11 = (_DWORD *)a1;
    *(_DWORD *)a1 = v14;
    v10 = v57;
  }
  v11[1] = v13 + 2;
  v14[v13] = 32;
  *(_BYTE *)(*v11 + v13 + 1) = 0;
  if ( v10 )
  {
    v15 = strlen(v10);
    v16 = (_DWORD *)a1;
    v17 = v15;
    v18 = *(_DWORD *)(a1 + 4);
    v19 = v18 - 1;
    if ( !v18 )
      v19 = 0;
    v20 = v19 + v17 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v20 )
    {
      v21 = *(_BYTE **)a1;
    }
    else
    {
      v61 = v17;
      v21 = qvector_reserve(a1, *(void **)a1, v19 + v17 + 1, 1u);
      *(_DWORD *)a1 = v21;
      v16 = (_DWORD *)a1;
      v17 = v61;
    }
    v16[1] = v20;
    v21[v19 + v17] = 0;
    memmove((void *)(*v16 + v19), v57, v17);
  }
  else
  {
    sub_31370((int)v11, "ABI=0x%X", a2 & 0xF0);
  }
  v22 = nullptr;
  if ( (a2 & 0xFu) <= 2 )
    v22 = *(char **)((char *)off_134898 + (a2 << 28 >> 26));
  v58 = v22;
  v23 = (_DWORD *)a1;
  v24 = *(_DWORD *)(a1 + 4);
  v25 = v24 - 1;
  if ( !v24 )
    v25 = 0;
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v25 + 2) )
  {
    v26 = *(_BYTE **)a1;
  }
  else
  {
    v26 = qvector_reserve(a1, *(void **)a1, v25 + 2, 1u);
    *(_DWORD *)a1 = v26;
    v23 = (_DWORD *)a1;
  }
  v23[1] = v25 + 2;
  v26[v25] = 32;
  *(_BYTE *)(*v23 + v25 + 1) = 0;
  if ( v58 )
  {
    v27 = strlen(v58);
    v28 = (_DWORD *)a1;
    v29 = v27;
    v30 = *(_DWORD *)(a1 + 4);
    v31 = v30 - 1;
    if ( !v30 )
      v31 = 0;
    v32 = v31 + v29 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v32 )
    {
      v33 = *(_BYTE **)a1;
    }
    else
    {
      v62 = v29;
      v33 = qvector_reserve(a1, *(void **)a1, v31 + v29 + 1, 1u);
      *(_DWORD *)a1 = v33;
      v28 = (_DWORD *)a1;
      v29 = v62;
    }
    v28[1] = v32;
    v33[v31 + v29] = 0;
    v34 = (int)v28;
    memmove((void *)(*v28 + v31), v58, v29);
  }
  else
  {
    v34 = (int)v23;
    sub_31370((int)v23, "ELFVER=0x%X", a2 & 0xF);
  }
  v35 = v58;
  if ( (a2 & 0xC00000) == 0 )
    v35 = "8SP_4DP";
  v59 = (char *)v35;
  v36 = *(_DWORD *)(v34 + 4);
  v37 = v36 - 1;
  if ( !v36 )
    v37 = 0;
  v38 = v37 + 2;
  if ( *(_DWORD *)(v34 + 8) >= (unsigned int)(v37 + 2) )
  {
    v39 = *(_BYTE **)v34;
  }
  else
  {
    v39 = qvector_reserve(v34, *(void **)v34, v37 + 2, 1u);
    *(_DWORD *)v34 = v39;
    v38 = v37 + 2;
  }
  *(_DWORD *)(v34 + 4) = v38;
  v39[v37] = 32;
  *(_BYTE *)(*(_DWORD *)v34 + v37 + 1) = 0;
  sub_312D0((_DWORD *)v34, v59);
  v40 = a2 & 0xFFFFF00;
  if ( (a2 & 0xFFFFF00) != 0 )
  {
    v64 = 0;
    v41 = (void **)a1;
    while ( 1 )
    {
      while ( 1 )
      {
        v42 = v40 & -v40;
        if ( v42 <= (int)&unk_1FFFF )
          break;
        if ( v42 <= 0x1FFFFF )
        {
          if ( v42 > 0x7FFFF )
          {
            if ( (_UNKNOWN *)v42 == &loc_80000 )
            {
              v43 = "FPU_DP_INST";
              goto LABEL_94;
            }
            if ( (char *)v42 == &byte_100000 )
            {
              v43 = "MAC_DX_INST";
              goto LABEL_94;
            }
          }
          else
          {
            if ( (char *(__cdecl *)(int, int))v42 == sub_20000 )
            {
              v43 = "VIDEO_INST";
              goto LABEL_94;
            }
            if ( v42 == 0x40000 )
            {
              v43 = "ENCRIPT_INST";
              goto LABEL_94;
            }
          }
        }
        else if ( v42 <= 0x1FFFFFF )
        {
          if ( v42 == 0x200000 )
          {
            v43 = "L2C_INST";
            goto LABEL_94;
          }
          if ( v42 == 0x1000000 )
          {
            v43 = "FPU_MAC_INST";
            goto LABEL_94;
          }
        }
        else
        {
          switch ( v42 )
          {
            case 0x2000000:
              v43 = "DSP_INST";
              goto LABEL_94;
            case 0x4000000:
              v43 = "PIC";
              goto LABEL_94;
            case 0x8000000:
              v43 = "CUSTOM_SEC";
              goto LABEL_94;
          }
        }
LABEL_104:
        v64 |= v42;
        v40 ^= v42;
        if ( !v40 )
          goto LABEL_107;
      }
      if ( v42 <= 4095 )
      {
        if ( v42 > 1023 )
        {
          if ( v42 == 1024 )
          {
            v43 = "EXT2_INST";
            goto LABEL_94;
          }
          if ( v42 == 2048 )
          {
            v43 = "FPU_INST";
            goto LABEL_94;
          }
        }
        else
        {
          v43 = "MFUSR_PC_INST";
          if ( v42 == 256 )
            goto LABEL_94;
          if ( v42 == 512 )
          {
            v43 = "EXT_INST";
            goto LABEL_94;
          }
        }
        goto LABEL_104;
      }
      if ( v42 <= 0x3FFF )
      {
        if ( v42 == 4096 )
        {
          v43 = "AUDIO_INST";
          goto LABEL_94;
        }
        if ( v42 == 0x2000 )
        {
          v43 = "DIV_DX_INST";
          goto LABEL_94;
        }
        goto LABEL_104;
      }
      if ( v42 == 0x4000 )
      {
        v43 = "16BIT_INST";
        goto LABEL_94;
      }
      if ( v42 == 0x8000 )
      {
        v43 = "STRING_INST";
        goto LABEL_94;
      }
      if ( (Elf32_Rel *)v42 != &stru_10000 )
        goto LABEL_104;
      v43 = "REDUCED_REGS";
LABEL_94:
      v66 = v40 & -v40;
      v63 = v40;
      v44 = *v41;
      v45 = v41[1];
      v46 = (int)v45 - 1;
      if ( !v45 )
        v46 = 0;
      v47 = (void *)(v46 + 2);
      v60 = v43;
      if ( (unsigned int)v41[2] < v46 + 2 )
      {
        v44 = qvector_reserve((int)v41, v44, v46 + 2, 1u);
        *v41 = v44;
        v43 = v60;
        v47 = (void *)(v46 + 2);
      }
      v41[1] = v47;
      *((_BYTE *)v44 + v46) = 32;
      *((_BYTE *)*v41 + v46 + 1) = 0;
      v48 = strlen(v43);
      v49 = (_DWORD *)a1;
      v50 = v48;
      v51 = *(void **)a1;
      v52 = *(_DWORD *)(a1 + 4);
      v53 = v52 - 1;
      if ( !v52 )
        v53 = 0;
      v65 = v50;
      v54 = v53 + v50 + 1;
      if ( *(_DWORD *)(a1 + 8) < v54 )
      {
        v51 = qvector_reserve(a1, v51, v54, 1u);
        *(_DWORD *)a1 = v51;
        v49 = (_DWORD *)a1;
      }
      v49[1] = v54;
      *((_BYTE *)v51 + v53 + v65) = 0;
      memmove((void *)(*v49 + v53), v60, v65);
      v41 = (void **)a1;
      v40 = v66 ^ v63;
      if ( v66 == v63 )
        goto LABEL_107;
    }
  }
  v64 = 0;
LABEL_107:
  if ( a3 )
  {
    *a3 = v64;
  }
  else if ( v64 )
  {
    sub_31370(a1, " 0x%X", v64);
  }
  return a1;
}
// 10000: using guessed type Elf32_Rel stru_10000;
// 100000: using guessed type char byte_100000;
// 134880: using guessed type char *off_134880[9];
// 134898: using guessed type char *off_134898[3];
