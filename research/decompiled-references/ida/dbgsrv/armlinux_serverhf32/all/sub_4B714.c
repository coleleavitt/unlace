/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B714
// Address: 0x0004B714

//----- (0004B714) --------------------------------------------------------
void __fastcall sub_4B714(_DWORD *a1)
{
  int v1; // r2
  int v2; // r5
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r6
  _DWORD *v7; // r3
  int v8; // r8
  int v9; // r9
  int v10; // r4
  void *v11; // r0
  char *v12; // r3

  v1 = a1[8];
  v2 = a1[7];
  v3 = v2 + 28 * v1;
  v4 = *(_DWORD *)(v3 - 16);
  v3 -= 28;
  *a1 = v4;
  a1[1] = *(_DWORD *)(v3 + 16);
  a1[10] = *(_DWORD *)(v3 + 24);
  if ( v1 )
  {
    v5 = v1 - 1;
    a1[8] = v5;
    v6 = 28 * v5;
    v7 = *(_DWORD **)(v2 + 28 * v5);
    v8 = v2 + 28 * v5;
    if ( v7 )
    {
      v9 = *(_DWORD *)(v8 + 4);
      if ( v9 )
      {
        v10 = 0;
        while ( 1 )
        {
          v11 = (void *)v7[3 * v10];
          v12 = (char *)&v7[3 * v10];
          if ( v11 )
          {
            *((_DWORD *)v12 + 1) = 0;
            sub_77E08(v11);
          }
          if ( v9 == ++v10 )
            break;
          v7 = *(_DWORD **)v8;
        }
        v7 = *(_DWORD **)(v2 + v6);
      }
      *(_DWORD *)(v8 + 4) = 0;
      sub_77E08(v7);
    }
  }
}
