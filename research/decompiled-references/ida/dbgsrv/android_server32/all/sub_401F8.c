/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_401F8
// Address: 0x000401F8

//----- (000401F8) --------------------------------------------------------
int __fastcall sub_401F8(_DWORD *a1, int a2, __int16 a3)
{
  int result; // r0

  if ( a1[1] - a2 <= 1 )
  {
    if ( !under_debugger )
      interr(277);
    __debugbreak();
  }
  *(_BYTE *)(*a1 + a2) = a3;
  result = *a1 + a2;
  *(_BYTE *)(result + 1) = HIBYTE(a3);
  return result;
}
// E0550: using guessed type char under_debugger;
