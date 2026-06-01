_QWORD *__fastcall sub_7A8DC0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  _QWORD *v5; // rbx

  v4 = 8LL * a3;
  v5 = sub_7943D0(104, a1, a2, v4);
  sub_77B010((__int64)v5, 0x2Cu, (__int64)a1, 0, 0, 0, 0, 0, 0, 0);
  *((_DWORD *)v5 + 25) = a3;
  *v5 = &off_49F5CE0;
  if ( a3 )
    memset(v5 + 13, 0, v4);
  return v5;
}

