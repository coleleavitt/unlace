/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140047710
// Address: 0x0000000140047710

//----- (0000000140047710) ----------------------------------------------------
__int64 __fastcall sub_140047710(void **a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    sub_14004DFD0(a1, 0);
    j_free(*a1);
    *a1 = nullptr;
    a1[2] = nullptr;
    return 0;
  }
  return result;
}
