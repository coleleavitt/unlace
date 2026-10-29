_QWORD *__fastcall sub_B9AFB0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rbx

  v7 = sub_B8FF70(104, a1, a2, 8LL * a3, a5, a6);
  sub_B73120((__int64)v7, 0x2Eu, (__int64)a1, 0, 0, 0, 0, 0, 0, 0);
  *((_DWORD *)v7 + 25) = a3;
  *v7 = &off_2C03608;
  if ( a3 )
    memset(v7 + 13, 0, 8LL * (a3 - 1) + 8);
  return v7;
}
