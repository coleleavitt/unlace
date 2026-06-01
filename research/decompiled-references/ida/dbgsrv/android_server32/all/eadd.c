/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eadd
// Address: 0x00076824

//----- (00076824) --------------------------------------------------------
int __fastcall eadd(__int16 *a1, __int16 *a2, _WORD *a3, int a4)
{
  int v4; // r7
  int v5; // r6
  int v6; // r7
  __int16 v7; // r0
  int v8; // r5
  int v9; // r6
  unsigned int v10; // r5
  int v11; // r6
  __int16 v12; // r2
  int v13; // r2
  unsigned int v14; // r0
  unsigned int v15; // r2
  unsigned int v16; // r1
  int v17; // r1
  int v18; // r1
  int v19; // r1
  int v20; // r1
  int v21; // r1
  int v22; // r1
  unsigned int v23; // r1
  __int16 v24; // r3
  int v25; // r2
  int v26; // r1
  int v27; // r1
  int v28; // r1
  int v29; // r1
  int v30; // r1
  int v31; // r1
  int v32; // r1
  unsigned int v33; // r1
  _BOOL4 v36; // [sp+18h] [bp-50h]
  int v37; // [sp+1Ch] [bp-4Ch]
  int v38; // [sp+1Ch] [bp-4Ch]
  int v39; // [sp+20h] [bp-48h]
  int v40; // [sp+20h] [bp-48h]
  int v41; // [sp+24h] [bp-44h]
  int v42; // [sp+24h] [bp-44h]
  int v43; // [sp+28h] [bp-40h]
  int v44; // [sp+28h] [bp-40h]
  int v45; // [sp+2Ch] [bp-3Ch]
  int v46; // [sp+2Ch] [bp-3Ch]
  int v47; // [sp+34h] [bp-34h] BYREF
  int v48; // [sp+38h] [bp-30h]
  int v49; // [sp+3Ch] [bp-2Ch]
  int v50; // [sp+40h] [bp-28h]
  int v51; // [sp+44h] [bp-24h]
  unsigned __int16 v52; // [sp+48h] [bp-20h]
  int v53; // [sp+4Ch] [bp-1Ch] BYREF
  int v54; // [sp+50h] [bp-18h]
  int v55; // [sp+54h] [bp-14h]
  int v56; // [sp+58h] [bp-10h]
  int v57; // [sp+5Ch] [bp-Ch]
  unsigned __int16 v58; // [sp+60h] [bp-8h]

  v4 = (unsigned __int16)a1[7];
  LOWORD(v54) = 0;
  v5 = v4 << 16;
  v6 = v4 & 0x7FFF;
  HIWORD(v53) = v6;
  LOWORD(v53) = (unsigned int)(v5 >> 16) >> 15;
  HIWORD(v54) = a1[6];
  LOWORD(v55) = a1[5];
  HIWORD(v55) = a1[4];
  LOWORD(v56) = a1[3];
  HIWORD(v56) = a1[2];
  LOWORD(v57) = a1[1];
  v7 = *a1;
  v58 = 0;
  HIWORD(v57) = v7;
  v8 = (unsigned __int16)a2[7];
  LOWORD(v48) = 0;
  v9 = v8 << 16;
  v10 = v8 & 0x7FFF;
  HIWORD(v47) = v10;
  v11 = v9 >> 31;
  LOWORD(v47) = v11;
  HIWORD(v48) = a2[6];
  LOWORD(v49) = a2[5];
  HIWORD(v49) = a2[4];
  LOWORD(v50) = a2[3];
  HIWORD(v50) = a2[2];
  LOWORD(v51) = a2[1];
  v12 = *a2;
  v36 = 0;
  v52 = 0;
  HIWORD(v51) = v12;
  if ( a4 )
    LOWORD(v47) = ~(_WORD)v11;
  v13 = v6 - v10;
  if ( (int)(v6 - v10) >= 1 )
  {
    v37 = v47;
    v39 = v48;
    v41 = v49;
    v43 = v50;
    v45 = v51;
    v47 = v53;
    v48 = v54;
    v49 = v55;
    v50 = v56;
    v51 = v57;
    v52 = 0;
    v53 = v37;
    v54 = v39;
    v55 = v41;
    v56 = v43;
    v57 = v45;
    v58 = 0;
    v13 = v10 - v6;
    v10 = HIWORD(v47);
  }
  if ( v13 )
  {
    if ( v13 >= -113 )
    {
      v36 = eshift((unsigned __int16 *)&v53, v13) != 1;
      goto LABEL_22;
    }
LABEL_27:
    if ( (_WORD)v47 )
      LOWORD(v10) = v10 | 0x8000;
    a3[7] = v10;
    a3[6] = HIWORD(v48);
    a3[5] = v49;
    a3[4] = HIWORD(v49);
    a3[3] = v50;
    a3[2] = HIWORD(v50);
    a3[1] = v51;
    *a3 = HIWORD(v51);
    return 1;
  }
  v14 = (unsigned __int16)v48;
  v15 = (unsigned __int16)v54;
  if ( (unsigned __int16)v54 == (unsigned __int16)v48 )
  {
    v14 = HIWORD(v48);
    v15 = HIWORD(v54);
    if ( HIWORD(v54) == HIWORD(v48) )
    {
      v14 = (unsigned __int16)v49;
      v15 = (unsigned __int16)v55;
      if ( (unsigned __int16)v55 == (unsigned __int16)v49 )
      {
        v14 = HIWORD(v49);
        v15 = HIWORD(v55);
        if ( HIWORD(v55) == HIWORD(v49) )
        {
          v14 = (unsigned __int16)v50;
          v15 = (unsigned __int16)v56;
          if ( (unsigned __int16)v56 == (unsigned __int16)v50 )
          {
            v14 = HIWORD(v50);
            v15 = HIWORD(v56);
            if ( HIWORD(v56) == HIWORD(v50) )
            {
              v14 = (unsigned __int16)v51;
              v15 = (unsigned __int16)v57;
              if ( (unsigned __int16)v57 == (unsigned __int16)v51 )
              {
                v14 = HIWORD(v51);
                v15 = HIWORD(v57);
                if ( HIWORD(v57) == HIWORD(v51) )
                {
                  if ( (unsigned __int16)v53 != (unsigned __int16)v47 || !v10 )
                  {
                    memset(a3, 0, 0x10u);
                    return 1;
                  }
                  if ( v10 >= 0x7FFE )
                    goto LABEL_31;
                  LOWORD(v10) = v10 + 1;
                  HIWORD(v47) = v10;
                  goto LABEL_27;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v15 > v14 )
  {
    v38 = v47;
    v40 = v48;
    v42 = v49;
    v44 = v50;
    v46 = v51;
    v47 = v53;
    v48 = v54;
    v49 = v55;
    v50 = v56;
    v51 = v57;
    v52 = 0;
    v53 = v38;
    v54 = v40;
    v55 = v42;
    v56 = v44;
    v57 = v46;
    v36 = 0;
    v58 = 0;
  }
LABEL_22:
  if ( (unsigned __int16)v53 == (unsigned __int16)v47 )
  {
    v16 = v52 + v58;
    v52 += v58;
    v17 = HIWORD(v16) + HIWORD(v57) + HIWORD(v51);
    HIWORD(v51) = v17;
    v18 = ((unsigned int)(v17 << 15) >> 31) + (unsigned __int16)v57 + (unsigned __int16)v51;
    LOWORD(v51) = v18;
    v19 = HIWORD(v50) + HIWORD(v56) + ((unsigned int)(v18 << 15) >> 31);
    HIWORD(v50) = v19;
    v20 = (unsigned __int16)v50 + (unsigned __int16)v56 + ((unsigned int)(v19 << 15) >> 31);
    LOWORD(v50) = v20;
    v21 = HIWORD(v49) + HIWORD(v55) + ((unsigned int)(v20 << 15) >> 31);
    HIWORD(v49) = v21;
    v22 = (unsigned __int16)v49 + (unsigned __int16)v55 + ((unsigned int)(v21 << 15) >> 31);
    LOWORD(v49) = v22;
    v23 = HIWORD(v48) + HIWORD(v54) + ((unsigned int)(v22 << 15) >> 31);
    HIWORD(v48) = v23;
    v24 = v48 + v54 + ((unsigned __int16)(v23 >> 1) >> 15);
    v25 = 0;
  }
  else
  {
    v26 = v52 - v58;
    v52 -= v58;
    v27 = HIWORD(v51) - HIWORD(v57) - ((unsigned int)(v26 << 15) >> 31);
    HIWORD(v51) = v27;
    v28 = (unsigned __int16)v51 - (unsigned __int16)v57 - ((unsigned int)(v27 << 15) >> 31);
    LOWORD(v51) = v28;
    v29 = HIWORD(v50) - HIWORD(v56) - ((unsigned int)(v28 << 15) >> 31);
    HIWORD(v50) = v29;
    v30 = (unsigned __int16)v50 - (unsigned __int16)v56 - ((unsigned int)(v29 << 15) >> 31);
    LOWORD(v50) = v30;
    v31 = HIWORD(v49) - HIWORD(v55) - ((unsigned int)(v30 << 15) >> 31);
    HIWORD(v49) = v31;
    v32 = (unsigned __int16)v49 - (unsigned __int16)v55 - ((unsigned int)(v31 << 15) >> 31);
    LOWORD(v49) = v32;
    v33 = HIWORD(v48) - HIWORD(v54) - ((unsigned int)(v32 << 15) >> 31);
    HIWORD(v48) = v33;
    v24 = v48 - v54 - ((unsigned __int16)(v33 >> 1) >> 15);
    v25 = 1;
  }
  LOWORD(v48) = v24;
  if ( emdnorm((unsigned __int16 *)&v47, v36, v25, v10, 112) )
  {
    LOWORD(v10) = HIWORD(v47);
    goto LABEL_27;
  }
LABEL_31:
  memset(a3, 0, 0x10u);
  return 2;
}
