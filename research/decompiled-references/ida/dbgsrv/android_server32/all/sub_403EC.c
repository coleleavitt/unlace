/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403EC
// Address: 0x000403EC

//----- (000403EC) --------------------------------------------------------
int __fastcall sub_403EC(int a1, int *a2)
{
  unsigned int v2; // r2
  size_t v3; // r6
  unsigned int v4; // r4
  unsigned int v5; // r7
  char *v6; // r0
  int *v7; // r2
  int v8; // r5
  int v9; // r0
  int v10; // r7
  int v11; // r3
  _DWORD *v12; // r4
  _BYTE *v13; // r0
  _BYTE *v14; // r0
  _BYTE *v15; // r0
  int *v16; // r0
  size_t v17; // r4
  int v18; // r6
  int v19; // r4
  int v23; // [sp+14h] [bp-28h]
  _DWORD *v24; // [sp+18h] [bp-24h]
  int v25; // [sp+1Ch] [bp-20h]
  _BYTE v26[4]; // [sp+20h] [bp-1Ch] BYREF
  int v27; // [sp+24h] [bp-18h] BYREF
  _BYTE v28[3]; // [sp+29h] [bp-13h] BYREF
  int v29; // [sp+38h] [bp-4h] BYREF

  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 4);
  v2 = a2[1];
  if ( v2 )
  {
    v3 = pack_dd(&v27, (unsigned int)v28, v2) - (_BYTE *)&v27;
    if ( v3 )
    {
      v4 = *(_DWORD *)(a1 + 4);
      v5 = v4 + v3;
      if ( v4 + v3 < v4 )
        v5 = 0x7FFFFFFF;
      if ( v4 >= v5 )
      {
        if ( v4 != v5 )
        {
          v26[0] = 0;
          sub_370F6((void **)a1, v5, v26);
        }
      }
      else
      {
        if ( *(_DWORD *)(a1 + 8) >= v5 )
        {
          v6 = *(char **)a1;
        }
        else
        {
          v6 = (char *)qvector_reserve(a1, *(void **)a1, v5, 1u);
          *(_DWORD *)a1 = v6;
        }
        memset(&v6[*(_DWORD *)(a1 + 4)], 0, v5 - *(_DWORD *)(a1 + 4));
        *(_DWORD *)(a1 + 4) = v5;
      }
      qmemcpy((void *)(*(_DWORD *)a1 + v4), &v27, v3);
    }
    v7 = a2;
    if ( a2[1] )
    {
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      do
      {
        v23 = v11;
        v12 = (_DWORD *)(*v7 + v8);
        v25 = *v7;
        v13 = pack_dd(&v27, (unsigned int)&v29, *v12 - v9);
        v14 = pack_dd(v13, (unsigned int)&v29, v12[1] - v10);
        v15 = pack_dd(v14, (unsigned int)&v29, v12[2]);
        v24 = v12;
        v16 = (int *)pack_dd(v15, (unsigned int)&v29, v12[3]);
        v17 = (char *)v16 - (char *)&v27;
        if ( v16 != &v27 )
        {
          v18 = *(_DWORD *)(a1 + 4);
          v26[0] = 0;
          sub_370F6((void **)a1, v18 + v17, v26);
          qmemcpy((void *)(*(_DWORD *)a1 + v18), &v27, v17);
        }
        v9 = *(_DWORD *)(v25 + v8);
        v10 = v24[1];
        v8 += 16;
        v11 = v23 + 1;
        v7 = a2;
      }
      while ( v23 + 1 < (unsigned int)a2[1] );
    }
  }
  v19 = *(_DWORD *)(a1 + 4);
  LOWORD(v27) = v19 - *(_DWORD *)(a1 + 12);
  v26[0] = 0;
  sub_370F6((void **)a1, v19 + 2, v26);
  *(_WORD *)(*(_DWORD *)a1 + v19) = v27;
  return _stack_chk_guard - v29;
}
