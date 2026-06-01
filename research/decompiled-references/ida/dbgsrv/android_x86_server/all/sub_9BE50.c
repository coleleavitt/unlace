/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BE50
// Address: 0x0009BE50

//----- (0009BE50) --------------------------------------------------------
bool __cdecl sub_9BE50(_DWORD *a1, unsigned int a2)
{
  bool result; // al

  result = (int)a2 > 0 && a2 < 0x148;
  if ( result )
  {
    *a1 = dword_106444[2 * a2];
    a1[1] = dword_106448[2 * a2] + 1;
  }
  return result;
}
// 106444: using guessed type int dword_106444[];
// 106448: using guessed type int dword_106448[];
