__int64 __fastcall sub_7829A0(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  _QWORD v4[2]; // [rsp+0h] [rbp-168h] BYREF
  int v5; // [rsp+10h] [rbp-158h]
  void *v6; // [rsp+18h] [rbp-150h]
  __m128i si128; // [rsp+20h] [rbp-148h]
  _BYTE v8[128]; // [rsp+30h] [rbp-138h] BYREF
  void *ptr; // [rsp+B0h] [rbp-B8h]
  __int64 v10; // [rsp+B8h] [rbp-B0h]
  _BYTE v11[168]; // [rsp+C0h] [rbp-A8h] BYREF

  if ( *(_DWORD *)(a1 + 76) > 0x7Fu )
    return *(_DWORD *)(a1 + 76) >> 7;
  v5 = 0;
  v10 = 0x2000000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v4[0] = 0;
  v4[1] = 0;
  v6 = v8;
  ptr = v11;
  ((void (__fastcall *)(_QWORD *, __int64))sub_A82340)(v4, a1);
  v2 = sub_A7D0A0(v4);
  v3 = v2 >> 7;
  *(_DWORD *)(a1 + 76) = v2 & 0xFFFFFF80 | *(_DWORD *)(a1 + 76) & 0x7F;
  if ( ptr != v11 )
    free(ptr);
  if ( v6 != v8 )
    free(v6);
  operator delete();
  return v3;
}

