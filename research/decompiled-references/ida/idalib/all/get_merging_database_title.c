__int64 __fastcall get_merging_database_title(int a1)
{
  __int64 result; // rax

  if ( (unsigned __int64)a1 > 2 )
  {
    if ( !under_debugger )
      interr(2698);
    BUG();
  }
  result = 0;
  if ( *((_QWORD *)&xmmword_2CCB660 + 3 * a1 + 3) > 1u )
    return *((_QWORD *)&xmmword_2CCB660 + 3 * a1 + 2);
  return result;
}
