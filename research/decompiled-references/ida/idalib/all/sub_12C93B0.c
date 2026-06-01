void __fastcall sub_12C93B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rax
  size_t v7; // rbp
  const void *v8; // r15
  _WORD *v9; // rdi
  size_t v10; // r15
  char *v11; // rdi
  size_t v12; // rdx
  char *v13; // [rsp+0h] [rbp-208h] BYREF
  __int16 v14; // [rsp+20h] [rbp-1E8h]
  char *v15; // [rsp+30h] [rbp-1D8h] BYREF
  __int16 v16; // [rsp+50h] [rbp-1B8h]
  const char *v17; // [rsp+60h] [rbp-1A8h] BYREF
  __int16 v18; // [rsp+80h] [rbp-188h]
  void *src; // [rsp+90h] [rbp-178h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-170h]
  _BYTE v21[136]; // [rsp+A8h] [rbp-160h] BYREF
  void *ptr; // [rsp+130h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+138h] [rbp-D0h]
  _WORD v24[96]; // [rsp+148h] [rbp-C0h] BYREF

  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 608LL))(a1);
  if ( v5 )
  {
    if ( v5 == 1 )
      sub_2221C70("picking up libstdc++ headers is unimplemented on z/OS", 1);
    return;
  }
  v6 = a1[1];
  v7 = *(_QWORD *)(v6 + 112);
  v8 = *(const void **)(v6 + 104);
  src = v21;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v7 > 0x80 )
  {
    sub_2236E10(&src, v21, v7, 1);
    v11 = (char *)src + n[0];
LABEL_12:
    memcpy(v11, v8, v7);
    v7 += n[0];
    goto LABEL_6;
  }
  if ( v7 )
  {
    v11 = v21;
    goto LABEL_12;
  }
LABEL_6:
  n[0] = v7;
  ptr = "v1";
  v24[4] = 259;
  v17 = "c++";
  v18 = 259;
  v15 = "include";
  v16 = 259;
  v14 = 259;
  v13 = "..";
  sub_228A3B0(&src, &v13, &v15, &v17, &ptr);
  v9 = v24;
  v10 = n[0];
  ptr = v24;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( n[0] )
  {
    v12 = n[0];
    if ( n[0] <= 0x80 || (sub_2236E10(&ptr, v24, n[0], 1), v12 = n[0], v9 = ptr, n[0]) )
      memcpy(v9, src, v12);
    si128.m128i_i64[0] = v10;
  }
  sub_12C90F0((__int64)a1, &ptr, a2, a3);
  if ( ptr != v24 )
    free(ptr);
  if ( src != v21 )
    free(src);
}
