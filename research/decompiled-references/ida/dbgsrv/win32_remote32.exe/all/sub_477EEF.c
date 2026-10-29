/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477EEF
// Address: 0x00477EEF

//----- (00477EEF) --------------------------------------------------------
int __usercall sub_477EEF@<eax>(int a1@<ebx>, int a2@<edi>, unsigned int *a3, int a4, int a5)
{
  unsigned int v6; // [esp-4h] [ebp-8h]

  if ( (a5 & 0xFFF7FFFF & a4 & 0xFCF0FCE0) != 0 )
  {
    if ( a3 )
      *a3 = sub_47EBA9(0, 0);
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 22;
  }
  else
  {
    v6 = a5 & 0xFFF7FFFF;
    if ( a3 )
      *a3 = sub_47EBA9(a4, v6);
    else
      sub_47EBA9(a4, v6);
    return 0;
  }
}
