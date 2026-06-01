/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100049694
// Address: 0x0000000100049694

//----- (0000000100049694) ----------------------------------------------------
_QWORD *__fastcall sub_100049694(_QWORD *a1)
{
  _QWORD **v2; // x0
  _QWORD *v3; // x20

  v2 = (_QWORD **)*a1;
  if ( v2 != a1 )
  {
    do
    {
      v3 = *v2;
      *v2[1] = *v2;
      v3[1] = v2[1];
      qfree(v2);
      --a1[2];
      v2 = (_QWORD **)v3;
    }
    while ( v3 != a1 );
  }
  return a1;
}
