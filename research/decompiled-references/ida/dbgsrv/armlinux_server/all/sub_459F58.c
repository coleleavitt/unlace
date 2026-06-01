/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459F58
// Address: 0x0000000000459F58

//----- (0000000000459F58) ----------------------------------------------------
void __fastcall sub_459F58(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0
  _QWORD **v4; // x1
  _QWORD **v5; // x20

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
  if ( a1 + 519 != v4 )
  {
    do
    {
      v5 = (_QWORD **)*v4;
      *v4[1] = *v4;
      (*v4)[1] = v4[1];
      j__free(v4);
      v4 = v5;
      --a1[521];
    }
    while ( a1 + 519 != v5 );
  }
  j_j__free_0(a1);
}
// 51DCA8: using guessed type __int64 qword_51DCA8[2];
