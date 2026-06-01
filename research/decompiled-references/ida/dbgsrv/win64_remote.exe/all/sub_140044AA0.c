/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044AA0
// Address: 0x0000000140044AA0

//----- (0000000140044AA0) ----------------------------------------------------
void __fastcall sub_140044AA0(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  _QWORD *v4; // rdi
  _QWORD **v5; // rcx
  _QWORD **v6; // rbx

  *a1 = &off_140096F38;
  a1[1] = 0;
  a1[2] = 0;
  a1[5] = 0;
  v2 = (void *)a1[526];
  if ( v2 )
  {
    a1[527] = 0;
    j_free(v2);
    a1[526] = 0;
    a1[528] = 0;
  }
  v3 = (void *)a1[523];
  if ( v3 )
  {
    a1[524] = 0;
    j_free(v3);
    a1[523] = 0;
    a1[525] = 0;
  }
  v4 = a1 + 519;
  v5 = (_QWORD **)a1[519];
  if ( v5 != a1 + 519 )
  {
    do
    {
      v6 = (_QWORD **)*v5;
      *v5[1] = *v5;
      (*v5)[1] = v5[1];
      j_free(v5);
      --v4[2];
      v5 = v6;
    }
    while ( v6 != v4 );
  }
}
// 140096F38: using guessed type __int64 (__fastcall *off_140096F38)(void *Block);
