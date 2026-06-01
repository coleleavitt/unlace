/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3ECD8
// Address: 0x0003ECD8

//----- (0003ECD8) --------------------------------------------------------
int __fastcall sub_3ECD8(int a1, char a2)
{
  int v3; // r0
  void *v4; // r6
  void *v5; // r0
  int v6; // r0
  int v7; // r5

  v3 = *(_DWORD *)(a1 + 4);
  if ( (unsigned int)(v3 - 1) >> 10 && v3 )
  {
    sub_1BBA0((int)"%s", *(const char **)a1);
    v5 = *(void **)a1;
    v4 = nullptr;
    if ( *(_DWORD *)a1 )
    {
      v4 = nullptr;
      *(_DWORD *)(a1 + 4) = 0;
      qfree(v5);
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)a1 = 0;
    }
  }
  else
  {
    v4 = *(void **)a1;
  }
  v6 = *(_DWORD *)(a1 + 4);
  v7 = v6 - 1;
  if ( !v6 )
    v7 = 0;
  if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v7 + 2) )
  {
    v4 = qvector_reserve(a1, v4, v7 + 2, 1u);
    *(_DWORD *)a1 = v4;
  }
  *(_DWORD *)(a1 + 4) = v7 + 2;
  *((_BYTE *)v4 + v7) = a2;
  *(_BYTE *)(*(_DWORD *)a1 + v7 + 1) = 0;
  return 0;
}
// 3ECEE: conditional instruction was optimized away because r0.4!=0
