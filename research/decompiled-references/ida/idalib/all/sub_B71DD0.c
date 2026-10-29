__int64 __fastcall sub_B71DD0(__int64 a1)
{
  unsigned int v2; // eax
  _BYTE *v3; // rdi
  unsigned int v4; // r12d
  _QWORD v6[2]; // [rsp+0h] [rbp-168h] BYREF
  unsigned int v7; // [rsp+10h] [rbp-158h]
  void *v8; // [rsp+18h] [rbp-150h]
  __m128i si128; // [rsp+20h] [rbp-148h]
  _BYTE v10[128]; // [rsp+30h] [rbp-138h] BYREF
  void *ptr; // [rsp+B0h] [rbp-B8h]
  __int64 v12; // [rsp+B8h] [rbp-B0h]
  _BYTE v13[168]; // [rsp+C0h] [rbp-A8h] BYREF

  v6[0] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v8 = v10;
  v12 = 0x2000000000LL;
  v6[1] = 0;
  v7 = 0;
  ptr = v13;
  sub_EAB600(v6, a1, 0);
  *(_BYTE *)(a1 + 85) |= 4u;
  v2 = sub_EA4990(v6);
  v3 = ptr;
  v4 = v2;
  *(_DWORD *)(a1 + 136) = v2;
  if ( v3 != v13 )
    free(v3);
  if ( v8 != v10 )
    free(v8);
  operator delete(v6[0], 16LL * v7, 8);
  return v4;
}
