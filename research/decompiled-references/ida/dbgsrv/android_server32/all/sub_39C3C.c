/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39C3C
// Address: 0x00039C3C

//----- (00039C3C) --------------------------------------------------------
int __fastcall sub_39C3C(int a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r5
  int v5; // r6
  unsigned __int8 v7[8]; // [sp+0h] [bp-1Ch] BYREF
  _DWORD v8[4]; // [sp+8h] [bp-14h] BYREF

  v7[0] = 2;
  memset(v8, 0, sizeof(v8));
  v2 = a1 + 24;
  switch ( *(_WORD *)(a1 + 36) )
  {
    case 3:
    case 5:
      v3 = *(_DWORD *)(a1 + 40);
      v7[0] = 2;
      v8[0] = v3;
      break;
    case 4:
      free_idcv(v7);
      v7[0] = 7;
      memset(v8, 0, 12);
      sub_39D2C((int)v8, v2);
      break;
    case 7:
      free_idcv(v7);
      v7[0] = 3;
      qmemcpy(v8, (const void *)(a1 + 48), sizeof(v8));
      break;
    case 8:
      v4 = *(_DWORD *)(a1 + 48);
      v5 = *(_DWORD *)(a1 + 52);
      free_idcv(v7);
      v7[0] = 9;
      v8[0] = v4;
      v8[1] = v5;
      break;
    default:
      if ( !under_debugger )
        interr(1438);
      __debugbreak();
  }
  sub_3DC40(a1 + 232, v7);
  free_idcv(v7);
  return 0;
}
// E0550: using guessed type char under_debugger;
