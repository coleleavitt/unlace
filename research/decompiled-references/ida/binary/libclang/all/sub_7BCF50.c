__int64 __fastcall sub_7BCF50(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // [rsp+0h] [rbp-168h] BYREF
  __int64 v6; // [rsp+8h] [rbp-160h]
  int v7; // [rsp+10h] [rbp-158h]
  void *v8; // [rsp+18h] [rbp-150h]
  __m128i si128; // [rsp+20h] [rbp-148h]
  _BYTE v10[128]; // [rsp+30h] [rbp-138h] BYREF
  void *ptr; // [rsp+B0h] [rbp-B8h]
  __int64 v12; // [rsp+B8h] [rbp-B0h]
  _BYTE v13[168]; // [rsp+C0h] [rbp-A8h] BYREF

  v1 = *(_QWORD *)(a1 + 104);
  if ( v1 )
  {
    if ( v1 > 7 )
    {
LABEL_3:
      if ( (*(_BYTE *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 32) & 1) != 0 )
        return *(unsigned int *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 36);
      v7 = 0;
      v5 = 0;
      v6 = 0;
      v8 = v10;
      ptr = v13;
      v12 = 0x2000000000LL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
      goto LABEL_8;
    }
    v7 = 0;
    v5 = 0;
    v6 = 0;
    v8 = v10;
    ptr = v13;
    v12 = 0x2000000000LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
LABEL_15:
    v3 = 0;
    goto LABEL_9;
  }
  sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
  v1 = *(_QWORD *)(a1 + 104);
  if ( v1 > 7 )
    goto LABEL_3;
  v7 = 0;
  v5 = 0;
  v6 = 0;
  v8 = v10;
  ptr = v13;
  v12 = 0x2000000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  if ( v1 )
    goto LABEL_15;
  sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
  v1 = *(_QWORD *)(a1 + 104);
  if ( v1 <= 7 )
    goto LABEL_15;
LABEL_8:
  v3 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_9:
  ((void (__fastcall *)(__int64 *, __int64))sub_A84400)(&v5, v3);
  *(_DWORD *)((*(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL) + 36) = sub_A7D0A0(&v5);
  *(_BYTE *)((*(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL) + 32) |= 1u;
  v4 = *(_DWORD *)((*(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL) + 36);
  if ( ptr != v13 )
    free(ptr);
  if ( v8 != v10 )
    free(v8);
  operator delete();
  return v4;
}

