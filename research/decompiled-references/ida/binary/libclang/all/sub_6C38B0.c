_QWORD *__fastcall sub_6C38B0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  size_t v4; // r13
  __int64 v5; // rax
  _QWORD *v6; // rbx
  char *v7; // rdx
  void *v8; // rax

  v4 = (unsigned int)sub_B1E8D0(a2);
  v5 = a1[274];
  a1[284] += v4 + 8;
  v6 = (_QWORD *)((v5 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v7 = (char *)v6 + v4 + 8;
  if ( a1[275] >= (unsigned __int64)v7 && v5 )
    a1[274] = v7;
  else
    v6 = (_QWORD *)sub_6A76A0((__int64)(a1 + 274), v4 + 8, 3);
  *v6 = a2;
  v8 = memset(v6 + 1, 0, v4);
  sub_B1D320(a1, *v6, v8, a3);
  return v6;
}

