unsigned __int64 __fastcall sub_4C10A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 i; // rbx
  void *v8; // rbp
  __m128i v9; // xmm1
  __int64 v10; // r14
  int v11; // r13d
  unsigned __int64 v12; // r12
  void *v13; // rdi
  int v14; // eax
  __m128i v15; // xmm0
  __int64 v16; // rax
  void *v17; // rdi
  __m128i v18; // xmm2
  void *v20; // rdi
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  __m128i v23; // [rsp+0h] [rbp-98h] BYREF
  __m128i v24; // [rsp+10h] [rbp-88h] BYREF
  __m128i v25; // [rsp+20h] [rbp-78h] BYREF
  int v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+40h] [rbp-58h]
  __m128i v28; // [rsp+48h] [rbp-50h]
  int v29; // [rsp+60h] [rbp-38h]
  unsigned __int64 v30; // [rsp+68h] [rbp-30h]

  v6 = *(_DWORD *)(a1 + 32);
  v30 = __readfsqword(0x28u);
  i = a1;
  v8 = *(void **)(a1 + 40);
  v24 = _mm_loadu_si128((const __m128i *)a1);
  v26 = v6;
  v25 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  if ( v8 )
    v8 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0;
  v11 = *(_DWORD *)(a1 + 80);
  v12 = *(_QWORD *)(a1 + 72);
  *(_OWORD *)(a1 + 56) = 0;
  v27 = v10;
  v29 = v11;
  v23 = v9;
  v28 = v9;
  if ( v12 < *(_QWORD *)(a1 - 16) )
  {
    for ( i = a1 - 88; ; i -= 88 )
    {
      a2 = i;
      sub_4B6180((__m128i *)(i + 88), i);
      if ( v12 >= *(_QWORD *)(i - 16) )
        break;
    }
  }
  v13 = *(void **)(i + 40);
  if ( v13 )
  {
    qfree(v13);
    *(_QWORD *)(i + 40) = 0;
  }
  v14 = v26;
  *(__m128i *)i = _mm_load_si128(&v24);
  v15 = _mm_load_si128(&v25);
  *(_DWORD *)(i + 32) = v14;
  *(__m128i *)(i + 16) = v15;
  if ( v8 )
  {
    v16 = (*(__int64 (__fastcall **)(void *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 16LL))(
            v8,
            a2,
            a3,
            a4,
            a5,
            a6,
            v23.m128i_i64[0],
            v23.m128i_i64[1],
            v24.m128i_i64[0],
            v24.m128i_i64[1],
            v25.m128i_i64[0],
            v25.m128i_i64[1]);
    v17 = *(void **)(i + 48);
    *(_QWORD *)(i + 40) = v16;
    v27 = 0;
    v28 = 0;
    if ( v17 )
    {
      *(_QWORD *)(i + 56) = 0;
      qfree(v17);
    }
    v18 = _mm_load_si128(&v23);
    *(_QWORD *)(i + 48) = v10;
    *(_QWORD *)(i + 72) = v12;
    *(_DWORD *)(i + 80) = v11;
    *(__m128i *)(i + 56) = v18;
    qfree(v8);
  }
  else
  {
    v20 = *(void **)(i + 48);
    v27 = 0;
    v28 = 0;
    if ( v20 )
    {
      *(_QWORD *)(i + 56) = 0;
      qfree(v20);
      v21 = _mm_load_si128(&v23);
      *(_QWORD *)(i + 48) = v10;
      *(_QWORD *)(i + 72) = v12;
      *(_DWORD *)(i + 80) = v11;
      *(__m128i *)(i + 56) = v21;
    }
    else
    {
      v22 = _mm_load_si128(&v23);
      *(_QWORD *)(i + 48) = v10;
      *(_QWORD *)(i + 72) = v12;
      *(_DWORD *)(i + 80) = v11;
      *(__m128i *)(i + 56) = v22;
    }
  }
  return v30 - __readfsqword(0x28u);
}
