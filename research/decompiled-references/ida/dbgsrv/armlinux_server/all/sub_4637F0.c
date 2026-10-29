/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4637F0
// Address: 0x00000000004637F0

//----- (00000000004637F0) ----------------------------------------------------
bool __fastcall sub_4637F0(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v6; // w24
  int v7; // w23
  __int64 v8; // x22
  _BOOL4 v9; // w21
  int v11; // w0
  __off64_t v13; // x1
  int v14; // w0
  unsigned int v16; // w1
  __int64 v17; // x1
  __int64 v18; // x5
  __int64 v19; // x5
  __int64 v20; // x5
  __int64 v21; // x5
  __int64 v22; // x5
  unsigned int v23; // w1
  unsigned int v24; // w2
  unsigned int v25; // w1
  unsigned int v26; // w0
  unsigned __int64 v27; // x22
  unsigned __int64 v28; // x24
  unsigned __int64 v29; // x0
  __int64 v30; // x0
  _WORD *v31; // x3
  int v32; // w0
  bool v33; // zf
  bool v34; // zf
  int v35; // w2
  int v36; // w5
  __int16 v37; // w4
  __int64 v38; // x1
  __int64 v39; // x0
  unsigned int v40; // [xsp+4Ch] [xbp-14h] BYREF
  __int64 v41; // [xsp+50h] [xbp-10h] BYREF

  v6 = a4;
  v7 = a3;
  *(_BYTE *)(a1 + 600) = 0;
  v8 = a1 + 32;
  v40 = 0;
  sub_48C428(a2, 0, 0);
  if ( sub_48C160(a2, (void *)v8, 0x1Cu) != 28 )
    return 0;
  v11 = *(unsigned __int16 *)(a1 + 32);
  if ( v11 == 17744 )
  {
LABEL_10:
    v13 = v40;
    *(_QWORD *)(a1 + 592) = v40;
    sub_48C428(a2, v13, 0);
    memset((void *)(a1 + 320), 0, 0x108u);
    sub_48C428(a2, *(_QWORD *)(a1 + 592), 0);
    if ( sub_48C160(a2, (void *)(a1 + 320), 0x108u) - 93 > 0xAB )
      return 0;
    v14 = *(_DWORD *)(a1 + 320);
    v9 = v14 == 17744 || v14 == 4542530;
    if ( v14 == 19536 )
      v9 = 1;
    if ( !v9 )
      return 0;
    v16 = *(unsigned __int16 *)(a1 + 344);
    if ( v16 == 263 )
      goto LABEL_31;
    if ( v16 <= 0x107 )
    {
      if ( *(_WORD *)(a1 + 344) )
      {
LABEL_29:
        v9 = 0;
        if ( !v7 )
        {
          v9 = 0;
          sub_41A868("The input file has non-standard magic number (%x)");
        }
      }
    }
    else if ( v16 != 267 )
    {
      if ( v16 == 523 )
      {
        v17 = *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 320);
        *(_QWORD *)(a1 + 80) = v17;
        v18 = *(_QWORD *)(a1 + 344);
        *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 336);
        *(_QWORD *)(a1 + 96) = v18;
        v19 = *(_QWORD *)(a1 + 360);
        *(_QWORD *)(a1 + 104) = *(_QWORD *)(a1 + 352);
        *(_QWORD *)(a1 + 112) = v19;
        v20 = *(_QWORD *)(a1 + 376);
        *(_QWORD *)(a1 + 120) = *(_QWORD *)(a1 + 368);
        *(_QWORD *)(a1 + 128) = v20;
        v21 = *(_QWORD *)(a1 + 392);
        *(_QWORD *)(a1 + 136) = *(_QWORD *)(a1 + 384);
        *(_QWORD *)(a1 + 144) = v21;
        v22 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 152) = *(_QWORD *)(a1 + 400);
        *(_QWORD *)(a1 + 160) = v22;
        memcpy((void *)(a1 + 184), (const void *)(a1 + 448), 0x88u);
        *(_DWORD *)(a1 + 168) = *(_QWORD *)(a1 + 416);
        *(_DWORD *)(a1 + 172) = *(_QWORD *)(a1 + 424);
        *(_DWORD *)(a1 + 176) = *(_QWORD *)(a1 + 432);
        *(_DWORD *)(a1 + 180) = *(_QWORD *)(a1 + 440);
LABEL_32:
        if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) > 3u
          && ((v23 = *(_DWORD *)(a1 + 128), v24 = *(_DWORD *)(a1 + 132), v23 < v24)
           || v24 && ((v24 - 1) & v24) != 0
           || v23 && ((v23 - 1) & v23) != 0) )
        {
          if ( !v7 )
          {
            sub_463748(
              "Invalid file: bad alignment value specified (section alignment: %08X, file alignment: %08X)",
              v23,
              v24);
            v25 = *(_DWORD *)(a1 + 152);
            if ( v25 <= 0x77000000 && v25 >= *(_DWORD *)(a1 + 156) )
              goto LABEL_38;
            goto LABEL_58;
          }
          v25 = *(_DWORD *)(a1 + 152);
          if ( v25 > 0x77000000 )
          {
LABEL_38:
            if ( v6 )
            {
              v26 = *(_DWORD *)(a1 + 188);
              if ( v26 - 1 <= 0xE )
                memset((void *)(a1 + 192 + 8LL * v26), 0, -8LL * v26 + 128);
              v27 = 248;
              v28 = *(unsigned __int16 *)(a1 + 92) + 24LL;
              v29 = 128;
              if ( *(_WORD *)(a1 + 96) == 523 )
                v27 = 264;
              if ( v28 >= 0x80 )
                v29 = *(unsigned __int16 *)(a1 + 92) + 24LL;
              if ( v29 < v27 && v28 >= v27 - 128 )
              {
                if ( !v7 )
                  sub_40A690((int)"Warning: image directories are covered by the section table, some entries will be ignored\n");
                memset((void *)(a1 - 8 * ((v27 - v28 + 7) >> 3) + 320), 0, (v27 - v28 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              }
            }
            if ( !v9 )
              return 0;
            if ( *(_WORD *)(a1 + 96) == 523 )
              v30 = *(_QWORD *)(a1 + 120);
            else
              v30 = *(unsigned int *)(a1 + 124);
            *(_QWORD *)(a1 + 584) = v30;
            return v9;
          }
        }
        else
        {
          v25 = *(_DWORD *)(a1 + 152);
          if ( v25 > 0x77000000 )
          {
            if ( !v7 )
            {
LABEL_58:
              sub_463748("Invalid file: bad ImageSize value %x", v25);
              goto LABEL_38;
            }
            goto LABEL_38;
          }
        }
        if ( v25 >= *(_DWORD *)(a1 + 156) || v7 )
          goto LABEL_38;
        goto LABEL_58;
      }
      goto LABEL_29;
    }
