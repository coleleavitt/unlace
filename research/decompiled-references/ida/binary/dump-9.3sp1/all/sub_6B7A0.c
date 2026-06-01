__int64 *__fastcall sub_6B7A0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rbp

  v2 = *a1;
  if ( v2 )
  {
    a1[1] = 0;
    qfree(v2);
    *a1 = 0;
    a1[2] = 0;
  }
  v3 = (int)qvsnprintf();
  if ( (_DWORD)v3 )
  {
    v4 = (int)v3 + 1LL;
    if ( a1[2] < v4 )
      *a1 = qvector_reserve((__int64)a1, *a1, v3 + 1, 1);
    a1[1] = v4;
    qvsnprintf();
  }
  return a1;
}
