/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A6A8
// Address: 0x000000000044A6A8

//----- (000000000044A6A8) ----------------------------------------------------
__int64 __fastcall sub_44A6A8(__int64 a1, __int64 *a2)
{
  __int64 *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x3
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 v11; // x2
  __int64 v13[4]; // [xsp+38h] [xbp-28h] BYREF

  v4 = (__int64 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
  if ( (unsigned int)sub_448E00(v4) )
    return 0;
  v5 = *a2;
  v6 = a2[1];
  *a2 = v4[1];
  v7 = a2[2];
  a2[1] = v4[2];
  LOBYTE(v13[0]) = 2;
  a2[2] = v4[3];
  v4[1] = v5;
  v4[2] = v6;
  v4[3] = v7;
  memset(&v13[1], 0, 24);
  sub_4488B8(v13, (__int64 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32));
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    v9 = v8 - 1;
    v10 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 32) = v9;
    sub_448310((__int64 *)(v10 + 32 * v9));
  }
  sub_448310(v13);
  v11 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
  if ( *(_BYTE *)v11 == 5 )
    return *(_QWORD *)(v11 + 8);
  sub_4869C8(1532);
  return 0;
}
