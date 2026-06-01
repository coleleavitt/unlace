double __fastcall sub_3F0B20(__int64 *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  __int64 *v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  double result; // xmm0_8

  v2 = (_QWORD *)a1[5];
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    operator delete(v3, 0x18u);
  }
  memset((void *)a1[3], 0, 8 * a1[4]);
  v4 = (__int64 *)a1[3];
  a1[6] = 0;
  a1[5] = 0;
  v5 = a1[4];
  if ( v4 != a1 + 9 )
  {
    v5 *= 8LL;
    operator delete(v4, v5);
  }
  v6 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v6, (const char *)v5);
  }
  return result;
}
