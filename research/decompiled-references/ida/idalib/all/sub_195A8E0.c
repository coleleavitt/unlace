__int64 __fastcall sub_195A8E0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v7; // r12
  int v8; // r14d
  unsigned __int64 v9; // r13
  _QWORD *v10; // rsi
  unsigned __int64 v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int16 v14; // ax
  unsigned __int8 v15; // al
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-90h]
  __int64 v18; // [rsp+8h] [rbp-88h] BYREF
  int v19; // [rsp+10h] [rbp-80h]
  __int64 v20; // [rsp+18h] [rbp-78h] BYREF
  __int128 v21; // [rsp+28h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+38h] [rbp-58h]
  __int128 v23; // [rsp+48h] [rbp-48h]

  v4 = *(_QWORD *)(a2 + 40);
  if ( (v4 & 6) != 0 )
    return a2;
  v7 = sub_1944E10(a1, (unsigned __int16 *)(v4 & 0xFFFFFFFFFFFFFFF8LL), a3, a4);
  result = 1;
  if ( v7 != 1 )
  {
    v8 = *(_DWORD *)(a2 + 32);
    v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      v10 = *(_QWORD **)(*a1 + 248);
      v11 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL;
      v12 = v10[2390];
      v13 = sub_EEE9A0(48, v10, 8u);
      *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x20;
      if ( unk_2CD7484 )
        sub_EE9B50(32);
      v14 = *(_WORD *)(v13 + 1);
      *(_QWORD *)(v13 + 8) = v12;
      *(_QWORD *)(v13 + 16) = v9 | 4;
      *(_QWORD *)(v13 + 24) = v11;
      *(_DWORD *)(v13 + 32) = v8;
      *(_WORD *)(v13 + 1) = v14 & 0xF801 | 0x1A;
      *(_DWORD *)(v13 + 36) = 0;
      *(_QWORD *)(v13 + 40) = v7 & 0xFFFFFFFFFFFFFFF8LL;
      v15 = sub_B63A40(v13);
      *(_BYTE *)(v13 + 1) = (v15 << 6) | *(_BYTE *)(v13 + 1) & 0x3F;
      *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & 0xF8 | (v15 >> 2) & 7;
      return v13;
    }
    else
    {
      v21 = 0;
      *(_OWORD *)ptr = 0;
      v23 = 0;
      v16 = *(_QWORD *)(v9 + 40);
      v19 = v8;
      v18 = v16;
      sub_B85890(&v20, v16);
      result = sub_19CC2F0(
                 *a1,
                 (unsigned int)v7 & 0xFFFFFFFE,
                 *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFFELL) + 8),
                 v8,
                 0,
                 (unsigned int)&v21,
                 0,
                 0,
                 (__int64)&v18,
                 0,
                 0,
                 0);
      if ( HIDWORD(ptr[1]) )
      {
        v17 = result;
        free(ptr[0]);
        return v17;
      }
    }
  }
  return result;
}
