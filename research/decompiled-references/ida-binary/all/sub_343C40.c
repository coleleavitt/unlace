unsigned __int64 __fastcall sub_343C40(__m128i *a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v6; // eax
  __int64 v8; // rbp
  size_t v9; // r14
  void *v10; // r13
  size_t v11; // r15
  double v12; // xmm0_8
  void *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v19; // rax
  const void *v20; // rsi
  void *v21; // rax
  const void *v22; // rsi
  __m128i v23; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v24; // [rsp+10h] [rbp-98h]
  __int64 v25; // [rsp+20h] [rbp-88h]
  __int64 v26; // [rsp+28h] [rbp-80h]
  void *v27; // [rsp+30h] [rbp-78h]
  __int128 v28; // [rsp+38h] [rbp-70h]
  void *v29; // [rsp+48h] [rbp-60h]
  __int128 v30; // [rsp+50h] [rbp-58h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v6 = a1[2].m128i_i32[0];
  v31 = __readfsqword(0x28u);
  v8 = a1[2].m128i_i64[1];
  v23 = _mm_loadu_si128(a1);
  LODWORD(v25) = v6;
  v24 = _mm_loadu_si128(a1 + 1);
  if ( v8 )
    v8 = (*(__int64 (__fastcall **)(__int64, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, _DWORD))(*(_QWORD *)v8 + 16LL))(
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
           v25);
  v9 = a1[3].m128i_u64[1];
  v10 = nullptr;
  v28 = 0;
  if ( v9 )
  {
    v21 = (void *)qalloc_or_throw(v9);
    v22 = (const void *)a1[3].m128i_i64[0];
    *((_QWORD *)&v28 + 1) = v9;
    v10 = v21;
    memcpy(v21, v22, v9);
    *(_QWORD *)&v28 = v9;
  }
  v11 = a1[5].m128i_u64[0];
  v12 = 0.0;
  v13 = nullptr;
  v30 = 0;
  if ( v11 )
  {
    v19 = (void *)qalloc_or_throw(v11);
    v20 = (const void *)a1[4].m128i_i64[1];
    *((_QWORD *)&v30 + 1) = v11;
    v13 = v19;
    memcpy(v19, v20, v11);
    *(_QWORD *)&v30 = v11;
  }
  if ( a1 != a2 )
    sub_3428F0(a1, a2);
  v26 = v8;
  v27 = v10;
  v29 = v13;
  sub_3428F0(a2, &v23);
  if ( v8 )
    v12 = qfree(v8, v23.m128i_i8);
  if ( !v10 )
  {
    if ( !v13 )
      return v31 - __readfsqword(0x28u);
    goto LABEL_13;
  }
  *(_QWORD *)&v28 = 0;
  v12 = qfree(v10, v23.m128i_i8);
  *((_QWORD *)&v28 + 1) = 0;
  if ( v13 )
LABEL_13:
    qfree(v13, v23.m128i_i8, v14, v15, v16, v17, v12, *(_OWORD *)&v23, *(_OWORD *)&v24, v25);
  return v31 - __readfsqword(0x28u);
}
