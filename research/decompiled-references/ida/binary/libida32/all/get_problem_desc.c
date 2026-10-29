__int64 __fastcall get_problem_desc(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  if ( a2 > 0x10u )
    return -1;
  else
    return sub_79B6F0(
             *(_QWORD *)(qword_2CA1698 + 1480) + 4LL * a2 + 2488,
             **(_QWORD **)(qword_2CA1698 + 1480),
             a1,
             a3,
             339);
}

