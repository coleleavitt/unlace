/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459E28
// Address: 0x0000000000459E28

//----- (0000000000459E28) ----------------------------------------------------
__int64 __fastcall sub_459E28(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0
  _QWORD **v4; // x1
  __int64 result; // x0
  _QWORD **v6; // x20

  v2 = (void *)a1[526];
  *a1 = qword_51DCA8;
  a1[1] = 0;
  a1[2] = 0;
  a1[5] = 0;
  if ( v2 )
  {
    a1[527] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[523];
  if ( v3 )
  {
    a1[524] = 0;
    j__free(v3);
  }
  v4 = (_QWORD **)a1[519];
  result = 4152;
  if ( a1 + 519 != v4 )
  {
    do
    {
      v6 = (_QWORD **)*v4;
      *v4[1] = *v4;
      (*v4)[1] = v4[1];
      j__free(v4);
      v4 = v6;
      result = a1[521] - 1LL;
      a1[521] = result;
    }
    while ( a1 + 519 != v6 );
  }
  return result;
}
// 51DCA8: using guessed type __int64 qword_51DCA8[2];
