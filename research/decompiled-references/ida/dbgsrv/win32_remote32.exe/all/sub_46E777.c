/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E777
// Address: 0x0046E777

//----- (0046E777) --------------------------------------------------------
int __usercall sub_46E777@<eax>(_BYTE *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  if ( !a1[4] )
  {
    sub_467F04(a2, a3);
    __debugbreak();
  }
  return *(_DWORD *)a1;
}
