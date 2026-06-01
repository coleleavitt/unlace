/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B140
// Address: 0x0009B140

//----- (0009B140) --------------------------------------------------------
bool __cdecl sub_9B140(int a1, int a2)
{
  bool result; // al

  result = 1;
  if ( a2 <= 1 )
    return *(_BYTE *)(*(_DWORD *)(a1 + 4) + 59) != 0;
  return result;
}
