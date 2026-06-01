void *__fastcall sub_21D4550(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // r14
  __int64 v7; // rdx
  _BYTE *v8; // r13
  size_t v9; // r12
  unsigned __int64 v10; // rax
  void *v11; // rcx

  v6 = (_BYTE *)a1[3];
  v7 = a1[101];
  v8 = (_BYTE *)(8 * a2 + a1[2]);
  v9 = v6 - v8;
  a1[111] += v6 - v8;
  v10 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[102] >= v6 - v8 + v10 && v7 )
  {
    a1[101] = v9 + v10;
    v11 = (void *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v11 = (void *)sub_986170((__int64)(a1 + 101), v9, v9, 3, a5, a6);
  }
  if ( v8 != v6 )
    v11 = memmove(v11, v8, v9);
  a1[3] = a1[2] + 8 * a2;
  return v11;
}
