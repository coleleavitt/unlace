bool __fastcall sub_2A680(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}

