/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400642F0
// Address: 0x00000001400642F0

//----- (00000001400642F0) ----------------------------------------------------
__int64 __fastcall sub_1400642F0(const CHAR *a1)
{
  __int64 result; // rax

  result = sub_1400641E0(a1, "rtN");
  if ( !result )
  {
    sub_1400640B0(1u);
    return 0;
  }
  return result;
}
