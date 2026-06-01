__int64 __fastcall sub_125F2A0(__int64 a1)
{
  int v2; // edx
  __int64 result; // rax
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rax
  __m128i *v6; // rdi
  __m128i v7; // xmm0
  _QWORD *v8; // r13
  bool v9; // zf
  char v10; // r14
  _QWORD *v11; // rdi
  __int64 v12; // r13
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __m128i v15; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+18h] [rbp-B0h]
  __int64 v17; // [rsp+20h] [rbp-A8h]
  __m128i v18; // [rsp+30h] [rbp-98h] BYREF
  __int64 v19; // [rsp+40h] [rbp-88h]
  bool v20; // [rsp+48h] [rbp-80h]
  __int64 v21; // [rsp+60h] [rbp-68h] BYREF
  __m128i v22; // [rsp+68h] [rbp-60h]

  v2 = *(_DWORD *)(a1 + 152);
  switch ( v2 )
  {
    case 22:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      LODWORD(v21) = 4;
      v4 = *(_QWORD **)(a1 + 256);
LABEL_7:
      v22.m128i_i64[0] = -1;
      v5 = sub_1252950(v4, (const __m128i *)&v21);
      v6 = (__m128i *)&v21;
      v15.m128i_i64[0] = v5;
LABEL_8:
      sub_124FBE0((__int64)v6);
      v7 = _mm_loadl_epi64(&v15);
      v21 = *(_QWORD *)(a1 + 256);
      v22 = _mm_unpacklo_epi64(v7, v7);
      sub_1253440((_QWORD *)(a1 + 304), (const __m128i *)&v21);
      return 1;
    case 23:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      v4 = *(_QWORD **)(a1 + 256);
      LODWORD(v21) = 5;
      goto LABEL_7;
    case 24:
      sub_9EE8A0(a1 + 272, a1 + 208);
      sub_12510C0((unsigned __int8 *)(a1 + 8));
      v8 = *(_QWORD **)(a1 + 256);
      v9 = **(_BYTE **)(a1 + 272) == 110;
      v18.m128i_i32[0] = 6;
      v18.m128i_i64[1] = -1;
      v20 = v9;
LABEL_11:
      sub_124FC70((__m128i *)&v21, &v18);
      v15.m128i_i64[0] = sub_1252950(v8, (const __m128i *)&v21);
      sub_124FBE0((__int64)&v21);
      v6 = &v18;
      goto LABEL_8;
  }
  result = 0;
  if ( v2 == 7 )
  {
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    v10 = **(_BYTE **)(a1 + 272);
    sub_125D8E0((__m128 *)a1);
    if ( *(_DWORD *)(a1 + 152) != 8 )
      abort();
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    sub_124FB10((__m128i *)&v15.m128i_u64[1], (__m128 *)a1);
    v11 = *(_QWORD **)(a1 + 256);
    v12 = v17;
    v22.m128i_i64[0] = -1;
    LODWORD(v21) = 12;
    v13 = sub_1252950(v11, (const __m128i *)&v21);
    sub_124FBE0((__int64)&v21);
    v14 = v16;
    *(_QWORD *)(*(_QWORD *)(v15.m128i_i64[1] + 56) + 48 * v12 + 8) = v13;
    v8 = *(_QWORD **)(a1 + 256);
    v18.m128i_i64[1] = -1;
    v18.m128i_i32[0] = 7;
    v19 = v14;
    v20 = v10 == 110;
    goto LABEL_11;
  }
  return result;
}
