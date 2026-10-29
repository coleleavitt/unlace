/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_380A4
// Address: 0x000380A4

//----- (000380A4) --------------------------------------------------------
int __fastcall sub_380A4(int a1)
{
  int v2; // r3
  __int64 v3; // r8
  int v4; // r3
  _BYTE *v5; // r0
  int v6; // r3
  char *v7; // r0
  __int64 v9; // r0
  int v10; // r2
  int v11; // r3
  unsigned __int8 v12[8]; // [sp+0h] [bp-3Ch] BYREF
  __int64 v13; // [sp+8h] [bp-34h] BYREF
  int v14; // [sp+10h] [bp-2Ch]
  int v15; // [sp+14h] [bp-28h]
  unsigned __int8 v16[8]; // [sp+18h] [bp-24h] BYREF
  int v17; // [sp+20h] [bp-1Ch]
  int v18; // [sp+24h] [bp-18h]
  int v19; // [sp+28h] [bp-14h]
  int v20; // [sp+2Ch] [bp-10h]

  v2 = *(unsigned __int16 *)(a1 + 36);
  v12[0] = 2;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  switch ( v2 )
  {
    case 3:
    case 5:
      LODWORD(v13) = *(_DWORD *)(a1 + 40);
      break;
    case 4:
      sub_45758(v12);
      v12[0] = 7;
      v13 = 0;
      v14 = 0;
      sub_37F70((void **)&v13, a1 + 24);
      break;
    case 7:
      sub_45758(v12);
      LODWORD(v9) = *(_DWORD *)(a1 + 48);
      v12[0] = 3;
      HIDWORD(v9) = *(_DWORD *)(a1 + 52);
      v10 = *(_DWORD *)(a1 + 56);
      v11 = *(_DWORD *)(a1 + 60);
      v13 = v9;
      v14 = v10;
      v15 = v11;
      break;
    case 8:
      v3 = *(_QWORD *)(a1 + 48);
      sub_45758(v12);
      v13 = v3;
      v12[0] = 9;
      break;
    default:
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(1438);
  }
  v16[0] = 2;
  v18 = 0;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  sub_45B30(v16, v12);
  v4 = *(_DWORD *)(a1 + 236);
  v5 = *(_BYTE **)(a1 + 232);
  if ( (unsigned int)(v4 + 1) > *(_DWORD *)(a1 + 240) )
  {
    v5 = sub_78018(a1 + 232, *(void **)(a1 + 232), v4 + 1, 0x18u);
    v4 = *(_DWORD *)(a1 + 236);
    *(_DWORD *)(a1 + 232) = v5;
  }
  v6 = 24 * v4;
  v5[v6] = 2;
  v7 = &v5[v6];
  *((_DWORD *)v7 + 2) = 0;
  *((_DWORD *)v7 + 3) = 0;
  *((_DWORD *)v7 + 4) = 0;
  *((_DWORD *)v7 + 5) = 0;
  sub_45B30((unsigned __int8 *)v7, v16);
  ++*(_DWORD *)(a1 + 236);
  sub_45758(v16);
  sub_45758(v12);
  return 0;
}
// D6C20: using guessed type char under_debugger;
