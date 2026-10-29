__int64 __fastcall sub_1038F0(__int64 a1, __m128i *a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r13
  __int32 v15; // eax
  __m128i v16; // xmm0
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  __m128i v18; // [rsp+10h] [rbp-48h] BYREF
  __int64 v19; // [rsp+20h] [rbp-38h]

  v4 = sub_15A240();
  if ( !(_BYTE)v4 )
    return v4;
  v6 = sub_100B80(a1, nullptr, a2[2].m128i_i64[1], *(__int16 *)(a3 + 28), 1, 0);
  if ( v6 == -1 )
    return v4;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2[2].m128i_i64[1] + 16LL))(a2[2].m128i_i64[1]);
  *(_QWORD *)(v7 + 16) = v6;
  v12 = v7;
  v13 = a2[2].m128i_i64[0];
  v17 = _mm_loadu_si128(a2);
  v19 = v13;
  v18 = _mm_loadu_si128(a2 + 1);
  if ( v12 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v12 + 16LL))(
            v12,
            0,
            v8,
            v9,
            v10,
            v11,
            v17.m128i_i64[0],
            v17.m128i_i64[1],
            v18.m128i_i64[0],
            v18.m128i_i64[1]);
    if ( !a2[2].m128i_i64[1] )
      goto LABEL_7;
    goto LABEL_6;
  }
  v14 = 0;
  if ( a2[2].m128i_i64[1] )
  {
LABEL_6:
    qfree();
    a2[2].m128i_i64[1] = 0;
LABEL_7:
    v15 = v19;
    *a2 = _mm_load_si128(&v17);
    v16 = _mm_load_si128(&v18);
    a2[2].m128i_i32[0] = v15;
    a2[1] = v16;
    if ( v14 )
    {
      a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      qfree();
    }
    goto LABEL_9;
  }
  a2[2].m128i_i32[0] = v19;
LABEL_9:
  qfree();
  return v4;
}

