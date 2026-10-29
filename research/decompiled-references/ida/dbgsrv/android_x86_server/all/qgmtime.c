/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgmtime
// Address: 0x000B1C90

//----- (000B1C90) --------------------------------------------------------
bool __cdecl qgmtime(struct tm *tp, time_t a2)
{
  time_t timer; // [esp+Ch] [ebp-18h] BYREF
  unsigned int v4; // [esp+10h] [ebp-14h]

  v4 = __readgsdword(0x14u);
  timer = a2;
  return a2 >= 0 && gmtime_r(&timer, tp) != nullptr;
}
