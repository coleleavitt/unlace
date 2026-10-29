/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2388
// Address: 0x00000000004A2388

//----- (00000000004A2388) ----------------------------------------------------
unsigned int **__fastcall sub_4A2388(unsigned int **a1, size_t a2, __int64 a3, _BYTE *a4, size_t a5)
{
  sub_4A1BB8(a1, a2, a3, a5);
  if ( !a5 )
    return a1;
  if ( a5 != 1 )
  {
    memcpy((char *)*a1 + a2, a4, a5);
    return a1;
  }
  *((_BYTE *)*a1 + a2) = *a4;
  return a1;
}
