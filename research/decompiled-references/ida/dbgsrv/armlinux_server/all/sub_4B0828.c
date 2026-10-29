/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0828
// Address: 0x00000000004B0828

//----- (00000000004B0828) ----------------------------------------------------
_BYTE *__fastcall sub_4B0828(__int64 *a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v4; // x19

  v4 = &a2[-*a1];
  if ( a3 == *a1 + a1[1] )
  {
    a1[1] = (__int64)v4;
    *a2 = 0;
    return &v4[*a1];
  }
  else
  {
    sub_4AFF90(a1, (__int64)&a2[-*a1], a3 - (_QWORD)a2);
    return &v4[*a1];
  }
}
