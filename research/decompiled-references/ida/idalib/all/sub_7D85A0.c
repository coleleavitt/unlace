void __fastcall __noreturn sub_7D85A0(__int64 a1)
{
  __int64 v1; // rbp
  _BYTE *v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  __m128i v7; // xmm0
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  void *v13; // r13
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  unsigned __int64 v16; // rax
  void *v17; // rdi
  __m128i v18; // [rsp+0h] [rbp-88h] BYREF
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  void *v20[2]; // [rsp+18h] [rbp-70h] BYREF
  __int64 v21; // [rsp+30h] [rbp-58h]
  char v22; // [rsp+38h] [rbp-50h]
  unsigned __int64 v23; // [rsp+40h] [rbp-48h] BYREF
  __int128 v24; // [rsp+48h] [rbp-40h]
  unsigned __int64 v25; // [rsp+58h] [rbp-30h]
  __int64 v26; // [rsp+70h] [rbp-18h]

  v26 = v1;
  v25 = __readfsqword(0x28u);
  v22 = 31;
  v23 = 0;
  v21 = (__int64)&off_2B3BA10;
  ptr = nullptr;
  v24 = 0;
  *(_OWORD *)v20 = 0;
  v3 = (_BYTE *)qvector_reserve(&ptr, 0, 6, 1);
  ptr = v3;
  v20[0] = &byte_6;
  *(_DWORD *)v3 = 1701145715;
  v3[4] = 112;
  *((_BYTE *)ptr + 5) = 0;
  v4 = v24;
  v5 = v23;
  v6 = v24 + 1;
  if ( (unsigned __int64)&ptr >= v23 && (unsigned __int64)&ptr < v23 + 24LL * *((_QWORD *)&v24 + 1) )
  {
    v13 = ptr;
    v14 = _mm_loadl_epi64((const __m128i *)v20);
    ptr = nullptr;
    v15 = _mm_loadl_epi64((const __m128i *)&v20[1]);
    *(_OWORD *)v20 = 0;
    if ( *((_QWORD *)&v24 + 1) < v6 )
    {
      v18.m128i_i64[1] = v15.m128i_i64[0];
      v18.m128i_i64[0] = v14.m128i_i64[0];
      v23 = qvector_reserve(&v23, v23, v24 + 1, 24);
      v5 = v23;
      v15 = _mm_loadl_epi64((const __m128i *)&v18.m128i_u64[1]);
      v4 = v24;
      v14 = _mm_loadl_epi64(&v18);
    }
    v16 = v5 + 24 * v4;
    *(_QWORD *)v16 = v13;
    v17 = ptr;
    *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64(v14, v15);
    v9 = v24 + 1;
    *(_QWORD *)&v24 = v24 + 1;
    if ( v17 )
    {
      v20[0] = nullptr;
      qfree(v17);
      v9 = v24;
      v10 = v23;
      v11 = v24 + 1;
      if ( *((_QWORD *)&v24 + 1) >= (unsigned __int64)(v24 + 1) )
        goto LABEL_7;
      goto LABEL_12;
    }
  }
  else
  {
    if ( *((_QWORD *)&v24 + 1) < v6 )
    {
      v23 = qvector_reserve(&v23, v23, v24 + 1, 24);
      v5 = v23;
      v4 = v24;
    }
    v7 = _mm_loadu_si128((const __m128i *)v20);
    v8 = v5 + 24 * v4;
    *(_QWORD *)v8 = ptr;
    *(__m128i *)(v8 + 8) = v7;
    v9 = v24 + 1;
    *(_QWORD *)&v24 = v24 + 1;
  }
  v10 = v23;
  v11 = v9 + 1;
  if ( *((_QWORD *)&v24 + 1) >= (unsigned __int64)(v9 + 1) )
    goto LABEL_7;
LABEL_12:
  v23 = qvector_reserve(&v23, v10, v11, 24);
  v9 = v24;
  v10 = v23;
LABEL_7:
  v12 = v10 + 24 * v9;
  *(_QWORD *)v12 = 0;
  *(_OWORD *)(v12 + 8) = 0;
  *(_QWORD *)&v24 = v24 + 1;
  sub_35A790((char **)v12);
  sub_7BFE00(a1);
}
