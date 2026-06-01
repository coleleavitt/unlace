__m128i *__fastcall sub_10C3100(__m128i *a1, __int64 *a2, _QWORD *a3, char *a4)
{
  __int64 v7; // r15
  size_t v8; // rax
  size_t v9; // r13
  void *v10; // r15
  __int64 v11; // rax
  unsigned __int8 (__fastcall *v12)(__int64, __m128i **); // rdx
  char *v14; // rdi
  __int64 v15; // rax
  void *src; // [rsp+0h] [rbp-1B8h] BYREF
  size_t n; // [rsp+8h] [rbp-1B0h]
  __int64 v18; // [rsp+10h] [rbp-1A8h] BYREF
  const char *v19; // [rsp+20h] [rbp-198h] BYREF
  __int16 v20; // [rsp+40h] [rbp-178h]
  _BYTE v21[32]; // [rsp+50h] [rbp-168h] BYREF
  __int16 v22; // [rsp+70h] [rbp-148h]
  _BYTE v23[32]; // [rsp+80h] [rbp-138h] BYREF
  __int16 v24; // [rsp+A0h] [rbp-118h]
  __m128i *v25; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-100h]
  __m128i v27; // [rsp+C0h] [rbp-F8h] BYREF
  __int16 v28; // [rsp+D0h] [rbp-E8h]
  void *ptr; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-D0h]
  _BYTE v31[192]; // [rsp+F8h] [rbp-C0h] BYREF

  v7 = *a2;
  v8 = j__strlen(a4);
  sub_10C27E0(&src, a3, a4, v8, v7);
  v9 = n;
  v10 = src;
  ptr = v31;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  if ( n > 0x80 )
  {
    sub_22130D0(&ptr, v31, n, 1);
    v14 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !n )
      goto LABEL_3;
    v14 = v31;
  }
  memmove(v14, v10, v9);
  v9 += si128.m128i_i64[0];
LABEL_3:
  si128.m128i_i64[0] = v9;
  sub_22668B0(&ptr, 0);
  v28 = 257;
  v24 = 257;
  v22 = 257;
  v20 = 259;
  v19 = "libstdc++.modules.json";
  sub_2266670(&ptr, &v19, v21, v23, &v25);
  v11 = sub_1108890(*a2);
  v12 = *(unsigned __int8 (__fastcall **)(__int64, __m128i **))(*(_QWORD *)v11 + 96LL);
  v25 = (__m128i *)ptr;
  v28 = 261;
  v26 = si128.m128i_i64[0];
  if ( v12(v11, &v25) )
  {
    v25 = &v27;
    sub_10B5070(&v25, ptr, (__int64)ptr + si128.m128i_i64[0]);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( v25 == &v27 )
    {
      a1[1] = _mm_load_si128(&v27);
    }
    else
    {
      a1->m128i_i64[0] = (__int64)v25;
      a1[1].m128i_i64[0] = v27.m128i_i64[0];
    }
    v15 = v26;
    a1[2].m128i_i8[0] = 1;
    a1->m128i_i64[1] = v15;
  }
  else
  {
    a1[2].m128i_i64[0] = 0;
    *a1 = 0;
    a1[1] = 0;
  }
  if ( ptr != v31 )
    free(ptr);
  if ( src != &v18 )
    operator delete(src);
  return a1;
}

