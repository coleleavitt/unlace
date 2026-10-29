/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28700
// Address: 0x00028700

//----- (00028700) --------------------------------------------------------
int __fastcall sub_28700(int a1, int a2, int *a3)
{
  unsigned int v4; // r0
  int v5; // r5
  const char *v6; // r3
  _DWORD *v7; // r2
  int v8; // r0
  int v9; // r4
  _BYTE *v10; // r0
  size_t v11; // r0
  _DWORD *v12; // r2
  size_t v13; // r7
  int v14; // r0
  int v15; // r4
  unsigned int v16; // r5
  _BYTE *v17; // r0
  _DWORD *v18; // r2
  int v19; // r0
  int v20; // r4
  _BYTE *v21; // r0
  size_t v22; // r0
  _DWORD *v23; // r2
  size_t v24; // r3
  int v25; // r0
  int v26; // r6
  size_t v27; // r5
  unsigned int v28; // r7
  _BYTE *v29; // r0
  _DWORD *v30; // r2
  int v31; // r0
  int v32; // r4
  _BYTE *v33; // r0
  _DWORD *v34; // r4
  int v35; // r3
  _DWORD *v36; // r2
  int v37; // r7
  const char *v38; // r5
  int v39; // r0
  int v40; // r4
  void *v41; // r1
  _DWORD *v42; // r5
  size_t v43; // r0
  _DWORD *v44; // r2
  size_t v45; // r3
  int v46; // r0
  int v47; // r4
  size_t v48; // r5
  unsigned int v49; // r6
  void *v50; // r1
  int result; // r0
  int v53; // [sp+18h] [bp-20h]
  size_t v54; // [sp+1Ch] [bp-1Ch]
  char *s; // [sp+28h] [bp-10h]
  char *sa; // [sp+28h] [bp-10h]
  int v57; // [sp+2Ch] [bp-Ch]
  int v58; // [sp+2Ch] [bp-Ch]
  char *v60; // [sp+34h] [bp-4h]
  char *v61; // [sp+34h] [bp-4h]

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = (a2 & 0xF0000000) + 1879048192;
  if ( v4 >> 30 != 3 )
    __asm { MOV             PC, R1 }
  sub_1DA58(a1, "Arch=0x%X", a2 & 0xF0000000);
  v5 = a2 & 0xF0;
  v6 = nullptr;
  if ( (unsigned __int8)a2 >> 4 <= 5u )
    v6 = *(char **)((char *)off_D64E0 + ((char)v5 >> 2));
  v7 = (_DWORD *)a1;
  v8 = *(_DWORD *)(a1 + 4);
  v9 = v8 - 1;
  if ( !v8 )
    v9 = 0;
  v57 = a2;
  s = (char *)v6;
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v9 + 2) )
  {
    v10 = *(_BYTE **)a1;
  }
  else
  {
    v10 = qvector_reserve(a1, *(void **)a1, v9 + 2, 1u);
    *(_DWORD *)a1 = v10;
    v7 = (_DWORD *)a1;
    v6 = s;
  }
  v7[1] = v9 + 2;
  v10[v9] = 32;
  v60 = nullptr;
  *(_BYTE *)(*v7 + v9 + 1) = 0;
  if ( v6 )
  {
    v11 = strlen(v6);
    v12 = (_DWORD *)a1;
    v13 = v11;
    v14 = *(_DWORD *)(a1 + 4);
    v15 = v14 - 1;
    if ( !v14 )
      v15 = 0;
    v16 = v15 + v13 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v16 )
    {
      v17 = *(_BYTE **)a1;
    }
    else
    {
      v17 = qvector_reserve(a1, *(void **)a1, v16, 1u);
      *(_DWORD *)a1 = v17;
      v12 = (_DWORD *)a1;
    }
    v12[1] = v16;
    v17[v15 + v13] = 0;
    memmove((void *)(*v12 + v15), s, v13);
  }
  else
  {
    sub_28C8C((int)v7, "ABI=0x%X", v5);
  }
  if ( (a2 & 0xFu) <= 2 )
    v60 = *(char **)((char *)off_D64F8 + (a2 << 28 >> 26));
  v18 = (_DWORD *)a1;
  v19 = *(_DWORD *)(a1 + 4);
  v20 = v19 - 1;
  if ( !v19 )
    v20 = 0;
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v20 + 2) )
  {
    v21 = *(_BYTE **)a1;
  }
  else
  {
    v21 = qvector_reserve(a1, *(void **)a1, v20 + 2, 1u);
    *(_DWORD *)a1 = v21;
    v18 = (_DWORD *)a1;
  }
  v18[1] = v20 + 2;
  v21[v20] = 32;
  *(_BYTE *)(*v18 + v20 + 1) = 0;
  if ( v60 )
  {
    v22 = strlen(v60);
    v23 = (_DWORD *)a1;
    v24 = v22;
    v25 = *(_DWORD *)(a1 + 4);
    v26 = v25 - 1;
    if ( !v25 )
      v26 = 0;
    v27 = v26 + v24;
    v28 = v26 + v24 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v28 )
    {
      v29 = *(_BYTE **)a1;
    }
    else
    {
      sa = (char *)v24;
      v29 = qvector_reserve(a1, *(void **)a1, v28, 1u);
      v23 = (_DWORD *)a1;
      *(_DWORD *)a1 = v29;
      v24 = (size_t)sa;
    }
    v23[1] = v28;
    v29[v27] = 0;
    memmove((void *)(*v23 + v26), v60, v24);
  }
  else
  {
    sub_28C8C((int)v18, "ELFVER=0x%X", a2 & 0xF);
  }
  if ( !((unsigned int)(v57 << 8) >> 30) )
    v60 = "8SP_4DP";
  v30 = (_DWORD *)a1;
  v31 = *(_DWORD *)(a1 + 4);
  v32 = v31 - 1;
  if ( !v31 )
    v32 = 0;
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v32 + 2) )
  {
    v33 = *(_BYTE **)a1;
  }
  else
  {
    v33 = qvector_reserve(a1, *(void **)a1, v32 + 2, 1u);
    *(_DWORD *)a1 = v33;
    v30 = (_DWORD *)a1;
  }
  v30[1] = v32 + 2;
  v33[v32] = 32;
  v53 = 0;
  *(_BYTE *)(*v30 + v32 + 1) = 0;
  v34 = v30;
  sub_28C34((int)v30, v60);
  v35 = v57 & 0xFFFFF00;
  if ( (v57 & 0xFFFFF00) != 0 )
  {
    v36 = v34;
    v53 = 0;
    do
    {
      v37 = -v35 & v35;
      if ( v37 > 0x1FFFF )
      {
        if ( v37 <= 0x1FFFFF )
        {
          if ( v37 > 0x7FFFF )
          {
            if ( v37 == 0x80000 )
            {
              v38 = "FPU_DP_INST";
              goto LABEL_85;
            }
            if ( v37 == 0x100000 )
            {
              v38 = "MAC_DX_INST";
              goto LABEL_85;
            }
          }
          else
          {
            if ( v37 == 0x20000 )
            {
              v38 = "VIDEO_INST";
              goto LABEL_85;
            }
            if ( v37 == 0x40000 )
            {
              v38 = "ENCRIPT_INST";
              goto LABEL_85;
            }
          }
        }
        else if ( v37 <= 0x1FFFFFF )
        {
          if ( v37 == 0x200000 )
          {
            v38 = "L2C_INST";
            goto LABEL_85;
          }
          if ( v37 == 0x1000000 )
          {
            v38 = "FPU_MAC_INST";
            goto LABEL_85;
          }
        }
        else
        {
          switch ( v37 )
          {
            case 0x2000000:
              v38 = "DSP_INST";
              goto LABEL_85;
            case 0x4000000:
              v38 = "PIC";
              goto LABEL_85;
            case 0x8000000:
              v38 = "CUSTOM_SEC";
              goto LABEL_85;
          }
        }
      }
      else if ( v37 <= 4095 )
      {
        if ( v37 > 1023 )
        {
          if ( v37 == 1024 )
          {
            v38 = "EXT2_INST";
            goto LABEL_85;
          }
          if ( v37 == 2048 )
          {
            v38 = "FPU_INST";
            goto LABEL_85;
          }
        }
        else
        {
          v38 = "MFUSR_PC_INST";
          if ( v37 == 256 )
            goto LABEL_85;
          if ( v37 == 512 )
          {
            v38 = "EXT_INST";
            goto LABEL_85;
          }
        }
      }
      else if ( v37 <= 0x3FFF )
      {
        if ( v37 == 4096 )
        {
          v38 = "AUDIO_INST";
          goto LABEL_85;
        }
        if ( v37 == 0x2000 )
        {
          v38 = "DIV_DX_INST";
          goto LABEL_85;
        }
      }
      else
      {
        switch ( v37 )
        {
          case 0x4000:
            v38 = "16BIT_INST";
            goto LABEL_85;
          case 0x8000:
            v38 = "STRING_INST";
            goto LABEL_85;
          case 0x10000:
            v38 = "REDUCED_REGS";
LABEL_85:
            v58 = v35;
            v39 = v36[1];
            v40 = v39 - 1;
            if ( !v39 )
              v40 = 0;
            v41 = (void *)*v36;
            v61 = (char *)v38;
            if ( v36[2] < (unsigned int)(v40 + 2) )
            {
              v42 = v36;
              v41 = qvector_reserve((int)v36, v41, v40 + 2, 1u);
              *v42 = v41;
              v36 = v42;
              v38 = v61;
            }
            v36[1] = v40 + 2;
            *((_BYTE *)v41 + v40) = 32;
            *(_BYTE *)(*v36 + v40 + 1) = 0;
            v43 = strlen(v38);
            v44 = (_DWORD *)a1;
            v45 = v43;
            v46 = *(_DWORD *)(a1 + 4);
            v47 = v46 - 1;
            if ( !v46 )
              v47 = 0;
            v48 = v47 + v45;
            v49 = v47 + v45 + 1;
            v50 = *(void **)a1;
            if ( *(_DWORD *)(a1 + 8) < v49 )
            {
              v54 = v45;
              v50 = qvector_reserve(a1, v50, v49, 1u);
              *(_DWORD *)a1 = v50;
              v44 = (_DWORD *)a1;
              v45 = v54;
            }
            v44[1] = v49;
            *((_BYTE *)v50 + v48) = 0;
            memmove((void *)(*v44 + v47), v61, v45);
            v36 = (_DWORD *)a1;
            v35 = v58;
            goto LABEL_94;
        }
      }
      v53 |= v37;
LABEL_94:
      v35 ^= v37;
    }
    while ( v35 );
  }
  result = (int)a3;
  if ( a3 )
  {
    *a3 = v53;
  }
  else if ( v53 )
  {
    return sub_28C8C(a1, " 0x%X", v53);
  }
  return result;
}
// D64E0: using guessed type char *off_D64E0[9];
// D64F8: using guessed type char *off_D64F8[3];
