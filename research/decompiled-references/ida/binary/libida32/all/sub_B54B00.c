__int64 __fastcall sub_B54B00(__int64 a1)
{
  unsigned int v1; // r12d
  unsigned int v4; // eax
  _BYTE *v5; // rdi
  _QWORD v6[2]; // [rsp+0h] [rbp-168h] BYREF
  int v7; // [rsp+10h] [rbp-158h]
  void *v8; // [rsp+18h] [rbp-150h]
  __m128i si128; // [rsp+20h] [rbp-148h]
  _BYTE v10[128]; // [rsp+30h] [rbp-138h] BYREF
  void *ptr; // [rsp+B0h] [rbp-B8h]
  __int64 v12; // [rsp+B8h] [rbp-B0h]
  _BYTE v13[168]; // [rsp+C0h] [rbp-A8h] BYREF

  if ( (*(_BYTE *)(a1 + 77) & 4) != 0 )
  {
    return *(unsigned int *)(a1 + 152);
  }
  else
  {
    v6[0] = 0;
    v8 = v10;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
    v12 = 0x2000000000LL;
    v6[1] = 0;
    v7 = 0;
    ptr = v13;
    ((void (__fastcall *)(_QWORD *, __int64))sub_E872A0)(v6, a1);
    *(_BYTE *)(a1 + 77) |= 4u;
    v4 = sub_E80C50(v6);
    v5 = ptr;
    v1 = v4;
    *(_DWORD *)(a1 + 152) = v4;
    if ( v5 != v13 )
      free(v5);
    if ( v8 != v10 )
      free(v8);
    operator delete();
  }
  return v1;
}

