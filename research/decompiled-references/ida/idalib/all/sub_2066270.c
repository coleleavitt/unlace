_QWORD *__fastcall sub_2066270(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v9; // rax
  void *v10; // rax
  __int32 v11; // r9d
  __int32 v12; // edx
  unsigned int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // r15
  __m128i *v16; // rax
  __m128i si128; // xmm0
  __int64 v18; // rdx
  __m128i *v19; // rax
  __m128i v20; // xmm0
  unsigned __int8 v21; // [rsp+2h] [rbp-D6h] BYREF
  unsigned __int8 v22; // [rsp+3h] [rbp-D5h] BYREF
  unsigned int v23; // [rsp+4h] [rbp-D4h] BYREF
  unsigned __int32 v24; // [rsp+8h] [rbp-D0h] BYREF
  unsigned __int32 v25; // [rsp+Ch] [rbp-CCh] BYREF
  void *v26; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-C0h]
  __int64 v28; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-B0h]
  __int64 v30; // [rsp+30h] [rbp-A8h]
  void *ptr; // [rsp+40h] [rbp-98h] BYREF
  __int64 v32; // [rsp+48h] [rbp-90h]
  _BYTE v33[136]; // [rsp+50h] [rbp-88h] BYREF

  ptr = v33;
  v32 = 0x500000000LL;
  v4 = 0;
  if ( a4 )
  {
    --a4;
    v4 = 1;
  }
  v27 = a4;
  v26 = (void *)(a3 + v4);
  sub_22476F0(&v26, &ptr, 58, 0xFFFFFFFFLL, 1);
  if ( (unsigned __int64)(unsigned int)v32 - 3 > 2 )
  {
    v26 = "p[<n>]:<size>:<abi>[:<pref>[:<idx>]]";
    LOWORD(v30) = 259;
    sub_2065130(
      (__int64)a1,
      (__int64)&ptr,
      v5,
      v6,
      v7,
      259,
      (__int64 *)"p[<n>]:<size>:<abi>[:<pref>[:<idx>]]",
      v27,
      v28,
      v29,
      259);
    goto LABEL_5;
  }
  v9 = ptr;
  v23 = 0;
  if ( *((_QWORD *)ptr + 1) )
  {
    sub_2065270(&v26, *(_QWORD *)ptr, *((_QWORD *)ptr + 1), &v23);
    v10 = v26;
    if ( v26 )
      goto LABEL_12;
    v9 = ptr;
  }
  sub_2065000(&v26, v9[2], v9[3], &v24, (__int64)"pointer size", 12);
  v10 = v26;
  if ( v26 )
    goto LABEL_12;
  v21 = 0;
  sub_2065400(&v26, *((_QWORD *)ptr + 4), *((_QWORD *)ptr + 5), &v21, (__int64)"ABI", 3, 0);
  v10 = v26;
  if ( v26 )
    goto LABEL_12;
  v22 = v21;
  if ( (unsigned int)v32 > 3 )
  {
    sub_2065400(&v26, *((_QWORD *)ptr + 6), *((_QWORD *)ptr + 7), &v22, (__int64)"preferred", 9, 0);
    v10 = v26;
    if ( v26 )
      goto LABEL_12;
  }
  if ( v22 < v21 )
  {
    v13 = sub_2220490();
    v15 = v14;
    v26 = &v28;
    v16 = (__m128i *)operator new(0x3Au);
    v28 = 57;
    v26 = v16;
    *v16 = _mm_load_si128((const __m128i *)&xmmword_23AB050);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB060);
    strcpy(v16[3].m128i_i8, "alignment");
    v16[1] = si128;
    v27 = 57;
    v16[2] = _mm_load_si128((const __m128i *)&xmmword_23AB070);
    goto LABEL_21;
  }
  v11 = v24;
  v25 = v24;
  v12 = v24;
  if ( (unsigned int)v32 <= 4 )
  {
LABEL_17:
    sub_2065F30(a2, v23, v12, v21, v22, v11, 0);
    *a1 = 0;
    goto LABEL_5;
  }
  sub_2065000(&v26, *((_QWORD *)ptr + 8), *((_QWORD *)ptr + 9), &v25, (__int64)"index size", 10);
  v10 = v26;
  if ( v26 )
  {
LABEL_12:
    *a1 = v10;
    goto LABEL_5;
  }
  v11 = v25;
  v12 = v24;
  if ( v25 <= v24 )
    goto LABEL_17;
  v13 = sub_2220490();
  v15 = v18;
  v26 = &v28;
  v19 = (__m128i *)operator new(0x32u);
  v28 = 49;
  v26 = v19;
  *v19 = _mm_load_si128((const __m128i *)&xmmword_23AB080);
  v20 = _mm_load_si128((const __m128i *)&xmmword_23AB090);
  v19[3].m128i_i8[0] = 101;
  v19[1] = v20;
  v27 = 49;
  v19[2] = _mm_load_si128((const __m128i *)&xmmword_23AB0A0);
  v19[3].m128i_i8[1] = 0;
LABEL_21:
  sub_22205D0(a1, &v26, v13, v15);
  if ( v26 != &v28 )
    operator delete(v26);
LABEL_5:
  if ( ptr != v33 )
    free(ptr);
  return a1;
}
