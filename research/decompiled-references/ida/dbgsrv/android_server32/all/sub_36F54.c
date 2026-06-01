/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36F54
// Address: 0x00036F54

//----- (00036F54) --------------------------------------------------------
int __fastcall sub_36F54(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r4
  unsigned int v6; // r0
  void *v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r0
  int v10; // r7
  unsigned int v11; // r4
  void *v12; // r0
  int v13; // r7
  unsigned int v14; // r4
  int v15; // r7
  unsigned int v17; // [sp+Ch] [bp-4Ch]
  void *v18[3]; // [sp+10h] [bp-48h] BYREF
  void *v19; // [sp+1Ch] [bp-3Ch]
  int v20; // [sp+20h] [bp-38h]
  int v21; // [sp+24h] [bp-34h]
  int v22; // [sp+54h] [bp-4h]

  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 <= a2 )
  {
    if ( v4 < a2 )
    {
      v6 = *(_DWORD *)(a1 + 8);
      v7 = *(void **)a1;
      v17 = a2;
      if ( *(_DWORD *)a1 > a3 || *(_DWORD *)a1 + 68 * v6 <= a3 )
      {
        if ( v6 < a2 )
        {
          v12 = qvector_reserve(a1, v7, a2, 0x44u);
          a2 = v17;
          v7 = v12;
          *(_DWORD *)a1 = v12;
          v4 = *(_DWORD *)(a1 + 4);
        }
        if ( v4 < a2 )
        {
          v13 = 68 * v4;
          sub_366DA((void **)v7 + 17 * v4, a3);
          if ( v4 + 1 != v17 )
          {
            v14 = v17 - 1 - v4;
            v15 = v13 + 68;
            do
            {
              sub_366DA((void **)(*(_DWORD *)a1 + v15), a3);
              --v14;
              v15 += 68;
            }
            while ( v14 );
          }
        }
        *(_DWORD *)(a1 + 4) = v17;
      }
      else
      {
        sub_366DA(v18, a3);
        v8 = v17;
        if ( *(_DWORD *)(a1 + 8) < v17 )
        {
          *(_DWORD *)a1 = qvector_reserve(a1, *(void **)a1, v17, 0x44u);
          v8 = v17;
        }
        v9 = *(_DWORD *)(a1 + 4);
        if ( v9 < v8 )
        {
          v10 = 68 * v9;
          v11 = v17 - v9;
          do
          {
            sub_366DA((void **)(*(_DWORD *)a1 + v10), (int)v18);
            v10 += 68;
            --v11;
          }
          while ( v11 );
        }
        *(_DWORD *)(a1 + 4) = v17;
        if ( v19 )
        {
          v20 = 0;
          qfree(v19);
          v21 = 0;
          v19 = nullptr;
        }
        if ( v18[0] )
        {
          v18[1] = nullptr;
          qfree(v18[0]);
          v18[2] = nullptr;
          v18[0] = nullptr;
        }
      }
    }
  }
  else
  {
    sub_35D20((int *)a1, a2);
  }
  return _stack_chk_guard - v22;
}
