/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0938
// Address: 0x00000000004A0938

//----- (00000000004A0938) ----------------------------------------------------
unsigned __int8 *__fastcall sub_4A0938(unsigned __int8 *result, size_t a2, unsigned __int8 a3)
{
  if ( a2 == 1 )
  {
    *result = a3;
  }
  else if ( a2 )
  {
    return (unsigned __int8 *)memset(result, a3, a2);
  }
  return result;
}
