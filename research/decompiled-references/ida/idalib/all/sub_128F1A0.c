void __fastcall sub_128F1A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _BYTE *v6; // r15
  signed __int64 v7; // rbx
  _QWORD *v8; // rax
  size_t v9; // rbx
  size_t v10; // rcx
  __int64 v11; // r15
  char *v12; // r8
  __m128i si128; // xmm0
  size_t v14; // r15
  _QWORD *v15; // rax
  unsigned int v16; // eax
  const char *v17; // rax
  signed __int64 v18; // r15
  unsigned __int64 v19; // rdi
  char *v20; // rax
  _QWORD *v21; // r9
  char *v22; // rax
  char *v23; // rdi
  char *v24; // [rsp+0h] [rbp-1A8h]
  size_t v25; // [rsp+8h] [rbp-1A0h]
  const char *v26; // [rsp+10h] [rbp-198h] BYREF
  __int16 v27; // [rsp+30h] [rbp-178h]
  char v28[32]; // [rsp+40h] [rbp-168h] BYREF
  __int16 v29; // [rsp+60h] [rbp-148h]
  char v30[32]; // [rsp+70h] [rbp-138h] BYREF
  __int16 v31; // [rsp+90h] [rbp-118h]
  void *src; // [rsp+A0h] [rbp-108h] BYREF
  size_t n; // [rsp+A8h] [rbp-100h]
  _QWORD v34[2]; // [rsp+B0h] [rbp-F8h] BYREF
  __int16 v35; // [rsp+C0h] [rbp-E8h]
  void *ptr; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i v37; // [rsp+D8h] [rbp-D0h]
  _BYTE v38[192]; // [rsp+E8h] [rbp-C0h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  src = v34;
  v6 = *(_BYTE **)(v5 + 104);
  v7 = *(_QWORD *)(v5 + 112);
  if ( &v6[v7] && !v6 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v7 > 0xF )
  {
    if ( v7 < 0 )
      goto LABEL_49;
    v8 = (_QWORD *)operator new(v7 + 1);
    v34[0] = v7;
    src = v8;
LABEL_29:
    memcpy(v8, v6, v7);
    v8 = src;
    goto LABEL_6;
  }
  if ( v7 == 1 )
  {
    LOBYTE(v34[0]) = *v6;
    v8 = v34;
    goto LABEL_6;
  }
  v8 = v34;
  if ( v7 )
    goto LABEL_29;
LABEL_6:
  n = v7;
  *((_BYTE *)v8 + v7) = 0;
  v9 = n;
  if ( 0x7FFFFFFFFFFFFFFFLL - n <= 3 )
    std::__throw_length_error("basic_string::append");
  v10 = n + 4;
  if ( src == v34 )
  {
    v11 = 15;
    if ( v10 <= 0xF )
      goto LABEL_9;
  }
  else
  {
    v11 = v34[0];
    if ( v10 <= v34[0] )
    {
LABEL_9:
      *(_DWORD *)((char *)src + n) = 791555631;
      v12 = (char *)src;
      goto LABEL_10;
    }
  }
  if ( (v10 & 0x8000000000000000LL) != 0LL )
LABEL_49:
    std::__throw_length_error("basic_string::_M_create");
  v18 = 2 * v11;
  if ( v10 < v18 )
  {
    v19 = v18 + 1;
    if ( v18 < 0 )
    {
      v19 = 0x8000000000000000LL;
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v19 = n + 5;
    v18 = n + 4;
  }
  v20 = (char *)operator new(v19);
  v10 = n + 4;
  v21 = src;
  v12 = v20;
  if ( n )
  {
    if ( n == 1 )
    {
      *v20 = *(_BYTE *)src;
    }
    else
    {
      v22 = (char *)memcpy(v20, src, n);
      v10 = n + 4;
      v21 = src;
      v12 = v22;
    }
  }
  *(_DWORD *)&v12[v9] = 791555631;
  if ( v21 != v34 )
  {
    v25 = v10;
    v24 = v12;
    operator delete(v21);
    v10 = v25;
    v12 = v24;
  }
  src = v12;
  v34[0] = v18;
LABEL_10:
  n = v10;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v12[v9 + 4] = 0;
  v14 = n;
  v15 = src;
  v37 = si128;
  ptr = v38;
  if ( n > 0x80 )
  {
    sub_2236E10(&ptr, v38, n, 1);
    v15 = src;
    v23 = (char *)ptr + v37.m128i_i64[0];
  }
  else
  {
    if ( !n )
      goto LABEL_12;
    v23 = v38;
  }
  memcpy(v23, v15, n);
  v15 = src;
  v14 = v37.m128i_i64[0] + n;
LABEL_12:
  v37.m128i_i64[0] = v14;
  if ( v15 != v34 )
    operator delete(v15);
  v16 = *(_DWORD *)(a1 + 48);
  if ( v16 == 17 )
  {
    v35 = 257;
    v17 = "mipsel-nacl/include/c++/v1";
    v31 = 257;
    v29 = 257;
    goto LABEL_19;
  }
  if ( v16 > 0x11 )
  {
    if ( v16 != 37 && v16 != 38 )
      goto LABEL_20;
    v35 = 257;
    v17 = "x86_64-nacl/include/c++/v1";
    v31 = 257;
    v29 = 257;
    goto LABEL_19;
  }
  if ( v16 == 1 )
  {
    v35 = 257;
    v17 = "arm-nacl/include/c++/v1";
    v31 = 257;
    v29 = 257;
LABEL_19:
    v26 = v17;
    v27 = 259;
    sub_228A3B0(&ptr, &v26, v28, v30, &src);
    v35 = 261;
    src = ptr;
    n = v37.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)&src);
  }
LABEL_20:
  if ( ptr != v38 )
    free(ptr);
}
