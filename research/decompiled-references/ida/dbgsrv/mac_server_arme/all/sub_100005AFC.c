/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005AFC
// Address: 0x0000000100005AFC

//----- (0000000100005AFC) ----------------------------------------------------
__int64 __fastcall sub_100005AFC(__int64 a1)
{
  void **v2; // x8
  void **v3; // x9
  _QWORD *v4; // x21
  unsigned __int64 v5; // x11
  void **v6; // x22
  __int64 v7; // x20
  unsigned __int64 v8; // x23
  __int64 v9; // t1
  unsigned __int64 v10; // x9
  __int64 v11; // x9
  __int64 v12; // x8
  void *v13; // x0
  void *v14; // x0
  void *v15; // x0
  __int64 _38; // [xsp+38h] [xbp+8h]

  *(_DWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 1548) = 0;
  *(_BYTE *)(a1 + 733) = 0;
  *(_DWORD *)(a1 + 1556) = 4;
  sub_100018B74(a1 + 1560);
  sub_100005D34(a1);
  sub_10000BC90(a1 + 1904, *(_QWORD **)(a1 + 1912));
  *(_QWORD *)(a1 + 1904) = a1 + 1912;
  *(_OWORD *)(a1 + 1912) = 0u;
  sub_10000BBAC(a1 + 1832, *(_QWORD **)(a1 + 1840));
  *(_QWORD *)(a1 + 1832) = a1 + 1840;
  *(_OWORD *)(a1 + 1840) = 0u;
  sub_10000BC38(a1 + 1856, *(_QWORD **)(a1 + 1864));
  *(_QWORD *)(a1 + 1856) = a1 + 1864;
  *(_OWORD *)(a1 + 1864) = 0u;
  v2 = *(void ***)(a1 + 128);
  v3 = *(void ***)(a1 + 136);
  if ( v3 == v2 )
  {
    v4 = (_QWORD *)(a1 + 160);
    v3 = *(void ***)(a1 + 128);
  }
  else
  {
    v4 = (_QWORD *)(a1 + 160);
    v5 = *(_QWORD *)(a1 + 152);
    v6 = &v2[v5 / 0x38];
    v7 = (__int64)*v6 + 72 * (v5 % 0x38);
    v8 = (unsigned __int64)v2[(*(_QWORD *)(a1 + 160) + v5) / 0x38] + 72 * ((*(_QWORD *)(a1 + 160) + v5) % 0x38);
    if ( v7 != v8 )
    {
      do
      {
        free_debug_event(v7);
        v7 += 72;
        if ( v7 - (_QWORD)*v6 == 4032 )
        {
          v9 = (__int64)v6[1];
          ++v6;
          v7 = v9;
        }
      }
      while ( v7 != v8 );
      v2 = *(void ***)(a1 + 128);
      v3 = *(void ***)(a1 + 136);
    }
  }
  *v4 = 0;
  v10 = v3 - v2;
  if ( v10 >= 3 )
  {
    do
    {
      operator delete(*v2);
      v11 = *(_QWORD *)(a1 + 136);
      v2 = (void **)(*(_QWORD *)(a1 + 128) + 8LL);
      *(_QWORD *)(a1 + 128) = v2;
      v10 = (v11 - (__int64)v2) >> 3;
    }
    while ( v10 > 2 );
  }
  if ( v10 == 1 )
  {
    v12 = 28;
  }
  else
  {
    if ( v10 != 2 )
      goto LABEL_16;
    v12 = 56;
  }
  *(_QWORD *)(a1 + 152) = v12;
LABEL_16:
  *(_WORD *)(a1 + 1928) = 0;
  *(_BYTE *)(a1 + 1930) = 0;
  *(_QWORD *)(a1 + 1768) = -1;
  *(_QWORD *)(a1 + 1776) = 0;
  v13 = *(void **)(a1 + 1784);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 1792) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 1784) = 0;
    *(_QWORD *)(a1 + 1800) = 0;
  }
  v14 = *(void **)(a1 + 1808);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 1816) = 0;
    qfree(v14);
    *(_QWORD *)(a1 + 1808) = 0;
    *(_QWORD *)(a1 + 1824) = 0;
  }
  sub_100009794(a1 + 432, *(_QWORD **)(a1 + 440));
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 432) = a1 + 440;
  v15 = *(void **)(a1 + 1880);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 1888) = 0;
    qfree(v15);
    *(_QWORD *)(a1 + 1880) = 0;
    *(_QWORD *)(a1 + 1896) = 0;
  }
  if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100059490(a1);
}
// 100005D20: variable '_38' is possibly undefined
