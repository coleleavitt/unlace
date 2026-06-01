/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D220
// Address: 0x0043D220

//----- (0043D220) --------------------------------------------------------
int __stdcall sub_43D220(int a1, void **a2, int a3)
{
  if ( *a2 )
  {
    sub_415D30(a2, 0);
    sub_453A20(*a2);
    *a2 = nullptr;
    a2[2] = nullptr;
  }
  return -1;
}
