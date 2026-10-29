unsigned __int64 __fastcall sub_ECB130(_QWORD *a1, int a2, const void *a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v6; // r15
  int v7; // r14d
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // eax

  v6 = 8 * a4;
  v7 = a4;
  v11 = 8 * a4 + 16;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v13 && v12 )
    a1[294] = v11 + v13;
  else
    v13 = sub_962430((__int64)(a1 + 294), v11, v11, 3, a5, a6);
  sub_EC5910((_WORD *)v13, 130);
  v14 = *(_DWORD *)v13;
  *(_QWORD *)(v13 + 8) = a5;
  *(_DWORD *)(v13 + 4) = a2;
  *(_DWORD *)v13 = v14 & 0x1FF | (v7 << 9);
  if ( v6 )
    memmove((void *)(v13 + 16), a3, v6);
  return v13;
}

