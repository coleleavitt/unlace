_QWORD *__fastcall sub_8C4920(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *result; // rax

  v2 = a1[274];
  a1[284] += 8LL;
  result = (_QWORD *)((v2 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= (unsigned __int64)(result + 1) && v2 )
  {
    a1[274] = result + 1;
    *result = a2;
  }
  else
  {
    result = (_QWORD *)sub_8C1090((__int64)(a1 + 274), 8, 3);
    *result = a2;
  }
  return result;
}

