void __fastcall sub_1287110(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v9; // rbp
  const void *v10; // rax
  char *v11; // rdi
  __int64 v12; // [rsp+0h] [rbp-118h]
  const void *v13; // [rsp+0h] [rbp-118h]
  __int64 v14; // [rsp+8h] [rbp-110h]
  _QWORD v15[4]; // [rsp+10h] [rbp-108h] BYREF
  __int16 v16; // [rsp+30h] [rbp-E8h]
  void *ptr; // [rsp+40h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-D0h]
  _BYTE v19[192]; // [rsp+58h] [rbp-C0h] BYREF

  v9 = *(_QWORD *)(a3 + 8);
  v10 = *(const void **)a3;
  ptr = v19;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v9 > 0x80 )
  {
    v14 = a6;
    v13 = v10;
    sub_2236E10(&ptr, v19, v9, 1);
    v11 = (char *)ptr + si128.m128i_i64[0];
    v10 = v13;
    a6 = v14;
  }
  else
  {
    if ( !v9 )
      goto LABEL_3;
    v11 = v19;
  }
  v12 = a6;
  memcpy(v11, v10, v9);
  v9 += si128.m128i_i64[0];
  a6 = v12;
LABEL_3:
  si128.m128i_i64[0] = v9;
  v16 = 257;
  sub_228A3B0(&ptr, a4, a5, a6, v15);
  v15[0] = ptr;
  v16 = 261;
  v15[1] = si128.m128i_i64[0];
  sub_112FA80(a1, a2, (__int64)v15);
  if ( ptr != v19 )
    free(ptr);
}
