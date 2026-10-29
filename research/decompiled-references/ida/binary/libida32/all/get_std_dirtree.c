__int64 __fastcall get_std_dirtree(unsigned int a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 <= 6 )
    return *(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1392) + 8LL * (int)a1 + 8);
  return result;
}

