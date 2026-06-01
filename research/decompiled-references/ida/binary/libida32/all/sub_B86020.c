_DWORD *__fastcall sub_B86020(__int64 a1, int a2, const void *a3, __int64 a4, int a5)
{
  int v7; // r12d
  size_t v8; // rbp
  _DWORD *v9; // rax
  _DWORD *v10; // rbx

  v7 = a4;
  v8 = 8 * a4;
  v9 = (_DWORD *)sub_B85C20((__int64 *)(a1 + 2352), 8 * a4 + 16, 3u);
  v10 = v9;
  *v9 = a2;
  v9[1] = a5;
  v9[2] = v7;
  if ( v8 )
    memmove(v9 + 4, a3, v8);
  return v10;
}

