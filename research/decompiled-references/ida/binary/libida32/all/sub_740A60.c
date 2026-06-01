__int64 __fastcall sub_740A60(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  char *v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v5 = sub_74E4D0(a1, a2, a3, a4, a5);
  v6 = v5 - 1;
  if ( (unsigned int)v6 < (int)qword_2CAA5B8 - (int)qword_2CAA5C0 )
  {
    if ( byte_2CA2EA8 )
    {
      return sub_741330(v5, a1);
    }
    else
    {
      v8 = v5;
      v12 = 0;
      sub_74EA60(&v12);
      if ( byte_2CAA5A1 <= 0 || (sub_750840(&v12), byte_2CAA5A1 <= 0) )
      {
        if ( a1 )
          *a1 = v12;
        if ( *qword_2CAA5C0 == 88 )
        {
          v13 = sub_740780((__int64)&v12, v8, v9, v10, v11);
          sub_7506B0(&v12, &v13);
        }
      }
      return v12;
    }
  }
  else
  {
    if ( !byte_2CAA5A1 )
      sub_74E200(a1, a2, qword_2CAA5B8 - (_QWORD)qword_2CAA5C0, v6);
    byte_2CAA5A1 = 1;
    v13 = 0;
    sub_74EA60(&v13);
    if ( byte_2CAA5A1 > 0 )
      sub_750840(&v13);
    return v13;
  }
}

