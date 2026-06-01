/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BEBA0
// Address: 0x000BEBA0

//----- (000BEBA0) --------------------------------------------------------
void *__cdecl sub_BEBA0(size_t size)
{
  void *result; // eax

  result = malloc(size);
  if ( !result )
    return (void *)sub_BEBE0(size);
  return result;
}
// BEBE0: using guessed type int __fastcall sub_BEBE0(_DWORD);
