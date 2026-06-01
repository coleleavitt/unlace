/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_460570
// Address: 0x00460570

//----- (00460570) --------------------------------------------------------
int __stdcall sub_460570(_BYTE *a1)
{
  _BYTE *v1; // eax
  __m128i *v2; // eax

  if ( !a1 )
    return 0;
  v1 = sub_456590(a1);
  v2 = sub_465040((unsigned int)v1, 0x2Eu);
  return v2 != nullptr ? (unsigned int)v2->m128i_u32 + 1 : 0;
}
