/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100012158
// Address: 0x0000000100012158

//----- (0000000100012158) ----------------------------------------------------
void __fastcall sub_100012158(__int64 a1, __int64 *a2, int a3)
{
  unsigned __int64 v5; // x21
  __int64 v6; // x22
  unsigned __int64 v7; // x8
  _QWORD *v8; // x1
  __int64 v9; // x8
  _QWORD *v10; // x9
  unsigned int *v11; // x11
  unsigned int v12; // w12
  _QWORD *v13; // x12
  unsigned int v14; // w13
  __int128 v15; // [xsp+8h] [xbp-38h] BYREF

  v6 = *a2;
  v5 = a2[1];
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 >= v5 )
  {
    if ( v7 != v5 )
    {
      v15 = 0u;
      sub_10001AF8C((_QWORD **)a1, v5, &v15);
      v5 = *(_QWORD *)(a1 + 8);
    }
  }
  else
  {
    v8 = *(_QWORD **)a1;
    if ( *(_QWORD *)(a1 + 16) < v5 )
    {
      v8 = qvector_reserve((_QWORD *)a1, v8, v5, 0x10u);
      *(_QWORD *)a1 = v8;
      v7 = *(_QWORD *)(a1 + 8);
    }
    bzero(&v8[2 * v7], 16 * (v5 - v7));
    *(_QWORD *)(a1 + 8) = v5;
  }
  if ( (v5 & 0xFFFFFFFFFFFFFFFLL) != 0 )
  {
    v9 = 0;
    v10 = *(_QWORD **)a1;
    v11 = (unsigned int *)(v6 + 8);
    do
    {
      v13 = &v10[v9];
      *((_BYTE *)v13 + 4) = *((_BYTE *)v11 - 4);
      *((_BYTE *)v13 + 5) = *((_BYTE *)v11 - 3);
      v14 = *(v11 - 2);
      if ( a3 )
      {
        *(_DWORD *)v13 = bswap32(v14);
        *((_WORD *)v13 + 3) = bswap32(*((unsigned __int16 *)v11 - 1)) >> 16;
        v12 = bswap32(*v11);
      }
      else
      {
        *(_DWORD *)v13 = v14;
        *((_WORD *)v13 + 3) = *((_WORD *)v11 - 1);
        v12 = *v11;
      }
      v11 += 3;
      v10[v9 + 1] = v12;
      v9 += 2;
    }
    while ( 2 * v5 != v9 );
  }
}
