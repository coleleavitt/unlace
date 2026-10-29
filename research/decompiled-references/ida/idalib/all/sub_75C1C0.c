__int64 __fastcall sub_75C1C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  char *v6; // rdx
  __int64 v7; // rcx

  result = 0;
  v6 = qword_2CD44C0;
  if ( *qword_2CD44C0 != 95 )
  {
    result = (unsigned int)sub_76E990(a1, a2, qword_2CD44C0, a4, a5) + 1;
    if ( (int)result < 0 || (v6 = qword_2CD44C0, *qword_2CD44C0 != 95) )
      sub_76E6C0(a1, a2, v6, v7);
  }
  qword_2CD44C0 = v6 + 1;
  return result;
}
