/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DAA4
// Address: 0x0002DAA4

//----- (0002DAA4) --------------------------------------------------------
int __fastcall sub_2DAA4(int a1, unsigned __int64 a2)
{
  unsigned int v3; // r3
  __int64 v4; // r0
  int v5; // r1
  int v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r4
  unsigned int v9; // r7
  unsigned int v11; // [sp+4h] [bp-8h]
  unsigned int v12; // [sp+8h] [bp-4h]

  v12 = HIDWORD(a2);
  HIDWORD(v4) = a1;
  v3 = *(_DWORD *)(a1 + 464);
  LODWORD(v4) = -1;
  v11 = v3;
  if ( v3 )
  {
    v5 = *(_DWORD *)(HIDWORD(v4) + 460);
    v6 = 0;
    v7 = v12;
    while ( 1 )
    {
      v8 = *(_DWORD *)(v5 + 16);
      v9 = *(_DWORD *)(v5 + 20);
      HIDWORD(a2) = v7;
      if ( a2 >= __PAIR64__(v9, v8) )
      {
        v7 = v12;
        if ( __PAIR64__(v12, a2) < *(_QWORD *)(v5 + 8) + __PAIR64__(v9, v8) )
          break;
      }
      v5 += 24;
      if ( ++v6 >= v11 )
      {
        LODWORD(v4) = -1;
        return v4;
      }
    }
    return a2 - v8 + *(_QWORD *)v5;
  }
  return v4;
}
