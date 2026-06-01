__int64 __fastcall sub_E74940(__int64 a1)
{
  unsigned int v1; // r12d
  _QWORD v3[2]; // [rsp+0h] [rbp-158h] BYREF
  int v4; // [rsp+10h] [rbp-148h]
  void *v5; // [rsp+18h] [rbp-140h]
  __m128i si128; // [rsp+20h] [rbp-138h]
  _BYTE v7[128]; // [rsp+30h] [rbp-128h] BYREF
  void *ptr; // [rsp+B0h] [rbp-A8h]
  __int64 v9; // [rsp+B8h] [rbp-A0h]
  _BYTE v10[152]; // [rsp+C0h] [rbp-98h] BYREF

  v3[0] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v5 = v7;
  v9 = 0x2000000000LL;
  v3[1] = 0;
  v4 = 0;
  ptr = v10;
  ((void (__fastcall *)(_QWORD *, __int64))sub_E853B0)(v3, a1);
  v1 = sub_E80C50(v3);
  if ( ptr != v10 )
    free(ptr);
  if ( v5 != v7 )
    free(v5);
  operator delete();
  return v1;
}

