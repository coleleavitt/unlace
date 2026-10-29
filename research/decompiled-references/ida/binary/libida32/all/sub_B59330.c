unsigned __int64 __fastcall sub_B59330(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // r10
  __int64 v13; // rdi
  unsigned __int64 result; // rax
  __int64 v15; // r10

  v7 = a4;
  if ( a4 )
    v7 = sub_EFB000(a2, a4);
  v10 = 8LL * *(unsigned int *)(a3 + 8) + 16;
  v11 = a2[294];
  a2[304] += v10;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[295] >= v10 + v12 && v11 )
  {
    a2[294] = v10 + v12;
    v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v13 = sub_962430((__int64)(a2 + 294), v10, v10, 3, a5, a6);
  }
  result = sub_B53F40(v13, a3, v7);
  *(_QWORD *)(a1 + 152) = v15 | 6;
  return result;
}

