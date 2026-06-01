/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402F8
// Address: 0x000402F8

//----- (000402F8) --------------------------------------------------------
int __fastcall sub_402F8(_DWORD *a1, int a2)
{
  if ( a1[3] - a2 <= 3 )
  {
    if ( !under_debugger )
      interr(276);
    __debugbreak();
  }
  return (((*(unsigned __int8 *)(*a1 + a2 + 3) << 8) + *(unsigned __int8 *)(*a1 + a2 + 2)) << 16)
       + (*(unsigned __int8 *)(*a1 + a2 + 1) << 8)
       + *(unsigned __int8 *)(*a1 + a2);
}
// E0550: using guessed type char under_debugger;
