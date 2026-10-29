__int64 __fastcall sub_7AAA70(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // r14
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
  {
    return *(unsigned int *)(v1 + 12);
  }
  else
  {
    ptr = v13;
    v12 = 0x2000000000LL;
    v4 = *(_QWORD *)(v1 + 88);
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
    v7 = 0;
    v6[0] = 0;
    v6[1] = 0;
    v8 = v10;
    ((void (__fastcall *)(_QWORD *, __int64))sub_A84950)(v6, v4);
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 11LL) |= 1u;
    v5 = *(_QWORD *)(a1 + 128);
    *(_DWORD *)(v5 + 12) = sub_A7D0A0(v6);
    v2 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 12LL);
    if ( ptr != v13 )
      free(ptr);
    if ( v8 != v10 )
      free(v8);
    operator delete();
  }
  return v2;
}

