/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3279C
// Address: 0x0003279C

//----- (0003279C) --------------------------------------------------------
int __fastcall sub_3279C(_DWORD *a1, int a2)
{
  int result; // r0
  unsigned __int64 v4; // kr00_8
  unsigned int v5; // r2

  result = 0;
  if ( *(_DWORD *)(a2 + 4) != 8 )
  {
    v4 = *(_QWORD *)(a1[33] + 376) - *(_QWORD *)(a1[33] + 368);
    v5 = a1[4];
    if ( a2 + 64 >= v5
      && a2 + 64 < v5 + (a1[5] << 6)
      && *(_QWORD *)(a2 + 88) < v4
      && *(_QWORD *)(a2 + 88) >= *(_QWORD *)(a2 + 24) )
    {
      v4 = *(_QWORD *)(a2 + 88);
    }
    result = 0;
    if ( *(_QWORD *)(a2 + 24) < v4 )
    {
      result = *(_DWORD *)(a2 + 32);
      if ( *(_QWORD *)(a2 + 32) >= v4 - *(_QWORD *)(a2 + 24) )
        return v4 - *(_DWORD *)(a2 + 24);
    }
  }
  return result;
}
// 3280E: conditional instruction was optimized away because r3.4==1
// 32842: conditional instruction was optimized away because r1.4==1
// 32856: conditional instruction was optimized away because r1.4==0
// 3285E: conditional instruction was optimized away because %var_8.4==0
// 32864: conditional instruction was optimized away because r3.4==0
