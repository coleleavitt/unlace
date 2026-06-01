/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449048
// Address: 0x0000000000449048

//----- (0000000000449048) ----------------------------------------------------
__int64 __fastcall sub_449048(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  unsigned __int64 v5; // x21
  unsigned __int64 v6; // x20
  unsigned __int64 v7; // x19
  _BYTE *v9; // x0
  unsigned __int64 v11; // x1
  unsigned __int64 v12; // x20
  __int64 v13; // x19
  __int64 *v14; // x2
  __int64 v15; // x19
  __int64 *v16; // x0
  __int64 v17[5]; // [xsp+48h] [xbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 > a2 )
  {
    v6 = 32 * a2;
    v7 = a2;
    do
    {
      ++v7;
      sub_448310((__int64 *)(*(_QWORD *)a1 + v6));
      v6 += 32LL;
    }
    while ( v5 != v7 );
LABEL_4:
    *(_QWORD *)(a1 + 8) = a2;
    return v17[4] ^ _stack_chk_guard;
  }
  if ( v5 >= a2 )
    return v17[4] ^ _stack_chk_guard;
  v9 = *(_BYTE **)a1;
  v11 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int64)a3 < *(_QWORD *)a1 || a3 >= (__int64 *)&v9[32 * v11] )
  {
    if ( a2 <= v11
      || (v9 = sub_491288(a1, *(void **)a1, a2, 0x20u), v5 = *(_QWORD *)(a1 + 8), *(_QWORD *)a1 = v9, a2 > v5) )
    {
      v15 = 32 * v5;
      while ( 1 )
      {
        v9[v15] = 2;
        v16 = (__int64 *)&v9[v15];
        ++v5;
        v15 += 32;
        v16[1] = 0;
        v16[2] = 0;
        v16[3] = 0;
        sub_4488B8(v16, a3);
        if ( a2 <= v5 )
          break;
        v9 = *(_BYTE **)a1;
      }
    }
    goto LABEL_4;
  }
  memset(&v17[1], 0, 24);
  LOBYTE(v17[0]) = 2;
  sub_4488B8(v17, a3);
  if ( a2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_491288(a1, *(void **)a1, a2, 0x20u);
  v12 = *(_QWORD *)(a1 + 8);
  if ( a2 > v12 )
  {
    v13 = 32 * v12;
    do
    {
      v14 = (__int64 *)(*(_QWORD *)a1 + v13);
      *(_BYTE *)v14 = 2;
      v14[1] = 0;
      v14[2] = 0;
      v14[3] = 0;
      sub_4488B8(v14, v17);
      ++v12;
      v13 += 32;
    }
    while ( a2 != v12 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  sub_448310(v17);
  return v17[4] ^ _stack_chk_guard;
}
