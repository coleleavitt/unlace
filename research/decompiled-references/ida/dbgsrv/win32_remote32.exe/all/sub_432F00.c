/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432F00
// Address: 0x00432F00

//----- (00432F00) --------------------------------------------------------
int __usercall sub_432F00@<eax>(int *this@<ecx>, void **a2@<ebx>, __m128i a3@<xmm0>)
{
  int v4; // edi
  int result; // eax
  int v6; // eax

  v4 = *(this + 66);
  result = sub_4360F0((int)this, a2, a3, v4, 0, nullptr);
  if ( *(this + 8) )
  {
    if ( result )
      goto LABEL_5;
    result = sub_4345C0((const CHAR **)this, a2, v4);
  }
  if ( result )
  {
LABEL_5:
    v6 = sub_45C9E0();
    sub_46653B(this + 50, v6);
    __debugbreak();
  }
  return result;
}
