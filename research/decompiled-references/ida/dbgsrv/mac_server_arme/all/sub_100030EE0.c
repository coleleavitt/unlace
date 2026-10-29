/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100030EE0
// Address: 0x0000000100030EE0

//----- (0000000100030EE0) ----------------------------------------------------
void __fastcall sub_100030EE0(__int64 a1, unsigned __int8 *a2)
{
  void *v4; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( a2 )
  {
    sub_100030EE0(a1, *(_QWORD **)a2);
    sub_100030EE0(a1, *((_QWORD **)a2 + 1));
    free_idcv(a2 + 56);
    v4 = *((void **)a2 + 4);
    if ( v4 )
    {
      *((_QWORD *)a2 + 5) = 0;
      qfree(v4);
    }
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(a2);
  }
}
// 100030F38: variable '_18' is possibly undefined
