_QWORD *__fastcall sub_16BC870(_QWORD *a1, __int64 a2, int a3, unsigned __int8 a4)
{
  _QWORD *v4; // r13
  unsigned int v6; // r15d
  void *v7; // rax
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  size_t v11; // rax
  void *v12; // [rsp+8h] [rbp-90h]
  void *v13; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-80h]
  unsigned __int8 v15; // [rsp+1Ch] [rbp-7Ch]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __m128i si128; // [rsp+28h] [rbp-70h]
  _BYTE v18[96]; // [rsp+38h] [rbp-60h] BYREF

  v4 = a1 + 2;
  if ( a3 )
  {
    v14 = *(_DWORD *)(a2 + 8);
    if ( v14 > 0x40 )
      sub_2205510(&v13);
    else
      v13 = *(void **)a2;
    v15 = a4;
    sub_2206A40(&ptr, &v13);
    v6 = si128.m128i_i32[0];
    v7 = ptr;
    if ( v14 > 0x40 && v13 )
    {
      v12 = ptr;
      operator delete[](v13);
      v7 = v12;
    }
    v14 = v6;
    v15 = a4;
    v13 = v7;
    ptr = v18;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    sub_220BA90((unsigned int)&v13, (unsigned int)&ptr, 10, a4 ^ 1, 0, 1, 0);
    v8 = ptr;
    v9 = si128.m128i_i64[0];
    *a1 = v4;
    sub_16BA000(a1, v8, (__int64)&v8[v9]);
    if ( ptr != v18 )
      free(ptr);
    if ( v14 > 0x40 && v13 )
      operator delete[](v13);
  }
  else
  {
    *a1 = v4;
    v11 = j__strlen("0");
    sub_16BA000(a1, "0", (__int64)&aVoid0_0[v11 + 8]);
  }
  return a1;
}
