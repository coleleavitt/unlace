/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000182B4
// Address: 0x00000001000182B4

//----- (00000001000182B4) ----------------------------------------------------
__int64 __fastcall sub_1000182B4(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // x20
  unsigned __int64 v5; // x19
  int v6; // w21
  __int64 v7; // x22
  unsigned __int64 *range; // x0
  unsigned __int64 *v9; // x8

  if ( *(_QWORD *)(a1 + 152) )
  {
    v4 = a1;
    v5 = a2;
    v6 = a4;
    v7 = a3;
    range = rangeset_t_find_range(a1 + 144, a2);
    a2 = v5;
    a3 = v7;
    v9 = range;
    a1 = v4;
    if ( v9 )
      a4 = v6 | 2;
    else
      a4 = v6;
  }
  return sub_100016A54(a1, a2, a3, a4);
}
