/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402C4
// Address: 0x000402C4

//----- (000402C4) --------------------------------------------------------
int __fastcall sub_402C4(_DWORD *a1, int a2)
{
  if ( a1[3] - a2 <= 1 )
  {
    if ( !under_debugger )
      interr(276);
    __debugbreak();
  }
  return (*(unsigned __int8 *)(*a1 + a2 + 1) << 8) + *(unsigned __int8 *)(*a1 + a2);
}
// E0550: using guessed type char under_debugger;
