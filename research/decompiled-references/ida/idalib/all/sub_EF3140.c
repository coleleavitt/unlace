unsigned __int64 __fastcall sub_EF3140(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int16 v11; // ax

  v7 = 8LL * a2 + 56;
  v8 = a2;
  v9 = a1[294];
  a1[304] += v7;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v10 && v9 )
    a1[294] = v7 + v10;
  else
    v10 = sub_986170((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  v11 = *(_WORD *)v10 & 0xFE00;
  LOBYTE(v11) = -109;
  *(_WORD *)v10 = v11;
  if ( unk_2CD7484 )
    sub_EE9B50(147);
  *(_BYTE *)(v10 + 8) = 8;
  *(_QWORD *)(v10 + 12) = 0;
  *(_QWORD *)(v10 + 20) = 0;
  *(_QWORD *)(v10 + 28) = 0;
  *(_QWORD *)(v10 + 36) = 0;
  *(_QWORD *)(v10 + 44) = 0;
  *(_DWORD *)(v10 + 52) = v8;
  if ( v8 )
    memset((void *)(v10 + 56), 0, 8LL * (v8 - 1) + 8);
  return v10;
}
