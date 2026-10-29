/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C32C
// Address: 0x000000010000C32C

//----- (000000010000C32C) ----------------------------------------------------
unsigned __int64 __fastcall sub_10000C32C(__int128 *a1, unsigned __int64 a2)
{
  __int128 *v3; // x22
  unsigned __int64 v4; // x9
  unsigned __int64 i; // x19
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // t1
  unsigned __int64 v8; // t1
  bool v9; // cf
  unsigned __int64 v10; // x10
  unsigned __int64 v11; // t1
  __int128 *v12; // x21
  __int64 v13; // x23
  __int128 v14; // q0
  void *v15; // x0
  __int64 v16; // x23
  __int128 v17; // q0
  void *v18; // x0
  __int64 v19; // x8
  __int128 v20; // q0
  void *v21; // x0
  __int128 v22; // q0
  void *v23; // x0
  __int128 v25; // [xsp+0h] [xbp-A0h]
  __int128 v26; // [xsp+0h] [xbp-A0h]
  __int128 v27; // [xsp+10h] [xbp-90h]
  void *v28; // [xsp+20h] [xbp-80h]
  __int128 v29; // [xsp+28h] [xbp-78h]
  void *v30; // [xsp+38h] [xbp-68h]
  __int128 v31; // [xsp+40h] [xbp-60h]
  __int64 v32; // [xsp+50h] [xbp-50h]
  __int16 v33; // [xsp+58h] [xbp-48h]

  v27 = *a1;
  v28 = *((void **)a1 + 2);
  *((_QWORD *)a1 + 2) = 0;
  v29 = *(__int128 *)((char *)a1 + 24);
  *(__int128 *)((char *)a1 + 24) = 0u;
  v30 = *((void **)a1 + 5);
  *((_QWORD *)a1 + 5) = 0;
  v31 = a1[3];
  a1[3] = 0u;
  v3 = a1 + 4;
  v32 = *((_QWORD *)a1 + 8);
  v33 = *((_WORD *)a1 + 36);
  v4 = *(_QWORD *)(a2 - 80);
  if ( (unsigned __int64)v27 > v4 || (unsigned __int64)v27 >= v4 && *((_QWORD *)&v27 + 1) >= *(_QWORD *)(a2 - 72) )
  {
    for ( i = (unsigned __int64)(a1 + 5); i < a2; i += 80LL )
    {
      if ( (unsigned __int64)v27 <= *(_QWORD *)i
        && ((unsigned __int64)v27 < *(_QWORD *)i || *((_QWORD *)&v27 + 1) < *(_QWORD *)(i + 8)) )
      {
        break;
      }
    }
  }
  else
  {
    for ( i = (unsigned __int64)(a1 + 5);
          (unsigned __int64)v27 > *(_QWORD *)i
       || (unsigned __int64)v27 >= *(_QWORD *)i && *((_QWORD *)&v27 + 1) >= *(_QWORD *)(i + 8);
          i += 80LL )
    {
      ;
    }
  }
  if ( i < a2 )
    v6 = a2 - 80;
  else
    v6 = a2;
  if ( i < a2 && (unsigned __int64)v27 <= v4 )
  {
    v6 = a2 - 80;
    do
    {
      if ( (unsigned __int64)v27 >= v4 && *((_QWORD *)&v27 + 1) >= *(_QWORD *)(v6 + 8) )
        break;
      v7 = *(_QWORD *)(v6 - 80);
      v6 -= 80LL;
      v4 = v7;
    }
    while ( (unsigned __int64)v27 <= v7 );
  }
  while ( i < v6 )
  {
    sub_10000CCE8((__int128 *)i, (__int128 *)v6);
    do
    {
      do
      {
        v8 = *(_QWORD *)(i + 80);
        i += 80LL;
        v9 = (unsigned __int64)v27 >= v8;
      }
      while ( (unsigned __int64)v27 > v8 );
    }
    while ( v9 && *((_QWORD *)&v27 + 1) >= *(_QWORD *)(i + 8) );
    do
    {
      v11 = *(_QWORD *)(v6 - 80);
      v6 -= 80LL;
      v10 = v11;
    }
    while ( (unsigned __int64)v27 <= v11 && ((unsigned __int64)v27 < v10 || *((_QWORD *)&v27 + 1) < *(_QWORD *)(v6 + 8)) );
  }
  v12 = (__int128 *)(i - 80);
  if ( (__int128 *)(i - 80) != a1 )
  {
    *a1 = *v12;
    v13 = *(_QWORD *)(i - 64);
    v14 = *(_OWORD *)(i - 56);
    *(_QWORD *)(i - 64) = 0;
    *(_QWORD *)(i - 56) = 0;
    *(_QWORD *)(i - 48) = 0;
    v15 = *((void **)a1 + 2);
    if ( v15 )
    {
      *((_QWORD *)a1 + 3) = 0;
      v25 = v14;
      qfree(v15);
      v14 = v25;
    }
    *((_QWORD *)a1 + 2) = v13;
    *(__int128 *)((char *)a1 + 24) = v14;
    v16 = *(_QWORD *)(i - 40);
    v17 = *(_OWORD *)(i - 32);
    *(_QWORD *)(i - 40) = 0;
    *(_QWORD *)(i - 32) = 0;
    *(_QWORD *)(i - 24) = 0;
    v18 = *((void **)a1 + 5);
    if ( v18 )
    {
      *((_QWORD *)a1 + 6) = 0;
      v26 = v17;
      qfree(v18);
      v17 = v26;
    }
    *((_QWORD *)a1 + 5) = v16;
    a1[3] = v17;
    v19 = *(_QWORD *)(i - 16);
    *((_WORD *)v3 + 4) = *(_WORD *)(i - 8);
    *(_QWORD *)v3 = v19;
  }
  *v12 = v27;
  v20 = v29;
  v21 = *(void **)(i - 64);
  if ( v21 )
  {
    *(_QWORD *)(i - 56) = 0;
    qfree(v21);
    v20 = v29;
  }
  *(_QWORD *)(i - 64) = v28;
  *(_OWORD *)(i - 56) = v20;
  v22 = v31;
  v23 = *(void **)(i - 40);
  if ( v23 )
  {
    *(_QWORD *)(i - 32) = 0;
    qfree(v23);
    v22 = v31;
  }
  *(_QWORD *)(i - 40) = v30;
  *(_OWORD *)(i - 32) = v22;
  *(_WORD *)(i - 8) = v33;
  *(_QWORD *)(i - 16) = v32;
  return i;
}
// 10000C5D4: conditional instruction was optimized away because %var_68.8==0
// 10000C5E0: conditional instruction was optimized away because %var_80.8==0
