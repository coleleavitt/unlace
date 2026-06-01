/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58478
// Address: 0x00058478

//----- (00058478) --------------------------------------------------------
int __fastcall sub_58478(int a1, int a2, int a3, int a4)
{
  int v8; // r6
  int v10; // r3
  bool v11; // zf
  unsigned int v12; // r2
  int v13; // r3
  bool v14; // zf
  unsigned int v15; // r1
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  unsigned int v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r1
  int v23; // r3
  unsigned int v24; // r7
  unsigned int v25; // r3
  unsigned int v26; // r9
  int v27; // r3
  unsigned __int16 v28; // r2
  int v29; // r0
  int v30; // r12
  __int16 v31; // r7
  int v32; // r8
  bool v33; // zf
  int v34; // r3
  int v35; // r2
  int v36; // r1
  int v37; // lr
  int v38; // r12
  __int16 v39; // r7
  int v40; // r0
  int v41; // r3
  unsigned int v42; // r3
  int v43; // r0
  int v44; // r2
  unsigned int v45; // [sp+8h] [bp-10h] BYREF
  _DWORD v46[2]; // [sp+Ch] [bp-Ch] BYREF

  *(_BYTE *)(a1 + 576) = 0;
  v45 = 0;
  sub_74D98(a2, 0, 0);
  if ( sub_74B94(a2, (void *)(a1 + 16), 28) != 28 )
    return 0;
  v10 = *(unsigned __int16 *)(a1 + 16);
  if ( v10 == 17744 )
    goto LABEL_9;
  if ( v10 != 23126 )
  {
    v11 = v10 == 19802;
    if ( v10 != 19802 )
      v11 = v10 == 23117;
    if ( v11 )
    {
      if ( sub_74B94(a2, v46, 8) == 8 && v46[0] == 1281977941 && v46[1] == 7040617 )
        *(_BYTE *)(a1 + 576) = 1;
      v8 = 0;
      sub_74D98(a2, 60, 0);
      if ( sub_74B94(a2, &v45, 4) != 4 )
        return v8;
    }
LABEL_9:
    v12 = v45;
    *(_DWORD *)(a1 + 572) = v45;
    sub_74D98(a2, (int)v12, 0);
    memset((void *)(a1 + 304), 0, 0x108u);
    sub_74D98(a2, *(int *)(a1 + 572), 0);
    if ( sub_74B94(a2, (void *)(a1 + 304), 264) - 93 > 0xAB )
      return 0;
    v13 = *(_DWORD *)(a1 + 304);
    v14 = v13 == 4542530;
    if ( v13 != 4542530 )
      v14 = v13 == 17744;
    v8 = v14;
    if ( v13 == 19536 )
      v8 |= 1u;
    if ( !v8 )
      return 0;
    v15 = *(unsigned __int16 *)(a1 + 328);
    v16 = 263;
    if ( v15 == 263 )
      goto LABEL_29;
    if ( v15 < 0x108 )
    {
      if ( *(_WORD *)(a1 + 328) )
      {
LABEL_27:
        v8 = 0;
        if ( !a3 )
        {
          v8 = 0;
          sub_234E0((int)"The input file has non-standard magic number (%x)", v15, 4542530, v16);
        }
      }
    }
    else if ( v15 != 267 )
    {
      v16 = 523;
      if ( v15 == 523 )
      {
        memcpy((void *)(a1 + 56), (const void *)(a1 + 304), 0x60u);
        memcpy((void *)(a1 + 168), (const void *)(a1 + 432), 0x88u);
        v17 = *(_DWORD *)(a1 + 408);
        v18 = *(_DWORD *)(a1 + 416);
        v19 = *(_DWORD *)(a1 + 424);
        *(_DWORD *)(a1 + 152) = *(_DWORD *)(a1 + 400);
        *(_DWORD *)(a1 + 156) = v17;
        *(_DWORD *)(a1 + 160) = v18;
        *(_DWORD *)(a1 + 164) = v19;
LABEL_30:
        if ( (unsigned int)*(unsigned __int16 *)(a1 + 148) - 10 > 3
          && ((v20 = *(_DWORD *)(a1 + 112), v21 = *(_DWORD *)(a1 + 116), v20 < v21)
           || v21 && ((v21 - 1) & v21) != 0
           || v20 && ((v20 - 1) & v20) != 0) )
        {
          if ( !a3 )
          {
            sub_5842C(
              "Invalid file: bad alignment value specified (section alignment: %08X, file alignment: %08X)",
              v20,
              v21);
            v22 = *(_DWORD *)(a1 + 136);
            if ( v22 <= 0x77000000 && v22 >= *(_DWORD *)(a1 + 140) )
              goto LABEL_36;
            goto LABEL_58;
          }
          v22 = *(_DWORD *)(a1 + 136);
          if ( v22 > 0x77000000 )
          {
LABEL_36:
            if ( a4 )
            {
              v23 = *(_DWORD *)(a1 + 172);
              if ( (unsigned int)(v23 - 1) <= 0xE )
                memset((void *)(a1 + 176 + 8 * v23), 0, 128 - 8 * v23);
              v24 = *(unsigned __int16 *)(a1 + 76) + 24;
              v25 = v24;
              if ( v24 < 0x80 )
                v25 = 128;
              if ( *(_WORD *)(a1 + 80) == 523 )
                v26 = 264;
              else
                v26 = 248;
              if ( v25 < v26 && v24 >= v26 - 128 )
              {
                if ( !a3 )
                  sub_171B0((int)"Warning: image directories are covered by the section table, some entries will be ignored\n");
                memset((void *)(a1 - ((7 - v24 + v26) & 0xFFFFFFF8) + 304), 0, (7 - v24 + v26) & 0xFFFFFFF8);
              }
            }
            if ( !v8 )
              return 0;
            if ( *(_WORD *)(a1 + 80) == 523 )
              v27 = *(_DWORD *)(a1 + 104);
            else
              v27 = *(_DWORD *)(a1 + 108);
            *(_DWORD *)(a1 + 568) = v27;
            return v8;
          }
        }
        else
        {
          v22 = *(_DWORD *)(a1 + 136);
          if ( v22 > 0x77000000 )
          {
            if ( !a3 )
            {
LABEL_58:
              sub_5842C("Invalid file: bad ImageSize value %x", v22);
              goto LABEL_36;
            }
            goto LABEL_36;
          }
        }
        if ( v22 >= *(_DWORD *)(a1 + 140) || a3 )
          goto LABEL_36;
        goto LABEL_58;
      }
      goto LABEL_27;
    }
LABEL_29:
    memcpy((void *)(a1 + 56), (const void *)(a1 + 304), 0xF8u);
    goto LABEL_30;
  }
  sub_74D98(a2, v45, 0);
  if ( sub_74B94(a2, (void *)(a1 + 16), 40) != 40 )
    return 0;
  memset((void *)(a1 + 56), 0, 0xF8u);
  v28 = *(_WORD *)(a1 + 18);
  v29 = *(_DWORD *)(a1 + 28);
  v30 = *(unsigned __int16 *)(a1 + 16);
  v31 = *(unsigned __int8 *)(a1 + 20);
  v32 = *(unsigned __int16 *)(a1 + 22);
  *(_WORD *)(a1 + 60) = v28;
  v33 = v28 == 512;
  if ( v28 != 512 )
    v33 = v28 == 34404;
  *(_DWORD *)(a1 + 56) = v30;
  v34 = v33;
  if ( v28 == 43620 )
    v34 |= 1u;
  *(_WORD *)(a1 + 62) = v31;
  v35 = v29 + 40 - v32;
  v36 = *(_DWORD *)(a1 + 32);
  v37 = *(_DWORD *)(a1 + 36);
  v38 = *(_DWORD *)(a1 + 24);
  v39 = *(unsigned __int8 *)(a1 + 21);
  if ( v34 )
  {
    *(_DWORD *)(a1 + 96) = v38;
    *(_DWORD *)(a1 + 100) = v29;
    *(_DWORD *)(a1 + 140) = v35;
    *(_DWORD *)(a1 + 104) = v36;
    *(_DWORD *)(a1 + 108) = v37;
    *(_WORD *)(a1 + 148) = v39;
    *(_BYTE *)(a1 + 80) = 11;
    *(_BYTE *)(a1 + 81) = 2;
    v40 = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 220) = v40;
    v41 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 224) = *(_DWORD *)(a1 + 48);
    *(_BYTE *)(a1 + 113) = 0;
    *(_DWORD *)(a1 + 228) = v41;
    *(_BYTE *)(a1 + 114) = 0;
    *(_BYTE *)(a1 + 115) = 0;
    *(_BYTE *)(a1 + 117) = 0;
    *(_BYTE *)(a1 + 118) = 0;
    *(_BYTE *)(a1 + 119) = 0;
    *(_BYTE *)(a1 + 112) = 1;
    *(_BYTE *)(a1 + 116) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 100) = v29;
    *(_DWORD *)(a1 + 140) = v35;
    *(_DWORD *)(a1 + 96) = v38;
    *(_DWORD *)(a1 + 108) = v36;
    *(_WORD *)(a1 + 148) = v39;
    *(_BYTE *)(a1 + 80) = 11;
    *(_BYTE *)(a1 + 81) = 1;
    v43 = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 220) = v43;
    v44 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 224) = *(_DWORD *)(a1 + 48);
    *(_BYTE *)(a1 + 112) = 1;
    *(_DWORD *)(a1 + 228) = v44;
    *(_BYTE *)(a1 + 116) = 1;
    *(_BYTE *)(a1 + 113) = 0;
    *(_BYTE *)(a1 + 114) = 0;
    *(_BYTE *)(a1 + 115) = 0;
    *(_BYTE *)(a1 + 117) = 0;
    *(_BYTE *)(a1 + 118) = 0;
    *(_BYTE *)(a1 + 119) = 0;
  }
  v42 = v45;
  v8 = 1;
  *(_DWORD *)(a1 + 568) = v36;
  *(_DWORD *)(a1 + 572) = v42;
  return v8;
}
