__int64 __fastcall get_problem_desc(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  if ( a2 > 0x10u )
    return -1;
  else
    return sub_7BEA80(
             *(_QWORD *)(qword_2CCB598 + 1672) + 8LL * a2 + 2616,
             **(_QWORD **)(qword_2CCB598 + 1672),
             a1,
             a3,
             339);
}
