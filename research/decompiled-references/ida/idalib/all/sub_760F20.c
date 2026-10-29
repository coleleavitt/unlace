__int64 __fastcall sub_760F20(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  v5 = sub_76E990(a1, a2, a3, a4, a5);
  v6 = v5 - 1;
  if ( (unsigned int)v6 < (int)qword_2CD44B8 - (int)qword_2CD44C0 )
  {
    if ( byte_2CCCDA8 )
    {
      return sub_7617F0(v5, a1);
    }
    else
    {
      v8 = v5;
      v12 = 0;
      sub_76EF20(&v12);
      if ( byte_2CD44A1 <= 0 || (sub_770D00(&v12), byte_2CD44A1 <= 0) )
      {
        if ( a1 )
          *a1 = v12;
        if ( *qword_2CD44C0 == 88 )
        {
          v13 = sub_760C40((__int64)&v12, v8, v9, v10, v11);
          sub_770B70(&v12, &v13);
        }
      }
      return v12;
    }
  }
  else
  {
    if ( !byte_2CD44A1 )
      sub_76E6C0(a1, a2, qword_2CD44B8 - (_QWORD)qword_2CD44C0, v6);
    byte_2CD44A1 = 1;
    v13 = 0;
    sub_76EF20(&v13);
    if ( byte_2CD44A1 > 0 )
      sub_770D00(&v13);
    return v13;
  }
}
