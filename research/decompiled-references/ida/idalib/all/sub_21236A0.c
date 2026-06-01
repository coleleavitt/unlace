__int64 __fastcall sub_21236A0(unsigned int a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi

  v6 = 0;
  if ( a2 )
  {
    a1 += 8;
    v6 = 8;
  }
  v7 = a3[24];
  v8 = a1;
  a3[34] += a1;
  v9 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v10 = a1 + v9;
  if ( a3[25] < v10 || !v7 )
    return v6 + sub_986170((__int64)(a3 + 24), v8, v8, 3, a5, a6);
  a3[24] = v10;
  return v6 + v9;
}
