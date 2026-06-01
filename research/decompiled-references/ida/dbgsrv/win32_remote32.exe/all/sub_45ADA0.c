/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45ADA0
// Address: 0x0045ADA0

//----- (0045ADA0) --------------------------------------------------------
unsigned __int8 *__stdcall sub_45ADA0(unsigned __int8 *a1)
{
  unsigned __int8 v1; // al
  unsigned __int8 *i; // esi

  if ( !a1 )
    return nullptr;
  v1 = *a1;
  for ( i = a1; *i; v1 = *i )
    *i++ = sub_4692B4(v1);
  return a1;
}
