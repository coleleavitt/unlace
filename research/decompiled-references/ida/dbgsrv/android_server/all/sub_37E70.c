/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37E70
// Address: 0x0000000000037E70

//----- (0000000000037E70) ----------------------------------------------------
__int64 __fastcall sub_37E70(__int64 a1, int a2, __int64 *a3)
{
  unsigned int v3; // w19

  v3 = 13;
  if ( !a2 )
  {
    if ( (unsigned int)ps_pglobal_lookup(0, nullptr, off_164000, a3) )
      return 13;
    else
      return 0;
  }
  return v3;
}
// 164000: using guessed type char *off_164000;
