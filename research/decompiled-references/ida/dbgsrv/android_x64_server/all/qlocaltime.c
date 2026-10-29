/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlocaltime
// Address: 0x00000000000C3F30

//----- (00000000000C3F30) ----------------------------------------------------
bool __fastcall qlocaltime(struct tm *tp, time_t a2)
{
  time_t timer; // [rsp+8h] [rbp-10h] BYREF
  unsigned __int64 v4; // [rsp+10h] [rbp-8h]

  v4 = __readfsqword(0x28u);
  timer = a2;
  return a2 >= 0 && localtime_r(&timer, tp) != nullptr;
}
