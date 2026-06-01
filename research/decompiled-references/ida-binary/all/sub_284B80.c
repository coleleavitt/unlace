__int64 __fastcall sub_284B80(__int64 a1, __m128i *a2, const __m128i *a3)
{
  unsigned int v3; // ebx
  const char *v6; // rsi
  __int64 **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int32 v19; // eax
  __m128i v20; // xmm0
  __m128i v21; // [rsp+0h] [rbp-48h] BYREF
  __m128i v22; // [rsp+10h] [rbp-38h] BYREF
  __int64 v23; // [rsp+20h] [rbp-28h]

  v3 = *(unsigned __int8 *)(a1 + 29);
  if ( !(_BYTE)v3 )
    return 0;
  v6 = (const char *)(unsigned int)a3[1].m128i_i16[7];
  v8 = (__int64 **)sub_284860(a1, (int)v6);
  if ( !v8 )
    return 0;
  v13 = *v8;
  if ( !*v8 )
    return 0;
  v14 = a3[2].m128i_i64[0];
  v21 = _mm_loadu_si128(a3);
  v23 = v14;
  v15 = *v13;
  v22 = _mm_loadu_si128(a3 + 1);
  v16 = (*(__int64 (__fastcall **)(__int64 *, const char *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(v15 + 16))(
          v13,
          v6,
          v9,
          v10,
          v11,
          v12,
          v21.m128i_i64[0],
          v21.m128i_i64[1],
          v22.m128i_i64[0],
          v22.m128i_i64[1]);
  v17 = a2[2].m128i_i64[1];
  v18 = v16;
  if ( v17 )
  {
    qfree(v17, v6);
    a2[2].m128i_i64[1] = 0;
  }
  v19 = v23;
  *a2 = _mm_load_si128(&v21);
  v20 = _mm_load_si128(&v22);
  a2[2].m128i_i32[0] = v19;
  a2[1] = v20;
  if ( !v18 )
    return v3;
  a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  qfree(v18, v6);
  return v3;
}
