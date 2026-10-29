/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68FF0
// Address: 0x00068FF0

//----- (00068FF0) --------------------------------------------------------
int __fastcall sub_68FF0(int a1, int *a2)
{
  signed int v3; // r6
  _BYTE *v4; // r0
  int v5; // r5
  int v6; // r6
  int v7; // r2
  unsigned int v8; // r1
  _BOOL4 v9; // r0
  bool v10; // zf
  int v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // r3
  _BYTE *v14; // r0
  int v15; // r6
  int v16; // r2
  unsigned int v17; // r1
  _BOOL4 v18; // r0
  int v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r3
  _BYTE *v22; // r0
  int v23; // r2
  unsigned int v24; // r1
  _BOOL4 v25; // r0
  int v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r3
  _BYTE *v29; // r0
  _BYTE *v30; // r0
  signed int v33; // [sp+14h] [bp-1Ch]
  int v34; // [sp+1Ch] [bp-14h]
  _BYTE v35[5]; // [sp+20h] [bp-10h] BYREF
  _BYTE v36[5]; // [sp+25h] [bp-Bh] BYREF
  _BYTE v37[6]; // [sp+2Ah] [bp-6h] BYREF

  v3 = a2[1];
  v4 = pack_dd(v35, (unsigned int)v36, v3);
  v34 = a1;
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v35, v4 - v35);
  if ( v3 >= 1 )
  {
    v5 = 0;
    do
    {
      v33 = v3;
      v6 = *a2;
      v7 = *(_DWORD *)(*a2 + v5);
      v8 = v7 + 1;
      v9 = __CFADD__(v7, 1);
      v11 = v7 + 1;
      v10 = v7 == -1;
      v12 = 0;
      if ( !v10 )
        v12 = v8;
      v10 = v11 == 0;
      v13 = 0;
      if ( !v10 )
        v13 = v9;
      v14 = pack_dq(v35, (unsigned int)v37, v12, v13);
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v34, v35, v14 - v35);
      v15 = v6 + v5;
      v16 = *(_DWORD *)(v15 + 4);
      v17 = v16 + 1;
      v18 = __CFADD__(v16, 1);
      v19 = v16 + 1;
      v10 = v16 == -1;
      v20 = 0;
      if ( !v10 )
        v20 = v17;
      v10 = v19 == 0;
      v21 = 0;
      if ( !v10 )
        v21 = v18;
      v22 = pack_dq(v35, (unsigned int)v37, v20, v21);
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v34, v35, v22 - v35);
      v23 = *(_DWORD *)(v15 + 8);
      v24 = v23 + 1;
      v25 = __CFADD__(v23, 1);
      v26 = v23 + 1;
      v10 = v23 == -1;
      v27 = 0;
      if ( !v10 )
        v27 = v24;
      v10 = v26 == 0;
      v28 = 0;
      if ( !v10 )
        v28 = v25;
      v29 = pack_dq(v35, (unsigned int)v37, v27, v28);
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v34, v35, v29 - v35);
      v30 = pack_dd(v35, (unsigned int)v36, *(unsigned __int8 *)(v15 + 12));
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v34, v35, v30 - v35);
      v5 += 16;
      v3 = v33 - 1;
    }
    while ( v33 != 1 );
  }
  return _stack_chk_guard - *(_DWORD *)&v37[2];
}
