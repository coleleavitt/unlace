_QWORD *__fastcall sub_117E810(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  const void *v4; // r13
  size_t v5; // rbp
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  char *v9; // rdi
  char *v10; // [rsp+0h] [rbp-188h] BYREF
  __int16 v11; // [rsp+20h] [rbp-168h]
  _BYTE v12[32]; // [rsp+30h] [rbp-158h] BYREF
  __int16 v13; // [rsp+50h] [rbp-138h]
  _BYTE v14[32]; // [rsp+60h] [rbp-128h] BYREF
  __int16 v15; // [rsp+80h] [rbp-108h]
  _BYTE v16[32]; // [rsp+90h] [rbp-F8h] BYREF
  __int16 v17; // [rsp+B0h] [rbp-D8h]
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-C0h]
  _BYTE v20[176]; // [rsp+D8h] [rbp-B0h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  if ( !*(_BYTE *)(a2 + 5016) && !(unsigned __int8)sub_117E470(*(_QWORD *)(a2 + 8)) )
  {
    sub_112FE60(a1, (__int64 *)a2);
    return a1;
  }
  v4 = *(const void **)(v3 + 248);
  v5 = *(_QWORD *)(v3 + 256);
  ptr = v20;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v5 > 0x80 )
  {
    sub_2236E10(&ptr, v20, v5, 1);
    v9 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !v5 )
      goto LABEL_5;
    v9 = v20;
  }
  memcpy(v9, v4, v5);
  v5 += si128.m128i_i64[0];
LABEL_5:
  v13 = 257;
  v17 = 257;
  v15 = 257;
  v11 = 259;
  v10 = "lib";
  si128.m128i_i64[0] = v5;
  sub_228A3B0(&ptr, &v10, v12, v14, v16);
  v6 = ptr;
  v7 = si128.m128i_i64[0];
  *a1 = a1 + 2;
  sub_117E5C0(a1, v6, (__int64)&v6[v7]);
  if ( ptr != v20 )
    free(ptr);
  return a1;
}
