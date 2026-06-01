unsigned __int64 __fastcall sub_C96BD0(_QWORD *a1, int a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r8
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v12; // rax

  v6 = a3;
  v8 = 8 * (a2 + 1 + (unsigned int)a3) + 32;
  v9 = a1[294];
  a1[304] += v8;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + v10 && v9 )
  {
    a1[294] = v8 + v10;
  }
  else
  {
    v12 = sub_986170((__int64)(a1 + 294), v8, v8, 3, a3, a6);
    v6 = a3;
    v10 = v12;
  }
  sub_BF9A40(v10, 0x5Au, 0, a2, v6);
  *(_DWORD *)(v10 + 24) = 0;
  return v10;
}
