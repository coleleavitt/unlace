/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B020
// Address: 0x000000014000B020

//----- (000000014000B020) ----------------------------------------------------
__int64 __fastcall sub_14000B020(void **a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    sub_14001A6C0(a1, 0);
    j_free(*a1);
    *a1 = nullptr;
    a1[2] = nullptr;
    return 0;
  }
  return result;
}
