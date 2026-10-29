__int64 __fastcall get_std_dirtree(unsigned int a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 <= 6 )
    return *(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1584) + 8LL * (int)a1 + 8);
  return result;
}
