/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481F60
// Address: 0x0000000000481F60

//----- (0000000000481F60) ----------------------------------------------------
bool __fastcall sub_481F60(struct tm *tp, __int64 a2)
{
  bool result; // al
  time_t v3; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  result = 0;
  v3 = a2;
  if ( a2 >= 0 )
    return gmtime_r(&v3, tp) != nullptr;
  return result;
}
