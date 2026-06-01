__int64 __fastcall sub_767640(__int64 a1, __int64 a2, __int64 a3, char *a4, __int64 a5)
{
  char *v5; // rdx
  int v6; // eax

  v5 = qword_2CD44C0;
  if ( *qword_2CD44C0 == 95 )
  {
    ++qword_2CD44C0;
    return 0;
  }
  else
  {
    if ( (unsigned __int8)(*qword_2CD44C0 - 48) > 9u
      || (v6 = sub_76E990(a1, a2, qword_2CD44C0, a4, a5),
          v5 = qword_2CD44C0,
          a4 = qword_2CD44C0 + 1,
          ++qword_2CD44C0,
          *v5 != 95) )
    {
      sub_76E6C0(a1, a2, v5, a4);
    }
    return (unsigned int)(v6 + 1);
  }
}
