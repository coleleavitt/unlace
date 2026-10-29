_QWORD *__fastcall sub_2065700(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  void *v14; // rax
  void **v15; // rdi
  unsigned __int8 v16; // dl
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // r15
  __m128i *v20; // rax
  __m128i si128; // xmm0
  __int64 v22; // rdx
  __m128i *v23; // rax
  __m128i v24; // xmm0
  void **v25; // [rsp-8h] [rbp-C0h]
  unsigned __int8 v26; // [rsp+Eh] [rbp-AAh] BYREF
  unsigned __int8 v27; // [rsp+Fh] [rbp-A9h] BYREF
  void *v28; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+18h] [rbp-A0h]
  __int64 v30; // [rsp+20h] [rbp-98h] BYREF
  __int64 v31; // [rsp+28h] [rbp-90h]
  __int64 v32; // [rsp+30h] [rbp-88h]
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int64 v34; // [rsp+48h] [rbp-70h]
  _BYTE v35[104]; // [rsp+50h] [rbp-68h] BYREF

  ptr = v35;
  v34 = 0x300000000LL;
  v6 = 0;
  if ( a4 )
  {
    --a4;
    v6 = 1;
  }
  v29 = a4;
  v28 = (void *)(a3 + v6);
  sub_22476F0(&v28, &ptr, 58, 0xFFFFFFFFLL, 1);
  if ( (unsigned __int64)(unsigned int)v34 - 2 > 1 )
  {
    v28 = "a:<abi>[:<pref>]";
    LOWORD(v32) = 259;
    sub_2065130((__int64)a1, (__int64)&ptr, v7, v8, 259, v9, (__int64 *)"a:<abi>[:<pref>]", v29, v30, v31, 259);
    goto LABEL_5;
  }
  v11 = ptr;
  v12 = *((_QWORD *)ptr + 1);
  if ( v12 )
  {
    v13 = *(_QWORD *)ptr;
    if ( (unsigned __int8)sub_2247970(*(_QWORD *)ptr, v12, 10, &v28) || v28 != (void *)(unsigned int)v28 || (_DWORD)v28 )
    {
      v17 = sub_2220490(v13);
      v19 = v18;
      v28 = &v30;
      v20 = (__m128i *)operator new(0x12u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AB040);
      v30 = 17;
      v28 = v20;
      v20[1].m128i_i8[0] = 111;
      v29 = 17;
      v20[1].m128i_i8[1] = 0;
      *v20 = si128;
      goto LABEL_19;
    }
    v11 = ptr;
  }
  v26 = 0;
  sub_2065400(&v28, v11[2], v11[3], &v26, (__int64)"ABI", 3, 1);
  v14 = v28;
  v15 = v25;
  if ( v28
    || (v27 = v26, (unsigned int)v34 > 2)
    && (v15 = &v28,
        sub_2065400(&v28, *((_QWORD *)ptr + 4), *((_QWORD *)ptr + 5), &v27, (__int64)"preferred", 9, 0),
        (v14 = v28) != nullptr) )
  {
    *a1 = v14;
    goto LABEL_5;
  }
  if ( v27 >= v26 )
  {
    v16 = v26;
    *(_BYTE *)(a2 + 481) = v27;
    *(_BYTE *)(a2 + 480) = v16;
    *a1 = 0;
    goto LABEL_5;
  }
  v17 = sub_2220490(v15);
  v19 = v22;
  v28 = &v30;
  v23 = (__m128i *)operator new(0x3Au);
  v30 = 57;
  v28 = v23;
  *v23 = _mm_load_si128((const __m128i *)&xmmword_23AB050);
  v24 = _mm_load_si128((const __m128i *)&xmmword_23AB060);
  strcpy(v23[3].m128i_i8, "alignment");
  v23[1] = v24;
  v23[2] = _mm_load_si128((const __m128i *)&xmmword_23AB070);
  v29 = 57;
LABEL_19:
  sub_22205D0(a1, &v28, v17, v19);
  if ( v28 != &v30 )
    operator delete(v28);
LABEL_5:
  if ( ptr != v35 )
    free(ptr);
  return a1;
}
