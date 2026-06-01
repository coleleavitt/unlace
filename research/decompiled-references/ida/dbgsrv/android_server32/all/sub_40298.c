/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40298
// Address: 0x00040298

//----- (00040298) --------------------------------------------------------
int __fastcall sub_40298(_DWORD *a1, int a2)
{
  if ( a1[3] - a2 <= 0 )
  {
    if ( !under_debugger )
      interr(276);
    __debugbreak();
  }
  return *(unsigned __int8 *)(*a1 + a2);
}
// E0550: using guessed type char under_debugger;
