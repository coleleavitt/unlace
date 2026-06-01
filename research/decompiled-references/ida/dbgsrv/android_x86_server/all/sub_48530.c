/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48530
// Address: 0x00048530

//----- (00048530) --------------------------------------------------------
int __cdecl sub_48530(int a1)
{
  int v1; // eax
  unsigned int v2; // esi
  unsigned __int64 v3; // xmm0_8
  unsigned int v5; // [esp+Ch] [ebp-30h]
  char v6[4]; // [esp+10h] [ebp-2Ch] BYREF
  unsigned __int64 v7; // [esp+14h] [ebp-28h] BYREF
  __int64 v8; // [esp+1Ch] [ebp-20h]
  unsigned int v9; // [esp+28h] [ebp-14h]

  v9 = __readgsdword(0x14u);
  v6[0] = 2;
  v7 = 0;
  v8 = 0;
  switch ( (unsigned __int16)*(_DWORD *)(a1 + 32) )
  {
    case 3u:
    case 5u:
      v1 = *(_DWORD *)(a1 + 36);
      v6[0] = 2;
      LODWORD(v7) = v1;
      break;
    case 4u:
      free_idcv(v6);
      v6[0] = 7;
      v7 = 0;
      LODWORD(v8) = 0;
      sub_486B0((int)&v7, a1 + 20);
      break;
    case 7u:
      free_idcv(v6);
      v6[0] = 3;
      v3 = *(_QWORD *)(a1 + 44);
      v8 = *(_QWORD *)(a1 + 52);
      v7 = v3;
      break;
    case 8u:
      v2 = *(_DWORD *)(a1 + 44);
      v5 = *(_DWORD *)(a1 + 48);
      free_idcv(v6);
      v6[0] = 9;
      v7 = __PAIR64__(v5, v2);
      break;
    default:
      if ( !(_BYTE)under_debugger )
        interr(1438);
      BUG();
  }
  sub_4E740(a1 + 228, v6);
  free_idcv(v6);
  return 0;
}
// 13E34C: using guessed type int under_debugger;
