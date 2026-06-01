/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59A30
// Address: 0x00059A30

//----- (00059A30) --------------------------------------------------------
int __fastcall sub_59A30(int a1, int a2, int a3, int a4)
{
  unsigned __int16 *v6; // r5
  int v7; // r7
  int v8; // r0
  int v9; // r2
  int v10; // r4
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r0
  int v15; // r2
  int v16; // r3
  int v17; // r6
  int v18; // r5
  int v19; // r7
  int v20; // r1
  int v21; // r3
  int v22; // r6
  int *v23; // r5
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r0
  int v31; // [sp+1Ch] [bp-14h]
  int v32; // [sp+20h] [bp-10h] BYREF
  char s1[8]; // [sp+24h] [bp-Ch] BYREF

  v32 = 0;
  *(_BYTE *)(a1 + 576) = 0;
  v31 = 0;
  qlseek(a2, 0, 0);
  v6 = (unsigned __int16 *)(a1 + 16);
  if ( qlread(a2, (void *)(a1 + 16), 28) != 28 )
    return v31;
  v7 = a1;
  v8 = *v6;
  if ( v8 != 19802 && v8 != 23117 )
  {
    v9 = 0;
    if ( v8 == 23126 )
    {
      v31 = 0;
      qlseek(a2, 0, 0);
      if ( qlread(a2, v6, 40) == 40 )
      {
        memset((void *)(a1 + 56), 0, 0xF8u);
        v10 = 0;
        *(_BYTE *)(v7 + 59) = 0;
        *(_BYTE *)(v7 + 58) = 0;
        *(_BYTE *)(v7 + 63) = 0;
        *(_BYTE *)(v7 + 57) = *(_BYTE *)(v7 + 17);
        *(_BYTE *)(v7 + 56) = *(_BYTE *)(v7 + 16);
        v11 = *(unsigned __int8 *)(v7 + 19);
        *(_BYTE *)(v7 + 61) = v11;
        v12 = *(unsigned __int8 *)(v7 + 18);
        *(_BYTE *)(v7 + 60) = v12;
        *(_BYTE *)(v7 + 62) = *(_BYTE *)(v7 + 20);
        v13 = (v11 << 8) + v12;
        v14 = 267;
        if ( v13 == 512 || v13 == 43620 || v13 == 34404 )
        {
          v10 = 1;
          v14 = 523;
        }
        v31 = 1;
        *(_WORD *)(v7 + 80) = v14;
        *(_BYTE *)(v7 + 99) = *(_BYTE *)(v7 + 27);
        *(_BYTE *)(v7 + 98) = *(_BYTE *)(v7 + 26);
        *(_BYTE *)(v7 + 97) = *(_BYTE *)(v7 + 25);
        *(_BYTE *)(v7 + 96) = *(_BYTE *)(v7 + 24);
        v15 = *(unsigned __int8 *)(v7 + 31);
        *(_BYTE *)(v7 + 103) = v15;
        v16 = *(unsigned __int8 *)(v7 + 30);
        *(_BYTE *)(v7 + 102) = v16;
        v17 = *(unsigned __int8 *)(v7 + 29);
        v18 = v7;
        *(_BYTE *)(v7 + 101) = v17;
        v19 = *(unsigned __int8 *)(v7 + 28);
        *(_BYTE *)(v18 + 100) = v19;
        v20 = (((v15 << 8) + v16) << 16)
            + (v17 << 8)
            + v19
            + 40
            - ((*(unsigned __int8 *)(v18 + 23) << 8)
             + *(unsigned __int8 *)(v18 + 22));
        *(_BYTE *)(v18 + 140) = v19 + 40 - *(_BYTE *)(v18 + 22);
        *(_BYTE *)(v18 + 143) = HIBYTE(v20);
        *(_BYTE *)(v18 + 142) = BYTE2(v20);
        *(_BYTE *)(v18 + 141) = BYTE1(v20);
        v21 = (((*(unsigned __int8 *)(v18 + 39) << 8) + *(unsigned __int8 *)(v18 + 38)) << 16)
            + (*(unsigned __int8 *)(v18 + 37) << 8)
            + *(unsigned __int8 *)(v18 + 36);
        v22 = (((*(unsigned __int8 *)(v18 + 35) << 8) + *(unsigned __int8 *)(v18 + 34)) << 16)
            + (*(unsigned __int8 *)(v18 + 33) << 8)
            + *(unsigned __int8 *)(v18 + 32);
        if ( v10 )
        {
          *(_BYTE *)(v18 + 104) = *(_BYTE *)(v18 + 32);
          *(_BYTE *)(v18 + 108) = v21;
          *(_BYTE *)(v18 + 107) = HIBYTE(v22);
          *(_BYTE *)(v18 + 106) = BYTE2(v22);
          *(_BYTE *)(v18 + 105) = BYTE1(v22);
          *(_BYTE *)(v18 + 111) = HIBYTE(v21);
          *(_BYTE *)(v18 + 110) = BYTE2(v21);
          *(_BYTE *)(v18 + 109) = BYTE1(v21);
        }
        else
        {
          *(_DWORD *)(v18 + 108) = v22;
          v21 = v22;
        }
        *(_BYTE *)(v18 + 149) = 0;
        *(_BYTE *)(v18 + 115) = 0;
        *(_BYTE *)(v18 + 114) = 0;
        *(_BYTE *)(v18 + 113) = 0;
        *(_BYTE *)(v18 + 112) = 1;
        *(_BYTE *)(v18 + 119) = 0;
        *(_BYTE *)(v18 + 118) = 0;
        *(_BYTE *)(v18 + 117) = 0;
        *(_BYTE *)(v18 + 116) = 1;
        *(_BYTE *)(v18 + 223) = *(_BYTE *)(v18 + 47);
        *(_BYTE *)(v18 + 222) = *(_BYTE *)(v18 + 46);
        *(_BYTE *)(v18 + 221) = *(_BYTE *)(v18 + 45);
        *(_BYTE *)(v18 + 220) = *(_BYTE *)(v18 + 44);
        *(_BYTE *)(v18 + 219) = *(_BYTE *)(v18 + 43);
        *(_BYTE *)(v18 + 218) = *(_BYTE *)(v18 + 42);
        *(_BYTE *)(v18 + 217) = *(_BYTE *)(v18 + 41);
        *(_BYTE *)(v18 + 216) = *(_BYTE *)(v18 + 40);
        *(_BYTE *)(v18 + 231) = *(_BYTE *)(v18 + 55);
        *(_BYTE *)(v18 + 230) = *(_BYTE *)(v18 + 54);
        *(_BYTE *)(v18 + 229) = *(_BYTE *)(v18 + 53);
        *(_BYTE *)(v18 + 228) = *(_BYTE *)(v18 + 52);
        *(_BYTE *)(v18 + 227) = *(_BYTE *)(v18 + 51);
        *(_BYTE *)(v18 + 226) = *(_BYTE *)(v18 + 50);
        *(_BYTE *)(v18 + 225) = *(_BYTE *)(v18 + 49);
        *(_BYTE *)(v18 + 224) = *(_BYTE *)(v18 + 48);
        *(_BYTE *)(v18 + 148) = *(_BYTE *)(v18 + 21);
        if ( v14 == 523 )
          v21 = (((*(unsigned __int8 *)(v18 + 107) << 8) + *(unsigned __int8 *)(v18 + 106)) << 16)
              + (*(unsigned __int8 *)(v18 + 105) << 8)
              + *(unsigned __int8 *)(v18 + 104);
        *(_DWORD *)(v18 + 572) = 0;
        *(_DWORD *)(v18 + 568) = v21;
      }
      return v31;
    }
    goto LABEL_18;
  }
  if ( qlread(a2, s1, 8) == 8 && !strcmp(s1, "UniLink") )
    *(_BYTE *)(a1 + 576) = 1;
  v31 = 0;
  qlseek(a2, 60, 0);
  if ( qlread(a2, &v32, 4) == 4 )
  {
    v9 = v32;
LABEL_18:
    *(_DWORD *)(a1 + 572) = v9;
    qlseek(a2, v9, 0);
    v23 = (int *)(a1 + 304);
    memset((void *)(a1 + 304), 0, 0x108u);
    qlseek(a2, *(int *)(a1 + 572), 0);
    if ( qlread(a2, (void *)(a1 + 304), 264) - 93 > 0xAB )
    {
      return 0;
    }
    else
    {
      v24 = *v23;
      if ( *v23 == 17744 || v24 == 4542530 || v24 == 19536 )
      {
        v31 = 0;
        if ( sub_61E8C(a1 + 56, a1 + 304, a3, a4) )
        {
          if ( (*(unsigned __int8 *)(a1 + 81) << 8) + *(unsigned __int8 *)(a1 + 80) == 523 )
          {
            v25 = (*(unsigned __int8 *)(a1 + 105) << 8) + *(unsigned __int8 *)(a1 + 104);
            v26 = *(unsigned __int8 *)(a1 + 106);
            v27 = *(unsigned __int8 *)(a1 + 107);
          }
          else
          {
            v25 = (*(unsigned __int8 *)(a1 + 109) << 8) + *(unsigned __int8 *)(a1 + 108);
            v26 = *(unsigned __int8 *)(a1 + 110);
            v27 = *(unsigned __int8 *)(a1 + 111);
          }
          *(_DWORD *)(a1 + 568) = (((v27 << 8) + v26) << 16) + v25;
          return 1;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return v31;
}
