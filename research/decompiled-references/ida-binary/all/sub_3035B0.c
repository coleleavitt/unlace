__int64 __fastcall sub_3035B0(int a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  __int64 v3; // rsi

  result = 500;
  v2 = a1;
  if ( a1 >= 500 )
    result = (unsigned int)a1;
  if ( a1 )
    v2 = result;
  if ( dword_8BA8D4 != v2 )
  {
    reg_int_op("CaretBlinkInterval", 1, v2, 0);
    v3 = (unsigned int)dword_8BA8D4;
    dword_8BA8D4 = v2;
    return sub_46B8B0(qword_8CD748, v3, v2);
  }
  return result;
}
