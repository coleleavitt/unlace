void __fastcall sub_228F6F0(const char **a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  _BYTE *v5; // rdi
  __int64 v6; // rbp
  __int64 i; // rbx
  __int64 v8; // rax
  _QWORD v9[4]; // [rsp+0h] [rbp-228h] BYREF
  __int16 v10; // [rsp+20h] [rbp-208h]
  _BYTE v11[32]; // [rsp+30h] [rbp-1F8h] BYREF
  __int16 v12; // [rsp+50h] [rbp-1D8h]
  _BYTE v13[32]; // [rsp+60h] [rbp-1C8h] BYREF
  __int16 v14; // [rsp+80h] [rbp-1A8h]
  _BYTE v15[32]; // [rsp+90h] [rbp-198h] BYREF
  __int16 v16; // [rsp+B0h] [rbp-178h]
  void *ptr; // [rsp+C0h] [rbp-168h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-160h]
  _BYTE v19[136]; // [rsp+D8h] [rbp-150h] BYREF
  void *v20; // [rsp+160h] [rbp-C8h] BYREF
  __m128i v21; // [rsp+168h] [rbp-C0h]
  _WORD v22[88]; // [rsp+178h] [rbp-B0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v19;
  sub_22538C0(a1, (__int64)&ptr);
  if ( a3 )
  {
    v22[4] = 261;
    v20 = ptr;
    v21.m128i_i64[0] = si128.m128i_i64[0];
    if ( !(unsigned __int8)sub_2289C70((void ***)&v20) )
    {
      v20 = v22;
      v21 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      sub_228D810(1, &v20);
      v16 = 257;
      v14 = 257;
      v9[0] = ptr;
      v12 = 257;
      v10 = 261;
      v9[1] = si128.m128i_i64[0];
      sub_2288C30(&v20, (__int64)v9, (__int64)v11, (__int64)v13, (__int64)v15);
      sub_228E730(&ptr, &v20);
      if ( v20 != v22 )
        free(v20);
    }
  }
  sub_9C3DB0((void **)a2, (const void **)&ptr);
  v4 = *(_QWORD *)(a2 + 8);
  if ( (unsigned __int64)(v4 + 1) > *(_QWORD *)(a2 + 16) )
  {
    sub_2236E10(a2, (const void *)(a2 + 24), v4 + 1, 1);
    v4 = *(_QWORD *)(a2 + 8);
  }
  *(_BYTE *)(*(_QWORD *)a2 + v4) = 0;
  v5 = ptr;
  if ( si128.m128i_i32[0] )
  {
    v6 = (unsigned int)(si128.m128i_i32[0] - 1);
    for ( i = 0; ; i = v8 )
    {
      if ( v5[i] == 37 )
      {
        *(_BYTE *)(*(_QWORD *)a2 + i) = a0123456789abcd_5[sub_2290D70() & 0xF];
        v8 = i + 1;
        v5 = ptr;
        if ( i == v6 )
          break;
      }
      else
      {
        v8 = i + 1;
        if ( i == v6 )
          break;
      }
    }
  }
  if ( v5 != v19 )
    free(v5);
}
