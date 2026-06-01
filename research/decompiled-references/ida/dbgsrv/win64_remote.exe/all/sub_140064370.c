/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064370
// Address: 0x0000000140064370

//----- (0000000140064370) ----------------------------------------------------
__int64 __fastcall sub_140064370(const CHAR *a1, char *a2)
{
  __int64 result; // rax
  unsigned __int8 v4[24]; // [rsp+20h] [rbp-28h] BYREF

  sub_1400621E0(v4, a2, 20);
  sub_140062140((__int64)v4, "N", 20);
  result = sub_1400641E0(a1, v4);
  if ( !result )
  {
    sub_1400640B0(1u);
    return 0;
  }
  return result;
}
