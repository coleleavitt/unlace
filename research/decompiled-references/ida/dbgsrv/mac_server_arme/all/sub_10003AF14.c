/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003AF14
// Address: 0x000000010003AF14

//----- (000000010003AF14) ----------------------------------------------------
bool __fastcall sub_10003AF14(__int64 *a1, unsigned __int8 *a2)
{
  int v3; // w19
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  unsigned __int8 v8[8]; // [xsp+8h] [xbp-48h] BYREF
  void *v9; // [xsp+10h] [xbp-40h]
  __int64 v10; // [xsp+18h] [xbp-38h]
  __int64 v11; // [xsp+20h] [xbp-30h]

  v3 = move_idcv(a2, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
  if ( !v3 )
  {
    v5 = *a1 + 32 * a1[1];
    v8[0] = 2;
    v10 = 0;
    v11 = 0;
    v9 = nullptr;
    copy_idcv(v8, (unsigned __int8 *)(v5 - 32));
    if ( a1[1] )
    {
      v6 = *a1;
      v7 = a1[1] - 1;
      a1[1] = v7;
      sub_10003E3A4((unsigned __int8 *)(v6 + 32 * v7));
    }
    if ( v8[0] == 5 )
    {
      sub_10003307C((__int64)v9, v8);
    }
    else if ( v8[0] == 7 && v9 )
    {
      v10 = 0;
      qfree(v9);
    }
  }
  return v3 == 0;
}
