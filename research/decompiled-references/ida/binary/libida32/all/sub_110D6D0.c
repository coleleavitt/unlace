__m128i *__fastcall sub_110D6D0(__m128i *a1, __int64 a2)
{
  __int64 v3; // rdx
  _BYTE *v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD v11[4]; // [rsp+10h] [rbp-198h] BYREF
  __int16 v12; // [rsp+30h] [rbp-178h]
  _BYTE v13[32]; // [rsp+40h] [rbp-168h] BYREF
  __int16 v14; // [rsp+60h] [rbp-148h]
  _BYTE v15[32]; // [rsp+70h] [rbp-138h] BYREF
  __int16 v16; // [rsp+90h] [rbp-118h]
  _QWORD v17[2]; // [rsp+A0h] [rbp-108h] BYREF
  __m128i v18; // [rsp+B0h] [rbp-F8h] BYREF
  __int16 v19; // [rsp+C0h] [rbp-E8h]
  void *ptr; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-D0h]
  _BYTE v22[192]; // [rsp+E8h] [rbp-C0h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_BYTE **)(v3 + 248);
  v5 = *(_QWORD *)(v3 + 256);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  ptr = v22;
  sub_9FC110(&ptr, v4, &v4[v5]);
  v19 = 257;
  v16 = 257;
  v14 = 257;
  v11[0] = "lib";
  v12 = 259;
  sub_2266670(&ptr, v11, v13, v15, v17);
  sub_110CFE0((__int64)v17, (_DWORD *)a2, ptr, si128.m128i_i64[0]);
  if ( (_BYTE)v19 )
  {
    a1[2].m128i_i8[0] = 0;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    v9 = v17[0];
    if ( (__m128i *)v17[0] == &v18 )
    {
LABEL_13:
      a1[1] = _mm_load_si128(&v18);
      goto LABEL_10;
    }
  }
  else
  {
    v6 = *(unsigned int *)(a2 + 60);
    if ( (unsigned int)v6 <= 0x1F )
    {
      v7 = 4160750114LL;
      if ( _bittest64(&v7, v6) )
      {
        a1[2].m128i_i64[0] = 0;
        *a1 = 0;
        a1[1] = 0;
        goto LABEL_5;
      }
    }
    v12 = 260;
    v19 = 257;
    v16 = 257;
    v14 = 257;
    v11[0] = a2 + 16;
    sub_2266670(&ptr, v11, v13, v15, v17);
    v17[0] = &v18;
    sub_1107830(v17, ptr, (__int64)ptr + si128.m128i_i64[0]);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    v9 = v17[0];
    if ( (__m128i *)v17[0] == &v18 )
      goto LABEL_13;
  }
  a1->m128i_i64[0] = v9;
  a1[1].m128i_i64[0] = v18.m128i_i64[0];
LABEL_10:
  v10 = v17[1];
  a1[2].m128i_i8[0] = 1;
  a1->m128i_i64[1] = v10;
LABEL_5:
  if ( ptr != v22 )
    free(ptr);
  return a1;
}

