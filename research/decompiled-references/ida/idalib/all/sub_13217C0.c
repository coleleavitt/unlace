__int64 __fastcall sub_13217C0(__int64 a1, void *a2, size_t a3, _BYTE *a4, __int64 a5)
{
  void *v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // eax
  void *v10; // r15
  size_t v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r8d
  __int64 *v18; // rcx
  __int64 v19; // r12
  __m128i *v20; // rax
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // r13
  unsigned int v25; // [rsp+4h] [rbp-A4h]
  __int64 *v26; // [rsp+8h] [rbp-A0h]
  __int64 *v27; // [rsp+18h] [rbp-90h] BYREF
  void *v28; // [rsp+20h] [rbp-88h] BYREF
  __int64 v29; // [rsp+28h] [rbp-80h]
  __m128i v30; // [rsp+30h] [rbp-78h] BYREF
  void *src; // [rsp+40h] [rbp-68h]
  size_t n; // [rsp+48h] [rbp-60h]
  void *v33; // [rsp+50h] [rbp-58h]
  __int64 v34; // [rsp+58h] [rbp-50h]
  __m128i v35[4]; // [rsp+60h] [rbp-48h] BYREF

  v28 = &v30;
  sub_12FAAE0(&v28, a4, (__int64)&a4[a5]);
  n = a3;
  src = a2;
  v33 = v35;
  if ( v28 == &v30 )
  {
    v7 = a2;
    v35[0] = _mm_load_si128(&v30);
  }
  else
  {
    v33 = v28;
    v7 = a2;
    v35[0].m128i_i64[0] = v30.m128i_i64[0];
  }
  v8 = v29;
  v30.m128i_i8[0] = 0;
  v29 = 0;
  v34 = v8;
  v28 = &v30;
  v9 = sub_2244B30(v7, n);
  v10 = src;
  v11 = n;
  v12 = (unsigned int)sub_2244CB0(a1, src, n, v9);
  v14 = (__int64 *)(*(_QWORD *)a1 + 8 * v12);
  if ( *v14 )
  {
    if ( *v14 != -8 )
    {
      sub_11727E0(&v27, v14, 0);
      v15 = v27;
      goto LABEL_12;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v26 = v14;
  v25 = v12;
  v16 = sub_22300B0(v11 + 41, 8, v12, v14, v12, v13);
  v17 = v25;
  v18 = v26;
  v19 = v16;
  if ( v11 )
  {
    memcpy((void *)(v16 + 40), v10, v11);
    v18 = v26;
    v17 = v25;
  }
  *(_BYTE *)(v19 + v11 + 40) = 0;
  *(_QWORD *)(v19 + 8) = v19 + 24;
  v20 = (__m128i *)v33;
  *(_QWORD *)v19 = v11;
  if ( v20 == v35 )
  {
    *(__m128i *)(v19 + 24) = _mm_load_si128(v35);
  }
  else
  {
    *(_QWORD *)(v19 + 8) = v20;
    *(_QWORD *)(v19 + 24) = v35[0].m128i_i64[0];
  }
  v21 = v34;
  v35[0].m128i_i8[0] = 0;
  v34 = 0;
  *(_QWORD *)(v19 + 16) = v21;
  v33 = v35;
  *v18 = v19;
  ++*(_DWORD *)(a1 + 12);
  v22 = sub_22450D0(a1, v17);
  sub_11727E0(&v27, (__int64 *)(*(_QWORD *)a1 + 8LL * v22), 0);
  v15 = v27;
LABEL_12:
  v23 = *(_QWORD *)(*v15 + 8);
  if ( v33 != v35 )
    operator delete(v33);
  if ( v28 != &v30 )
    operator delete(v28);
  return v23;
}
