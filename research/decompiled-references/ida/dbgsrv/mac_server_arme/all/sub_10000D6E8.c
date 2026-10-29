/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000D6E8
// Address: 0x000000010000D6E8

//----- (000000010000D6E8) ----------------------------------------------------
__n128 __fastcall sub_10000D6E8(__int128 *a1, __int128 *a2)
{
  __int64 v4; // x22
  __int128 v5; // q2
  __int64 v6; // x21
  __int128 *v7; // x23
  __int64 v8; // x24
  __int128 v9; // q1
  void *v10; // x0
  __int64 v11; // x24
  __int128 v12; // q0
  void *v13; // x0
  __int64 v14; // x8
  void *v15; // x0
  void *v16; // x0
  __int128 v18; // [xsp+0h] [xbp-90h]
  __int128 v19; // [xsp+0h] [xbp-90h]
  __int128 v20; // [xsp+10h] [xbp-80h]
  __int128 v21; // [xsp+20h] [xbp-70h]
  __int64 v22; // [xsp+30h] [xbp-60h]
  __int16 v23; // [xsp+38h] [xbp-58h]
  __int128 v24; // [xsp+40h] [xbp-50h]

  v24 = *a1;
  v4 = *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 2) = 0;
  v5 = *(__int128 *)((char *)a1 + 24);
  *(__int128 *)((char *)a1 + 24) = 0u;
  v6 = *((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = 0;
  v20 = a1[3];
  v21 = v5;
  a1[3] = 0u;
  v7 = a1 + 4;
  v22 = *((_QWORD *)a1 + 8);
  v23 = *((_WORD *)a1 + 36);
  *a1 = *a2;
  v8 = *((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 2) = 0;
  v9 = *(__int128 *)((char *)a2 + 24);
  *(__int128 *)((char *)a2 + 24) = 0u;
  v10 = *((void **)a1 + 2);
  if ( v10 )
  {
    *((_QWORD *)a1 + 3) = 0;
    v18 = v9;
    qfree(v10);
    v9 = v18;
  }
  *((_QWORD *)a1 + 2) = v8;
  *(__int128 *)((char *)a1 + 24) = v9;
  v11 = *((_QWORD *)a2 + 5);
  v12 = a2[3];
  *((_QWORD *)a2 + 5) = 0;
  *((_QWORD *)a2 + 6) = 0;
  *((_QWORD *)a2 + 7) = 0;
  v13 = *((void **)a1 + 5);
  if ( v13 )
  {
    *((_QWORD *)a1 + 6) = 0;
    v19 = v12;
    qfree(v13);
    v12 = v19;
  }
  *((_QWORD *)a1 + 5) = v11;
  a1[3] = v12;
  v14 = *((_QWORD *)a2 + 8);
  *((_WORD *)v7 + 4) = *((_WORD *)a2 + 36);
  *(_QWORD *)v7 = v14;
  *a2 = v24;
  v15 = *((void **)a2 + 2);
  if ( v15 )
  {
    *((_QWORD *)a2 + 3) = 0;
    qfree(v15);
  }
  *((_QWORD *)a2 + 2) = v4;
  *(__int128 *)((char *)a2 + 24) = v21;
  v16 = *((void **)a2 + 5);
  if ( v16 )
  {
    *((_QWORD *)a2 + 6) = 0;
    qfree(v16);
  }
  *((_QWORD *)a2 + 5) = v6;
  a2[3] = v20;
  *((_QWORD *)a2 + 8) = v22;
  *((_WORD *)a2 + 36) = v23;
  return (__n128)v20;
}
