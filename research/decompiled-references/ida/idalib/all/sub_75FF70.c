__int64 __fastcall sub_75FF70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // r12
  __int64 result; // rax
  char *v7; // rdx
  char *v8; // rcx

  v5 = qword_2CD44C0;
  result = sub_76E990(a1, a2, a3, a4, a5);
  v7 = qword_2CD44C0;
  v8 = (char *)(qword_2CD44C0 - v5);
  if ( (_DWORD)qword_2CD44C0 == (_DWORD)v5 )
  {
    if ( !*qword_2CD44C0 )
    {
      v7 = &byte_2CD44A1;
      if ( byte_2CD44A1 )
      {
        byte_2CD44A1 = 1;
        return (unsigned int)v8;
      }
    }
LABEL_12:
    sub_76E6C0(a1, a2, v7, v8);
  }
  if ( (_DWORD)v8 == 1 || (_DWORD)a1 == -1 || *qword_2CD44C0 != 95 )
  {
    v7 = v5 + 1;
    result = (unsigned int)(*v5 - 48);
  }
  else
  {
    v7 = qword_2CD44C0 + 1;
  }
  qword_2CD44C0 = v7;
  if ( !(_DWORD)result && (_DWORD)a1 )
    goto LABEL_12;
  return result;
}
