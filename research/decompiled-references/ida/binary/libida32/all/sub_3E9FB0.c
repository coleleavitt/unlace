__int64 __fastcall sub_3E9FB0(__int64 a1, unsigned int a2)
{
  unsigned int *range; // rax

  sub_3E9710(a1, 0);
  range = (unsigned int *)rangeset_t_find_range(a1 + 808, a2);
  if ( range )
    return *range;
  else
    return 0xFFFFFFFFLL;
}

