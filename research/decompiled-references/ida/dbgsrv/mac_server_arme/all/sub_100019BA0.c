/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019BA0
// Address: 0x0000000100019BA0

//----- (0000000100019BA0) ----------------------------------------------------
__int64 __fastcall sub_100019BA0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // x30
  __int64 v5; // x20
  unsigned __int64 v6; // x19
  int v7; // w21
  __int64 v8; // x22
  unsigned __int64 *range; // x0
  unsigned __int64 *v10; // x8
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( *(_QWORD *)(a1 + 152) )
  {
    v5 = a1;
    v6 = a2;
    v7 = a4;
    v8 = a3;
    range = rangeset_t_find_range(a1 + 144, a2);
    a2 = v6;
    a3 = v8;
    v10 = range;
    a1 = v5;
    if ( v10 )
      a4 = v7 | 2;
    else
      a4 = v7;
    v4 = _28;
  }
  if ( ((v4 ^ (2 * v4)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_100017F28(a1, a2, a3, a4);
}
// 100019BF0: variable '_28' is possibly undefined
// 100019C00: variable 'v4' is possibly undefined
