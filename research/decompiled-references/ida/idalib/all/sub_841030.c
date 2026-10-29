bool __fastcall sub_841030(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}
