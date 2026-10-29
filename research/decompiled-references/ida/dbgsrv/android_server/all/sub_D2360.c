/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D2360
// Address: 0x00000000000D2360

//----- (00000000000D2360) ----------------------------------------------------
int32x2_t *__fastcall sub_D2360(__int64 a1, __int128 *a2)
{
  __int128 v2; // q0
  __int128 v3; // q1
  __int128 v4; // q2
  __int128 v5; // q3
  _OWORD v7[4]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v8; // [xsp+48h] [xbp-28h]
  __int64 v9; // [xsp+50h] [xbp-20h]
  __int64 v10; // [xsp+58h] [xbp-18h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 )
  {
    v3 = a2[2];
    v2 = a2[3];
    v5 = *a2;
    v4 = a2[1];
    a2 = v7;
    v8 = 0;
    v9 = 0;
    v7[2] = v3;
    v7[3] = v2;
    v7[0] = v5;
    v7[1] = v4;
  }
  return sub_D1830(a1, (__int64)a2, 1);
}
