unsigned __int64 __fastcall sub_1E86580(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  unsigned __int64 v8; // r15
  int v9; // r14d
  int v10; // r13d
  __int64 v12; // rax
  unsigned __int64 result; // rax
  char v14; // r12
  _QWORD *v15; // rsi
  __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // ebp
  unsigned __int8 v19; // al
  __int64 v20; // [rsp+8h] [rbp-40h]

  v8 = (unsigned __int64)a4;
  v9 = a3;
  v10 = a5;
  if ( (*a4 & 0x10000) == 0 )
  {
    do
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v12 + 16) != 13 || ((*(_WORD *)(v12 + 18) >> 3) & 0x1FFu) <= 0x1F1 )
        break;
      result = sub_1907C70(a1, (_QWORD *)v8, a7, a8, a3, (__int64)a4, a5, a6);
      if ( result == 1 )
        return result;
      v8 = result & 0xFFFFFFFFFFFFFFFELL;
    }
    while ( (*(_DWORD *)(result & 0xFFFFFFFFFFFFFFFELL) & 0x10000) == 0 );
  }
  if ( a2 )
    v14 = (*(_BYTE *)(v8 + 1) & 6) == 0;
  else
    v14 = ((*(_BYTE *)(v8 + 1) >> 1) & 3) == 1;
  v15 = *(_QWORD **)(a1 + 248);
  v20 = v15[2330];
  v16 = sub_EEE9A0(32, v15, 8u);
  *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x41;
  if ( unk_2CD7484 )
    sub_EE9B50(65);
  *(_DWORD *)(v16 + 16) = v9;
  *(_WORD *)(v16 + 1) &= 0xF801u;
  *(_QWORD *)(v16 + 8) = v20;
  v17 = *(_DWORD *)(v16 + 4);
  *(_DWORD *)(v16 + 20) = v10;
  *(_QWORD *)(v16 + 24) = v8;
  v18 = v17 & 0x80000000 | a2 & 0x7FFFFFFF;
  *(_DWORD *)(v16 + 4) = v18;
  *(_BYTE *)(v16 + 7) = HIBYTE(v18) & 0x7F | (v14 << 7);
  v19 = sub_B637E0(v16);
  *(_BYTE *)(v16 + 1) = (v19 << 6) | *(_BYTE *)(v16 + 1) & 0x3F;
  *(_BYTE *)(v16 + 2) = *(_BYTE *)(v16 + 2) & 0xF8 | (v19 >> 2) & 7;
  return v16;
}
