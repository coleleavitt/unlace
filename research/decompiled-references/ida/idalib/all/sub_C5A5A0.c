__int64 __fastcall sub_C5A5A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  unsigned __int8 **v12; // rax
  unsigned __int64 v13; // rbx
  const __m128i *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rbx
  unsigned __int8 v17; // al
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int8 v20; // [rsp+Fh] [rbp-139h]
  unsigned int v21; // [rsp+10h] [rbp-138h] BYREF
  char v22; // [rsp+14h] [rbp-134h]
  unsigned int v23; // [rsp+50h] [rbp-F8h] BYREF
  char v24; // [rsp+54h] [rbp-F4h]
  _QWORD v25[7]; // [rsp+58h] [rbp-F0h] BYREF
  __m128i v26; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-A8h]
  __int64 v28; // [rsp+A8h] [rbp-A0h] BYREF
  void *ptr; // [rsp+C0h] [rbp-88h]
  __int64 v30; // [rsp+D0h] [rbp-78h] BYREF
  char v31; // [rsp+110h] [rbp-38h]
  __int8 v32; // [rsp+111h] [rbp-37h]

  v8 = sub_F60F10(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
         a2,
         a3 & 0xFFFFFFFFFFFFFFF0LL,
         a4,
         a5);
  result = 0;
  if ( *(char *)(v8 + 28) < 0 )
    return result;
  if ( *(_BYTE *)(v8 + 73) >> 5 != 2 )
  {
    if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 59 > 2 )
      return sub_C59F80(*a1, a2, v8, a1[1], a1[2], v10);
    sub_7052B0((__int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104), v6, v7, v9, v10);
    if ( !*(_DWORD *)(*(_QWORD *)(v8 + 128) + 20LL) )
      return sub_C59F80(*a1, a2, v8, a1[1], a1[2], v10);
    v12 = (unsigned __int8 **)sub_E33C10(*a1, a2, 2504, 0);
    if ( v12 )
      sub_AE9DF0(v12, v8, 0xAu);
    return 0;
  }
  v13 = sub_B7E900(v8, a2, v6, v7, v9, v10);
  if ( v13 )
  {
LABEL_11:
    if ( (*(_BYTE *)(v13 + 68) & 1) == 0 || *(_QWORD *)(v13 + 40) )
    {
      v14 = (const __m128i *)a1[1];
      v26 = _mm_loadu_si128(v14);
      v27 = v14[1].m128i_i64[0];
      sub_C133F0((__int64)&v28, (__int64)&v14[1].m128i_i64[1]);
      v15 = *a1;
      v31 = v14[8].m128i_i8[0] & 1 | v31 & 0xFE;
      v31 = v14[8].m128i_i8[0] & 2 | v31 & 0xFD;
      v32 = v14[8].m128i_i8[1];
      result = sub_C15060(v15, a2, (__int64)&v26, v13);
      if ( (_BYTE)result )
      {
        v22 &= ~1u;
        v24 &= ~1u;
        v21 = 0;
        sub_A4F870(v25);
        v23 = 11;
        sub_A54D90((__int64)&v23, v13, (int *)&v21);
        sub_A4FD20(a1[2], (__int64)&v23);
        if ( v23 > 1 )
          sub_A4F8E0((int *)&v23);
        if ( v21 > 1 )
          sub_A4F8E0((int *)&v21);
        v16 = *(_QWORD *)(v13 + 48);
        LOWORD(v23) = v23 & 0xFE00 | 0x36;
        if ( unk_2CD7484 )
          sub_EE9B50(54);
        *(_WORD *)((char *)&v23 + 1) &= 0xF801u;
        v25[0] = v16;
        v17 = sub_B63130((__int64)&v23);
        v18 = *a1;
        BYTE1(v23) = (v17 << 6) | BYTE1(v23) & 0x3F;
        BYTE2(v23) = BYTE2(v23) & 0xF8 | (v17 >> 2) & 7;
        result = sub_C4F9A0(*(_QWORD *)(a1[2] + 16), v18, &v26, (__int64)&v23);
      }
      if ( ptr != &v30 )
      {
        v20 = result;
        free(ptr);
        return v20;
      }
      return result;
    }
    while ( 1 )
    {
      v19 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v13 = v19;
      if ( !v19 )
        break;
      if ( (*(_BYTE *)(v19 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_11;
    }
  }
  v24 &= ~1u;
  v26.m128i_i8[4] &= ~1u;
  v23 = 0;
  sub_A4F870(&v26.m128i_i64[1]);
  v26.m128i_i32[0] = 11;
  sub_A54D90((__int64)&v26, 0, (int *)&v23);
  sub_A4FD20(a1[2], (__int64)&v26);
  if ( v26.m128i_i32[0] > 1u )
    sub_A4F8E0(v26.m128i_i32);
  if ( v23 > 1 )
    sub_A4F8E0((int *)&v23);
  return 1;
}
