__int64 __fastcall sub_7792D0(__int64 a1)
{
  unsigned int v2; // eax
  _BYTE *v3; // rdi
  unsigned int v4; // ebp
  _QWORD v6[2]; // [rsp+0h] [rbp-168h] BYREF
  int v7; // [rsp+10h] [rbp-158h]
  void *v8; // [rsp+18h] [rbp-150h]
  __m128i si128; // [rsp+20h] [rbp-148h]
  _BYTE v10[128]; // [rsp+30h] [rbp-138h] BYREF
  void *ptr; // [rsp+B0h] [rbp-B8h]
  __int64 v12; // [rsp+B8h] [rbp-B0h]
  _BYTE v13[168]; // [rsp+C0h] [rbp-A8h] BYREF

  v7 = 0;
  v12 = 0x2000000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v6[0] = 0;
  v6[1] = 0;
  v8 = v10;
  ptr = v13;
  ((void (__fastcall *)(_QWORD *, __int64, _QWORD))sub_A83240)(v6, a1, 0);
  *(_BYTE *)(a1 + 85) |= 4u;
  v2 = sub_A7D0A0(v6);
  v3 = ptr;
  *(_DWORD *)(a1 + 136) = v2;
  v4 = v2;
  if ( v3 != v13 )
    free(v3);
  if ( v8 != v10 )
    free(v8);
  operator delete();
  return v4;
}

