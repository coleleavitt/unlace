/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BE5C
// Address: 0x0002BE5C

//----- (0002BE5C) --------------------------------------------------------
__int64 __fastcall sub_2BE5C(int a1, unsigned __int64 a2)
{
  int v3; // r8
  unsigned int *v4; // r1
  int v5; // lr
  unsigned __int64 v6; // r4
  __int64 v7; // r2

  v3 = *(_DWORD *)(a1 + 464);
  if ( !v3 )
    return -1;
  v4 = *(unsigned int **)(a1 + 460);
  v5 = 0;
  while ( 1 )
  {
    v6 = *((_QWORD *)v4 + 2);
    ++v5;
    if ( a2 >= v6 && a2 < v6 + *((_QWORD *)v4 + 1) )
      break;
    v4 += 6;
    if ( v5 == v3 )
      return -1;
  }
  LODWORD(v7) = a2 - v6;
  HIDWORD(v7) = v4[1];
  return v7 + *v4;
}
