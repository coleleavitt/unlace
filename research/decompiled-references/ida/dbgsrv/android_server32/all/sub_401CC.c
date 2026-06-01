/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_401CC
// Address: 0x000401CC

//----- (000401CC) --------------------------------------------------------
int __fastcall sub_401CC(int *a1, int a2, char a3)
{
  int result; // r0

  if ( a1[1] - a2 <= 0 )
  {
    if ( !under_debugger )
      interr(277);
    __debugbreak();
  }
  result = *a1;
  *(_BYTE *)(result + a2) = a3;
  return result;
}
// E0550: using guessed type char under_debugger;
