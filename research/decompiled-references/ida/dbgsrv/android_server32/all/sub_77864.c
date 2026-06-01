/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77864
// Address: 0x00077864

//----- (00077864) --------------------------------------------------------
int __fastcall sub_77864(unsigned int *a1, unsigned __int16 *a2, int a3, int a4)
{
  unsigned int *v4; // r5
  int v5; // r6
  __int16 v6; // r0
  __int16 v7; // r1
  signed __int16 v8; // r0
  unsigned int v9; // r4
  __int16 v10; // r1
  int v11; // r1
  int v12; // r3
  signed int v13; // r7
  unsigned int v14; // r4
  int v15; // r6
  unsigned int *v16; // r0
  unsigned int v17; // r1
  int v19; // [sp+10h] [bp-3Ch]
  int v20; // [sp+10h] [bp-3Ch]
  unsigned __int16 v22; // [sp+20h] [bp-2Ch] BYREF
  __int16 v23; // [sp+22h] [bp-2Ah]
  unsigned __int16 v24; // [sp+24h] [bp-28h] BYREF
  _WORD v25[7]; // [sp+26h] [bp-26h] BYREF
  __int16 v26; // [sp+34h] [bp-18h]
  _DWORD v27[3]; // [sp+38h] [bp-14h] BYREF
  int v28; // [sp+44h] [bp-8h]

  v4 = a1;
  if ( a4 )
  {
    v19 = a3;
    v28 = (a2[7] << 16) + a2[6];
    v27[2] = (a2[5] << 16) + a2[4];
    v27[1] = (a2[3] << 16) + a2[2];
    v27[0] = (a2[1] << 16) + *a2;
    v5 = SHIWORD(v28);
    eadd((__int16 *)dword_C68F0, (__int16 *)v27, v27, v28 < 0);
    v6 = HIWORD(v28);
    if ( v5 < 0 )
    {
      v7 = 0;
      v4 = a1;
      a3 = v19;
      if ( HIWORD(v28) )
      {
        HIWORD(v28) ^= 0x8000u;
        v7 = v6 ^ 0x8000;
      }
    }
    else
    {
      v7 = HIWORD(v28);
      v4 = a1;
      a3 = v19;
    }
    v9 = v7 & 0x7FFF;
    v23 = v7 & 0x7FFF;
    v22 = (unsigned int)v7 >> 15;
    a2 = (unsigned __int16 *)v27;
  }
  else
  {
    v8 = a2[7];
    v9 = v8 & 0x7FFF;
    v23 = v8 & 0x7FFF;
    v22 = (unsigned int)v8 >> 15;
  }
  v24 = 0;
  v25[0] = a2[6];
  v25[1] = a2[5];
  v25[2] = a2[4];
  v25[3] = a2[3];
  v25[4] = a2[2];
  v25[5] = a2[1];
  v10 = *a2;
  v26 = 0;
  v25[6] = v10;
  *v4 = 0;
  v4[1] = 0;
  v11 = v9 - 16382;
  v12 = 1;
  if ( v9 >= 0x3FFF )
  {
    v12 = 5;
    if ( v11 <= a3 )
    {
      v20 = a3;
      if ( v9 <= 0x400E )
      {
        eshift(&v22, v11);
        v14 = v24;
        v15 = 0;
      }
      else
      {
        v13 = v11 & 0xFFFFFFF0;
        eshift(&v22, v11 - (v11 & 0xFFFFFFF0));
        v14 = v24;
        v15 = 0;
        do
        {
          memmove(&v24, v25, 0x10u);
          v26 = 0;
          v15 = (v15 << 16) + HIWORD(v14);
          v14 = (v14 << 16) + v24;
          v13 -= 16;
        }
        while ( v13 > 0 );
      }
      v12 = 5;
      if ( !v22 )
      {
        v17 = v15;
        v16 = v4;
        goto LABEL_19;
      }
      v16 = v4;
      if ( v20 != 64 )
      {
        v17 = (unsigned __int64)-__SPAIR64__(v15, v14) >> 32;
        v14 = -v14;
LABEL_19:
        *v16 = v14;
        v16[1] = v17;
        return 1;
      }
    }
  }
  return v12;
}
// C68F0: using guessed type int dword_C68F0[3];
