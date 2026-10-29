__int64 __fastcall sub_3FCED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 range; // rax

  sub_3FC650(a1, 0, a3, a4);
  range = rangeset_t_find_range(a1 + 816, a2);
  if ( range )
    return *(_QWORD *)range;
  else
    return -1;
}
