__int64 __fastcall sub_747080(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // r12
  unsigned int v7; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v5 = qword_2CAA5C0;
  if ( (unsigned __int8)(*qword_2CAA5C0 - 48) > 9u )
    goto LABEL_7;
  sub_74E4D0(a1, a2, a3, a4, a5);
  a2 = qword_2CAA5C0;
  if ( (_BYTE)a1 )
  {
    ++qword_2CAA5C0;
    if ( (_BYTE)a1 == *a2 )
    {
      qword_2CAA5C0 = v5;
      v7 = 0;
      sub_74EA60(&v7);
      if ( byte_2CAA5A1 > 0 )
        sub_750840(&v7);
      ++qword_2CAA5C0;
      return v7;
    }
LABEL_7:
    sub_74E200(a1, a2, a3, a4);
  }
  qword_2CAA5C0 = v5;
  v7 = 0;
  sub_74EA60(&v7);
  if ( byte_2CAA5A1 > 0 )
    sub_750840(&v7);
  return v7;
}

