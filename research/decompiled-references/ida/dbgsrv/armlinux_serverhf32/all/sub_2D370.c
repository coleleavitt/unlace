/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2D370
// Address: 0x0002D370

//----- (0002D370) --------------------------------------------------------
int __fastcall sub_2D370(int a1, int a2)
{
  void *v4; // r6
  void *v5; // r0
  int v7; // r2
  int v8; // r3
  int v9; // r0
  bool v10; // zf
  int v11; // r1
  int v12; // r3
  __int64 v13; // r2

  v4 = *(void **)(a2 + 12);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 16) = 0;
    sub_77E08(v4);
  }
  v5 = *(void **)a2;
  if ( *(_DWORD *)a2 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    sub_77E08(v5);
  }
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_BYTE *)(a2 + 28) = 0;
  *(_BYTE *)(a2 + 29) = 0;
  *(_WORD *)(a2 + 30) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 36) = 0;
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 44) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 36) = 0;
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 44) = 0;
  *(_DWORD *)(a2 + 48) = 0;
  *(_DWORD *)(a2 + 52) = 0;
  *(_DWORD *)(a2 + 56) = 0;
  *(_BYTE *)(a2 + 64) = 0;
  *(_DWORD *)(a2 + 60) = 0;
  *(_BYTE *)(a2 + 65) = 0;
  *(_BYTE *)(a2 + 66) = 0;
  if ( sub_2A314(*(_DWORD *)(a1 + 4), a2 + 24) < 0 )
    return 0;
  v7 = *(unsigned __int8 *)(a2 + 28);
  v8 = v7 >> 4;
  if ( v7 >> 4 > 2 )
  {
    v9 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 4) + 406);
    v10 = v9 == 40;
    if ( v9 == 40 )
      v10 = (unsigned __int16)(v7 >> 4) == 14;
    if ( v10 )
    {
      LOBYTE(v8) = 2;
    }
    else if ( v8 <= 9 )
    {
      LOBYTE(v8) = -2;
    }
  }
  *(_BYTE *)(a2 + 64) = v8;
  *(_BYTE *)(a2 + 65) = v7 & 0xF;
  *(_DWORD *)(a2 + 60) = 0;
  v11 = *(_DWORD *)(a2 + 32);
  v12 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 476);
  LODWORD(v13) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a2 + 48) = *(_DWORD *)(a2 + 40);
  HIDWORD(v13) = v12 + v11;
  *(_QWORD *)(a2 + 52) = v13;
  return 1;
}
// 2D3FE: conditional instruction was optimized away because %var_44.4==0
// 2D408: conditional instruction was optimized away because %var_38.4==0
// 2D454: conditional instruction was optimized away because r10.4==0
// 2D462: conditional instruction was optimized away because %ptr.4==0
