/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48B088
// Address: 0x000000000048B088

//----- (000000000048B088) ----------------------------------------------------
__int64 *sub_48B088()
{
  _QWORD *v0; // x0

  v0 = (_QWORD *)*sub_48AEC8();
  if ( v0[1] )
    return (__int64 *)*v0;
  else
    return &qword_4B2D48;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
