/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eetol64
// Address: 0x00000000000B4AFC

//----- (00000000000B4AFC) ----------------------------------------------------
__int64 __fastcall eetol64(_QWORD *a1, int8x16_t *a2, char a3, int8x16x2_t a4)
{
  __int64 result; // x0
  unsigned __int64 v6[2]; // [xsp+0h] [xbp-30h] BYREF

  v6[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = sub_B4918(v6, a2, 63, a3 & 1, a4);
  if ( (_DWORD)result == 1 )
    *a1 = v6[0];
  return result;
}
