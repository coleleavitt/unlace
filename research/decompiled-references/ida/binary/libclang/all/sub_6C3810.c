_QWORD *__fastcall sub_6C3810(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  size_t v5; // r12
  __int64 v6; // rsi
  _QWORD *v7; // rbx

  if ( !a3 )
    a3 = sub_B1E8D0(a2);
  v4 = a1[274];
  v5 = a3;
  v6 = a3 + 8LL;
  a1[284] += v6;
  v7 = (_QWORD *)((v4 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= (unsigned __int64)v7 + v6 && v4 )
    a1[274] = (char *)v7 + v6;
  else
    v7 = (_QWORD *)sub_6A76A0((__int64)(a1 + 274), v6, 3);
  *v7 = a2;
  memset(v7 + 1, 0, v5);
  return v7;
}

