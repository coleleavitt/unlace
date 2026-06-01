/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57884
// Address: 0x0000000000057884

//----- (0000000000057884) ----------------------------------------------------
unsigned __int64 __fastcall sub_57884(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x9
  __int64 v10; // x23
  size_t v11; // x21
  int v12; // w8
  __int64 v13; // x9
  __int64 v14; // x11
  unsigned int *v15; // x9
  _QWORD *v16; // x10
  unsigned __int64 v17; // x11
  unsigned int v18; // w12
  unsigned int v19; // w14
  __int64 v20; // x13
  __int64 *v22; // x20
  unsigned __int64 v23; // x21
  unsigned __int64 v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x0
  __int64 v27; // x8

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 == 24 || v2 == 12 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    if ( (!v5 || 0xFFFFFFFFFFFFFFFFLL / v2 >= v5) && (!a2 || 0xFFFFFFFFFFFFFFFFLL / v2 >= a2) )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v8 = qlseek(*(_QWORD *)(v7 + 472), 0, 1);
      v9 = *(_QWORD *)(v7 + 480);
      v10 = v8 - v9;
      if ( qlseek(*(_QWORD *)(v7 + 472), *(_QWORD *)(a1 + 16) + v9 + *(_QWORD *)(a1 + 32) * *(_QWORD *)(a1 + 64), 0) != -1 )
      {
        v11 = *(_QWORD *)(a1 + 32) * a2;
        if ( qlread(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 472LL), *(void **)(a1 + 40), v11) == v11 )
        {
          v12 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 616LL);
          if ( *(_QWORD *)(a1 + 32) != 12 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 616LL) )
              v6 = 0;
            else
              v6 = a2;
            if ( !a2 || !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 616LL) )
              goto LABEL_19;
            v22 = *(__int64 **)(a1 + 40);
            v23 = 0;
            do
            {
              v24 = swap64(*v22);
              v25 = v22[1];
              *v22 = v24;
              v26 = swap64(v25);
              v27 = v22[2];
              v22[1] = v26;
              ++v23;
              v22[2] = swap64(v27);
              v22 += 3;
            }
            while ( v23 < a2 );
            goto LABEL_28;
          }
          if ( a2 )
          {
            v13 = *(_QWORD *)(a1 + 40);
            v14 = v13 + 24 * a2;
            v15 = (unsigned int *)(v13 + 12 * a2 - 4);
            v16 = (_QWORD *)(v14 - 8);
            v17 = a2;
            do
            {
              v18 = *(v15 - 1);
              if ( v12 )
              {
                v18 = bswap32(v18);
                v19 = bswap32(*(v15 - 2));
                v20 = bswap32(*v15);
              }
              else
              {
                v19 = *(v15 - 2);
                v20 = (int)*v15;
              }
              *(v16 - 1) = v18;
              *v16 = v20;
              --v17;
              v15 -= 3;
              *(v16 - 2) = v19;
              v16 -= 3;
            }
            while ( v17 );
LABEL_28:
            v6 = a2;
            goto LABEL_19;
          }
        }
      }
      v6 = 0;
LABEL_19:
      qlseek(*(_QWORD *)(v7 + 472), *(_QWORD *)(v7 + 480) + v10, 0);
      return v6;
    }
  }
  return 0;
}
