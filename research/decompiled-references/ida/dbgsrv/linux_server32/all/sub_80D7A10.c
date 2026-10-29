/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D7A10
// Address: 0x080D7A10

//----- (080D7A10) --------------------------------------------------------
int (**sub_80D7A10())()
{
  int (**result)(); // eax
  int v1; // edi

  init_proc();
  result = funcs_80D7A54;
  if ( &off_811B7BC - funcs_80D7A54 )
  {
    v1 = 0;
    do
      result = (int (**)())funcs_80D7A54[v1++]();
    while ( &off_811B7BC - funcs_80D7A54 != v1 );
  }
  return result;
}
// 811B784: using guessed type int (*funcs_80D7A54[14])();
// 811B7BC: using guessed type int (*off_811B7BC)();
