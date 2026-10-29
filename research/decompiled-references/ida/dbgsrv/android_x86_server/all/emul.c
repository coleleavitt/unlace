/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emul
// Address: 0x000A52C0

//----- (000A52C0) --------------------------------------------------------
int __cdecl emul(_WORD *a1, __int16 *a2, int a3)
{
  __int16 v3; // di
  int v4; // edi
  __int16 v5; // si
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  bool v9; // al
  __int16 v10; // si
  unsigned __int16 v12; // [esp+Ch] [ebp-40h] BYREF
  __int16 v13; // [esp+Eh] [ebp-3Eh]
  __int16 v14; // [esp+10h] [ebp-3Ch]
  __int16 v15; // [esp+12h] [ebp-3Ah]
  __int16 v16; // [esp+14h] [ebp-38h]
  __int16 v17; // [esp+16h] [ebp-36h]
  __int16 v18; // [esp+18h] [ebp-34h]
  __int16 v19; // [esp+1Ah] [ebp-32h]
  __int16 v20; // [esp+1Ch] [ebp-30h]
  __int16 v21; // [esp+1Eh] [ebp-2Eh]
  __int16 v22; // [esp+20h] [ebp-2Ch]
  _WORD v23[11]; // [esp+22h] [ebp-2Ah] BYREF
  unsigned int v24; // [esp+38h] [ebp-14h]

  v24 = __readgsdword(0x14u);
  v3 = a1[7];
  v23[0] = v3 >> 15;
  v4 = v3 & 0x7FFF;
  v23[1] = v4;
  v23[2] = 0;
  v23[3] = a1[6];
  v23[4] = a1[5];
  v23[5] = a1[4];
  v23[6] = a1[3];
  v23[7] = a1[2];
  v23[8] = a1[1];
  v23[9] = *a1;
  v23[10] = 0;
  v5 = a2[7];
  v12 = v5 >> 15;
  v6 = v5 & 0x7FFF;
  v13 = v6;
  v14 = 0;
  v15 = a2[6];
  v16 = a2[5];
  v17 = a2[4];
  v18 = a2[3];
  v19 = a2[2];
  v20 = a2[1];
  v21 = *a2;
  v22 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  v7 = 1;
  if ( (_WORD)v4 )
  {
    if ( (_WORD)v6 )
    {
      v8 = sub_A54C0((int)v23, &v12);
      v9 = emdnorm((int)&v12, v8 != 0, 0, v4 + v6 - 16382, 112);
      v7 = 2;
      if ( v9 )
      {
        v10 = v13 | 0x8000;
        if ( v23[0] == v12 )
          v10 = v13;
        v12 = -(v23[0] != v12);
        *(_WORD *)(a3 + 14) = v10;
        *(_WORD *)(a3 + 12) = v15;
        *(_WORD *)(a3 + 10) = v16;
        *(_WORD *)(a3 + 8) = v17;
        *(_WORD *)(a3 + 6) = v18;
        *(_WORD *)(a3 + 4) = v19;
        *(_WORD *)(a3 + 2) = v20;
        *(_WORD *)a3 = v21;
        return 1;
      }
    }
  }
  return v7;
}
