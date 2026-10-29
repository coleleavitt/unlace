__m128i *__fastcall sub_225D110(__m128i *a1, __m128i *a2)
{
  __int64 m128i_i64; // r12
  int v4; // edi
  __int32 v5; // eax
  __int64 v6; // rdx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  __m128i v9; // xmm1
  __int64 *v10; // rdi
  __int64 v11; // rax
  _QWORD *v13[4]; // [rsp+0h] [rbp-108h] BYREF
  __int16 v14; // [rsp+20h] [rbp-E8h]
  _OWORD v15[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v16; // [rsp+50h] [rbp-B8h]
  __int128 v17; // [rsp+60h] [rbp-A8h]
  __int64 v18; // [rsp+70h] [rbp-98h]
  __m128 v19; // [rsp+80h] [rbp-88h] BYREF
  __int64 v20; // [rsp+90h] [rbp-78h] BYREF
  __m128i v21; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-58h]
  __int64 v23; // [rsp+B8h] [rbp-50h]
  __int64 v24; // [rsp+C0h] [rbp-48h]
  __int64 v25; // [rsp+C8h] [rbp-40h]
  __int8 v26; // [rsp+D0h] [rbp-38h]

  m128i_i64 = (__int64)a2[1].m128i_i64;
  if ( a2[5].m128i_i32[2] )
  {
LABEL_6:
    a1[5].m128i_i8[8] &= ~1u;
    sub_225AB40(a1, m128i_i64);
    return a1;
  }
  v4 = a2->m128i_i32[2];
  v18 = 0;
  v16 = 0;
  memset(v15, 0, sizeof(v15));
  v17 = 0;
  HIDWORD(v16) = 0xFFFF;
  v5 = sub_228C5C0(v4);
  if ( !v5 )
  {
    v7 = (_QWORD *)a2[1].m128i_i64[0];
    v8 = (_QWORD *)a2[1].m128i_i64[1];
    m128i_i64 = (__int64)a2[1].m128i_i64;
    v14 = 261;
    v13[0] = v7;
    v13[1] = v8;
    sub_225AC20(&v19, v15, v13);
    sub_A0AAD0((__int64)a2[1].m128i_i64, &v19);
    v9 = _mm_load_si128(&v21);
    v10 = (__int64 *)v19.m128_u64[0];
    a2[4].m128i_i64[0] = v22;
    v11 = v23;
    a2[3] = v9;
    a2[4].m128i_i64[1] = v11;
    a2[5].m128i_i64[0] = v24;
    a2[5].m128i_i64[1] = v25;
    a2[6].m128i_i8[0] = v26;
    if ( v10 != &v20 )
      operator delete(v10);
    goto LABEL_6;
  }
  a1[5].m128i_i8[8] |= 1u;
  a1->m128i_i32[0] = v5;
  a1->m128i_i64[1] = v6;
  return a1;
}
