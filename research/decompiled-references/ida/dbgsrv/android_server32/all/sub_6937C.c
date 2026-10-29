/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6937C
// Address: 0x0006937C

//----- (0006937C) --------------------------------------------------------
int __fastcall sub_6937C(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r6
  _BYTE *v5; // r0
  int v6; // r1
  int v7; // r7
  int v8; // r5
  _BYTE *v9; // r0
  _BYTE *v10; // r0
  _BYTE *v11; // r0
  _DWORD *v13; // [sp+Ch] [bp-2Ch]
  int v15; // [sp+18h] [bp-20h]
  int v16; // [sp+20h] [bp-18h]
  int v17; // [sp+24h] [bp-14h]
  _BYTE v18[5]; // [sp+2Ch] [bp-Ch] BYREF
  _BYTE v19[7]; // [sp+31h] [bp-7h] BYREF

  v3 = a2;
  v5 = pack_dd(v18, (unsigned int)v19, a2[1]);
  v16 = a1;
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v18, v5 - v18);
  if ( v3[1] )
  {
    v6 = 0;
    v7 = 12;
    v13 = v3;
    do
    {
      v17 = v6;
      v8 = *v3;
      v15 = *v3 + v7;
      v9 = pack_dd(v18, (unsigned int)v19, *(_DWORD *)(v15 - 12));
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v16, v18, v9 - v18);
      v10 = pack_dd(v18, (unsigned int)v19, *(_DWORD *)(v8 + v7));
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v16, v18, v10 - v18);
      if ( a3 )
      {
        v11 = pack_dd(v18, (unsigned int)v19, *(_DWORD *)(v15 - 8));
        ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v16, v18, v11 - v18);
        ((void (__fastcall *)(int, _DWORD, _DWORD))loc_30B84)(v16, *(_DWORD *)(v15 - 4), *(_DWORD *)(v8 + v7));
      }
      v7 += 20;
      v6 = v17 + 1;
      v3 = v13;
    }
    while ( (unsigned int)(v17 + 1) < v13[1] );
  }
  return _stack_chk_guard - *(_DWORD *)&v19[3];
}
