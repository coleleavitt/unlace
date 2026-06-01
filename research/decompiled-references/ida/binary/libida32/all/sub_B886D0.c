__int64 __fastcall sub_B886D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v9; // rsi
  unsigned int v10; // ebx
  _QWORD v11[2]; // [rsp+0h] [rbp-158h] BYREF
  int v12; // [rsp+10h] [rbp-148h]
  void *v13; // [rsp+18h] [rbp-140h]
  __m128i si128; // [rsp+20h] [rbp-138h]
  _BYTE v15[128]; // [rsp+30h] [rbp-128h] BYREF
  void *ptr; // [rsp+B0h] [rbp-A8h]
  __int64 v17; // [rsp+B8h] [rbp-A0h]
  _BYTE v18[152]; // [rsp+C0h] [rbp-98h] BYREF

  v6 = *(_QWORD *)(a1 + 120);
  if ( v6 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_6;
  }
  else
  {
    sub_A557A0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v6 = *(_QWORD *)(a1 + 120);
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_6;
  }
  if ( (*(_BYTE *)(v7 + 72) & 0x20) != 0 )
    return *(unsigned int *)(v7 + 76);
LABEL_6:
  v11[0] = 0;
  v12 = 0;
  v13 = v15;
  ptr = v18;
  v11[1] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v17 = 0x2000000000LL;
  if ( !v6 )
  {
    sub_A557A0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), v7, 0x2000000000LL, a5, a6);
    v7 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v9 = 0;
  if ( v7 )
    v9 = *(_QWORD *)v7;
  ((void (__fastcall *)(_QWORD *, __int64))sub_E883E0)(v11, v9);
  *(_DWORD *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 76) = sub_E80C50(v11);
  *(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) |= 0x20u;
  v10 = *(_DWORD *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 76);
  if ( ptr != v18 )
    free(ptr);
  if ( v13 != v15 )
    free(v13);
  operator delete();
  return v10;
}

