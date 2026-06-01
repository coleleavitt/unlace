/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000054DC
// Address: 0x00000001000054DC

//----- (00000001000054DC) ----------------------------------------------------
__int64 __fastcall sub_1000054DC(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // x9
  unsigned __int64 v9; // x10
  __int64 v10; // x8
  unsigned int v11; // w12
  __int64 result; // x0
  __int64 v13; // x19
  __int64 (__fastcall **v14)(); // [xsp+8h] [xbp-78h] BYREF
  int v15; // [xsp+10h] [xbp-70h]
  __int64 v16; // [xsp+14h] [xbp-6Ch]
  __int64 v17; // [xsp+1Ch] [xbp-64h]
  __int64 v18; // [xsp+24h] [xbp-5Ch]
  void *v19[2]; // [xsp+30h] [xbp-50h]
  __int128 v20; // [xsp+40h] [xbp-40h]
  __int128 v21; // [xsp+50h] [xbp-30h]
  __int64 v22; // [xsp+60h] [xbp-20h]

  v8 = *(_QWORD *)(a1 + 1840);
  if ( !v8 )
    return 0;
  v9 = *a2;
  v10 = a1 + 1840;
  do
  {
    if ( *(_QWORD *)(v8 + 32) < v9 )
    {
      v11 = 1;
    }
    else
    {
      v10 = v8;
      v11 = 0;
    }
    v8 = *(_QWORD *)(v8 + 8LL * v11);
  }
  while ( v8 );
  if ( v10 == a1 + 1840 || v9 < *(_QWORD *)(v10 + 32) )
    return 0;
  v15 = 4;
  v16 = 0;
  v18 = 0;
  v17 = 0;
  *(_OWORD *)v19 = 0u;
  v20 = 0u;
  v21 = 0u;
  v14 = off_10009CB80;
  v22 = a1;
  result = sub_100005398(a1, (__int64)&v14, (unsigned __int64 *)(v10 + 40), a4, a5, a6, a7, a8);
  v14 = off_10009CBD0;
  if ( v19[1] )
  {
    *(_QWORD *)&v20 = 0;
    v13 = result;
    qfree(v19[1]);
    return v13;
  }
  return result;
}
// 10009CB80: using guessed type __int64 (__fastcall *off_10009CB80[8])();
// 10009CBD0: using guessed type __int64 (__fastcall *off_10009CBD0[8])();
