/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A780
// Address: 0x000000014005A780

//----- (000000014005A780) ----------------------------------------------------
bool __fastcall sub_14005A780(struct tm *a1, __int64 a2)
{
  return a2 >= 0 && !(unsigned int)common_localtime_s<__int64>(a1);
}
