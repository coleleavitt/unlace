/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C8A94
// Address: 0x00000000000C8A94

//----- (00000000000C8A94) ----------------------------------------------------
__int64 __fastcall sub_C8A94(unsigned __int8 **a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 v4; // x20
  int v6; // w8
  unsigned int v7; // w22
  unsigned __int8 *v8; // x21
  int v9; // w23
  unsigned int v10; // w8
  int v11; // w24
  unsigned __int8 *v12; // x25
  unsigned int v13; // w10
  unsigned int v14; // w8
  unsigned int v15; // w9
  unsigned int v16; // w10
  unsigned int v17; // w11
  __int64 v18; // x13
  __int64 v19; // x14
  __int64 v20; // x12
  int v21; // w15
  __int64 v22; // x8

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v4 = (__int64)a1[7];
  if ( !v4 || *(unsigned __int8 ***)v4 != a1 )
    return 4294967294LL;
  v6 = *(_DWORD *)(v4 + 8);
  v7 = a3;
  v8 = a2;
  if ( ((unsigned int)(v6 - 57) > 0x38 || ((1LL << ((unsigned __int8)v6 - 57)) & 0x100400400011001LL) == 0)
    && v6 != 666
    && v6 != 42 )
  {
    return 4294967294LL;
  }
  if ( !a2 )
    return 4294967294LL;
  v9 = *(_DWORD *)(v4 + 48);
  if ( v9 == 2 || v6 != 42 && v9 == 1 )
    return 4294967294LL;
  if ( *(_DWORD *)(v4 + 180) )
    return 4294967294LL;
  if ( v9 == 1 )
    a1[12] = (unsigned __int8 *)sub_D4634((int)a1[12], a2, a3);
  v10 = *(_DWORD *)(v4 + 80);
  *(_DWORD *)(v4 + 48) = 0;
  if ( v10 <= v7 )
  {
    if ( !v9 )
    {
      *(_WORD *)(*(_QWORD *)(v4 + 120) + 2LL * (unsigned int)(*(_DWORD *)(v4 + 132) - 1)) = 0;
      memset(*(void **)(v4 + 120), 0, 2LL * (unsigned int)(*(_DWORD *)(v4 + 132) - 1));
      v10 = *(_DWORD *)(v4 + 80);
      *(_DWORD *)(v4 + 172) = 0;
      *(_QWORD *)(v4 + 152) = 0;
      *(_DWORD *)(v4 + 5932) = 0;
    }
    v8 += v7 - v10;
    v7 = v10;
  }
  v11 = *((_DWORD *)a1 + 2);
  v12 = *a1;
  *((_DWORD *)a1 + 2) = v7;
  *a1 = v8;
  sub_C8CB8(v4);
  v13 = *(_DWORD *)(v4 + 180);
  v14 = *(_DWORD *)(v4 + 172);
  if ( v13 >= 3 )
  {
    do
    {
      v15 = v13 - 2;
      v16 = 2 - v13;
      v17 = v14;
      do
      {
        ++v16;
        v18 = *(_QWORD *)(v4 + 112);
        v19 = *(_QWORD *)(v4 + 120);
        v20 = ((*(_DWORD *)(v4 + 128) << *(_DWORD *)(v4 + 144))
             ^ (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v4 + 96) + v17 + 2))
            & *(_DWORD *)(v4 + 140);
        v21 = *(_DWORD *)(v4 + 88);
        *(_DWORD *)(v4 + 128) = v20;
        *(_WORD *)(v18 + 2LL * (v21 & v17)) = *(_WORD *)(v19 + 2 * v20);
        *(_WORD *)(*(_QWORD *)(v4 + 120) + 2LL * *(unsigned int *)(v4 + 128)) = v17++;
      }
      while ( v16 );
      *(_DWORD *)(v4 + 172) = v15 + v14;
      *(_DWORD *)(v4 + 180) = 2;
      sub_C8CB8(v4);
      v13 = *(_DWORD *)(v4 + 180);
      v14 = *(_DWORD *)(v4 + 172);
    }
    while ( v13 > 2 );
  }
  v22 = v14 + v13;
  *(_DWORD *)(v4 + 5932) = v13;
  *(_DWORD *)(v4 + 168) = 0;
  *(_DWORD *)(v4 + 172) = v22;
  *(_QWORD *)(v4 + 152) = v22;
  *(_DWORD *)(v4 + 160) = 2;
  *(_QWORD *)(v4 + 180) = 0x200000000LL;
  *a1 = v12;
  *((_DWORD *)a1 + 2) = v11;
  *(_DWORD *)(v4 + 48) = v9;
  return 0;
}
// 11D7B8: using guessed type __int64[511];
