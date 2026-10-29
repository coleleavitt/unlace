__int64 __fastcall sub_E97A80(__int64 *a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // r12d
  _QWORD v8[2]; // [rsp+0h] [rbp-158h] BYREF
  unsigned int v9; // [rsp+10h] [rbp-148h]
  void *v10; // [rsp+18h] [rbp-140h]
  __m128i si128; // [rsp+20h] [rbp-138h]
  _BYTE v12[128]; // [rsp+30h] [rbp-128h] BYREF
  void *ptr; // [rsp+B0h] [rbp-A8h]
  __int64 v14; // [rsp+B8h] [rbp-A0h]
  _BYTE v15[152]; // [rsp+C0h] [rbp-98h] BYREF

  v8[0] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v10 = v12;
  v14 = 0x2000000000LL;
  v8[1] = 0;
  v9 = 0;
  ptr = v15;
  sub_EA8690((unsigned int)v8, a2, a3, a4, a5, a6, *a1, a1[1], a1[2]);
  v6 = sub_EA4990(v8);
  if ( ptr != v15 )
    free(ptr);
  if ( v10 != v12 )
    free(v10);
  operator delete(v8[0], 16LL * v9, 8);
  return v6;
}
