/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008AEC
// Address: 0x0000000100008AEC

//----- (0000000100008AEC) ----------------------------------------------------
__int64 __fastcall sub_100008AEC(__int64 a1, __int64 a2)
{
  void *v4; // x0
  void *v5; // x0
  __int64 result; // x0
  __int64 v7; // x22
  unsigned int v8; // w21

  sub_100001344((char **)(a1 + 376));
  sub_10000B27C(a1 + 1832, *(_QWORD **)(a1 + 1840));
  *(_QWORD *)(a1 + 1832) = a1 + 1840;
  *(_OWORD *)(a1 + 1840) = 0u;
  *(_QWORD *)(a1 + 1768) = -1;
  *(_QWORD *)(a1 + 1776) = 0;
  v4 = *(void **)(a1 + 1784);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 1792) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 1784) = 0;
    *(_QWORD *)(a1 + 1800) = 0;
  }
  v5 = *(void **)(a1 + 1808);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 1816) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 1808) = 0;
    *(_QWORD *)(a1 + 1824) = 0;
  }
  result = sub_100058F88((_QWORD *)a1);
  if ( (_DWORD)result )
  {
    v7 = result;
    v8 = sub_100005A70(a1, 1);
    sub_10000368C(a1);
    sub_1000067F8((_QWORD *)a1, a2, v8);
    sub_1000038E0(a1);
    sub_100006C98(a1, a2);
    return v7;
  }
  return result;
}
