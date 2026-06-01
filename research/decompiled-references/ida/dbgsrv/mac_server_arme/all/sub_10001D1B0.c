/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001D1B0
// Address: 0x000000010001D1B0

//----- (000000010001D1B0) ----------------------------------------------------
__int64 __fastcall sub_10001D1B0(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  void *v10; // x0
  __int64 _38; // [xsp+38h] [xbp+8h]

  *(_QWORD *)a1 = off_10009C7C0;
  sub_10000BC90(a1 + 1904, *(_QWORD **)(a1 + 1912));
  v2 = *(void **)(a1 + 1880);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1888) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 1880) = 0;
    *(_QWORD *)(a1 + 1896) = 0;
  }
  sub_10000BC38(a1 + 1856, *(_QWORD **)(a1 + 1864));
  sub_10000BBAC(a1 + 1832, *(_QWORD **)(a1 + 1840));
  v3 = *(void **)(a1 + 1808);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 1816) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 1808) = 0;
    *(_QWORD *)(a1 + 1824) = 0;
  }
  v4 = *(void **)(a1 + 1784);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 1792) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 1784) = 0;
    *(_QWORD *)(a1 + 1800) = 0;
  }
  sub_1000092EC(a1 + 1560);
  v5 = *(void **)(a1 + 1520);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 1528);
    if ( v6 )
    {
      v7 = 0;
      do
      {
        v8 = *(_QWORD *)(a1 + 1520);
        v9 = v8 + v7;
        v10 = *(void **)(v8 + v7 + 8);
        if ( v10 )
        {
          *(_QWORD *)(v9 + 16) = 0;
          qfree(v10);
          *(_QWORD *)(v9 + 8) = 0;
          *(_QWORD *)(v8 + v7 + 24) = 0;
        }
        v7 += 32;
        --v6;
      }
      while ( v6 );
      v5 = *(void **)(a1 + 1520);
    }
    *(_QWORD *)(a1 + 1528) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 1520) = 0;
    *(_QWORD *)(a1 + 1536) = 0;
  }
  if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_10000940C(a1);
}
// 10001D2D4: variable '_38' is possibly undefined
// 10009C7C0: using guessed type __int64 (__fastcall *off_10009C7C0[4])();
