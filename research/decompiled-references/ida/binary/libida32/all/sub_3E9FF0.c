__int64 __fastcall sub_3E9FF0(__int64 a1, unsigned int a2)
{
  _DWORD *range; // rax

  sub_3E9710(a1, 0);
  range = (_DWORD *)rangeset_t_find_range(a1 + 808, a2);
  if ( range )
    return (unsigned int)(range[1] - *range);
  else
    return 0xFFFFFFFFLL;
}

