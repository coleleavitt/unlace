/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C658
// Address: 0x000000010000C658

//----- (000000010000C658) ----------------------------------------------------
unsigned __int64 __fastcall sub_10000C658(__int128 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x19
  __int128 *v4; // x24
  unsigned __int64 v5; // x10
  unsigned __int64 v6; // x23
  __int128 *v7; // x12
  __int128 *v8; // x11
  unsigned __int64 v9; // t1
  bool v10; // cf
  unsigned __int64 v11; // t1
  bool v12; // cf
  unsigned __int64 v14; // x21
  unsigned __int64 v15; // x22
  unsigned __int64 i; // x10
  unsigned __int64 v17; // t1
  unsigned __int64 v18; // t1
  unsigned __int64 v19; // t1
  bool v20; // cf
  __int128 *v21; // x22
  __int64 v22; // x25
  __int128 v23; // q0
  void *v24; // x0
  __int64 v25; // x25
  __int128 v26; // q0
  void *v27; // x0
  __int64 v28; // x8
  __int128 v29; // q0
  void *v30; // x0
  __int128 v31; // q0
  void *v32; // x0
  __int128 v34; // [xsp+0h] [xbp-B0h]
  __int128 v35; // [xsp+0h] [xbp-B0h]
  __int128 v36; // [xsp+10h] [xbp-A0h]
  void *v37; // [xsp+20h] [xbp-90h]
  __int128 v38; // [xsp+28h] [xbp-88h]
  void *v39; // [xsp+38h] [xbp-78h]
  __int128 v40; // [xsp+40h] [xbp-70h]
  __int64 v41; // [xsp+50h] [xbp-60h]
  __int16 v42; // [xsp+58h] [xbp-58h]

  v2 = a2;
  v36 = *a1;
  v37 = *((void **)a1 + 2);
  *((_QWORD *)a1 + 2) = 0;
  v38 = *(__int128 *)((char *)a1 + 24);
  *(__int128 *)((char *)a1 + 24) = 0u;
  v39 = *((void **)a1 + 5);
  *((_QWORD *)a1 + 5) = 0;
  v40 = a1[3];
  a1[3] = 0u;
  v4 = a1 + 4;
  v41 = *((_QWORD *)a1 + 8);
  v42 = *((_WORD *)a1 + 36);
  v6 = (unsigned __int64)(a1 + 5);
  v5 = *((_QWORD *)a1 + 10);
  if ( v5 > (unsigned __int64)v36 )
    goto LABEL_13;
  while ( 1 )
  {
    v8 = (__int128 *)v6;
    if ( v5 >= (unsigned __int64)v36 && *(_QWORD *)(v6 + 8) >= *((_QWORD *)&v36 + 1) )
      break;
    v6 += 80LL;
    v5 = *((_QWORD *)v8 + 10);
    v7 = v8;
    if ( v5 > (unsigned __int64)v36 )
      goto LABEL_7;
  }
  v7 = (__int128 *)(v6 - 80);
LABEL_7:
  if ( v7 == a1 )
  {
LABEL_13:
    if ( v6 < a2 )
    {
      do
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(v2 - 80);
          v2 -= 80LL;
          v12 = v11 >= (unsigned __int64)v36;
          if ( v11 <= (unsigned __int64)v36 )
            break;
          if ( v6 >= v2 )
            goto LABEL_24;
        }
        if ( !v12 )
          break;
      }
      while ( *(_QWORD *)(v2 + 8) >= *((_QWORD *)&v36 + 1) && v6 < v2 );
    }
  }
  else
  {
    do
    {
      do
      {
        v9 = *(_QWORD *)(v2 - 80);
        v2 -= 80LL;
        v10 = v9 >= (unsigned __int64)v36;
      }
      while ( v9 > (unsigned __int64)v36 );
    }
    while ( v10 && *(_QWORD *)(v2 + 8) >= *((_QWORD *)&v36 + 1) );
  }
LABEL_24:
  v14 = v6;
  if ( v6 < v2 )
  {
    v14 = v6;
    v15 = v2;
    do
    {
      sub_10000CCE8((__int128 *)v14, (__int128 *)v15);
      v17 = *(_QWORD *)(v14 + 80);
      v14 += 80LL;
      for ( i = v17;
            i <= (unsigned __int64)v36 && (i < (unsigned __int64)v36 || *(_QWORD *)(v14 + 8) < *((_QWORD *)&v36 + 1));
            i = v18 )
      {
        v18 = *(_QWORD *)(v14 + 80);
        v14 += 80LL;
      }
      do
      {
        do
        {
          v19 = *(_QWORD *)(v15 - 80);
          v15 -= 80LL;
          v20 = v19 >= (unsigned __int64)v36;
        }
        while ( v19 > (unsigned __int64)v36 );
      }
      while ( v20 && *(_QWORD *)(v15 + 8) >= *((_QWORD *)&v36 + 1) );
    }
    while ( v14 < v15 );
  }
  v21 = (__int128 *)(v14 - 80);
  if ( (__int128 *)(v14 - 80) != a1 )
  {
    *a1 = *v21;
    v22 = *(_QWORD *)(v14 - 64);
    v23 = *(_OWORD *)(v14 - 56);
    *(_QWORD *)(v14 - 64) = 0;
    *(_QWORD *)(v14 - 56) = 0;
    *(_QWORD *)(v14 - 48) = 0;
    v24 = *((void **)a1 + 2);
    if ( v24 )
    {
      *((_QWORD *)a1 + 3) = 0;
      v34 = v23;
      qfree(v24);
      v23 = v34;
    }
    *((_QWORD *)a1 + 2) = v22;
    *(__int128 *)((char *)a1 + 24) = v23;
    v25 = *(_QWORD *)(v14 - 40);
    v26 = *(_OWORD *)(v14 - 32);
    *(_QWORD *)(v14 - 40) = 0;
    *(_QWORD *)(v14 - 32) = 0;
    *(_QWORD *)(v14 - 24) = 0;
    v27 = *((void **)a1 + 5);
    if ( v27 )
    {
      *((_QWORD *)a1 + 6) = 0;
      v35 = v26;
      qfree(v27);
      v26 = v35;
    }
    *((_QWORD *)a1 + 5) = v25;
    a1[3] = v26;
    v28 = *(_QWORD *)(v14 - 16);
    *((_WORD *)v4 + 4) = *(_WORD *)(v14 - 8);
    *(_QWORD *)v4 = v28;
  }
  *v21 = v36;
  v29 = v38;
  v30 = *(void **)(v14 - 64);
  if ( v30 )
  {
    *(_QWORD *)(v14 - 56) = 0;
    qfree(v30);
    v29 = v38;
  }
  *(_QWORD *)(v14 - 64) = v37;
  *(_OWORD *)(v14 - 56) = v29;
  v31 = v40;
  v32 = *(void **)(v14 - 40);
  if ( v32 )
  {
    *(_QWORD *)(v14 - 32) = 0;
    qfree(v32);
    v31 = v40;
  }
  *(_QWORD *)(v14 - 40) = v39;
  *(_OWORD *)(v14 - 32) = v31;
  *(_WORD *)(v14 - 8) = v42;
  *(_QWORD *)(v14 - 16) = v41;
  return v14 - 80;
}
// 10000C90C: conditional instruction was optimized away because %var_78.8==0
// 10000C918: conditional instruction was optimized away because %var_90.8==0
