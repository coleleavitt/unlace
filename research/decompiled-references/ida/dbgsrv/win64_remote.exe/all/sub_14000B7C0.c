/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B7C0
// Address: 0x000000014000B7C0

//----- (000000014000B7C0) ----------------------------------------------------
__int64 __fastcall sub_14000B7C0(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    sub_14001A500(a1, 0);
    j_free((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
    return 0;
  }
  return result;
}
