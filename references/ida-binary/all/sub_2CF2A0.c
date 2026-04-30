__int64 __fastcall sub_2CF2A0(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, double a5)
{
  unsigned int v6; // ebp
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r13
  __int32 v20; // eax
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  __m128i v22; // [rsp+10h] [rbp-48h] BYREF
  __int64 v23; // [rsp+20h] [rbp-38h]

  v6 = sub_1EC120(a1, (__int64)a2, a3, a4, a5);
  if ( !(_BYTE)v6 )
    return v6;
  v8 = sub_2CABB0(a1, nullptr, a2[2].m128i_i64[1], *(__int16 *)(a3 + 28), 1, 0, a5);
  if ( v8 == -1 )
    return v6;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2[2].m128i_i64[1] + 16LL))(a2[2].m128i_i64[1]);
  *(_QWORD *)(v9 + 16) = v8;
  v14 = v9;
  v15 = a2[2].m128i_i64[0];
  v21 = _mm_loadu_si128(a2);
  v16 = _mm_loadu_si128(a2 + 1);
  v23 = v15;
  v22 = v16;
  if ( v14 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v14 + 16LL))(
            v14,
            0,
            v10,
            v11,
            v12,
            v13,
            v21.m128i_i64[0],
            v21.m128i_i64[1],
            v22.m128i_i64[0],
            v22.m128i_i64[1]);
    v18 = a2[2].m128i_i64[1];
    v19 = v17;
    if ( !v18 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v18 = a2[2].m128i_i64[1];
  v19 = 0;
  if ( v18 )
  {
LABEL_6:
    qfree(v18, nullptr, v10, v11, v12, v13, *(_OWORD *)&v21, *(_OWORD *)&v22);
    a2[2].m128i_i64[1] = 0;
LABEL_7:
    v20 = v23;
    *a2 = _mm_load_si128(&v21);
    v16 = _mm_load_si128(&v22);
    a2[2].m128i_i32[0] = v20;
    a2[1] = v16;
    if ( v19 )
    {
      a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      *(double *)v16.m128i_i64 = qfree(v19, nullptr);
    }
    goto LABEL_9;
  }
  a2[2].m128i_i32[0] = v23;
LABEL_9:
  qfree(v14, nullptr, v10, v11, v12, v13, *(double *)v16.m128i_i64, *(_OWORD *)&v21, *(_OWORD *)&v22);
  return v6;
}
