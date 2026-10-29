/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007084C
// Address: 0x000000010007084C

//----- (000000010007084C) ----------------------------------------------------
_QWORD *__fastcall sub_10007084C(_QWORD *a1)
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
