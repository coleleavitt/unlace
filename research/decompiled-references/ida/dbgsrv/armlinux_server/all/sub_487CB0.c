/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_487CB0
// Address: 0x0000000000487CB0

//----- (0000000000487CB0) ----------------------------------------------------
__int64 __fastcall sub_487CB0(__int64 a1)
{
  __int64 v1; // x7
  int v2; // w0
  __int64 v3; // x7
  __int64 v4; // x8
  int v5; // w11
  int v6; // w11
  int v7; // w9
  _QWORD *v8; // x5
  char *v9; // x6
  __int64 v10; // x0
  unsigned int v11; // w2
  unsigned int v12; // w1
  __int64 v13; // x0
  __int64 v14; // x1
  unsigned __int64 v15; // x1
  __int16 v16; // w10
  char *v17; // x2
  __int16 v18; // w0
  __int16 v19; // w1
  bool v20; // zf
  int v21; // w9
  _QWORD v23[2]; // [xsp+10h] [xbp-20h] BYREF
  int v24; // [xsp+20h] [xbp-10h]
  unsigned __int16 v25; // [xsp+24h] [xbp-Ch]

  sub_487650(a1);
  v2 = sub_487650(v1);
  v23[0] = 0;
  v23[1] = 0;
  v24 = 0;
  v6 = v5 - v2;
  v25 = 0;
  if ( v7 <= v6 )
  {
    v8 = v23;
    v9 = (char *)v23 + 2;
    do
    {
      v10 = 4;
      while ( 1 )
      {
        v11 = *(unsigned __int16 *)(v4 + v10);
        v12 = *(unsigned __int16 *)(v3 + v10);
        if ( v11 != v12 )
          break;
        v10 += 2;
        if ( v10 == 22 )
          goto LABEL_6;
      }
      v16 = 0;
      if ( v11 > v12 )
        goto LABEL_9;
LABEL_6:
      v13 = 20;
      LODWORD(v14) = 0;
      do
      {
        v15 = *(unsigned __int16 *)(v3 + v13) - *(unsigned __int16 *)(v4 + v13) - (unsigned int)v14;
        *(_WORD *)(v3 + v13) = v15;
        v13 -= 2;
        v14 = (v15 >> 16) & 1;
      }
      while ( v13 != 2 );
      v16 = 1;
LABEL_9:
      v17 = (char *)v8 + 20;
      v18 = 0;
      do
      {
        v19 = 2 * (*(_WORD *)v17 & 0x7FFF);
        if ( (*(_WORD *)v17 & 0x8000) != 0 )
          v18 |= 1u;
        v20 = (v18 & 2) == 0;
        v18 = 2 * (v18 & 0x7FFF);
        if ( !v20 )
          v19 |= 1u;
        *(_WORD *)v17 = v19;
        v17 -= 2;
      }
      while ( v17 != v9 );
      v25 |= v16;
      sub_487278(v3);
    }
    while ( v21 <= v6 );
  }
  sub_487978(v3, 0, 0, v6, 0);
  return v25;
}
// 487CE4: variable 'v1' is possibly undefined
// 487CF0: variable 'v5' is possibly undefined
// 487CFC: variable 'v7' is possibly undefined
// 487D10: variable 'v4' is possibly undefined
// 487D14: variable 'v3' is possibly undefined
// 487D60: variable 'v8' is possibly undefined
// 487D98: variable 'v9' is possibly undefined
// 487DB8: variable 'v21' is possibly undefined
// 487DB8: variable 'v6' is possibly undefined
