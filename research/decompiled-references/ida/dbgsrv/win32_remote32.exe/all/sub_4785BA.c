/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4785BA
// Address: 0x004785BA

//----- (004785BA) --------------------------------------------------------
int __usercall sub_4785BA@<eax>(int a1@<ebx>, int a2, int *a3)
{
  int result; // eax

  result = *a3;
  if ( *a3 != dword_4B7A54 )
  {
    result = dword_4B6858;
    if ( (dword_4B6858 & *(_DWORD *)(a2 + 848)) == 0 )
    {
      result = sub_47E953(a1);
      *a3 = result;
    }
  }
  return result;
}
// 4B6858: using guessed type int dword_4B6858;
// 4B7A54: using guessed type int dword_4B7A54;
