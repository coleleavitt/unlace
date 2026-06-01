/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B90
// Address: 0x00042B90

//----- (00042B90) --------------------------------------------------------
int __fastcall sub_42B90(int result, unsigned int a2)
{
  unsigned int v2; // r5
  int v3; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r6
  int v6; // r7
  _DWORD *v7; // r5
  void *v8; // r0
  int v9; // [sp+4h] [bp-8h]
  _DWORD *v10; // [sp+8h] [bp-4h]

  v2 = *(_DWORD *)(result + 8);
  if ( v2 < a2 )
  {
    v3 = result;
    v4 = qvector_reserve(result, nullptr, a2, 0x10u);
    v9 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = v2;
    v5 = *(_DWORD **)v3;
    v6 = *(_DWORD *)(v3 + 4) - 1;
    v10 = v4;
    if ( v6 >= 0 )
    {
      v7 = v4;
      do
      {
        *v7 = *v5;
        v7[1] = v5[1];
        v5[1] = 0;
        v7[2] = v5[2];
        v5[2] = 0;
        v7[3] = v5[3];
        v5[3] = 0;
        v8 = (void *)v5[1];
        if ( v8 )
        {
          v5[2] = 0;
          qfree(v8);
          v5[3] = 0;
          v5[1] = 0;
        }
        v7 += 4;
        --v6;
        v5 += 4;
      }
      while ( v6 >= 0 );
      v5 = *(_DWORD **)v3;
    }
    qfree(v5);
    *(_DWORD *)(v3 + 8) = v9;
    *(_DWORD *)v3 = v10;
    return (int)v10;
  }
  return result;
}
