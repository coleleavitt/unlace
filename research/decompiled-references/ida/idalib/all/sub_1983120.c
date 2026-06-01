__int64 __fastcall sub_1983120(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 result; // rax
  unsigned __int64 v7; // r12
  int v8; // r15d
  unsigned __int64 v9; // r13
  _QWORD *v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rbp
  __int16 v13; // ax
  unsigned __int8 v14; // al
  __int64 v15; // [rsp+8h] [rbp-90h]
  __int64 v16; // [rsp+10h] [rbp-88h] BYREF
  int v17; // [rsp+18h] [rbp-80h]
  __int64 v18; // [rsp+20h] [rbp-78h] BYREF
  __int128 v19; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v21; // [rsp+50h] [rbp-48h]

  v4 = a2;
  v5 = *(_QWORD *)(a2 + 40);
  if ( (v5 & 6) != 0 )
    return v4;
  v7 = sub_190CCA0(a1, (unsigned __int16 *)(v5 & 0xFFFFFFFFFFFFFFF8LL), a3, a4);
  result = 1;
  if ( v7 != 1 )
  {
    if ( (v7 & 0xFFFFFFFFFFFFFFFELL) == (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFFFFFF8LL) )
      return v4;
    v8 = *(_DWORD *)(v4 + 32);
    v9 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
    {
      v10 = *(_QWORD **)(*a1 + 248);
      v11 = *(_QWORD *)(v4 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      v12 = v10[2390];
      v4 = sub_EEE9A0(48, v10, 8u);
      *(_WORD *)v4 = *(_WORD *)v4 & 0xFE00 | 0x20;
      if ( unk_2CD7484 )
        sub_EE9B50(32);
      v13 = *(_WORD *)(v4 + 1);
      *(_QWORD *)(v4 + 8) = v12;
      *(_QWORD *)(v4 + 16) = v9 | 4;
      *(_QWORD *)(v4 + 24) = v11;
      *(_DWORD *)(v4 + 32) = v8;
      *(_WORD *)(v4 + 1) = v13 & 0xF801 | 0x1A;
      *(_DWORD *)(v4 + 36) = 0;
      *(_QWORD *)(v4 + 40) = v7 & 0xFFFFFFFFFFFFFFF8LL;
      v14 = sub_B63A40(v4);
      *(_BYTE *)(v4 + 1) = (v14 << 6) | *(_BYTE *)(v4 + 1) & 0x3F;
      *(_BYTE *)(v4 + 2) = *(_BYTE *)(v4 + 2) & 0xF8 | (v14 >> 2) & 7;
      return v4;
    }
    v17 = *(_DWORD *)(v4 + 32);
    v19 = 0;
    *(_OWORD *)ptr = 0;
    v21 = 0;
    v16 = *(_QWORD *)(v9 + 40);
    sub_B85890(&v18, v16);
    result = sub_19CC2F0(
               *a1,
               (unsigned int)v7 & 0xFFFFFFFE,
               *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFFELL) + 8),
               v8,
               0,
               (unsigned int)&v19,
               0,
               0,
               (__int64)&v16,
               0,
               0,
               0);
    if ( HIDWORD(ptr[1]) )
    {
      v15 = result;
      free(ptr[0]);
      return v15;
    }
  }
  return result;
}
