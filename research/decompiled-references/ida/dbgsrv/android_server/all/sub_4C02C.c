/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C02C
// Address: 0x000000000004C02C

//----- (000000000004C02C) ----------------------------------------------------
pthread_mutex_t *__usercall sub_4C02C@<X0>(unsigned int a1@<W0>, int *a2@<X1>, __int64 a3@<X8>)
{
  __int64 v5; // x21
  const char *v6; // x22
  size_t v7; // x23
  unsigned __int64 v8; // x24
  _BYTE *v9; // x0
  int v10; // w23
  const char *v11; // x22
  void *v12; // x1
  __int64 v13; // x8
  __int64 v14; // x20
  size_t v15; // x0
  void *v16; // x1
  __int64 v17; // x8
  size_t v18; // x23
  __int64 v19; // x20
  size_t v20; // x25
  unsigned __int64 v21; // x24
  char *v22; // x22
  void *v23; // x1
  __int64 v24; // x8
  __int64 v25; // x20
  size_t v26; // x0
  void *v27; // x1
  __int64 v28; // x8
  size_t v29; // x23
  __int64 v30; // x20
  size_t v31; // x25
  unsigned __int64 v32; // x24
  void *v33; // x1
  __int64 v34; // x9
  __int64 v35; // x20
  pthread_mutex_t *result; // x0
  int v37; // w25
  int v38; // w21
  int v39; // w26
  const char *v40; // x22
  void *v41; // x1
  __int64 v42; // x8
  __int64 v43; // x20
  size_t v44; // x0
  void *v45; // x1
  __int64 v46; // x8
  size_t v47; // x23
  __int64 v48; // x20
  size_t v49; // x28
  unsigned __int64 v50; // x24
  int *v51; // [xsp+8h] [xbp-68h]

  *(_QWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0;
  v5 = a1;
  *(_QWORD *)(a3 + 16) = 0;
  v6 = "ARCH_STAR_RESERVED";
  switch ( ((a1 & 0xF0000000) + 1879048192) >> 28 )
  {
    case 0u:
      v6 = "ARCH_STAR_V0_9";
      goto LABEL_8;
    case 7u:
      goto LABEL_8;
    case 8u:
      v6 = "ARCH_STAR_V1_0";
      goto LABEL_8;
    case 9u:
      v6 = "ARCH_STAR_V2_0";
      goto LABEL_8;
    case 0xAu:
      v6 = "ARCH_STAR_V3_0";
      goto LABEL_8;
    case 0xBu:
      v6 = "ARCH_STAR_V3_M";
LABEL_8:
      v7 = strlen(v6);
      v8 = v7 + 1;
      if ( v7 == -1 )
      {
        v9 = nullptr;
      }
      else
      {
        v9 = qvector_reserve((pthread_mutex_t *)a3, nullptr, v8, 1u);
        *(_QWORD *)a3 = v9;
      }
      *(_QWORD *)(a3 + 8) = v8;
      v9[v7] = 0;
      memmove(*(void **)a3, v6, v7);
      break;
    default:
      sub_3C748(a3, "Arch=0x%X", a1 & 0xF0000000);
      break;
  }
  v10 = v5 & 0xF0;
  if ( (unsigned __int8)((unsigned __int8)v5 >> 4) > 5u )
    v11 = nullptr;
  else
    v11 = off_156A00[(__int64)(char)v10 >> 4];
  v12 = *(void **)a3;
  v13 = *(_QWORD *)(a3 + 8);
  if ( v13 )
    v14 = v13 - 1;
  else
    v14 = 0;
  if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v14 + 2) )
  {
    v12 = qvector_reserve((pthread_mutex_t *)a3, v12, v14 + 2, 1u);
    *(_QWORD *)a3 = v12;
  }
  *(_QWORD *)(a3 + 8) = v14 + 2;
  *((_BYTE *)v12 + v14) = 32;
  *(_BYTE *)(*(_QWORD *)a3 + v14 + 1) = 0;
  if ( v11 )
  {
    v15 = strlen(v11);
    v16 = *(void **)a3;
    v17 = *(_QWORD *)(a3 + 8);
    v18 = v15;
    if ( v17 )
      v19 = v17 - 1;
    else
      v19 = 0;
    v20 = v19 + v15;
    v21 = v19 + v15 + 1;
    if ( *(_QWORD *)(a3 + 16) < v21 )
    {
      v16 = qvector_reserve((pthread_mutex_t *)a3, v16, v21, 1u);
      *(_QWORD *)a3 = v16;
    }
    *(_QWORD *)(a3 + 8) = v21;
    *((_BYTE *)v16 + v20) = 0;
    memmove((void *)(*(_QWORD *)a3 + v19), v11, v18);
  }
  else
  {
    sub_4C730((pthread_mutex_t *)a3, "ABI=0x%X", v10);
  }
  if ( ((unsigned __int8)v5 & 0xFu) > 2 )
    v22 = nullptr;
  else
    v22 = off_156A30[v5 << 60 >> 60];
  v23 = *(void **)a3;
  v24 = *(_QWORD *)(a3 + 8);
  if ( v24 )
    v25 = v24 - 1;
  else
    v25 = 0;
  if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v25 + 2) )
  {
    v23 = qvector_reserve((pthread_mutex_t *)a3, v23, v25 + 2, 1u);
    *(_QWORD *)a3 = v23;
  }
  *(_QWORD *)(a3 + 8) = v25 + 2;
  *((_BYTE *)v23 + v25) = 32;
  *(_BYTE *)(*(_QWORD *)a3 + v25 + 1) = 0;
  if ( v22 )
  {
    v26 = strlen(v22);
    v27 = *(void **)a3;
    v28 = *(_QWORD *)(a3 + 8);
    v29 = v26;
    if ( v28 )
      v30 = v28 - 1;
    else
      v30 = 0;
    v31 = v30 + v26;
    v32 = v30 + v26 + 1;
    if ( *(_QWORD *)(a3 + 16) < v32 )
    {
      v27 = qvector_reserve((pthread_mutex_t *)a3, v27, v32, 1u);
      *(_QWORD *)a3 = v27;
    }
    *(_QWORD *)(a3 + 8) = v32;
    *((_BYTE *)v27 + v31) = 0;
    memmove((void *)(*(_QWORD *)a3 + v30), v22, v29);
  }
  else
  {
    sub_4C730((pthread_mutex_t *)a3, "ELFVER=0x%X", v5 & 0xF);
  }
  v33 = *(void **)a3;
  v34 = *(_QWORD *)(a3 + 8);
  if ( (v5 & 0xC00000) == 0 )
    v22 = "8SP_4DP";
  if ( v34 )
    v35 = v34 - 1;
  else
    v35 = 0;
  if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v35 + 2) )
  {
    v33 = qvector_reserve((pthread_mutex_t *)a3, v33, v35 + 2, 1u);
    *(_QWORD *)a3 = v33;
  }
  *(_QWORD *)(a3 + 8) = v35 + 2;
  *((_BYTE *)v33 + v35) = 32;
  *(_BYTE *)(*(_QWORD *)a3 + v35 + 1) = 0;
  result = (pthread_mutex_t *)sub_4C694(a3, v22);
  v37 = v5 & 0xFFFFF00;
  v51 = a2;
  if ( (v5 & 0xFFFFF00) != 0 )
  {
    v38 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v39 = v37 & -v37;
        if ( v39 < 0x20000 )
          break;
        if ( v39 < 0x200000 )
        {
          if ( v39 >= 0x80000 )
          {
            if ( v39 == 0x80000 )
            {
              v40 = "FPU_DP_INST";
              goto LABEL_95;
            }
            if ( v39 == 0x100000 )
            {
              v40 = "MAC_DX_INST";
              goto LABEL_95;
            }
          }
          else
          {
            if ( v39 == 0x20000 )
            {
              v40 = "VIDEO_INST";
              goto LABEL_95;
            }
            if ( v39 == 0x40000 )
            {
              v40 = "ENCRIPT_INST";
              goto LABEL_95;
            }
          }
        }
        else if ( v39 <= 0x1FFFFFF )
        {
          if ( v39 == 0x200000 )
          {
            v40 = "L2C_INST";
            goto LABEL_95;
          }
          if ( v39 == 0x1000000 )
          {
            v40 = "FPU_MAC_INST";
            goto LABEL_95;
          }
        }
        else
        {
          switch ( v39 )
          {
            case 0x2000000:
              v40 = "DSP_INST";
              goto LABEL_95;
            case 0x4000000:
              v40 = "PIC";
              goto LABEL_95;
            case 0x8000000:
              v40 = "CUSTOM_SEC";
              goto LABEL_95;
          }
        }
LABEL_107:
        v38 |= v39;
        v37 ^= v39;
        if ( !v37 )
          goto LABEL_110;
      }
      if ( v39 <= 4095 )
      {
        if ( v39 > 1023 )
        {
          if ( v39 == 1024 )
          {
            v40 = "EXT2_INST";
            goto LABEL_95;
          }
          if ( v39 == 2048 )
          {
            v40 = "FPU_INST";
            goto LABEL_95;
          }
        }
        else
        {
          v40 = "MFUSR_PC_INST";
          if ( v39 == 256 )
            goto LABEL_95;
          if ( v39 == 512 )
          {
            v40 = "EXT_INST";
            goto LABEL_95;
          }
        }
        goto LABEL_107;
      }
      if ( v39 < 0x4000 )
      {
        if ( v39 == 4096 )
        {
          v40 = "AUDIO_INST";
          goto LABEL_95;
        }
        if ( v39 == 0x2000 )
        {
          v40 = "DIV_DX_INST";
          goto LABEL_95;
        }
        goto LABEL_107;
      }
      if ( v39 == 0x4000 )
      {
        v40 = "16BIT_INST";
        goto LABEL_95;
      }
      if ( v39 == 0x8000 )
      {
        v40 = "STRING_INST";
        goto LABEL_95;
      }
      if ( v39 != 0x10000 )
        goto LABEL_107;
      v40 = "REDUCED_REGS";
