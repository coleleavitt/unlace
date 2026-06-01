__int64 __fastcall sub_FB4F0(__int64 a1, __m128i *a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rsi
  __int64 **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const __m128i *v11; // r11
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int32 v16; // eax
  __m128i v17; // xmm0
  __m128i v19; // [rsp+0h] [rbp-48h] BYREF
  __m128i v20; // [rsp+10h] [rbp-38h] BYREF
  __int64 v21; // [rsp+20h] [rbp-28h]

  v3 = *(unsigned __int8 *)(a1 + 21);
  if ( !(_BYTE)v3 )
    return v3;
  v5 = (unsigned int)*(__int16 *)(a3 + 30);
  v6 = (__int64 **)sub_FAF70(a1, v5);
  if ( v6 )
  {
    v12 = *v6;
    if ( *v6 )
    {
      v13 = v11[2].m128i_i64[0];
      v19 = _mm_loadu_si128(v11);
      v21 = v13;
      v14 = *v12;
      v20 = _mm_loadu_si128(v11 + 1);
      v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(v14 + 16))(
              v12,
              v5,
              v7,
              v8,
              v9,
              v10,
              v19.m128i_i64[0],
              v19.m128i_i64[1],
              v20.m128i_i64[0],
              v20.m128i_i64[1]);
      if ( a2[2].m128i_i64[1] )
      {
        qfree();
        a2[2].m128i_i64[1] = 0;
      }
      v16 = v21;
      *a2 = _mm_load_si128(&v19);
      v17 = _mm_load_si128(&v20);
      a2[2].m128i_i32[0] = v16;
      a2[1] = v17;
      if ( v15 )
      {
        a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        qfree();
      }
      return v3;
    }
  }
  return 0;
}

