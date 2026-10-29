/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4872C0
// Address: 0x00000000004872C0

//----- (00000000004872C0) ----------------------------------------------------
__int64 __fastcall sub_4872C0(__int64 a1, _WORD *a2)
{
  __int64 v2; // x5
  __int64 v3; // x6
  _QWORD *v4; // x7
  __int16 v5; // w2
  int v6; // w1
  unsigned __int16 *v7; // x0
  char *v9; // x10
  __int64 v10; // x0
  unsigned int v11; // w2
  unsigned int v12; // w1
  bool v13; // cc
  __int64 v14; // x0
  __int64 v15; // x2
  unsigned __int64 v16; // x2
  __int16 v17; // w1
  char *v18; // x3
  __int16 v19; // w0
  __int16 v20; // w2
  bool v21; // zf
  int v22; // w11
  __int64 v23; // x7
  _QWORD *v24; // x5
  unsigned __int16 *v25; // x8
  unsigned __int16 *v26; // x1
  __int64 result; // x0
  unsigned int v28; // t1
  __int64 v29; // x3
  __int64 v30; // x6
  __int64 v31; // x5
  __int64 v32; // x6
  _WORD *v33; // x8
  unsigned int v34; // w1
  __int16 v35; // w4
  unsigned int v36; // w0
  _WORD *v37; // x2
  __int16 v38; // w0
  __int16 v39; // w1
  int v40; // w10
  _QWORD v41[3]; // [xsp+10h] [xbp-20h] BYREF

  v2 = (__int64)a2;
  v3 = a1;
  v4 = v41;
  v5 = a2[1];
  LOWORD(v41[0]) = *a2;
  WORD1(v41[0]) = v5;
  v6 = *(unsigned __int16 *)(a1 + 8);
  memset((char *)v41 + 4, 0, 18);
  if ( !v6 )
  {
    v7 = (unsigned __int16 *)(a1 + 10);
    while ( *v7++ )
    {
      if ( v7 == (unsigned __int16 *)(v3 + 22) )
      {
        if ( (*(_WORD *)(v3 + 6) & 1) != 0 )
          break;
        sub_487230(v2);
        sub_487230(v30);
        do
        {
          v34 = *(unsigned __int16 *)(v32 + 6);
          v35 = 0;
          v36 = *(unsigned __int16 *)(v31 + 6);
          if ( v34 <= v36 )
          {
            v35 = 1;
            *(_WORD *)(v31 + 6) = v36 - v34;
          }
          v37 = (_WORD *)v4 + 10;
          v38 = 0;
          do
          {
            v39 = 2 * (*v37 & 0x7FFF);
            if ( (*v37 & 0x8000) != 0 )
              v38 |= 1u;
            v21 = (v38 & 2) == 0;
            v38 = 2 * (v38 & 0x7FFF);
            if ( !v21 )
              v39 |= 1u;
            *v37-- = v39;
          }
          while ( v37 != v33 );
          WORD1(v41[2]) |= v35;
          sub_487278(v31);
        }
        while ( v40 != 1 );
        goto LABEL_20;
      }
    }
  }
  v9 = (char *)v41 + 2;
  do
  {
    v10 = 4;
    while ( 1 )
    {
      v11 = *(unsigned __int16 *)(v3 + v10);
      v12 = *(unsigned __int16 *)(v2 + v10);
      v13 = v11 > v12;
      if ( v11 != v12 )
        break;
      v10 += 2;
      if ( v10 == 22 )
        goto LABEL_10;
    }
    v17 = 0;
    if ( v13 )
      goto LABEL_13;
LABEL_10:
    v14 = 20;
    LODWORD(v15) = 0;
    do
    {
      v16 = *(unsigned __int16 *)(v2 + v14) - *(unsigned __int16 *)(v3 + v14) - (unsigned int)v15;
      *(_WORD *)(v2 + v14) = v16;
      v14 -= 2;
      v15 = (v16 >> 16) & 1;
    }
    while ( v14 != 2 );
    v17 = 1;
LABEL_13:
    v18 = (char *)v4 + 20;
    v19 = 0;
    do
    {
      v20 = 2 * (*(_WORD *)v18 & 0x7FFF);
      if ( (*(_WORD *)v18 & 0x8000) != 0 )
        v19 |= 1u;
      v21 = (v19 & 2) == 0;
      v19 = 2 * (v19 & 0x7FFF);
      if ( !v21 )
        v20 |= 1u;
      *(_WORD *)v18 = v20;
      v18 -= 2;
    }
    while ( v18 != v9 );
    WORD1(v41[2]) |= v17;
    sub_487278(v2);
  }
  while ( v22 != 1 );
LABEL_20:
  sub_487230((__int64)v4);
  sub_487230(v23);
  v26 = v25 + 9;
  while ( 1 )
  {
    v28 = *v25++;
    result = v28;
    if ( v28 )
      break;
    if ( v25 == v26 )
      goto LABEL_23;
  }
  result = 1;
LABEL_23:
  v29 = v41[1];
  *v24 = v41[0];
  v24[1] = v29;
  *(_QWORD *)((char *)v24 + 14) = *(_QWORD *)((char *)&v41[1] + 6);
  return result;
}
// 487340: variable 'v3' is possibly undefined
// 487344: variable 'v2' is possibly undefined
// 487390: variable 'v4' is possibly undefined
// 4873C8: variable 'v9' is possibly undefined
// 4873E4: variable 'v22' is possibly undefined
// 4873F4: variable 'v23' is possibly undefined
// 4873F8: variable 'v25' is possibly undefined
// 487410: variable 'v24' is possibly undefined
// 487460: variable 'v30' is possibly undefined
// 487468: variable 'v32' is possibly undefined
// 487470: variable 'v31' is possibly undefined
// 4874C0: variable 'v33' is possibly undefined
// 4874DC: variable 'v40' is possibly undefined
