unsigned __int64 __fastcall sub_7B45D0(__int64 *a1, __int64 *a2)
{
  _WORD *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __m128i v8; // xmm0
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  void *v16; // r13
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  unsigned __int64 v19; // rax
  void *v20; // rdi
  __m128i v21; // [rsp+0h] [rbp-88h] BYREF
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  void *v23[2]; // [rsp+18h] [rbp-70h] BYREF
  __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  char v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+40h] [rbp-48h] BYREF
  __int128 v27; // [rsp+48h] [rbp-40h]
  unsigned __int64 v28; // [rsp+58h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v25 = 31;
  v26 = 0;
  v24 = (__int64)&off_2B11A70;
  ptr = nullptr;
  v27 = 0;
  *(_OWORD *)v23 = 0;
  v4 = (_WORD *)qvector_reserve(&ptr, 0, 7, 1);
  ptr = v4;
  v23[0] = &byte_7;
  *(_DWORD *)v4 = 1702129257;
  v4[2] = 29298;
  *((_BYTE *)ptr + 6) = 0;
  v5 = v27;
  v6 = v26;
  v7 = v27 + 1;
  if ( (unsigned __int64)&ptr >= v26 && (unsigned __int64)&ptr < v26 + 24LL * *((_QWORD *)&v27 + 1) )
  {
    v16 = ptr;
    v17 = _mm_loadl_epi64((const __m128i *)v23);
    ptr = nullptr;
    v18 = _mm_loadl_epi64((const __m128i *)&v23[1]);
    *(_OWORD *)v23 = 0;
    if ( *((_QWORD *)&v27 + 1) < v7 )
    {
      v21.m128i_i64[1] = v18.m128i_i64[0];
      v21.m128i_i64[0] = v17.m128i_i64[0];
      v26 = qvector_reserve(&v26, v26, v27 + 1, 24);
      v6 = v26;
      v18 = _mm_loadl_epi64((const __m128i *)&v21.m128i_u64[1]);
      v5 = v27;
      v17 = _mm_loadl_epi64(&v21);
    }
    v19 = v6 + 24 * v5;
    *(_QWORD *)v19 = v16;
    v20 = ptr;
    *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v17, v18);
    v10 = v27 + 1;
    *(_QWORD *)&v27 = v27 + 1;
    if ( v20 )
    {
      v23[0] = nullptr;
      qfree(v20);
      v10 = v27;
      v11 = v26;
      v12 = v27 + 1;
      if ( *((_QWORD *)&v27 + 1) >= (unsigned __int64)(v27 + 1) )
        goto LABEL_7;
LABEL_12:
      v26 = qvector_reserve(&v26, v11, v12, 24);
      v10 = v27;
      v11 = v26;
      goto LABEL_7;
    }
  }
  else
  {
    if ( *((_QWORD *)&v27 + 1) < v7 )
    {
      v26 = qvector_reserve(&v26, v26, v27 + 1, 24);
      v6 = v26;
      v5 = v27;
    }
    v8 = _mm_loadu_si128((const __m128i *)v23);
    v9 = v6 + 24 * v5;
    *(_QWORD *)v9 = ptr;
    *(__m128i *)(v9 + 8) = v8;
    v10 = v27 + 1;
    *(_QWORD *)&v27 = v27 + 1;
  }
  v11 = v26;
  v12 = v10 + 1;
  if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v10 + 1) )
    goto LABEL_12;
LABEL_7:
  v13 = v11 + 24 * v10;
  *(_QWORD *)v13 = 0;
  *(_OWORD *)(v13 + 8) = 0;
  *(_QWORD *)&v27 = v27 + 1;
  sub_3573A0((char **)v13);
  v14 = sub_79C5C0(a1, (unsigned __int8 *)&v24, a2);
  sub_7B3360(v14, 10, a2);
  sub_7BA500(&v24);
  return v28 - __readfsqword(0x28u);
}

