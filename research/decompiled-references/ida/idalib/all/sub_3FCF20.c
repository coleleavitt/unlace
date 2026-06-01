__int64 __fastcall sub_3FCF20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *range; // rax

  sub_3FC650(a1, 0, a3, a4);
  range = (_QWORD *)rangeset_t_find_range(a1 + 816, a2);
  if ( range )
    return range[1] - *range;
  else
    return -1;
}
