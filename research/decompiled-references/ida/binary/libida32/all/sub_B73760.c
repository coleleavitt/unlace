__int64 __fastcall sub_B73760(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // [rsp+0h] [rbp-2A8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-2A0h]
  int v15; // [rsp+10h] [rbp-298h]
  void *v16; // [rsp+18h] [rbp-290h]
  __m128i si128; // [rsp+20h] [rbp-288h]
  _BYTE v18[128]; // [rsp+30h] [rbp-278h] BYREF
  void *v19; // [rsp+B0h] [rbp-1F8h]
  __int64 v20; // [rsp+B8h] [rbp-1F0h]
  _BYTE v21[128]; // [rsp+C0h] [rbp-1E8h] BYREF
  _QWORD v22[2]; // [rsp+140h] [rbp-168h] BYREF
  int v23; // [rsp+150h] [rbp-158h]
  void *v24; // [rsp+158h] [rbp-150h]
  __m128i v25; // [rsp+160h] [rbp-148h]
  _BYTE v26[128]; // [rsp+170h] [rbp-138h] BYREF
  void *ptr; // [rsp+1F0h] [rbp-B8h]
  __int64 v28; // [rsp+1F8h] [rbp-B0h]
  _BYTE v29[168]; // [rsp+200h] [rbp-A8h] BYREF

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
  v16 = v18;
  v19 = v21;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v24 = v26;
  v25 = si128;
  v20 = 0x2000000000LL;
  v28 = 0x2000000000LL;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v22[0] = 0;
  v22[1] = 0;
  v23 = 0;
  ptr = v29;
  ((void (__fastcall *)(__int64 *, unsigned __int64))sub_E80C10)(&v13, v7);
  sub_E80C10(v22, a2 & 0xFFFFFFFFFFFFFFFCLL, v8, v9, v10, v11, v13, v14, v15);
  v12 = sub_E80C50(&v13);
  LOBYTE(v12) = v12 == (unsigned int)sub_E80C50(v22);
  if ( ptr != v29 )
    free(ptr);
  if ( v24 != v26 )
    free(v24);
  operator delete();
  if ( v19 != v21 )
    free(v19);
  if ( v16 != v18 )
    free(v16);
  operator delete();
  return v12;
}

