__int64 __fastcall sub_1764B70(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // r12
  int v6; // r14d
  unsigned __int64 v7; // r13
  _QWORD *v8; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // rbp
  __int16 v11; // ax
  unsigned __int8 v12; // al
  __int64 v13; // rsi
  __int64 v14; // [rsp+8h] [rbp-90h]
  __int64 v15; // [rsp+10h] [rbp-88h] BYREF
  int v16; // [rsp+18h] [rbp-80h]
  __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  __int128 v18; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+50h] [rbp-48h]

  v2 = a2;
  v3 = *(_QWORD *)(a2 + 40);
  if ( (v3 & 6) != 0 )
    return v2;
  v5 = sub_175B800(a1, (unsigned __int16 *)(v3 & 0xFFFFFFFFFFFFFFF8LL));
  result = 1;
  if ( v5 != 1 )
  {
    if ( !*(_DWORD *)(*a1 + 12632) && (*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFFFFFF8LL) == (v5 & 0xFFFFFFFFFFFFFFFELL) )
      return v2;
    v6 = *(_DWORD *)(v2 + 32);
    v7 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v2 + 16) & 4) != 0 )
    {
      v8 = *(_QWORD **)(*a1 + 248);
      v9 = v8[2390];
      v10 = *(_QWORD *)(v2 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      v2 = sub_EEE9A0(48, v8, 8u);
      *(_WORD *)v2 = *(_WORD *)v2 & 0xFE00 | 0x20;
      if ( unk_2CD7484 )
        sub_EE9B50(32);
      v11 = *(_WORD *)(v2 + 1);
      *(_QWORD *)(v2 + 8) = v9;
      *(_QWORD *)(v2 + 16) = v7 | 4;
      *(_QWORD *)(v2 + 24) = v10;
      *(_DWORD *)(v2 + 32) = v6;
      *(_WORD *)(v2 + 1) = v11 & 0xF801 | 0x1A;
      *(_DWORD *)(v2 + 36) = 0;
      *(_QWORD *)(v2 + 40) = v5 & 0xFFFFFFFFFFFFFFF8LL;
      v12 = sub_B63A40(v2);
      *(_BYTE *)(v2 + 1) = (v12 << 6) | *(_BYTE *)(v2 + 1) & 0x3F;
      *(_BYTE *)(v2 + 2) = *(_BYTE *)(v2 + 2) & 0xF8 | (v12 >> 2) & 7;
      return v2;
    }
    v18 = 0;
    *(_OWORD *)ptr = 0;
    v20 = 0;
    v13 = *(_QWORD *)(v7 + 40);
    v16 = v6;
    v15 = v13;
    sub_B85890(&v17, v13);
    result = sub_19CC2F0(
               *a1,
               (unsigned int)v5 & 0xFFFFFFFE,
               *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFFELL) + 8),
               v6,
               0,
               (unsigned int)&v18,
               0,
               0,
               (__int64)&v15,
               0,
               0,
               0);
    if ( HIDWORD(ptr[1]) )
    {
      v14 = result;
      free(ptr[0]);
      return v14;
    }
  }
  return result;
}
