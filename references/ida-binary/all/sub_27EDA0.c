unsigned __int64 __fastcall sub_27EDA0(const char *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  unsigned __int64 result; // rax
  _QWORD **v6; // rbx
  _QWORD **v7; // r12
  _QWORD *v9; // rdi

  result = xmmword_8CC7D8;
  v6 = (_QWORD **)qword_8CC7D0;
  v7 = (_QWORD **)(qword_8CC7D0 + 8 * xmmword_8CC7D8);
  if ( v7 != (_QWORD **)qword_8CC7D0 )
  {
    do
    {
      v9 = *v6;
      a2 = (__int64)a1;
      ++v6;
      result = sub_27DBC0(v9, a1);
    }
    while ( v7 != v6 );
  }
  if ( qword_8CC7C0 )
    return sub_27EC10(qword_8CC7C0, a2, a5, a3, a4);
  return result;
}