LABEL_95:
      v41 = *(void **)a3;
      v42 = *(_QWORD *)(a3 + 8);
      if ( v42 )
        v43 = v42 - 1;
      else
        v43 = 0;
      if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v43 + 2) )
      {
        v41 = qvector_reserve((pthread_mutex_t *)a3, v41, v43 + 2, 1u);
        *(_QWORD *)a3 = v41;
      }
      *(_QWORD *)(a3 + 8) = v43 + 2;
      *((_BYTE *)v41 + v43) = 32;
      *(_BYTE *)(*(_QWORD *)a3 + v43 + 1) = 0;
      v44 = strlen(v40);
      v45 = *(void **)a3;
      v46 = *(_QWORD *)(a3 + 8);
      v47 = v44;
      if ( v46 )
        v48 = v46 - 1;
      else
        v48 = 0;
      v49 = v48 + v44;
      v50 = v48 + v44 + 1;
      if ( *(_QWORD *)(a3 + 16) < v50 )
      {
        v45 = qvector_reserve((pthread_mutex_t *)a3, v45, v50, 1u);
        *(_QWORD *)a3 = v45;
      }
      *(_QWORD *)(a3 + 8) = v50;
      *((_BYTE *)v45 + v49) = 0;
      result = (pthread_mutex_t *)memmove((void *)(*(_QWORD *)a3 + v48), v40, v47);
      v37 ^= v39;
      if ( !v37 )
        goto LABEL_110;
    }
  }
  v38 = 0;
LABEL_110:
  if ( v51 )
  {
    *v51 = v38;
  }
  else if ( v38 )
  {
    return sub_4C730((pthread_mutex_t *)a3, " 0x%X", v38);
  }
  return result;
}
// 156A00: using guessed type char *off_156A00[9];
// 156A30: using guessed type char *off_156A30[3];
