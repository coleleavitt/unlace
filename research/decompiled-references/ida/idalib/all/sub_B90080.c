_QWORD *__fastcall sub_B90080(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx

  result = (_QWORD *)a1[2187];
  if ( result )
  {
    v7 = result[1];
    v8 = 0;
    if ( v7 )
    {
      if ( (v7 & 4) != 0 )
        v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    }
    a1[2187] = v8;
    *result = a2;
    result[1] = 0;
  }
  else
  {
    v9 = a1[294];
    a1[304] += 16LL;
    result = (_QWORD *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[295] >= (unsigned __int64)(result + 2) && v9 )
      a1[294] = result + 2;
    else
      result = (_QWORD *)sub_986170((__int64)(a1 + 294), 16, 16, 3, a5, a6);
    *result = a2;
    result[1] = 0;
  }
  return result;
}
