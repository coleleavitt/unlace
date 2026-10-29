/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D17D4
// Address: 0x00000000000D17D4

//----- (00000000000D17D4) ----------------------------------------------------
int32x2_t *__fastcall sub_D17D4(__int64 a1, _QWORD *a2)
{
  _QWORD v4[12]; // [xsp+0h] [xbp-80h] BYREF

  v4[11] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 )
  {
    sub_D5018(v4, a2);
    a2 = v4;
  }
  return sub_D1830(a1, (__int64)a2, 0);
}
