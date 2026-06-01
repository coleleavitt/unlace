char **__fastcall sub_798AD0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v7; // rax

  v3 = a2[1];
  v4 = *a2;
  if ( a2[2] < (unsigned __int64)(v3 + 1) )
  {
    v7 = qvector_reserve(a2, v4, v3 + 1, 24);
    v3 = a2[1];
    *a2 = v7;
    v4 = v7;
  }
  v5 = v4 + 24 * v3;
  *(_QWORD *)v5 = 0;
  *(_OWORD *)(v5 + 8) = 0;
  ++a2[1];
  return sub_3573A0((char **)v5);
}

