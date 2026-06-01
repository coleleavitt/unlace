/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4785E7
// Address: 0x004785E7

//----- (004785E7) --------------------------------------------------------
int *__usercall sub_4785E7@<eax>(int a1@<ebx>, int a2, int **a3)
{
  int *result; // eax

  result = *a3;
  if ( *a3 != (int *)dword_4B7F80 )
  {
    result = (int *)dword_4B6858;
    if ( (dword_4B6858 & *(_DWORD *)(a2 + 848)) == 0 )
    {
      result = sub_47DAD1(a1);
      *a3 = result;
    }
  }
  return result;
}
// 4B6858: using guessed type int dword_4B6858;
// 4B7F80: using guessed type int dword_4B7F80;
