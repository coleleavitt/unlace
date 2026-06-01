/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37ED0
// Address: 0x00037ED0

//----- (00037ED0) --------------------------------------------------------
int __fastcall sub_37ED0(int a1)
{
  int v2; // r8
  int v3; // r4
  int v4; // r5
  int v5; // r9
  unsigned int v6; // r7
  void *v7; // r1
  int v8; // r4
  size_t v9; // r4
  void **v10; // r5
  void *v11; // r0
  int v12; // r9
  size_t v13; // r8
  void *v14; // r1

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 192) + 4 * (*(_DWORD *)(a1 + 196) + 0x3FFFFFFF));
  v3 = *(_DWORD *)(v2 + 8);
  v4 = *(_DWORD *)(v3 + 4);
  v5 = v4 - 1;
  v6 = v4 + 1;
  if ( !v4 )
  {
    v4 = 1;
    v6 = 2;
    v5 = 0;
  }
  v7 = *(void **)v3;
  if ( v6 > *(_DWORD *)(v3 + 8) )
  {
    v7 = sub_78018(*(_DWORD *)(v2 + 8), v7, v6, 1u);
    *(_DWORD *)v3 = v7;
  }
  *(_DWORD *)(v3 + 4) = v6;
  *((_BYTE *)v7 + v5) = 46;
  *(_BYTE *)(*(_DWORD *)v3 + v4) = 0;
  v8 = *(_DWORD *)(a1 + 28);
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = *(void ***)(v2 + 8);
      v11 = v10[1];
      v12 = (int)v11 - 1;
      v13 = (size_t)v11 + v9 - 1;
      if ( !v11 )
      {
        v12 = 0;
        v13 = v9;
      }
      v14 = *v10;
      if ( v13 + 1 > (unsigned int)v10[2] )
      {
        v14 = sub_78018((int)v10, v14, v13 + 1, 1u);
        *v10 = v14;
      }
      v10[1] = (void *)(v13 + 1);
      *((_BYTE *)v14 + v13) = 0;
      memcpy((char *)*v10 + v12, *(const void **)(a1 + 24), v9);
    }
  }
  return 0;
}
