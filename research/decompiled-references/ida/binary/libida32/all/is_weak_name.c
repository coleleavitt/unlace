__int64 __fastcall is_weak_name(__int64 a1)
{
  return ((unsigned int)get_aflags(a1) >> 3) & 1;
}

