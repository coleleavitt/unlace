/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2198
// Address: 0x00000000004A2198

//----- (00000000004A2198) ----------------------------------------------------
unsigned int **__fastcall sub_4A2198(unsigned int **a1, size_t a2, __int64 a3, unsigned __int64 a4, unsigned __int8 a5)
{
  int v5; // w22

  v5 = a5;
  if ( a4 > a3 + 0x3FFFFFFFFFFFFFF9LL - *((_QWORD *)*a1 - 3) )
    sub_4A04D0("basic_string::_M_replace_aux");
  sub_4A1BB8(a1, a2, a3, a4);
  if ( !a4 )
    return a1;
  if ( a4 != 1 )
  {
    memset((char *)*a1 + a2, v5, a4);
    return a1;
  }
  *((_BYTE *)*a1 + a2) = v5;
  return a1;
}
