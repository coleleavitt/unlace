/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40264
// Address: 0x00040264

//----- (00040264) --------------------------------------------------------
void __fastcall sub_40264(_DWORD *a1, int a2, void *a3, signed int a4)
{
  if ( a1[3] - a2 < a4 )
  {
    if ( !under_debugger )
      interr(276);
    __debugbreak();
  }
  qmemcpy(a3, (const void *)(*a1 + a2), a4);
}
// E0550: using guessed type char under_debugger;
