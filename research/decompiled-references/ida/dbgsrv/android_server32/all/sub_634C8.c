/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_634C8
// Address: 0x000634C8

//----- (000634C8) --------------------------------------------------------
int __fastcall sub_634C8(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int *v4; // r3
  int v5; // r6
  unsigned int v6; // r5
  unsigned int v7; // r4
  int v8; // r1
  void *v9; // r0
  _DWORD *v10; // r7
  int v12; // r0
  size_t v13; // r4
  int *v14; // r6
  int v15; // r1
  int v16; // r3
  int v17; // r3
  int v18; // r4
  unsigned int v23; // [sp+14h] [bp-2Ch]
  int v24; // [sp+18h] [bp-28h] BYREF
  void *v25; // [sp+1Ch] [bp-24h]
  size_t v26; // [sp+20h] [bp-20h]
  size_t v27; // [sp+24h] [bp-1Ch]
  int v28; // [sp+28h] [bp-18h]
  int v29; // [sp+2Ch] [bp-14h]
  int v30; // [sp+30h] [bp-10h]
  int v31; // [sp+34h] [bp-Ch]
  int v32; // [sp+38h] [bp-8h]
  int v33; // [sp+3Ch] [bp-4h]

  v4 = a1;
  v23 = a1[1];
  if ( v23 <= a2 )
  {
    if ( v23 < a2 )
    {
      if ( *a1 > a3 || *a1 + 36 * a1[2] <= a3 )
      {
        sub_635E4((int)a1, a2, (_DWORD *)a3);
      }
      else
      {
        v12 = *(_DWORD *)a3;
        v25 = nullptr;
        v24 = v12;
        v26 = 0;
        v27 = 0;
        v13 = *(_DWORD *)(a3 + 8);
        if ( v13 )
        {
          v25 = qalloc_or_throw(*(_DWORD *)(a3 + 8));
          v27 = v13;
          qmemcpy(v25, *(const void **)(a3 + 4), v13);
          v26 = v13;
        }
        v14 = (int *)(a3 + 16);
        v15 = *v14;
        v16 = v14[1];
        v14 += 2;
        v28 = v15;
        v29 = v16;
        v17 = v14[1];
        v18 = v14[2];
        v30 = *v14;
        v31 = v17;
        v32 = v18;
        sub_635E4((int)a1, a2, &v24);
        if ( v25 )
        {
          v26 = 0;
          qfree(v25);
          v27 = 0;
          v25 = nullptr;
        }
      }
    }
  }
  else
  {
    v5 = 36 * a2 + 12;
    v6 = a2;
    do
    {
      v7 = *v4;
      v8 = *v4 + v5;
      v9 = *(void **)(v8 - 8);
      if ( v9 )
      {
        v10 = (_DWORD *)(v8 - 8);
        *(_DWORD *)(v8 - 4) = 0;
        qfree(v9);
        *v10 = 0;
        *(_DWORD *)(v7 + v5) = 0;
        v4 = a1;
      }
      v5 += 36;
      ++v6;
    }
    while ( v6 < v23 );
    v4[1] = a2;
  }
  return _stack_chk_guard - v33;
}
