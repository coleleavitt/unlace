_QWORD *__fastcall sub_117E990(_QWORD *a1, __int64 a2, char a3)
{
  _QWORD *v4; // r12
  size_t v7; // r14
  void *v8; // rax
  _BYTE *v10; // rsi
  char *v11; // rdi
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  void *src; // [rsp+0h] [rbp-1D8h]
  void *v15[2]; // [rsp+20h] [rbp-1B8h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-1A8h] BYREF
  _QWORD v17[4]; // [rsp+40h] [rbp-198h] BYREF
  __int16 v18; // [rsp+60h] [rbp-178h]
  _QWORD v19[4]; // [rsp+70h] [rbp-168h] BYREF
  __int16 v20; // [rsp+90h] [rbp-148h]
  _QWORD v21[4]; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v22; // [rsp+C0h] [rbp-118h]
  _BYTE v23[32]; // [rsp+D0h] [rbp-108h] BYREF
  __int16 v24; // [rsp+F0h] [rbp-E8h]
  void *ptr; // [rsp+100h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+108h] [rbp-D0h]
  _BYTE v27[192]; // [rsp+118h] [rbp-C0h] BYREF

  v4 = a1 + 2;
  if ( *(_QWORD *)(a2 + 496) )
  {
    *a1 = v4;
    sub_117E3B0(a1, *(_BYTE **)(a2 + 488), *(_QWORD *)(a2 + 488) + *(_QWORD *)(a2 + 496));
    return a1;
  }
  v7 = *(_QWORD *)(a2 + 112);
  v8 = *(void **)(a2 + 104);
  ptr = v27;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v7 > 0x80 )
  {
    src = v8;
    sub_2236E10(&ptr, v27, v7, 1);
    v8 = src;
    v11 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !v7 )
      goto LABEL_6;
    v11 = v27;
  }
  memcpy(v11, v8, v7);
  v7 += si128.m128i_i64[0];
LABEL_6:
  si128.m128i_i64[0] = v7;
  v21[0] = "clang-runtimes";
  v19[0] = "lib";
  v17[0] = "..";
  v24 = 257;
  v22 = 259;
  v20 = 259;
  v18 = 259;
  sub_228A3B0(&ptr, v17, v19, v21, v23);
  if ( a3 )
  {
    v12 = *(_BYTE **)(a2 + 944);
    v22 = 257;
    v13 = *(_QWORD *)(a2 + 952);
    v24 = 257;
    v15[0] = v16;
    v20 = 257;
    sub_117E3B0(v15, v12, (__int64)&v12[v13]);
    v18 = 260;
    v17[0] = v15;
    sub_228A3B0(&ptr, v17, v19, v21, v23);
    if ( v15[0] != v16 )
      operator delete(v15[0]);
  }
  v10 = ptr;
  *a1 = v4;
  sub_117E5C0(a1, v10, (__int64)&v10[si128.m128i_i64[0]]);
  if ( ptr != v27 )
    free(ptr);
  return a1;
}
