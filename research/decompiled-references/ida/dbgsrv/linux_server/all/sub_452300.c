/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452300
// Address: 0x0000000000452300

//----- (0000000000452300) ----------------------------------------------------
void __fastcall sub_452300(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  _QWORD *i; // rbx
  _QWORD **v5; // rdi

  *a1 = qword_4C45B8;
  a1[1] = 0;
  a1[2] = 0;
  a1[5] = 0;
  v2 = (void *)a1[526];
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
  for ( i = (_QWORD *)a1[519]; a1 + 519 != i; --a1[521] )
  {
    v5 = (_QWORD **)i;
    i = (_QWORD *)*i;
    *v5[1] = i;
    i[1] = v5[1];
    j__free(v5);
  }
  operator delete(a1, 0x1098u);
}
// 4C45B8: using guessed type __int64 qword_4C45B8[2];
