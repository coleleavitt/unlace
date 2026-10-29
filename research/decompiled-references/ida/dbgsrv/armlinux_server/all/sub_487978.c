/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_487978
// Address: 0x0000000000487978

//----- (0000000000487978) ----------------------------------------------------
bool __fastcall sub_487978(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v7; // w23
  int v8; // w24
  int v10; // w0
  int v11; // w7
  _BOOL8 result; // x0
  int v13; // w21
  int v14; // w2
  __int64 i; // x0
  int v16; // w3
  int v17; // w8
  __int16 v18; // w7
  int v19; // w5
  __int16 v20; // w11
  int v21; // w10
  __int64 v22; // x6
  __int16 v23; // w12
  __int16 *v24; // x9
  _WORD *v25; // x0
  int v26; // w4
  __int16 v27; // w0
  __int64 v28; // x0
  unsigned int v29; // w1
  unsigned int v30; // w1
  __int64 v32; // [xsp+40h] [xbp-20h]
  __int64 v33; // [xsp+48h] [xbp-18h]
  int v34; // [xsp+50h] [xbp-10h]
  __int16 v35; // [xsp+54h] [xbp-Ch]

  v7 = a2;
  v8 = a3;
  v10 = sub_487650(a1);
  if ( v10 > 112 )
  {
    result = v11 != 0;
    goto LABEL_3;
  }
  v13 = a4 - v10;
  if ( v13 > 32766 )
  {
    result = 1;
    goto LABEL_3;
  }
  if ( v13 < 0 )
  {
    if ( v13 < -112 )
    {
LABEL_14:
      result = 0;
      goto LABEL_3;
    }
    if ( (unsigned int)sub_487770(a1, v13) != 1 )
      v7 = 1;
    if ( !a5 )
      goto LABEL_10;
  }
  else if ( !a5 )
  {
LABEL_10:
    *(_WORD *)(a1 + 20) = 0;
    goto LABEL_11;
  }
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( a5 == 53 )
  {
    v20 = -2048;
    WORD2(v33) = 2048;
    v21 = 7;
    v22 = 12;
    v18 = 2048;
    v19 = 1024;
    v23 = 2047;
    v17 = 6;
    goto LABEL_31;
  }
  if ( a5 <= 53 )
  {
    if ( a5 != 24 )
      goto LABEL_53;
    v20 = -256;
    LOWORD(v33) = 256;
    v21 = 5;
    v22 = 8;
    v18 = 256;
    v19 = 128;
    v23 = 255;
    v17 = 4;
LABEL_31:
    v24 = (__int16 *)(a1 + v22);
    if ( v13 <= 0 )
      sub_487230(a1);
    v14 = (unsigned __int16)(v23 & *(_WORD *)(a1 + v22));
    v25 = (_WORD *)(a1 + 2LL * v21);
    do
    {
      v26 = (unsigned __int16)*v25;
      *v25++ = 0;
      if ( v26 )
        v14 = (unsigned __int16)v14 | 1;
    }
    while ( v25 != (_WORD *)(a1 + 2 + 2 * ((unsigned int)(10 - v21) + (__int64)v21)) );
    v27 = *v24;
    goto LABEL_38;
  }
  if ( a5 == 56 )
  {
    v20 = -256;
    WORD2(v33) = 256;
    v21 = 7;
    v22 = 12;
    v18 = 256;
    v19 = 128;
    v23 = 255;
    v17 = 6;
    goto LABEL_31;
  }
  if ( a5 != 64 )
  {
LABEL_53:
    HIWORD(v34) = 1;
    v24 = (__int16 *)(a1 + 20);
    if ( a5 > 63 )
    {
      v14 = *(unsigned __int16 *)(a1 + 20);
      if ( (v14 & 0x8000) == 0 )
        goto LABEL_47;
      v17 = 9;
      v18 = 1;
      v19 = 0x8000;
      goto LABEL_39;
    }
    if ( v13 <= 0 )
      sub_487230(a1);
    v14 = *(unsigned __int16 *)(a1 + 20);
    v20 = 0;
    v17 = 9;
    v18 = 1;
    v27 = *(_WORD *)(a1 + 20);
    v19 = 0x8000;
LABEL_38:
    *v24 = v20 & v27;
    if ( (v14 & v19) == 0 )
      goto LABEL_41;
    goto LABEL_39;
  }
  v14 = *(unsigned __int16 *)(a1 + 14);
  WORD2(v33) = 1;
  for ( i = 8; i != 11; ++i )
  {
    v16 = *(unsigned __int16 *)(a1 + 2 * i);
    *(_WORD *)(a1 + 2 * i) = 0;
    if ( v16 )
      v14 = (unsigned __int16)v14 | 1;
  }
  if ( (v14 & 0x8000) != 0 )
  {
    v17 = 6;
    v18 = 1;
    v19 = 0x8000;
LABEL_39:
    v28 = 20;
    v29 = 0;
    if ( v14 == v19 )
    {
      if ( v7 )
      {
        if ( v8 )
          goto LABEL_41;
      }
      else if ( ((unsigned __int16)v18 & *(_WORD *)(a1 + 2LL * v17)) == 0 )
      {
        goto LABEL_41;
      }
    }
    do
    {
      v30 = *(unsigned __int16 *)((char *)&v32 + v28) + *(unsigned __int16 *)(a1 + v28) + v29;
      *(_WORD *)(a1 + v28) = v30;
      v28 -= 2;
      v29 = HIWORD(v30);
    }
    while ( v28 != 2 );
LABEL_41:
    if ( a5 <= 63 && v13 <= 0 )
      sub_487278(a1);
  }
LABEL_47:
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_10;
  sub_487230(a1);
  *(_WORD *)(a1 + 20) = 0;
  if ( ++v13 != 0x7FFF )
  {
LABEL_11:
    if ( v13 > 0 )
    {
      *(_WORD *)(a1 + 2) = v13;
      return 1;
    }
    goto LABEL_14;
  }
  result = 1;
LABEL_3:
  if ( a1 )
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_WORD *)(a1 + 20) = 0;
  }
  return result;
}
// 4879C4: variable 'v11' is possibly undefined
// 487B24: variable 'v23' is possibly undefined
// 487B18: variable 'v22' is possibly undefined
// 487B0C: variable 'v21' is possibly undefined
// 487B50: variable 'v24' is possibly undefined
// 487B54: variable 'v20' is possibly undefined
// 487B5C: variable 'v19' is possibly undefined
// 487BE4: variable 'v18' is possibly undefined
// 487BE0: variable 'v17' is possibly undefined
