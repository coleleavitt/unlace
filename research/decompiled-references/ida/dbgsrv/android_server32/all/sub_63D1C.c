/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63D1C
// Address: 0x00063D1C

//----- (00063D1C) --------------------------------------------------------
int __fastcall sub_63D1C(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r1
  int v5; // r7
  char *v6; // r4
  _DWORD *v7; // r5
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v12; // r3
  int v13; // r2
  void *v14; // r0
  unsigned int v15; // r0
  int v16; // r7
  unsigned int v17; // r4
  unsigned int v18; // r0
  unsigned int v19; // r4
  int v20; // r7
  unsigned int v21; // r4
  int v22; // r7
  unsigned int v26; // [sp+10h] [bp-38h]
  unsigned int v27; // [sp+14h] [bp-34h]
  unsigned int v28; // [sp+18h] [bp-30h]
  void *v29[3]; // [sp+1Ch] [bp-2Ch] BYREF
  void *v30; // [sp+28h] [bp-20h]
  int v31; // [sp+2Ch] [bp-1Ch]
  int v32; // [sp+30h] [bp-18h]
  void *v33; // [sp+34h] [bp-14h]
  int v34; // [sp+38h] [bp-10h]
  int v35; // [sp+3Ch] [bp-Ch]
  int v36; // [sp+44h] [bp-4h]

  v4 = *(_DWORD *)(a1 + 4);
  v28 = v4;
  v27 = a2;
  if ( v4 <= a2 )
  {
    if ( v4 < a2 )
    {
      v26 = *(_DWORD *)(a1 + 8);
      v12 = *(void **)a1;
      if ( *(_DWORD *)a1 > a3 || *(_DWORD *)a1 + 40 * v26 <= a3 )
      {
        if ( v26 >= a2 )
        {
          v18 = *(_DWORD *)(a1 + 4);
        }
        else
        {
          v12 = qvector_reserve(a1, v12, a2, 0x28u);
          *(_DWORD *)a1 = v12;
          v18 = *(_DWORD *)(a1 + 4);
        }
        if ( v18 < a2 )
        {
          v19 = v18;
          v20 = 40 * v18;
          sub_63F10((_DWORD *)v12 + 10 * v18, a3);
          if ( v19 + 1 != v27 )
          {
            v21 = v27 - 1 - v19;
            v22 = v20 + 40;
            do
            {
              sub_63F10((_DWORD *)(*(_DWORD *)a1 + v22), a3);
              --v21;
              v22 += 40;
            }
            while ( v21 );
          }
        }
        *(_DWORD *)(a1 + 4) = v27;
      }
      else
      {
        sub_63F10(v29, a3);
        v13 = a1;
        if ( *(_DWORD *)(a1 + 8) < a2 )
        {
          v14 = qvector_reserve(a1, *(void **)a1, a2, 0x28u);
          v13 = a1;
          *(_DWORD *)a1 = v14;
        }
        v15 = *(_DWORD *)(v13 + 4);
        if ( v15 < a2 )
        {
          v16 = 40 * v15;
          v17 = a2 - v15;
          do
          {
            sub_63F10((_DWORD *)(*(_DWORD *)a1 + v16), (int)v29);
            v16 += 40;
            --v17;
          }
          while ( v17 );
        }
        *(_DWORD *)(a1 + 4) = v27;
        if ( v33 )
        {
          v34 = 0;
          qfree(v33);
          v35 = 0;
          v33 = nullptr;
        }
        if ( v30 )
        {
          v31 = 0;
          qfree(v30);
          v32 = 0;
          v30 = nullptr;
        }
        if ( v29[0] )
        {
          v29[1] = nullptr;
          qfree(v29[0]);
          v29[2] = nullptr;
          v29[0] = nullptr;
        }
      }
    }
  }
  else
  {
    v5 = 40 * a2;
    do
    {
      v6 = *(char **)a1;
      v7 = (_DWORD *)(*(_DWORD *)a1 + v5);
      v8 = (void *)v7[6];
      if ( v8 )
      {
        v7[7] = 0;
        qfree(v8);
        v7[6] = 0;
        *(_DWORD *)&v6[v5 + 32] = 0;
      }
      v9 = (void *)v7[3];
      if ( v9 )
      {
        v7[4] = 0;
        qfree(v9);
        v7[3] = 0;
        *(_DWORD *)&v6[v5 + 20] = 0;
      }
      v10 = *(void **)&v6[v5];
      if ( v10 )
      {
        v7[1] = 0;
        qfree(v10);
        *(_DWORD *)&v6[v5] = 0;
        *(_DWORD *)&v6[v5 + 8] = 0;
      }
      v5 += 40;
      --v28;
    }
    while ( v27 != v28 );
    *(_DWORD *)(a1 + 4) = v27;
  }
  return _stack_chk_guard - v36;
}
