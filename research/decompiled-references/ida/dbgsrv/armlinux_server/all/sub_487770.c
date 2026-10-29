/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_487770
// Address: 0x0000000000487770

//----- (0000000000487770) ----------------------------------------------------
__int64 __fastcall sub_487770(__int64 a1, int a2)
{
  int v2; // w5
  __int64 v3; // x6
  _QWORD *v4; // x0
  __int64 v5; // x3
  unsigned int v6; // w1
  _WORD *v7; // x2
  unsigned int v8; // w0
  int v9; // w5
  __int64 result; // x0
  int v11; // w7
  _QWORD *v12; // x0
  int v13; // w8
  __int64 v14; // x3
  int v15; // w1
  unsigned int v16; // w2
  __int16 v17; // w1
  int v18; // w7
  unsigned int v19; // t1

  if ( !a2 )
    return 1;
  v2 = a2;
  v3 = a1;
  if ( a2 >= 0 )
  {
    if ( a2 <= 15 )
    {
      if ( a2 <= 7 )
      {
        do
LABEL_12:
          sub_487278(v3);
        while ( v9 != 1 );
        return 1;
      }
      v6 = *(unsigned __int16 *)(a1 + 20);
    }
    else
    {
      v4 = (_QWORD *)(a1 + 4);
      do
      {
        v5 = *(_QWORD *)(v3 + 14);
        *v4 = *(_QWORD *)(v3 + 6);
        v4[1] = v5;
        *(_WORD *)(v3 + 20) = 0;
        a2 -= 16;
      }
      while ( a2 > 15 );
      v2 &= 0xFu;
      v6 = 0;
      if ( v2 <= 7 )
      {
LABEL_11:
        if ( v2 )
          goto LABEL_12;
        return 1;
      }
    }
    v7 = (_WORD *)(v3 + 20);
    LOWORD(v8) = 0;
    while ( 1 )
    {
      *v7-- = v8 | ((_WORD)v6 << 8);
      v8 = v6 >> 8;
      if ( v7 == (_WORD *)(v3 + 2) )
        break;
      v6 = (unsigned __int16)*v7;
    }
    v2 -= 8;
    goto LABEL_11;
  }
  v11 = -a2;
  if ( -a2 > 15 )
  {
    v12 = (_QWORD *)(a1 + 4);
    v13 = 0;
    do
    {
      v14 = v12[1];
      v11 -= 16;
      v15 = *(unsigned __int16 *)(v3 + 20);
      *(_QWORD *)(v3 + 6) = *v12;
      *(_QWORD *)(v3 + 14) = v14;
      *(_WORD *)(v3 + 4) = 0;
      v13 |= v15;
    }
    while ( v11 > 15 );
    v16 = 0;
    v11 = -v2 & 0xF;
    if ( (unsigned int)v11 <= 7 )
    {
LABEL_23:
      if ( !v11 )
        goto LABEL_25;
      goto LABEL_24;
    }
LABEL_19:
    v17 = 0;
    v13 |= *(unsigned __int8 *)(v3 + 20);
    while ( 1 )
    {
      *(_WORD *)v12 = v17 | (v16 >> 8);
      v12 = (_QWORD *)((char *)v12 + 2);
      v17 = (unsigned __int8)v16 << 8;
      if ( v12 == (_QWORD *)(v3 + 22) )
        break;
      v16 = *(unsigned __int16 *)v12;
    }
    v11 -= 8;
    goto LABEL_23;
  }
  if ( v11 > 7 )
  {
    v13 = 0;
    v19 = *(unsigned __int16 *)(a1 + 4);
    v12 = (_QWORD *)(a1 + 4);
    v16 = v19;
    goto LABEL_19;
  }
  do
LABEL_24:
    sub_487230(v3);
  while ( v18 != 1 );
LABEL_25:
  result = 2;
  if ( !v13 )
    return 1;
  return result;
}
// 4878E4: conditional instruction was optimized away because w1.4<0
// 4877F4: variable 'v3' is possibly undefined
// 4877FC: variable 'v9' is possibly undefined
// 4878B0: variable 'v18' is possibly undefined
// 4878B8: variable 'v13' is possibly undefined
