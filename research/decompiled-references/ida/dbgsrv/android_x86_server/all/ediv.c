/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ediv
// Address: 0x000A5A30

//----- (000A5A30) --------------------------------------------------------
int __cdecl ediv(__int16 *a1, _WORD *a2, int a3)
{
  __int16 v3; // di
  int v4; // edi
  __int16 v5; // si
  int v6; // esi
  int v7; // ecx
  _BOOL4 v8; // eax
  bool v9; // al
  __int16 v10; // si
  _WORD v12[11]; // [esp+Ch] [ebp-40h] BYREF
  __int16 v13; // [esp+22h] [ebp-2Ah] BYREF
  __int16 v14; // [esp+24h] [ebp-28h]
  __int16 v15; // [esp+26h] [ebp-26h]
  __int16 v16; // [esp+28h] [ebp-24h]
  __int16 v17; // [esp+2Ah] [ebp-22h]
  __int16 v18; // [esp+2Ch] [ebp-20h]
  __int16 v19; // [esp+2Eh] [ebp-1Eh]
  __int16 v20; // [esp+30h] [ebp-1Ch]
  __int16 v21; // [esp+32h] [ebp-1Ah]
  __int16 v22; // [esp+34h] [ebp-18h]
  __int16 v23; // [esp+36h] [ebp-16h]
  unsigned int v24; // [esp+38h] [ebp-14h]

  v24 = __readgsdword(0x14u);
  v3 = a1[7];
  v13 = v3 >> 15;
  v4 = v3 & 0x7FFF;
  v14 = v4;
  v15 = 0;
  v16 = a1[6];
  v17 = a1[5];
  v18 = a1[4];
  v19 = a1[3];
  v20 = a1[2];
  v21 = a1[1];
  v22 = *a1;
  v23 = 0;
  v5 = a2[7];
  v12[0] = v5 >> 15;
  v6 = v5 & 0x7FFF;
  v12[1] = v6;
  v12[2] = 0;
  v12[3] = a2[6];
  v12[4] = a2[5];
  v12[5] = a2[4];
  v12[6] = a2[3];
  v12[7] = a2[2];
  v12[8] = a2[1];
  v12[9] = *a2;
  v12[10] = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  if ( !(_WORD)v6 )
    return 4;
  v7 = 1;
  if ( (_WORD)v4 )
  {
    v8 = sub_A5C30((int)v12, &v13);
    v9 = emdnorm((int)&v13, v8, 0, v4 + 0x3FFF - v6, 112);
    v7 = 2;
    if ( v9 )
    {
      v10 = v14 | 0x8000;
      if ( v13 == v12[0] )
        v10 = v14;
      v13 = -(v13 != v12[0]);
      *(_WORD *)(a3 + 14) = v10;
      *(_WORD *)(a3 + 12) = v16;
      *(_WORD *)(a3 + 10) = v17;
      *(_WORD *)(a3 + 8) = v18;
      *(_WORD *)(a3 + 6) = v19;
      *(_WORD *)(a3 + 4) = v20;
      *(_WORD *)(a3 + 2) = v21;
      *(_WORD *)a3 = v22;
      return 1;
    }
  }
  return v7;
}
