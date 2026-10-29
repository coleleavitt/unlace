/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eldexp
// Address: 0x000A5170

//----- (000A5170) --------------------------------------------------------
int __cdecl eldexp(__int16 *a1, int a2, _WORD *a3)
{
  __int16 v3; // cx
  int v4; // ecx
  __int16 v5; // cx
  __int16 v7; // [esp+6h] [ebp-22h] BYREF
  __int16 v8; // [esp+8h] [ebp-20h]
  __int16 v9; // [esp+Ah] [ebp-1Eh]
  __int16 v10; // [esp+Ch] [ebp-1Ch]
  __int16 v11; // [esp+Eh] [ebp-1Ah]
  __int16 v12; // [esp+10h] [ebp-18h]
  __int16 v13; // [esp+12h] [ebp-16h]
  __int16 v14; // [esp+14h] [ebp-14h]
  __int16 v15; // [esp+16h] [ebp-12h]
  __int16 v16; // [esp+18h] [ebp-10h]
  __int16 v17; // [esp+1Ah] [ebp-Eh]
  unsigned int v18; // [esp+1Ch] [ebp-Ch]

  v18 = __readgsdword(0x14u);
  v3 = a1[7];
  v7 = v3 >> 15;
  v4 = v3 & 0x7FFF;
  v8 = v4;
  v9 = 0;
  v10 = a1[6];
  v11 = a1[5];
  v12 = a1[4];
  v13 = a1[3];
  v14 = a1[2];
  v15 = a1[1];
  v16 = *a1;
  v17 = 0;
  if ( emdnorm((int)&v7, 0, 0, a2 + v4, 112) )
  {
    v5 = v8 | 0x8000;
    if ( !v7 )
      v5 = v8;
    a3[7] = v5;
    a3[6] = v10;
    a3[5] = v11;
    a3[4] = v12;
    a3[3] = v13;
    a3[2] = v14;
    a3[1] = v15;
    *a3 = v16;
    return 1;
  }
  else
  {
    *((_DWORD *)a3 + 1) = 0;
    *(_DWORD *)a3 = 0;
    *((_DWORD *)a3 + 3) = 0;
    *((_DWORD *)a3 + 2) = 0;
    return 2;
  }
}
