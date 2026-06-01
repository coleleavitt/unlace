/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31E88
// Address: 0x00031E88

//----- (00031E88) --------------------------------------------------------
int __fastcall sub_31E88(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r3
  int result; // r0
  int v7; // r1
  int v8; // r5
  unsigned int v9; // r0
  unsigned __int64 v10; // kr00_8

  v5 = *(_DWORD *)(a1 + 464);
  result = -1;
  if ( v5 )
  {
    v7 = *(_DWORD *)(a1 + 460);
    v8 = 0;
    v9 = a4;
    while ( 1 )
    {
      v10 = __PAIR64__(v9, a3) - *(_QWORD *)v7;
      if ( __PAIR64__(v9, a3) >= *(_QWORD *)v7 )
      {
        v9 = a4;
        if ( __PAIR64__(a4, a3) < *(_QWORD *)(v7 + 8) + *(_QWORD *)v7 )
          break;
      }
      v7 += 24;
      if ( ++v8 >= v5 )
        return -1;
    }
    return *(_DWORD *)(v7 + 16) + v10;
  }
  return result;
}
