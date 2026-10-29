/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlocaltime
// Address: 0x000B1CF0

//----- (000B1CF0) --------------------------------------------------------
bool __cdecl qlocaltime(struct tm *tp, time_t a2)
{
  time_t timer; // [esp+Ch] [ebp-18h] BYREF
  unsigned int v4; // [esp+10h] [ebp-14h]

  v4 = __readgsdword(0x14u);
  timer = a2;
  return a2 >= 0 && localtime_r(&timer, tp) != nullptr;
}
