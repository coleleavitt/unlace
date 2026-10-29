_QWORD *__fastcall sub_1244800(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  size_t v4; // rbp
  const void *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE *v8; // rsi
  char *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  size_t v13; // rbp
  const void *v14; // r13
  char *v15; // [rsp+0h] [rbp-188h] BYREF
  __int16 v16; // [rsp+20h] [rbp-168h]
  char *v17; // [rsp+30h] [rbp-158h] BYREF
  __int16 v18; // [rsp+50h] [rbp-138h]
  _BYTE v19[32]; // [rsp+60h] [rbp-128h] BYREF
  __int16 v20; // [rsp+80h] [rbp-108h]
  _BYTE v21[32]; // [rsp+90h] [rbp-F8h] BYREF
  __int16 v22; // [rsp+B0h] [rbp-D8h]
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-C0h]
  _BYTE v25[176]; // [rsp+D8h] [rbp-B0h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(v3 + 496);
  v5 = *(const void **)(v3 + 488);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v25;
  if ( v4 > 0x80 )
  {
    sub_2236E10(&ptr, v25, v4, 1);
    v10 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !v4 )
      goto LABEL_3;
    v10 = v25;
  }
  memcpy(v10, v5, v4);
  v4 += si128.m128i_i64[0];
LABEL_3:
  v22 = 257;
  v20 = 257;
  v17 = "lib";
  v18 = 259;
  v16 = 259;
  v15 = "usr";
  si128.m128i_i64[0] = v4;
  sub_228A3B0(&ptr, &v15, &v17, v19, v21);
  v6 = *(unsigned int *)(a2 + 2184);
  if ( (_DWORD)v6 )
  {
    v11 = si128.m128i_i64[0];
    v12 = *(_QWORD *)(a2 + 2176) + 192 * v6 - 192;
    v13 = *(_QWORD *)(v12 + 8);
    v14 = *(const void **)v12;
    if ( v13 + si128.m128i_i64[0] > si128.m128i_i64[1] )
    {
      sub_2236E10(&ptr, v25, v13 + si128.m128i_i64[0], 1);
      v11 = si128.m128i_i64[0];
    }
    v8 = ptr;
    if ( v13 )
    {
      memcpy((char *)ptr + v11, v14, v13);
      v11 = si128.m128i_i64[0];
      v8 = ptr;
    }
    v7 = v13 + v11;
    si128.m128i_i64[0] = v13 + v11;
  }
  else
  {
    v7 = si128.m128i_i64[0];
    v8 = ptr;
  }
  *a1 = a1 + 2;
  sub_1244700(a1, v8, (__int64)&v8[v7]);
  if ( ptr != v25 )
    free(ptr);
  return a1;
}
