unsigned __int8 __fastcall sub_75C110(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 result; // al
  char *v5; // rbx
  char *v6; // rsi

  if ( *qword_2CD44C0 == 110 )
  {
    if ( (unsigned __int8)(qword_2CD44C0[1] - 49) <= 8u )
    {
      v5 = ++qword_2CD44C0;
      if ( a1 )
        sub_76FD20(a1, 45);
LABEL_5:
      while ( 1 )
      {
        v6 = v5;
        result = *v5 - 48;
        if ( result > 9u )
          break;
        ++v5;
      }
      if ( a1 )
        return sub_76EF20(a1);
      goto LABEL_9;
    }
LABEL_14:
    sub_76E6C0(a1, qword_2CD44C0, a3, a4);
  }
  result = *qword_2CD44C0 - 48;
  if ( *qword_2CD44C0 != 48 )
  {
    if ( result <= 9u )
    {
      v5 = qword_2CD44C0 + 1;
      goto LABEL_5;
    }
    goto LABEL_14;
  }
  v6 = qword_2CD44C0 + 1;
  if ( a1 )
    return sub_76EF20(a1);
LABEL_9:
  qword_2CD44C0 = v6;
  return result;
}
