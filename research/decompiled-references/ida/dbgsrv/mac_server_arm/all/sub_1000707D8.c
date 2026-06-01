/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000707D8
// Address: 0x00000001000707D8

//----- (00000001000707D8) ----------------------------------------------------
_QWORD *__fastcall sub_1000707D8(_QWORD *a1)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x21

  v2 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      *(_QWORD *)v2[1] = *v2;
      v3[1] = v2[1];
      qsem_free(v2[4]);
      qfree(v2);
      --a1[2];
      v2 = v3;
    }
    while ( v3 != a1 );
  }
  return a1;
}
