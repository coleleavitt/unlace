unsigned __int64 __fastcall sub_C73550(_QWORD *a1, __int64 a2, __int64 a3, int a4, const void *a5, __int64 a6)
{
  __int64 v7; // rsi
  unsigned int v11; // ebp
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int16 v14; // ax
  char v15; // al

  v7 = 8 * a6 + 32;
  v11 = a6;
  v12 = a1[294];
  a1[304] += v7;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v13 && v12 )
    a1[294] = v7 + v13;
  else
    v13 = sub_962430((__int64)(a1 + 294), v7, 8 * a6 + 32, 3, (__int64)a5, a6);
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x3B;
  if ( unk_2CAD564 )
    sub_EC5E10(59);
  v14 = *(_WORD *)(v13 + 1);
  *(_QWORD *)(v13 + 8) = a2;
  *(_QWORD *)(v13 + 16) = a3;
  *(_DWORD *)(v13 + 24) = a4;
  *(_DWORD *)(v13 + 28) = v11;
  *(_WORD *)(v13 + 1) = v14 & 0xF801 | 2;
  if ( a5 && 8LL * v11 )
    memmove((void *)(v13 + 32), a5, 8LL * v11);
  v15 = *(_BYTE *)(v13 + 2);
  *(_BYTE *)(v13 + 1) |= 0xC0u;
  *(_BYTE *)(v13 + 2) = v15 & 0xF8 | 3;
  return v13;
}

