__int64 __fastcall sub_1FBEE10(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rsi
  unsigned __int64 v8; // rax
  int v9; // ecx
  int v10; // esi
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // edx
  __int64 v14; // rsi
  __int64 result; // rax
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rsi

  v7 = (__int64 *)(a2 + 96);
  if ( !a2 )
    v7 = nullptr;
  sub_1FB74B0(a1, v7, a3, a4, a5, a6);
  sub_1FBE940(a1, a2);
  sub_9B9C90(a1[3], *(_WORD *)(a2 + 30) & 0x3FFF);
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 <= 2 )
  {
    v9 = 0;
    v8 = *(_QWORD *)(a2 + 72);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 72);
    v9 = 8 * ((v8 >> 16) & 1);
  }
  v10 = (((v8 & 0x200000) != 0) << 6)
      | (32 * ((v8 & 0x80000) != 0))
      | (*(_BYTE *)(a2 + 73) >> 5)
      | (16 * ((v8 & 0x40000) != 0));
  v11 = *(_QWORD *)(a2 + 120);
  v12 = v9 | v10;
  if ( (v11 & 4) != 0 )
  {
    LOBYTE(v12) = v12 | 0x80;
  }
  else
  {
    v13 = v12;
    if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      BYTE1(v13) = BYTE1(v12) | 1;
      v12 = v13;
    }
  }
  sub_9B9C90(a1[3], v12);
  sub_1F6F5B0((_QWORD *)a1[2], *(_QWORD *)(a2 + 112), a1[3]);
  v14 = *(_QWORD *)(a2 + 120);
  result = (v14 >> 2) & 1;
  v16 = result;
  if ( ((v14 >> 2) & 1) != 0 )
    return sub_1F9A6F0(a1 + 1, v14 & 0xFFFFFFFFFFFFFFF8LL);
  v17 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    sub_1F92A90(a1[2], v14 & 0xFFFFFFFFFFFFFFF8LL, a1[3]);
    v21 = *(_QWORD *)(v17 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v17 + 40) & 7) != 0 )
      v21 = v16;
    return sub_1F80F20(a1[2], v21, a1[3], v18, v19, v20);
  }
  return result;
}
