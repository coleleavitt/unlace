__int64 __fastcall sub_C08F40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // r8
  char *v10; // rsi
  unsigned __int64 v11; // r14
  char v12; // al
  _BYTE *v13; // rdx
  char *i; // rdx
  __int64 v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // r8
  _BYTE *v18; // rdi
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  _BYTE *v23; // rax
  size_t v24; // rdx
  char v25; // [rsp+Fh] [rbp-139h]
  __int64 v26[4]; // [rsp+10h] [rbp-138h] BYREF
  void *v27; // [rsp+30h] [rbp-118h] BYREF
  __m128i v28; // [rsp+38h] [rbp-110h]
  _BYTE v29[72]; // [rsp+48h] [rbp-100h] BYREF
  unsigned __int8 v30; // [rsp+90h] [rbp-B8h]
  __int64 v31; // [rsp+A0h] [rbp-A8h] BYREF
  void *ptr; // [rsp+A8h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-98h]
  _BYTE v34[24]; // [rsp+C0h] [rbp-88h] BYREF
  unsigned __int8 v35; // [rsp+D8h] [rbp-70h]
  char v36; // [rsp+100h] [rbp-48h]
  __int64 v37; // [rsp+108h] [rbp-40h]

  v8 = sub_A8AC40(*(_QWORD *)(a1 + 16), *(_QWORD *)(a4 + 8));
  v31 = a1;
  v10 = v34;
  v11 = v8;
  LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 17448LL) + 272LL);
  ptr = v34;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
  v12 = v8 ^ 1;
  if ( v11 )
  {
    v13 = v34;
    if ( v11 > 0x20 )
    {
      v25 = v12;
      sub_22130D0(&ptr, v34, v11, 2);
      v13 = ptr;
      v12 = v25;
      v10 = (char *)ptr + 2 * si128.m128i_i64[0];
    }
    for ( i = &v13[2 * v11]; i != v10; v10 += 2 )
      v10[1] = 0;
    si128.m128i_i64[0] = v11;
  }
  v36 = v12;
  v15 = *(_QWORD *)(a4 + 16);
  v37 = a4;
  v16 = sub_C056F0(&v31, a3, *(_QWORD *)(v15 + 8), 0, v9);
  if ( !(_BYTE)v16 )
  {
    v18 = ptr;
    v30 = 0;
    if ( ptr == v34 )
      return v16;
    goto LABEL_9;
  }
  v20 = si128.m128i_i64[0];
  v27 = v29;
  v28 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
  if ( si128.m128i_i64[0] )
  {
    v22 = si128.m128i_i64[0];
    v23 = v29;
    if ( si128.m128i_i64[0] > 0x20uLL )
    {
      sub_22130D0(&v27, v29, si128.m128i_i64[0], 2);
      v23 = v27;
      v22 = si128.m128i_i64[0];
    }
    v18 = ptr;
    v24 = 2 * v22;
    if ( v24 )
    {
      memcpy(v23, ptr, v24);
      v18 = ptr;
    }
    v28.m128i_i64[0] = v20;
  }
  else
  {
    v18 = ptr;
  }
  v30 = 1;
  v29[64] = v36;
  if ( v18 != v34 )
  {
LABEL_9:
    free(v18);
    v16 = v30;
    if ( !v30 )
      return v16;
  }
  v21 = *(_QWORD *)(a4 + 8);
  v26[0] = a1;
  v26[1] = (__int64)&v27;
  v26[2] = a4;
  sub_C08890((__int64)&v31, v26, v21, 0, v17);
  v16 = v35;
  if ( v35 )
  {
    sub_A2BFE0(a2, (__int64)&v31);
    if ( v35 )
    {
      v16 = v35;
      if ( (unsigned int)v31 > 1 )
        sub_A2BBA0((int *)&v31);
    }
  }
  if ( v30 && v27 != v29 )
    free(v27);
  return v16;
}

