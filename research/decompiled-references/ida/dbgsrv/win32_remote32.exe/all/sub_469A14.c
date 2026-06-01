/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469A14
// Address: 0x00469A14

//----- (00469A14) --------------------------------------------------------
int __usercall sub_469A14@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        __m128i a3@<xmm0>,
        int a4,
        int a5,
        _DWORD *a6,
        unsigned int a7,
        int a8,
        _DWORD *a9,
        int a10)
{
  int result; // eax

  if ( !a8 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return -1;
  }
  if ( !a6 || !a7 )
  {
    *sub_46B984() = 22;
    goto LABEL_10;
  }
  result = sub_469718(a2, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( result < 0 )
    *(_BYTE *)a6 = 0;
  if ( result == -2 )
  {
    *sub_46B984() = 34;
LABEL_10:
    sub_467EF4(a1, a2);
    return -1;
  }
  return result;
}
