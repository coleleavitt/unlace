_DWORD *__fastcall sub_E9C180(_QWORD *a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  _DWORD *result; // rax
  int v10; // [rsp+8h] [rbp-20h]
  int v11; // [rsp+Ch] [rbp-1Ch]

  v8 = a1[294];
  a1[304] += 24LL;
  result = (_DWORD *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= (unsigned __int64)(result + 6) && v8 )
  {
    a1[294] = result + 6;
  }
  else
  {
    v11 = a6;
    v10 = a5;
    result = (_DWORD *)sub_962430((__int64)(a1 + 294), 24, 24, 3, a5, a6);
    LODWORD(a6) = v11;
    LODWORD(a5) = v10;
  }
  *result = a4;
  result[1] = a6;
  result[2] = 12;
  result[3] = a5;
  result[4] = a2;
  result[5] = a3;
  return result;
}

