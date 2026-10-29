__int64 __fastcall sub_7FF7E0(__m128i *a1)
{
  __int64 v1; // rax
  __int64 v2; // r13
  __int32 v3; // r14d
  __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  int v8; // r14d
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm0
  unsigned __int64 v12; // xmm0_8
  __int64 v13; // r12
  unsigned __int8 *v14; // r12
  unsigned __int64 k; // rbp
  unsigned __int8 v16; // dl
  __int64 i; // rax
  unsigned __int8 v18; // di
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 *v23; // r8
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 j; // rax
  __int64 v34; // rdx
  unsigned int v35; // [rsp+Ch] [rbp-7Ch]
  unsigned __int64 v36; // [rsp+10h] [rbp-78h]
  unsigned __int64 v37; // [rsp+18h] [rbp-70h]
  __int64 *v38; // [rsp+20h] [rbp-68h]
  __m128i *v39; // [rsp+28h] [rbp-60h]
  unsigned __int8 v40; // [rsp+37h] [rbp-51h] BYREF
  __int64 v41; // [rsp+38h] [rbp-50h] BYREF
  __int64 v42[9]; // [rsp+40h] [rbp-48h] BYREF

  v1 = a1[32].m128i_i64[0];
  v2 = a1[4].m128i_i64[1];
  v42[1] = __readfsqword(0x28u);
  v3 = a1[9].m128i_i32[2];
  v41 = 0;
  v42[0] = 0;
  if ( a1->m128i_i64[1] < (unsigned __int64)(v1 + 4) )
    return 0;
  if ( (unsigned int)sub_7F7480((__int64)a1) )
    return 12;
  v6 = a1[32].m128i_u64[0];
  v7 = a1->m128i_u64[1];
  if ( v7 < v6 + 4 )
    return 0;
  v35 = 0;
  v8 = v3 & 0x2000;
  v9 = 0;
  v39 = a1 + 47;
  while ( 1 )
  {
    if ( (__m128i *)a1[47].m128i_i64[0] == v39 )
    {
      v10 = 4;
    }
    else
    {
      v10 = 4;
      v11 = _mm_loadu_si128((const __m128i *)(a1[47].m128i_i64[1] - 24));
      v12 = _mm_add_epi64(v11, _mm_srli_si128(v11, 8)).m128i_u64[0];
      if ( v6 < v12 )
      {
        v10 = v12 - v6 + 1;
        if ( v10 < 4 )
          v10 = 4;
      }
    }
    v13 = a1->m128i_i64[0];
    a1[32].m128i_i64[1] = v10;
    v14 = (unsigned __int8 *)(v6 + v13);
    if ( !v8 )
      v35 = 1597334677 * *(_DWORD *)v14;
    k = 0;
    v16 = 0;
    for ( i = 0; i != 4; ++i )
    {
      v18 = v16;
      v16 = v14[i];
      ++k;
      if ( v16 != v18 )
        k = 1;
    }
    v40 = v16;
    if ( v2 && v7 >= v6 + 9 )
    {
      result = sub_7F4200(a1, v42);
      if ( (_DWORD)result )
        return result;
      v9 = 0;
      for ( j = 0; j != 9; ++j )
      {
        v34 = *(_QWORD *)(a1[23].m128i_i64[1] + 8 * j) * v14[j];
        v9 += v34;
      }
    }
    if ( k != 4 )
      goto LABEL_18;
    v7 = a1->m128i_u64[1];
LABEL_58:
    v29 = a1[32].m128i_i64[0];
    v30 = v7 - v29;
    if ( v30 > 4 )
      break;
    k = 4;
LABEL_18:
    if ( v2 )
      goto LABEL_19;
LABEL_22:
    if ( v8 )
    {
      v7 = a1->m128i_u64[1];
      goto LABEL_38;
    }
LABEL_23:
    v21 = 0;
    v22 = 8 * (a1[26].m128i_i64[1] & v35 ^ ((unsigned __int64)v35 >> a1[26].m128i_i64[0]));
    v23 = (__int64 *)(v22 + a1[24].m128i_i64[0]);
    v24 = *v23;
    if ( *v23 )
    {
      v38 = (__int64 *)(v22 + a1[24].m128i_i64[0]);
      v37 = 8 * (a1[26].m128i_i64[1] & v35 ^ ((unsigned __int64)v35 >> a1[26].m128i_i64[0]));
      v32 = sub_7F5960(a1->m128i_i64, v24, (unsigned __int64 *)&v41);
      v23 = v38;
      v22 = v37;
      v21 = v32;
    }
    v25 = a1[24].m128i_i64[1];
    v26 = a1[32].m128i_i64[0];
    if ( v25 )
    {
      *(_QWORD *)(v25 + 8 * (v26 & a1[6].m128i_i64[0])) = v24;
      v23 = (__int64 *)(a1[24].m128i_i64[0] + v22);
    }
    *v23 = v26 + 1;
    v27 = a1[32].m128i_u64[1];
    if ( v21 < v27 )
    {
      v7 = a1->m128i_u64[1];
      goto LABEL_29;
    }
    v36 = v21;
    if ( (unsigned int)sub_7FCB10(a1, a1[32].m128i_i64[0], v21, v41, 0) )
      return 12;
    v28 = a1[32].m128i_i64[0];
    v31 = v36;
    v7 = a1->m128i_u64[1];
    v6 = v36 + v28;
    if ( v36 <= 0x23 )
    {
LABEL_62:
      if ( v7 - 2 >= v6 )
      {
        a1[32].m128i_i64[1] = v31;
        goto LABEL_31;
      }
    }
LABEL_70:
    a1[32].m128i_i64[0] = v6;
    if ( v7 < v6 + 4 )
      return 0;
  }
  while ( 1 )
  {
    for ( k = 4; k != v30; ++k )
    {
      if ( v14[k] != v40 )
        break;
    }
    if ( k < a1[32].m128i_i64[1] || k <= 7 )
      goto LABEL_18;
    if ( (unsigned int)sub_7FBE50(a1, v29, k, &v40) )
      return 12;
    v28 = a1[32].m128i_i64[0];
    v7 = a1->m128i_u64[1];
    v6 = k + v28;
    if ( k > 0x23 || v7 - 2 < v6 )
      goto LABEL_70;
    a1[32].m128i_i64[1] = k;
LABEL_31:
    while ( 2 )
    {
      if ( v28 + 4 == v7 )
        return 0;
      if ( v14[4] == v40 )
      {
        ++k;
        if ( v8 )
        {
          if ( !v2 )
          {
            ++v14;
            a1[32].m128i_i64[0] = v28 + 1;
            if ( k == 4 )
              goto LABEL_58;
LABEL_38:
            v27 = a1[32].m128i_u64[1];
LABEL_29:
            v28 = a1[32].m128i_i64[0];
            if ( v27 > 4 )
              a1[32].m128i_i64[1] = v27 - 1;
            continue;
          }
        }
        else
        {
          v35 = 1597334677 * *(_DWORD *)(v14 + 1);
          if ( !v2 )
          {
            ++v14;
            a1[32].m128i_i64[0] = v28 + 1;
            if ( k != 4 )
              goto LABEL_23;
            goto LABEL_58;
          }
        }
LABEL_41:
        if ( v28 + 9 >= v7 )
          goto LABEL_43;
        goto LABEL_42;
      }
      break;
    }
    v40 = v14[4];
    if ( !v8 )
    {
      k = 1;
      v35 = 1597334677 * *(_DWORD *)(v14 + 1);
      if ( !v2 )
      {
        ++v14;
        a1[32].m128i_i64[0] = v28 + 1;
        goto LABEL_23;
      }
      goto LABEL_41;
    }
    if ( !v2 )
    {
      ++v14;
      k = 1;
      a1[32].m128i_i64[0] = v28 + 1;
      goto LABEL_38;
    }
    if ( v28 + 9 >= v7 )
      break;
    k = 1;
LABEL_42:
    v9 = v14[9] + 0x106689D45497FDB5LL * v9 - a1[23].m128i_i64[0] * *v14;
LABEL_43:
    v29 = v28 + 1;
    ++v14;
    a1[32].m128i_i64[0] = v29;
    if ( k == 4 )
    {
      v30 = v7 - v29;
      if ( v30 > 4 )
        continue;
    }
    goto LABEL_19;
  }
  ++v14;
  k = 1;
  a1[32].m128i_i64[0] = v28 + 1;
LABEL_19:
  v19 = a1[32].m128i_u64[0];
  if ( a1->m128i_i64[1] < v19 + 9 )
    goto LABEL_22;
  if ( v19 < v42[0] || (result = sub_7F4200(a1, v42), !(_DWORD)result) )
  {
    v20 = *(_QWORD *)(a1[20].m128i_i64[1] + 8 * (v9 & a1[22].m128i_i64[0] ^ (v9 >> a1[21].m128i_i64[1])));
    if ( !v20 || (unsigned int)sub_7F4070((__int64)a1, v20 - 1) )
      goto LABEL_22;
    result = sub_7FCC00(a1);
    if ( (_DWORD)result )
      return result;
    v31 = a1[38].m128i_u64[0];
    if ( !v31 )
      goto LABEL_22;
    v28 = a1[32].m128i_i64[0];
    v7 = a1->m128i_u64[1];
    v6 = v31 + v28;
    if ( v31 <= 0x23 )
      goto LABEL_62;
    goto LABEL_70;
  }
  return result;
}

