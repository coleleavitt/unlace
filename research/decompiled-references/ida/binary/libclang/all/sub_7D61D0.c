_DWORD *__fastcall sub_7D61D0(_QWORD *a1, char *a2, __int64 a3)
{
  int v3; // r13d
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  _DWORD *v8; // rbp
  char *v9; // rbx

  v3 = a3;
  v5 = 24 * a3;
  v6 = 24 * a3 + 8;
  v7 = a1[274];
  a1[284] += v6;
  v8 = (_DWORD *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= (unsigned __int64)v8 + v6 && v7 )
    a1[274] = (char *)v8 + v6;
  else
    v8 = (_DWORD *)sub_7CF9B0((__int64)(a1 + 274), v6, 3);
  v9 = &a2[v5];
  *v8 = v3;
  if ( v9 != a2 )
    memmove(v8 + 2, a2, 8 * ((unsigned __int64)(v9 - a2 - 24) >> 3) + 24);
  return v8;
}

