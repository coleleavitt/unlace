/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000097EC
// Address: 0x00000001000097EC

//----- (00000001000097EC) ----------------------------------------------------
void __fastcall sub_1000097EC(__int64 a1, _QWORD *a2)
{
  void *v4; // x0
  void *v5; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  if ( a2 )
  {
    sub_1000097EC(a1, *a2);
    sub_1000097EC(a1, a2[1]);
    v4 = (void *)a2[10];
    if ( v4 )
    {
      a2[11] = 0;
      qfree(v4);
      a2[10] = 0;
      a2[12] = 0;
    }
    v5 = (void *)a2[6];
    if ( v5 )
    {
      a2[7] = 0;
      qfree(v5);
    }
    if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(a2);
  }
}
// 100009854: variable '_18' is possibly undefined
