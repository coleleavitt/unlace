_DWORD *__fastcall sub_BA6010(_QWORD *a1, const void *a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rax
  _DWORD *v11; // rbx

  v8 = 8LL * a3 + 8;
  v9 = 8 * a3 + 8;
  v10 = a1[294];
  a1[304] += v9;
  v11 = (_DWORD *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= (unsigned __int64)v11 + v9 && v10 )
    a1[294] = (char *)v11 + v9;
  else
    v11 = (_DWORD *)sub_986170((__int64)(a1 + 294), v9, 8 * a3 + 8, 3, a5, a6);
  *v11 = a3;
  if ( v8 != 8 )
    memmove(v11 + 2, a2, v8 - 8);
  return v11;
}