LABEL_31:
    memcpy((void *)(a1 + 72), (const void *)(a1 + 320), 0xF8u);
    goto LABEL_32;
  }
  if ( v11 != 23126 )
  {
    if ( v11 == 23117 || v11 == 19802 )
    {
      if ( sub_48C160(a2, &v41, 8u) == 8 && v41 == 0x6B6E694C696E55LL )
        *(_BYTE *)(a1 + 600) = 1;
      sub_48C428(a2, 60, 0);
      if ( sub_48C160(a2, &v40, 4u) != 4 )
        return 0;
    }
    goto LABEL_10;
  }
  sub_48C428(a2, v40, 0);
  if ( sub_48C160(a2, (void *)v8, 0x28u) != 40 )
    return 0;
  v31 = memset((void *)(a1 + 72), 0, 0xF8u);
  *(_DWORD *)(a1 + 72) = *(unsigned __int16 *)(a1 + 32);
  v32 = *(unsigned __int16 *)(v8 + 2);
  v31[2] = v32;
  v33 = v32 == 512 || v32 == 34404;
  v31[3] = *(unsigned __int8 *)(v8 + 4);
  v34 = v33 || v32 == 43620;
  v36 = *(_DWORD *)(v8 + 8);
  v35 = *(_DWORD *)(v8 + 12);
  v37 = *(unsigned __int8 *)(v8 + 5);
  v38 = *(_QWORD *)(v8 + 16);
  *((_DWORD *)v31 + 21) = v35 + 40 - *(unsigned __int16 *)(v8 + 6);
  if ( v34 )
  {
    v31[12] = 523;
    *((_DWORD *)v31 + 10) = v36;
    *((_DWORD *)v31 + 11) = v35;
    *((_QWORD *)v31 + 6) = v38;
  }
  else
  {
    v31[12] = 267;
    *((_DWORD *)v31 + 10) = v36;
    *((_DWORD *)v31 + 11) = v35;
    *((_DWORD *)v31 + 13) = v38;
    v38 = (unsigned int)v38;
  }
  v31[46] = v37;
  v9 = 1;
  *((_QWORD *)v31 + 20) = *(_QWORD *)(v8 + 24);
  *((_QWORD *)v31 + 21) = *(_QWORD *)(v8 + 32);
  *(_QWORD *)(a1 + 128) = 0x100000001LL;
  v39 = v40;
  *(_QWORD *)(a1 + 584) = v38;
  *(_QWORD *)(a1 + 592) = v39;
  return v9;
}
