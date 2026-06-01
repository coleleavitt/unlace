/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44F900
// Address: 0x0044F900

//----- (0044F900) --------------------------------------------------------
int __usercall sub_44F900@<eax>(__m128i a1@<xmm0>, const __m128i *a2, int a3, int a4)
{
  unsigned int v4; // esi
  __int8 v6; // [esp+13h] [ebp-1h] BYREF

  v4 = 0;
  while ( sub_44D5C0(a4, (int)&v6, 1, 10000) > 0 )
  {
    a2->m128i_i8[v4++] = v6;
    a2->m128i_i8[v4] = 0;
    if ( v4 >= a3 - 1 || sub_464A10(a1, a2, (const __m128i *)"\r\n\r\n") )
      return v4;
  }
  return -1;
}
