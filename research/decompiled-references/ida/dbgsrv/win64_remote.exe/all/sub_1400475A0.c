/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400475A0
// Address: 0x00000001400475A0

//----- (00000001400475A0) ----------------------------------------------------
__int64 __fastcall sub_1400475A0(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    sub_14004DF20(a1, 0);
    j_free((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
    return 0;
  }
  return result;
}
