/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470AC
// Address: 0x00000000000470AC

//----- (00000000000470AC) ----------------------------------------------------
void __fastcall sub_470AC(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0
  void *v10; // x0
  void *v11; // x0

  v2 = *(void **)(a1 + 1960);
  *(_QWORD *)a1 = off_1562A0;
  *(_QWORD *)(a1 + 1920) = 0;
  *(_QWORD *)(a1 + 1528) = 0;
  *(_QWORD *)(a1 + 1832) = 0;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1968) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 1960) = 0;
    *(_QWORD *)(a1 + 1976) = 0;
  }
  v3 = *(void **)(a1 + 1936);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 1944) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 1936) = 0;
    *(_QWORD *)(a1 + 1952) = 0;
  }
  sub_475E4(a1 + 1896, *(_QWORD **)(a1 + 1904));
  v4 = *(void **)(a1 + 1856);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 1864) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 1856) = 0;
    *(_QWORD *)(a1 + 1872) = 0;
  }
  v5 = *(void **)(a1 + 1808);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 1816) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 1808) = 0;
    *(_QWORD *)(a1 + 1824) = 0;
  }
  v6 = *(void **)(a1 + 1784);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 1792) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 1784) = 0;
    *(_QWORD *)(a1 + 1800) = 0;
  }
  v7 = *(void **)(a1 + 1760);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 1768) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 1760) = 0;
    *(_QWORD *)(a1 + 1776) = 0;
  }
  sub_47620(a1 + 1736, *(_QWORD **)(a1 + 1744));
  sub_47678(a1 + 1712, *(_QWORD **)(a1 + 1720));
  sub_475E4(a1 + 1688, *(_QWORD **)(a1 + 1696));
  v8 = *(void **)(a1 + 1664);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 1672) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 1664) = 0;
    *(_QWORD *)(a1 + 1680) = 0;
  }
  v9 = *(void **)(a1 + 1640);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 1648) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 1640) = 0;
    *(_QWORD *)(a1 + 1656) = 0;
  }
  v10 = *(void **)(a1 + 1616);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 1624) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 1616) = 0;
    *(_QWORD *)(a1 + 1632) = 0;
  }
  v11 = *(void **)(a1 + 1592);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 1600) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 1592) = 0;
    *(_QWORD *)(a1 + 1608) = 0;
  }
  sub_38C5C(a1);
}
// 1562A0: using guessed type __int64 (__fastcall *off_1562A0[10])();
