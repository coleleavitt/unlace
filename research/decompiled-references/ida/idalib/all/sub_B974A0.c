__int64 __fastcall sub_B974A0(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v7; // rsi
  unsigned int v8; // ebx
  _QWORD v9[2]; // [rsp+0h] [rbp-2A8h] BYREF
  unsigned int v10; // [rsp+10h] [rbp-298h]
  void *v11; // [rsp+18h] [rbp-290h]
  __m128i si128; // [rsp+20h] [rbp-288h]
  _BYTE v13[128]; // [rsp+30h] [rbp-278h] BYREF
  void *v14; // [rsp+B0h] [rbp-1F8h]
  __int64 v15; // [rsp+B8h] [rbp-1F0h]
  _BYTE v16[128]; // [rsp+C0h] [rbp-1E8h] BYREF
  _QWORD v17[2]; // [rsp+140h] [rbp-168h] BYREF
  unsigned int v18; // [rsp+150h] [rbp-158h]
  void *v19; // [rsp+158h] [rbp-150h]
  __m128i v20; // [rsp+160h] [rbp-148h]
  _BYTE v21[128]; // [rsp+170h] [rbp-138h] BYREF
  void *ptr; // [rsp+1F0h] [rbp-B8h]
  __int64 v23; // [rsp+1F8h] [rbp-B0h]
  _BYTE v24[168]; // [rsp+200h] [rbp-A8h] BYREF

  v3 = a2 & 3;
  v4 = *a1 & 3LL;
  if ( v4 == v3 )
  {
    v2 = 1;
    if ( v4 != 2 )
      return v2;
  }
  LOBYTE(v2) = v3 == 2 && v4 == 2;
  if ( !(_BYTE)v2 )
    return v2;
  v7 = *a1 & 0xFFFFFFFFFFFFFFFCLL;
  v11 = v13;
  v14 = v16;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v19 = v21;
  v20 = si128;
  v15 = 0x2000000000LL;
  v23 = 0x2000000000LL;
  v9[0] = 0;
  v9[1] = 0;
  v10 = 0;
  v17[0] = 0;
  v17[1] = 0;
  v18 = 0;
  ptr = v24;
  sub_EA4950(v9, v7);
  sub_EA4950(v17, a2 & 0xFFFFFFFFFFFFFFFCLL);
  v8 = sub_EA4990(v9);
  LOBYTE(v8) = v8 == (unsigned int)sub_EA4990(v17);
  if ( ptr != v24 )
    free(ptr);
  if ( v19 != v21 )
    free(v19);
  operator delete(v17[0], 16LL * v18, 8);
  if ( v14 != v16 )
    free(v14);
  if ( v11 != v13 )
    free(v11);
  operator delete(v9[0], 16LL * v10, 8);
  return v8;
}
