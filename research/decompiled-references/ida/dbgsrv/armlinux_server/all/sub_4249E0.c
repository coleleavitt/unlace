/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4249E0
// Address: 0x00000000004249E0

//----- (00000000004249E0) ----------------------------------------------------
__int64 __fastcall sub_4249E0(__int64 a1, __int64 a2)
{
  void *v4; // x1
  void *v5; // x0
  int v6; // w0
  unsigned int v7; // w1
  unsigned __int8 v8; // w1
  int v9; // w0

  v4 = *(void **)(a2 + 24);
  if ( v4 )
  {
    *(_QWORD *)(a2 + 32) = 0;
    j__free(v4);
  }
  v5 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    j__free(v5);
  }
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 40) = 0;
  *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 56) = 0;
  *(_QWORD *)(a2 + 64) = 0;
  *(_QWORD *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 56) = 0;
  *(_QWORD *)(a2 + 64) = 0;
  *(_QWORD *)(a2 + 72) = 0;
  *(_QWORD *)(a2 + 80) = 0;
  *(_DWORD *)(a2 + 88) = 0;
  *(_BYTE *)(a2 + 92) = 0;
  *(_BYTE *)(a2 + 93) = 0;
  *(_BYTE *)(a2 + 94) = 0;
  v6 = sub_420D98(*(_QWORD *)(a1 + 8), a2 + 48);
  v7 = 0;
  if ( (v6 & 0x80000000) == 0 )
  {
    v8 = *(_BYTE *)(a2 + 52);
    v9 = (int)v8 >> 4;
    if ( v9 > 2 )
    {
      if ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 522LL) == 40 && (int)*(unsigned __int8 *)(a2 + 52) >> 4 == 14 )
      {
        LOBYTE(v9) = 2;
      }
      else if ( v9 <= 9 )
      {
        LOBYTE(v9) = -2;
      }
    }
    *(_DWORD *)(a2 + 88) = 0;
    *(_BYTE *)(a2 + 92) = v9;
    *(_BYTE *)(a2 + 93) = v8 & 0xF;
    v7 = 1;
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 608LL) + *(_QWORD *)(a2 + 56);
    *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 64);
  }
  return v7;
}
// 4249E0: could not find valid save-restore pair for x24
// 424A6C: conditional instruction was optimized away because %var_60.8==0
// 424A7C: conditional instruction was optimized away because %var_48.8==0
// 424AD0: conditional instruction was optimized away because x23.8==0
// 424AE4: conditional instruction was optimized away because %ptr.8==0
