/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44FD40
// Address: 0x0044FD40

//----- (0044FD40) --------------------------------------------------------
int __usercall sub_44FD40@<eax>(int a1@<ebx>, int a2@<edi>)
{
  int (*v2)(void); // eax

  v2 = (int (*)(void))dword_4B70E8;
  if ( !dword_4B70E8 )
  {
    v2 = (int (*)(void))sub_450400(a1, a2, 2u);
    dword_4B70E8 = (int)v2;
  }
  return v2();
}
// 4B70E8: using guessed type int dword_4B70E8;
