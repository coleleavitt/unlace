__int64 __fastcall sub_3DFB00(__m128i *a1, unsigned __int64 a2)
{
  const __m128i *v4; // rbx
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  const char *v12; // rsi
  __int64 result; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  bool v22; // cf
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 (__fastcall *v25)(__int64); // rdx
  unsigned __int64 v26; // rdx
  __int64 v27; // [rsp+0h] [rbp-58h]
  __int64 v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+10h] [rbp-48h] BYREF
  __int64 v30; // [rsp+18h] [rbp-40h]
  unsigned __int64 v31; // [rsp+28h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  if ( a2 >= a1[16].m128i_i64[0] )
    return -1;
  v4 = (const __m128i *)(a1[15].m128i_i64[1] + 32 * a2);
  if ( !v4 )
    return -1;
  v5 = v4->m128i_i64[0];
  if ( v4->m128i_i64[0] == -1 )
  {
    sub_3DF0B0((__int64)&v29, (__int64)"check_index: idx == BADNODE");
    v10 = v29;
    v11 = v30;
    goto LABEL_8;
  }
  v6 = netnode_suplast(a1[18].m128i_i64[1], 83);
  if ( v6 == -1 )
  {
    sub_3DF0B0((__int64)&v29, (__int64)"check_index: last == BADNODE");
    v10 = v29;
    v11 = v30;
    goto LABEL_8;
  }
  if ( v6 < v5 )
  {
    sub_3DF0B0((__int64)&v29, (__int64)"check_index: idx(%llX) > last(%llX)", v5, v6);
    v10 = v29;
    v11 = v30;
    goto LABEL_8;
  }
  if ( !(unsigned __int8)netnode_supdel(a1[18].m128i_i64[1], v5, 83) )
  {
    sub_3DF0B0((__int64)&v29, (__int64)"del_entry(%llX)", v5);
    v10 = v29;
    v11 = v30;
LABEL_8:
    v12 = s1;
    if ( v11 )
      v12 = (const char *)v10;
    sub_3DEAE0(a1, (__int64)v12, "deletion", v7, v8, v9, v27, v28, v29, v30);
    result = a2;
    if ( v10 )
    {
      qfree(v10);
      return a2;
    }
    return result;
  }
  v14 = netnode_suplast(a1[18].m128i_i64[1], 83);
  v15 = v14;
  if ( v5 < v14 )
  {
    netnode_supshift(a1[18].m128i_i64[1], v5 + 1, v5, v14 - v5, 83);
    netnode_supdel(a1[18].m128i_i64[1], v15, 83);
  }
  v16 = v4->m128i_i64[1];
  if ( v16 )
  {
    v4[1].m128i_i64[0] = 0;
    qfree(v16);
  }
  v17 = a1[16].m128i_i64[0];
  v18 = ((a1[15].m128i_i64[1] + 32 * v17 - (__int64)v4) >> 5) - 2;
  if ( v18 >= 0 )
  {
    do
    {
      v19 = v4[2].m128i_i64[0];
      v20 = _mm_loadu_si128(v4 + 3);
      v4 += 2;
      v4[1].m128i_i64[1] = 0;
      v4[-2].m128i_i64[0] = v19;
      v21 = v4->m128i_i64[1];
      v4[-1] = v20;
      v4[-2].m128i_i64[1] = v21;
      v4->m128i_i64[1] = 0;
      v22 = v18-- == 0;
    }
    while ( !v22 );
    v17 = a1[16].m128i_i64[0];
  }
  v23 = a1[2].m128i_i64[0];
  v24 = v17 - 1;
  a1[16].m128i_i64[0] = v24;
  v25 = *(__int64 (__fastcall **)(__int64))(v23 + 40);
  if ( v25 != sub_3DD120 )
    v24 = v25((__int64)a1[2].m128i_i64);
  if ( !v24 )
    return -1;
  v26 = v24 - 1;
  v22 = a2 < v24;
  result = a2;
  if ( !v22 )
    return v26;
  return result;
}
