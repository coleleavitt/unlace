__int64 __fastcall sub_6B4500(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v7; // rax

  v3 = a1[2];
  v4 = a1[1];
  if ( a1[3] < (unsigned __int64)(v3 + 1) )
  {
    v7 = qvector_reserve(a1 + 1, v4, v3 + 1, 24);
    v3 = a1[2];
    a1[1] = v7;
    v4 = v7;
  }
  v5 = v4 + 24 * v3;
  *(_QWORD *)v5 = 0;
  *(_OWORD *)(v5 + 8) = 0;
  ++a1[2];
  if ( a2 != -1 )
    sub_35A790((char **)v5);
  sub_35A850((__int64 *)v5);
  return 0;
}
