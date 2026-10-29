unsigned __int64 __fastcall sub_4AA590(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 i; // rbx
  __int64 v8; // rbp
  __m128i v9; // xmm1
  __int64 v10; // r14
  int v11; // r13d
  unsigned int v12; // r12d
  void *v13; // rdi
  int v14; // eax
  __m128i v15; // xmm0
  void *v16; // rdi
  __m128i v17; // xmm2
  __m128i v19; // [rsp+0h] [rbp-98h] BYREF
  __m128i v20; // [rsp+10h] [rbp-88h] BYREF
  __m128i v21; // [rsp+20h] [rbp-78h] BYREF
  int v22; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  __int64 v24; // [rsp+40h] [rbp-58h]
  __m128i v25; // [rsp+48h] [rbp-50h]
  unsigned int v26; // [rsp+58h] [rbp-40h]
  int v27; // [rsp+5Ch] [rbp-3Ch]
  unsigned __int64 v28; // [rsp+68h] [rbp-30h]

  v6 = *(_DWORD *)(a1 + 32);
  v28 = __readfsqword(0x28u);
  i = a1;
  v8 = *(_QWORD *)(a1 + 40);
  v20 = _mm_loadu_si128((const __m128i *)a1);
  v22 = v6;
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  if ( v8 )
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0;
  v11 = *(_DWORD *)(a1 + 76);
  v12 = *(_DWORD *)(a1 + 72);
  *(_OWORD *)(a1 + 56) = 0;
  v24 = v10;
  v27 = v11;
  v19 = v9;
  v25 = v9;
  if ( v12 < *(_DWORD *)(a1 - 8) )
  {
    for ( i = a1 - 80; ; i -= 80 )
    {
      a2 = i;
      sub_4A0C40((__m128i *)(i + 80), i);
      if ( v12 >= *(_DWORD *)(i - 8) )
        break;
    }
  }
  v13 = *(void **)(i + 40);
  if ( v13 )
  {
    qfree(v13);
    *(_QWORD *)(i + 40) = 0;
  }
  v14 = v22;
  *(__m128i *)i = _mm_load_si128(&v20);
  v15 = _mm_load_si128(&v21);
  *(_DWORD *)(i + 32) = v14;
  *(__m128i *)(i + 16) = v15;
  if ( v8 )
    *(_QWORD *)(i + 40) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 16LL))(
                            v8,
                            a2,
                            a3,
                            a4,
                            a5,
                            a6,
                            v19.m128i_i64[0],
                            v19.m128i_i64[1],
                            v20.m128i_i64[0],
                            v20.m128i_i64[1],
                            v21.m128i_i64[0],
                            v21.m128i_i64[1]);
  v16 = *(void **)(i + 48);
  v24 = 0;
  v25 = 0;
  if ( v16 )
  {
    *(_QWORD *)(i + 56) = 0;
    qfree(v16);
  }
  v17 = _mm_load_si128(&v19);
  *(_QWORD *)(i + 48) = v10;
  *(_DWORD *)(i + 72) = v12;
  *(_DWORD *)(i + 76) = v11;
  *(__m128i *)(i + 56) = v17;
  v23 = v8;
  v26 = v12;
  sub_4A9B00(&v20);
  return v28 - __readfsqword(0x28u);
}

