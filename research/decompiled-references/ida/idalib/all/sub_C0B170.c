_BYTE *__fastcall sub_C0B170(_QWORD *a1, _QWORD *a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  _BYTE *v7; // rcx
  _BYTE *result; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rbx

  v6 = a3;
  v7 = (_BYTE *)a1[3];
  result = (_BYTE *)a1[2];
  v9 = (v7 - result) >> 3;
  if ( v6 >= v9 )
  {
    if ( v6 > v9 )
    {
      if ( v6 > (__int64)((a1[4] & 0xFFFFFFFFFFFFFFF8LL) - (_QWORD)result) >> 3 )
      {
        sub_C0B060((__int64)(a1 + 2), a2, v6, (__int64)v7, a5, a6);
        result = (_BYTE *)a1[2];
        v7 = (_BYTE *)a1[3];
      }
      v10 = 8 * v6;
      result += v10;
      if ( v7 != result )
      {
        memset(v7, 0, 8 * ((unsigned __int64)(result - v7 - 8) >> 3) + 8);
        result = (_BYTE *)(v10 + a1[2]);
      }
      a1[3] = result;
    }
  }
  else
  {
    result += 8 * v6;
    a1[3] = result;
  }
  return result;
}
