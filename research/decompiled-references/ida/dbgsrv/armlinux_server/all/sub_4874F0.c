/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4874F0
// Address: 0x00000000004874F0

//----- (00000000004874F0) ----------------------------------------------------
__int64 __fastcall sub_4874F0(__int64 a1, _WORD *a2)
{
  __int64 v2; // x7
  _WORD *v3; // x8
  _QWORD *v4; // x5
  __int16 v5; // w4
  __int16 v6; // w1
  _QWORD *v7; // x3
  _QWORD *v8; // x2
  unsigned int v9; // w6
  __int16 v10; // w0
  __int64 v11; // x1
  __int64 v13; // x5
  unsigned int v14; // w10
  int v15; // w6
  int v16; // w9
  __int64 v17; // x0
  unsigned int v18; // w2
  unsigned int v19; // w2
  __int64 v20; // x3
  __int16 *v21; // x1
  __int16 v22; // w0
  __int16 v23; // w2
  _WORD v24[2]; // [xsp+10h] [xbp-20h] BYREF
  __int64 v25; // [xsp+14h] [xbp-1Ch]
  __int64 v26; // [xsp+1Ch] [xbp-14h]
  __int16 v27; // [xsp+24h] [xbp-Ch]

  v2 = a1;
  v3 = a2;
  v4 = v24;
  v5 = *a2;
  v6 = a2[1];
  v24[0] = v5;
  v7 = (_QWORD *)(a1 + 4);
  v24[1] = v6;
  v8 = (_QWORD *)(a1 + 6);
  v25 = 0;
  v26 = 0;
  v9 = 112;
  v27 = 0;
  while ( 1 )
  {
    v10 = *(_WORD *)(v2 + 18);
    if ( v10 )
      break;
    v11 = *(_QWORD *)(v2 + 12);
    *v8 = *v7;
    *(_QWORD *)(v2 + 14) = v11;
    *(_WORD *)(v2 + 4) = 0;
    v9 -= 16;
    if ( !v9 )
    {
      *(_QWORD *)v3 = 0;
      *((_QWORD *)v3 + 1) = 0;
      *((_DWORD *)v3 + 4) = 0;
      v3[10] = 0;
      return v9;
    }
  }
  if ( !(_BYTE)v10 )
  {
    v21 = (__int16 *)(v2 + 4);
    v22 = 0;
    do
    {
      v23 = *v21;
      *v21 = v22 | HIBYTE(*v21);
      ++v21;
      v22 = (unsigned __int8)v23 << 8;
    }
    while ( v21 != (__int16 *)(v2 + 22) );
  }
  do
  {
    if ( (*(_WORD *)(v2 + 18) & 1) != 0 )
    {
      v17 = 10;
      v18 = 0;
      do
      {
        v19 = (unsigned __int16)v3[v17] + *(unsigned __int16 *)((char *)v4 + v17 * 2) + v18;
        *(_WORD *)((char *)v4 + v17 * 2) = v19;
        --v17;
        v18 = HIWORD(v19);
      }
      while ( v17 != 1 );
    }
    sub_487230(v2);
    sub_487230(v13);
  }
  while ( v16 != v15 );
  v20 = v4[1];
  *(_QWORD *)v3 = *v4;
  *((_QWORD *)v3 + 1) = v20;
  v9 = v14;
  *(_QWORD *)(v3 + 7) = *(_QWORD *)((char *)v4 + 14);
  return v9;
}
// 4875B0: variable 'v2' is possibly undefined
// 4875B8: variable 'v13' is possibly undefined
// 4875C0: variable 'v16' is possibly undefined
// 4875C0: variable 'v15' is possibly undefined
// 4875DC: variable 'v3' is possibly undefined
// 4875D8: variable 'v4' is possibly undefined
// 48760C: variable 'v14' is possibly undefined
