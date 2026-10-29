/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36E14
// Address: 0x00036E14

//----- (00036E14) --------------------------------------------------------
unsigned int __fastcall sub_36E14(int a1, unsigned int a2)
{
  unsigned int v3; // r6
  unsigned int v4; // r7
  int *v5; // r7
  __int64 v6; // r0
  int v7; // r2
  unsigned int v8; // r6
  int v9; // r4
  __int64 v11; // [sp+4h] [bp-28h]
  unsigned int v12; // [sp+18h] [bp-14h]
  unsigned int v13; // [sp+18h] [bp-14h]
  _QWORD *v14; // [sp+20h] [bp-Ch]
  unsigned int v15; // [sp+20h] [bp-Ch]

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 24);
  v14 = (_QWORD *)(a1 + 40);
  if ( !*(_QWORD *)(a1 + 40) || !v4 || 0xFFFFFFFFFFFFFFFFLL / v4 >= *(_QWORD *)(a1 + 40) )
  {
    if ( !a2 || !v4 || (v3 = 0, 0xFFFFFFFF / v4 >= a2) )
    {
      v5 = *(int **)(a1 + 4);
      v6 = qlseek(v5[91], 0, 1);
      v12 = v6;
      v11 = *v14 * *(unsigned int *)(a1 + 24);
      v7 = v5[93];
      LODWORD(v6) = v5[92];
      v8 = (__PAIR64__(HIDWORD(v6), v12) - __PAIR64__(v7, v6)) >> 32;
      v13 = v12 - v6;
      v15 = v8;
      v3 = 0;
      if ( qlseek(v5[91], *(_QWORD *)(a1 + 8) + __PAIR64__(v7, v6) + v11, 0) != -1 )
      {
        v3 = 0;
        if ( a2 )
        {
          v9 = 0;
          v3 = 0;
          do
          {
            if ( !sub_33700(a1, *(_DWORD *)(a1 + 28) + v9) )
              break;
            v9 += 68;
            ++v3;
          }
          while ( v3 < a2 );
        }
      }
      qlseek(v5[91], *((_QWORD *)v5 + 46) + __PAIR64__(v15, v13), 0);
    }
  }
  return v3;
}
