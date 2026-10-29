bool __fastcall sub_81DC70(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}

