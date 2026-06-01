bool __fastcall sub_97290(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}

