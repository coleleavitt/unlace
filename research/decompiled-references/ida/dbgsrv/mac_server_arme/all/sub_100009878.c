/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009878
// Address: 0x0000000100009878

//----- (0000000100009878) ----------------------------------------------------
void __fastcall sub_100009878(__int64 a1, _QWORD *a2)
{
  void *v4; // x0
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( a2 )
  {
    sub_100009878(a1, *a2);
    sub_100009878(a1, a2[1]);
    v4 = (void *)a2[5];
    if ( v4 )
    {
      v5 = a2[6];
      if ( v5 )
      {
        v6 = 0;
        do
        {
          sub_10000991C((char **)(a2[5] + v6));
          v6 += 48;
          --v5;
        }
        while ( v5 );
        v4 = (void *)a2[5];
      }
      a2[6] = 0;
      qfree(v4);
    }
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(a2);
  }
}
// 1000098F8: variable '_28' is possibly undefined
