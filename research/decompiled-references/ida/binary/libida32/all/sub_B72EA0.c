__int64 __fastcall sub_B72EA0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // r13
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+0h] [rbp-168h] BYREF
  int v7; // [rsp+10h] [rbp-158h]
  void *v8; // [rsp+18h] [rbp-150h]
  __m128i si128; // [rsp+20h] [rbp-148h]
  _BYTE v10[128]; // [rsp+30h] [rbp-138h] BYREF
  void *ptr; // [rsp+B0h] [rbp-B8h]
  __int64 v12; // [rsp+B8h] [rbp-B0h]
  _BYTE v13[168]; // [rsp+C0h] [rbp-A8h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v1 + 11) & 1) != 0 )
    return *(unsigned int *)(v1 + 12);
  v12 = 0x2000000000LL;
  ptr = v13;
  v2 = *(_QWORD *)(v1 + 88);
  v8 = v10;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v6[0] = 0;
  v6[1] = 0;
  v7 = 0;
  ((void (__fastcall *)(_QWORD *, __int64))sub_E88F30)(v6, v2);
  *(_BYTE *)(*(_QWORD *)(a1 + 128) + 11LL) |= 1u;
  v3 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)(v3 + 12) = sub_E80C50(v6);
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 12LL);
  if ( ptr != v13 )
    free(ptr);
  if ( v8 != v10 )
    free(v8);
  operator delete();
  return v4;
}

