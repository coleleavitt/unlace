__int64 __fastcall sub_B551F0(__int64 a1)
{
  unsigned int v2; // ebp
  _QWORD v3[2]; // [rsp+0h] [rbp-168h] BYREF
  int v4; // [rsp+10h] [rbp-158h]
  void *v5; // [rsp+18h] [rbp-150h]
  __m128i si128; // [rsp+20h] [rbp-148h]
  _BYTE v7[128]; // [rsp+30h] [rbp-138h] BYREF
  void *ptr; // [rsp+B0h] [rbp-B8h]
  __int64 v9; // [rsp+B8h] [rbp-B0h]
  _BYTE v10[168]; // [rsp+C0h] [rbp-A8h] BYREF

  if ( (*(_DWORD *)(a1 + 76) & 0xFFFFFF80) != 0 )
    return *(_DWORD *)(a1 + 76) >> 7;
  v3[0] = 0;
  v5 = v7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v9 = 0x2000000000LL;
  v3[1] = 0;
  v4 = 0;
  ptr = v10;
  ((void (__fastcall *)(_QWORD *, __int64))sub_E875F0)(v3, a1);
  v2 = (unsigned int)sub_E80C50(v3) >> 7;
  *(_DWORD *)(a1 + 76) = (v2 << 7) | *(_DWORD *)(a1 + 76) & 0x7F;
  if ( ptr != v10 )
    free(ptr);
  if ( v5 != v7 )
    free(v5);
  operator delete();
  return v2;
}

