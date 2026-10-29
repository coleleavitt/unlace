unsigned __int8 __fastcall sub_73BC30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 result; // al
  char *v5; // rbx
  char *v6; // rsi

  if ( *qword_2CAA5C0 == 110 )
  {
    if ( (unsigned __int8)(qword_2CAA5C0[1] - 49) <= 8u )
    {
      v5 = ++qword_2CAA5C0;
      if ( a1 )
        sub_74F860(a1, 45);
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
        return sub_74EA60(a1);
      goto LABEL_9;
    }
LABEL_14:
    sub_74E200(a1, qword_2CAA5C0, a3, a4);
  }
  result = *qword_2CAA5C0 - 48;
  if ( *qword_2CAA5C0 != 48 )
  {
    if ( result <= 9u )
    {
      v5 = qword_2CAA5C0 + 1;
      goto LABEL_5;
    }
    goto LABEL_14;
  }
  v6 = qword_2CAA5C0 + 1;
  if ( a1 )
    return sub_74EA60(a1);
LABEL_9:
  qword_2CAA5C0 = v6;
  return result;
}

