/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400093E0
// Address: 0x00000001400093E0

//----- (00000001400093E0) ----------------------------------------------------
const char *__fastcall sub_1400093E0(__int64 a1)
{
  const char *result; // rax

  result = "Unknown exception";
  if ( *(_QWORD *)(a1 + 8) )
    return *(const char **)(a1 + 8);
  return result;
}
