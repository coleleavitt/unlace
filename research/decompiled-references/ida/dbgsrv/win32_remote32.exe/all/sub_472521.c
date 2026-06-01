/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472521
// Address: 0x00472521

//----- (00472521) --------------------------------------------------------
__m128i *__usercall sub_472521@<eax>(int *a1@<ecx>, int a2@<ebx>)
{
  __m128i *v3; // edi
  int v4; // eax
  int v5; // eax

  v3 = (__m128i *)a1[2];
  if ( !v3 )
    return nullptr;
  v4 = a1[4];
  if ( !v4 )
    return nullptr;
  if ( !*((_BYTE *)a1 + 20) )
  {
    v3 = (__m128i *)sub_46D25F(2 * v4);
    sub_471A66(a2, (int)v3, v3, a1[4], a1[2], a1[3]);
  }
  v5 = *a1;
  a1[4] = 0;
  a1[2] = v5;
  a1[3] = a1[1];
  return v3;
}
// 47253D: conditional instruction was optimized away because eax.4!=0
