/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B990
// Address: 0x0040B990

//----- (0040B990) --------------------------------------------------------
void **__userpurge sub_40B990@<eax>(void **a1@<ecx>, __m128i a2@<xmm0>, char a3)
{
  sub_40B290(a1, a2);
  if ( (a3 & 1) != 0 )
    sub_4627F2(a1);
  return a1;
}
