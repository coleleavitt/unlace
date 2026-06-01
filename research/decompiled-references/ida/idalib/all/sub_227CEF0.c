__int64 *__fastcall sub_227CEF0(__int64 *a1, __int64 a2)
{
  char v3; // al
  int v4; // edx
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  size_t v8; // rdx
  unsigned int v9; // ebx
  unsigned int v10; // r13d
  void *ptr; // [rsp+0h] [rbp-98h] BYREF
  __m128i si128; // [rsp+8h] [rbp-90h]
  _BYTE v13[24]; // [rsp+18h] [rbp-80h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+38h] [rbp-60h]
  void *v16[2]; // [rsp+40h] [rbp-58h]
  __int64 v17; // [rsp+50h] [rbp-48h]
  char v18; // [rsp+58h] [rbp-40h]
  int v19; // [rsp+5Ch] [rbp-3Ch]
  void **p_ptr; // [rsp+60h] [rbp-38h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    v3 = *(_BYTE *)(a2 + 22);
    if ( *(_BYTE *)(a2 + 21) )
      v4 = 2 * (v3 != 0);
    else
      v4 = v3 == 0 ? 1 : 3;
    sub_2232DC0((__int64)a1, *(_QWORD *)a2, v4, *(unsigned int *)(a2 + 16), 1);
    return a1;
  }
  v6 = *(_QWORD *)(a2 + 8);
  v15 = 2;
  ptr = v13;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v18 = 0;
  v14 = &off_2BEBEE0;
  v17 = 0;
  *(_OWORD *)v16 = 0;
  p_ptr = &ptr;
  v19 = 0;
  sub_2232A10((__int64)&v14, v6, 0, 0);
  v7 = *(unsigned int *)(a2 + 16);
  v8 = si128.m128i_i64[0];
  if ( v7 > si128.m128i_i64[0] )
  {
    v9 = v7 - si128.m128i_i32[0];
    if ( (unsigned int)(v7 - si128.m128i_i32[0]) <= 0x4F )
    {
      sub_227BF10(a1, byte_26FB140, v9);
    }
    else
    {
      do
      {
        v10 = 79;
        if ( v9 <= 0x4F )
          v10 = v9;
        sub_227BF10(a1, byte_26FB140, v10);
        v9 -= v10;
      }
      while ( v9 );
    }
    v8 = si128.m128i_i64[0];
  }
  sub_227BF10(a1, (unsigned __int8 *)ptr, v8);
  v14 = (__int64 (__fastcall **)())&unk_2C76210;
  if ( v19 == 1 && v16[0] )
    operator delete[](v16[0]);
  if ( ptr == v13 )
    return a1;
  free(ptr);
  return a1;
}
