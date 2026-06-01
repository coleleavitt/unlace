/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BED0
// Address: 0x0009BED0

//----- (0009BED0) --------------------------------------------------------
int __cdecl sub_9BED0(unsigned __int16 a1)
{
  int result; // eax

  result = *(unsigned __int16 *)((char *)&word_106E84 + 5 * a1);
  if ( result == 0xFFFF )
    return a1;
  return result;
}
// 106E84: using guessed type __int16 word_106E84;
