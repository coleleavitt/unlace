unsigned __int64 __fastcall sub_ECB1F0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  int v11; // eax

  v7 = 8LL * a2 + 16;
  v8 = a2;
  v9 = a1[294];
  a1[304] += v7;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v10 && v9 )
    a1[294] = v7 + v10;
  else
    v10 = sub_962430((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  sub_EC5910((_WORD *)v10, 130);
  v11 = *(_DWORD *)v10;
  *(_DWORD *)(v10 + 4) = 0;
  *(_DWORD *)v10 = (v8 << 9) | v11 & 0x1FF;
  if ( v8 )
    memset((void *)(v10 + 16), 0, 8LL * (v8 - 1) + 8);
  return v10;
}

