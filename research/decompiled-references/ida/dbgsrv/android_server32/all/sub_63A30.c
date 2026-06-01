/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63A30
// Address: 0x00063A30

//----- (00063A30) --------------------------------------------------------
int __fastcall sub_63A30(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r1
  int v5; // r4
  unsigned int v6; // r5
  _DWORD *v7; // r6
  int *v8; // r7
  void *v9; // r0
  unsigned int v11; // r3
  unsigned int v12; // r0
  char *v13; // r1
  unsigned int v14; // r0
  int v15; // r4
  unsigned int v16; // r5
  char *v17; // r0
  int *v18; // r6
  unsigned int v19; // r2
  bool v20; // cf
  _DWORD *v21; // r7
  int v22; // r4
  unsigned int v23; // r5
  unsigned int v24; // r5
  int v25; // r4
  int v26; // r0
  _DWORD *v27; // r6
  int *v28; // r7
  int *v29; // r0
  unsigned int v31; // [sp+Ch] [bp-34h]
  unsigned int v32; // [sp+Ch] [bp-34h]
  unsigned int v33; // [sp+10h] [bp-30h]
  char *v35; // [sp+18h] [bp-28h]
  int *v36; // [sp+18h] [bp-28h]
  int v37; // [sp+1Ch] [bp-24h]
  int v38[2]; // [sp+24h] [bp-1Ch] BYREF
  void *v39; // [sp+2Ch] [bp-14h]
  int v40; // [sp+30h] [bp-10h]
  int v41; // [sp+34h] [bp-Ch]
  int v42; // [sp+38h] [bp-8h]
  int v43; // [sp+3Ch] [bp-4h]

  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 <= a2 )
  {
    if ( v4 < a2 )
    {
      v11 = *(_DWORD *)(a1 + 4);
      v12 = *(_DWORD *)(a1 + 8);
      v13 = *(char **)a1;
      v32 = a2;
      if ( *(_DWORD *)a1 > a3 || *(_DWORD *)a1 + 24 * v12 <= a3 )
      {
        if ( v12 >= a2 )
        {
          v19 = v11;
        }
        else
        {
          v13 = (char *)qvector_reserve(a1, v13, a2, 0x18u);
          *(_DWORD *)a1 = v13;
          v19 = *(_DWORD *)(a1 + 4);
        }
        v20 = v19 >= a2;
        v21 = (_DWORD *)a1;
        if ( !v20 )
        {
          v22 = 24 * v19;
          *(_DWORD *)&v13[24 * v19] = -2;
          v36 = (int *)&v13[24 * v19];
          v23 = v19;
          memset(v36 + 2, 0, 0x10u);
          sub_63C28(v36, a3);
          if ( v23 + 1 != v32 )
          {
            v24 = v32 - 1 - v23;
            v25 = v22 + 24;
            v37 = a3;
            do
            {
              v26 = *v21;
              *(_DWORD *)(v26 + v25) = -2;
              v27 = v21;
              v28 = (int *)(v26 + v25);
              memset((void *)(v26 + v25 + 8), 0, 0x10u);
              v29 = v28;
              v21 = v27;
              sub_63C28(v29, v37);
              --v24;
              v25 += 24;
            }
            while ( v24 );
          }
        }
        v21[1] = v32;
      }
      else
      {
        v42 = 0;
        v41 = 0;
        v40 = 0;
        v39 = nullptr;
        v38[0] = -2;
        sub_63C28(v38, a3);
        if ( *(_DWORD *)(a1 + 8) < a2 )
          *(_DWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x18u);
        v14 = *(_DWORD *)(a1 + 4);
        if ( v14 < a2 )
        {
          v15 = 24 * v14;
          v16 = a2 - v14;
          do
          {
            v17 = *(char **)a1;
            *(_DWORD *)&v17[v15] = -2;
            v18 = (int *)&v17[v15];
            memset(&v17[v15 + 8], 0, 0x10u);
            sub_63C28(v18, (int)v38);
            v15 += 24;
            --v16;
          }
          while ( v16 );
        }
        *(_DWORD *)(a1 + 4) = a2;
        if ( v38[0] >= -1 )
        {
          if ( v39 )
          {
            v40 = 0;
            qfree(v39);
            v41 = 0;
            v39 = nullptr;
          }
          v38[0] = -2;
        }
      }
    }
  }
  else
  {
    v5 = 24 * a2 + 16;
    v31 = a2;
    v6 = a2;
    v33 = *(_DWORD *)(a1 + 4);
    do
    {
      v35 = *(char **)a1;
      v7 = (_DWORD *)(*(_DWORD *)a1 + v5 - 8);
      v8 = (int *)(*(_DWORD *)a1 + v5 - 16);
      if ( *v8 >= -1 )
      {
        v9 = *(void **)(*(_DWORD *)a1 + v5 - 8);
        if ( v9 )
        {
          *(_DWORD *)(*(_DWORD *)a1 + v5 - 4) = 0;
          qfree(v9);
          *v7 = 0;
          *(_DWORD *)&v35[v5] = 0;
        }
        *v8 = -2;
      }
      v5 += 24;
      ++v6;
    }
    while ( v6 < v33 );
    *(_DWORD *)(a1 + 4) = v31;
  }
  return _stack_chk_guard - v43;
}
