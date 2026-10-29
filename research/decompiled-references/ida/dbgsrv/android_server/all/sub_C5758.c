/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C5758
// Address: 0x00000000000C5758

//----- (00000000000C5758) ----------------------------------------------------
__int64 __fastcall sub_C5758(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v8; // w22
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x9
  __int64 v11; // x10
  __int64 v12; // x11
  unsigned __int64 i; // x12
  unsigned __int64 v14; // x14
  unsigned __int64 v15; // x9
  unsigned __int64 v17[2]; // [xsp+8h] [xbp-68h] BYREF
  unsigned __int64 v18[3]; // [xsp+18h] [xbp-58h] BYREF

  v18[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = sub_C55D0((__int64)a1, a2, a3, a4);
  if ( a2 != a3 && !v8 )
  {
    v9 = a4 + a2;
    v18[0] = a2;
    v18[1] = a4 + a2;
    if ( a4 + a2 > a2 )
    {
      v10 = a1[1];
      if ( v10 )
      {
        v11 = *a1;
        v12 = 0;
        for ( i = 0; i < v10; ++i )
        {
          v14 = *(_QWORD *)(v11 + (v12 >> 28) + 8);
          if ( v14 >= a2 )
            goto LABEL_10;
          v12 += 0x100000000LL;
        }
      }
      do
      {
        if ( under_debugger )
          __break(1u);
        interr(42);
LABEL_10:
        v15 = *(_QWORD *)(v11 + 16 * (v12 >> 32));
      }
      while ( v14 == v15 || v15 > a2 || v9 - 1 > v14 - 1 );
    }
    rangeset_t_sub((__int64)a1, v18);
    v17[0] = a3;
    v17[1] = a4 + a3;
    rangeset_t_add((__int64)a1, v17);
  }
  return v8;
}
// C5804: variable 'v11' is possibly undefined
// C57FC: variable 'v12' is possibly undefined
// C580C: variable 'v14' is possibly undefined
// C5818: variable 'v9' is possibly undefined
// 168DF0: using guessed type char under_debugger;
