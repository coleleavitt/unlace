/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B990
// Address: 0x0002B990

//----- (0002B990) --------------------------------------------------------
int __fastcall sub_2B990(int a1, void **a2, int a3, unsigned int a4)
{
  if ( a3 == 2 )
    return sub_32154(a1, a2, (__int64 *)(a1 + 264), a4);
  if ( a3 != 1 )
  {
    if ( !under_debugger )
      interr(20086);
    __debugbreak();
  }
  return sub_32154(a1, a2, (__int64 *)(a1 + 232), a4);
}
// E0550: using guessed type char under_debugger;
