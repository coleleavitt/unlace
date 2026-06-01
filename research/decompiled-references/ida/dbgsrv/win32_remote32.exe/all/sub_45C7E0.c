/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C7E0
// Address: 0x0045C7E0

//----- (0045C7E0) --------------------------------------------------------
int __stdcall sub_45C7E0(int a1, __m128i *a2, signed int a3)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
    return sub_45CF50(*(_DWORD **)(a1 + 8), a2, a3);
  return sub_45C370(a1, (unsigned int)a2, a3);
}
