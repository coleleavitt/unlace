_QWORD *__fastcall sub_A5DBD0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  size_t v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // rbx
  char *v9; // rdx
  void *v10; // rax

  v6 = (unsigned int)sub_F48820(a2);
  v7 = a1[294];
  a1[304] += v6 + 8;
  v8 = (_QWORD *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v9 = (char *)v8 + v6 + 8;
  if ( a1[295] >= (unsigned __int64)v9 && v7 )
    a1[294] = v9;
  else
    v8 = (_QWORD *)sub_962430((__int64)(a1 + 294), v6 + 8, v6 + 8, 3, v4, v5);
  *v8 = a2;
  v10 = memset(v8 + 1, 0, v6);
  sub_F49F30(a1, *v8, v10, a3);
  return v8;
}

