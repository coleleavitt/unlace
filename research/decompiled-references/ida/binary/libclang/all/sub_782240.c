__int64 __fastcall sub_782240(__int64 a1)
{
  unsigned int v3; // eax
  _BYTE *v4; // rdi
  unsigned int v5; // ebp
  _QWORD v6[2]; // [rsp+0h] [rbp-168h] BYREF
  int v7; // [rsp+10h] [rbp-158h]
  void *v8; // [rsp+18h] [rbp-150h]
  __m128i si128; // [rsp+20h] [rbp-148h]
  _BYTE v10[128]; // [rsp+30h] [rbp-138h] BYREF
  void *ptr; // [rsp+B0h] [rbp-B8h]
  __int64 v12; // [rsp+B8h] [rbp-B0h]
  _BYTE v13[168]; // [rsp+C0h] [rbp-A8h] BYREF

  if ( (*(_BYTE *)(a1 + 77) & 4) != 0 )
    return *(unsigned int *)(a1 + 152);
  v7 = 0;
  v12 = 0x2000000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v6[0] = 0;
  v6[1] = 0;
  v8 = v10;
  ptr = v13;
  ((void (__fastcall *)(_QWORD *, __int64))sub_A82F00)(v6, a1);
  *(_BYTE *)(a1 + 77) |= 4u;
  v3 = sub_A7D0A0(v6);
  v4 = ptr;
  *(_DWORD *)(a1 + 152) = v3;
  v5 = v3;
  if ( v4 != v13 )
    free(v4);
  if ( v8 != v10 )
    free(v8);
  operator delete();
  return v5;
}

