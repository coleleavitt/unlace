void __fastcall sub_20CE180(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r13
  _QWORD *v5; // r14
  _QWORD *v6; // r12
  unsigned int v7; // eax
  _QWORD *v8; // rdx
  const char *v9; // rax
  __int64 v10; // rdx
  const char *v11; // r14
  const char *v12; // rax
  char *v13; // rdi
  size_t v14; // r13
  const char *v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // r8
  __int64 v22; // r9
  void *ptr; // [rsp+0h] [rbp-158h] BYREF
  __m128i si128; // [rsp+8h] [rbp-150h]
  _BYTE v25[320]; // [rsp+18h] [rbp-140h] BYREF

  v3 = (_QWORD *)sub_20CBB10(a2);
  v4 = *v3;
  v5 = v3 + 2;
  v6 = v3;
  v7 = sub_2244B30(v3 + 2, *v3);
  v8 = (_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)sub_2244CB0(a1, v5, v4, v7));
  if ( !*v8 )
    goto LABEL_10;
  if ( *v8 == -8 )
  {
    --*(_DWORD *)(a1 + 16);
LABEL_10:
    *v8 = v6;
    ++*(_DWORD *)(a1 + 12);
    sub_22450D0(a1, 0);
    return;
  }
  v9 = sub_20CC3B0(a2);
  v11 = &v9[v10];
  v12 = sub_20CC3B0(a2);
  v13 = v25;
  v14 = v11 - v12;
  v15 = v12;
  ptr = v25;
  v16 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( v14 > 0x100 )
  {
    sub_2236E10(&ptr, v25, v14, 1);
    v16 = si128.m128i_i64[0];
    v13 = (char *)ptr + si128.m128i_i64[0];
  }
  if ( v15 != v11 )
  {
    memcpy(v13, v15, v14);
    v16 = si128.m128i_i64[0];
  }
  si128.m128i_i64[0] = v16 + v14;
  v17 = (_QWORD *)sub_20CBB10(a2);
  operator delete(v17, *v17 + 17LL, 8);
  v18 = sub_20CDE70(a1, a2, (__int64 **)&ptr);
  sub_20CA1B0(a2, v18, v19, v20, v21, v22);
  if ( ptr != v25 )
    free(ptr);
}
