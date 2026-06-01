/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400622F0
// Address: 0x00000001400622F0

//----- (00000001400622F0) ----------------------------------------------------
unsigned __int8 *__fastcall sub_1400622F0(unsigned __int8 *a1)
{
  unsigned __int8 v2; // al
  unsigned __int8 *i; // rbx

  if ( !a1 )
    return nullptr;
  v2 = *a1;
  for ( i = a1; *i; v2 = *i )
    *i++ = tolower(v2);
  return a1;
}
