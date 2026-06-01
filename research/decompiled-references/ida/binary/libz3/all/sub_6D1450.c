__int64 __fastcall sub_6D1450(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  int v8; // eax
  unsigned int v9; // eax
  __int64 result; // rax
  __int64 v11; // [rsp+8h] [rbp-40h]

  if ( a5 )
  {
    v11 = *a4;
    v8 = sub_182D020(qword_1C7F2C0, a3);
    sub_6CF410(a1, a2, v8, v11, a5);
  }
  v9 = sub_182D020(qword_1C7F2C0, a3);
  result = sub_6C5D80(a1, *a2, *a4, v9, a4);
  if ( !(_BYTE)result )
  {
    sub_1872CE0("");
    sub_1873130(114, 1660);
  }
  return result;
}

