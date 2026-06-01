_QWORD *__fastcall sub_FA7520(_QWORD *a1, __int64 a2, const void *a3, size_t a4, _BYTE *a5, __int64 a6)
{
  size_t v6; // r15
  char v10; // al
  unsigned __int64 v11; // rax
  size_t v12; // rbx
  void *v13; // rbp
  signed __int64 v14; // rbx
  _BYTE *v15; // rbp
  void *v16; // rax
  char *v18; // rdi
  size_t v19; // rbp
  _BYTE *v20; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+8h] [rbp-C0h]
  void *src; // [rsp+10h] [rbp-B8h] BYREF
  size_t n; // [rsp+18h] [rbp-B0h]
  _BYTE v24[16]; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __m128i si128; // [rsp+38h] [rbp-90h]
  _BYTE v27[128]; // [rsp+48h] [rbp-80h] BYREF

  v6 = a4;
  v10 = *(_BYTE *)(a2 + 34);
  v20 = a5;
  v21 = a6;
  if ( (v10 & 0xF) == 9 )
  {
    sub_2246450(&src, &v20);
  }
  else
  {
    src = v24;
    if ( v20 )
    {
      sub_F95D80(&src, v20, (__int64)&v20[v21]);
    }
    else
    {
      n = 0;
      v24[0] = 0;
    }
  }
  ptr = v27;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  if ( a4 > 0x40 )
  {
    sub_2236E10(&ptr, v27, a4, 1);
    v18 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    v11 = 64;
    if ( !a4 )
      goto LABEL_6;
    v18 = v27;
  }
  memcpy(v18, a3, a4);
  v19 = si128.m128i_i64[0] + a4;
  si128.m128i_i64[0] = v19;
  if ( si128.m128i_i64[1] < v19 + 2 )
  {
    sub_2236E10(&ptr, v27, v19 + 2, 1);
    v19 = si128.m128i_i64[0];
  }
  *(_WORD *)((char *)ptr + v19) = 14906;
  v6 = si128.m128i_i64[0] + 2;
  v11 = si128.m128i_u64[1];
  si128.m128i_i64[0] += 2;
LABEL_6:
  v12 = n;
  v13 = src;
  if ( v11 < n + v6 )
  {
    sub_2236E10(&ptr, v27, n + v6, 1);
    v6 = si128.m128i_i64[0];
  }
  if ( v12 )
  {
    memcpy((char *)ptr + v6, v13, v12);
    v6 = si128.m128i_i64[0];
  }
  v14 = v6 + v12;
  si128.m128i_i64[0] = v14;
  if ( src != v24 )
  {
    operator delete(src);
    v14 = si128.m128i_i64[0];
  }
  v15 = ptr;
  v16 = a1 + 2;
  *a1 = a1 + 2;
  if ( &v15[v14] && !v15 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v14 > 0xF )
  {
    if ( v14 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v16 = (void *)operator new(v14 + 1);
    a1[2] = v14;
    *a1 = v16;
LABEL_25:
    memcpy(v16, v15, v14);
    v16 = (void *)*a1;
    goto LABEL_17;
  }
  if ( v14 == 1 )
  {
    *((_BYTE *)a1 + 16) = *v15;
    goto LABEL_17;
  }
  if ( v14 )
    goto LABEL_25;
LABEL_17:
  a1[1] = v14;
  *((_BYTE *)v16 + v14) = 0;
  if ( ptr != v27 )
    free(ptr);
  return a1;
}
