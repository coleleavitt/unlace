__int64 __fastcall sub_A5DE00(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v10; // [rsp+8h] [rbp-10h] BYREF

  v7 = a1[294];
  a1[304] += 16LL;
  v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + 16 && v7 )
    a1[294] = v8 + 16;
  else
    v8 = sub_962430((__int64)(a1 + 294), 16, 16, 3, a5, a6);
  *(_QWORD *)(v8 + 8) = a2;
  *(_DWORD *)v8 = 1;
  sub_EFED80(&v10);
  return v10;
}

