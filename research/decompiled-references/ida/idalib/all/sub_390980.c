char **__fastcall sub_390980(__int64 *a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v9; // rax

  sub_841AA0(a4);
  v5 = a1[1];
  v6 = *a1;
  if ( a1[2] < (unsigned __int64)(v5 + 1) )
  {
    v9 = qvector_reserve(a1, v6, v5 + 1, 24);
    v5 = a1[1];
    *a1 = v9;
    v6 = v9;
  }
  v7 = v6 + 24 * v5;
  *(_QWORD *)v7 = 0;
  *(_OWORD *)(v7 + 8) = 0;
  ++a1[1];
  return sub_35A790((char **)v7);
}
