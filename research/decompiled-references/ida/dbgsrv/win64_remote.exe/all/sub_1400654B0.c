/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400654B0
// Address: 0x00000001400654B0

//----- (00000001400654B0) ----------------------------------------------------
__int64 __fastcall sub_1400654B0(_WORD *a1, __int64 a2)
{
  unsigned __int16 v2; // r12
  unsigned int v5; // esi
  int v6; // r14d
  __int16 v7; // ax
  int v9; // ecx
  unsigned int v10; // edx
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // edx
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // ecx
  int v23; // edx
  int v24; // ecx
  unsigned int v25; // edx
  unsigned int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // r11
  int v31; // ecx
  _BYTE v32[20]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int16 v33; // [rsp+34h] [rbp-Ch]

  v2 = 0;
  *(_WORD *)v32 = *(_WORD *)a2;
  *(_WORD *)&v32[2] = *(_WORD *)(a2 + 2);
  *(_OWORD *)&v32[4] = 0;
  v33 = 0;
  v5 = 0;
  v6 = 112;
  while ( 1 )
  {
    v7 = a1[9];
    if ( v7 )
      break;
    memcpy(a1 + 3, a1 + 2, 0x10u);
    a1[2] = 0;
    v6 -= 16;
    if ( !v6 )
    {
      *(_OWORD *)a2 = 0;
      *(_DWORD *)(a2 + 16) = 0;
      *(_WORD *)(a2 + 20) = 0;
      return 0;
    }
  }
  if ( !(_BYTE)v7 )
  {
    sub_1400659F0((__int64)a1);
    v6 -= 8;
  }
  if ( v6 > 0 )
  {
    do
    {
      if ( (a1[9] & 1) != 0 )
      {
        v9 = *(unsigned __int16 *)(a2 + 18);
        v10 = v2 + *(unsigned __int16 *)(a2 + 20);
        v33 = v2 + *(_WORD *)(a2 + 20);
        v11 = v9 + HIWORD(v10);
        v12 = *(unsigned __int16 *)(a2 + 16);
        v13 = *(unsigned __int16 *)&v32[18] + v11;
        *(_WORD *)&v32[18] = v13;
        v14 = (HIWORD(v13) & 1) + v12;
        v15 = *(unsigned __int16 *)(a2 + 14);
        v16 = *(unsigned __int16 *)&v32[16] + v14;
        *(_WORD *)&v32[16] = v16;
        v17 = (HIWORD(v16) & 1) + v15;
        v18 = *(unsigned __int16 *)(a2 + 12);
        v19 = *(unsigned __int16 *)&v32[14] + v17;
        *(_WORD *)&v32[14] = v19;
        v20 = (HIWORD(v19) & 1) + v18;
        v21 = *(unsigned __int16 *)(a2 + 10);
        v22 = *(unsigned __int16 *)&v32[12] + v20;
        *(_WORD *)&v32[12] = v22;
        v23 = (HIWORD(v22) & 1) + v21;
        v24 = *(unsigned __int16 *)(a2 + 8);
        v25 = *(unsigned __int16 *)&v32[10] + v23;
        *(_WORD *)&v32[10] = v25;
        v26 = *(unsigned __int16 *)&v32[8] + (HIWORD(v25) & 1) + v24;
        v27 = *(unsigned __int16 *)(a2 + 6);
        *(_WORD *)&v32[8] = v26;
        v28 = *(unsigned __int16 *)&v32[6] + v27 + (HIWORD(v26) & 1);
        *(_WORD *)&v32[6] = v28;
        *(_WORD *)&v32[4] += *(_WORD *)(a2 + 4) + (BYTE2(v28) & 1);
      }
      v29 = v5 | 1;
      if ( (v33 & 1) == 0 )
        v29 = v5;
      v5 = v29;
      sub_140065870(a1);
      sub_140065870(v32);
      v2 = v33;
    }
    while ( v30 != 1 );
  }
  v31 = *(_DWORD *)&v32[16];
  *(_OWORD *)a2 = *(_OWORD *)v32;
  *(_DWORD *)(a2 + 16) = v31;
  *(_WORD *)(a2 + 20) = v2;
  return v5;
}
// 14006564F: variable 'v30' is possibly undefined
