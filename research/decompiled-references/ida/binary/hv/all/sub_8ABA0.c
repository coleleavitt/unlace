__int64 __fastcall sub_8ABA0(__m128i *a1)
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
  unsigned __int64 j; // rbp
  unsigned __int8 v16; // dl
  __int64 i; // rax
  unsigned __int8 v18; // di
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 *v25; // r8
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 k; // rax
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
  if ( (unsigned int)sub_83480((__int64)a1) )
    return 12;
  v6 = a1[32].m128i_u64[0];
  v7 = a1->m128i_u64[1];
  if ( v7 < v6 + 4 )
    return 0;
  v35 = 0;
  v8 = v3 & 0x2000;
  v9 = 0;
  v39 = a1 + 47;
  while ( 2 )
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
    j = 0;
    v16 = 0;
    for ( i = 0; i != 4; ++i )
    {
      v18 = v16;
      v16 = v14[i];
      ++j;
      if ( v16 != v18 )
        j = 1;
    }
    v40 = v16;
    if ( !v2 || v7 < v6 + 9 )
    {
LABEL_31:
      if ( j != 4 )
        goto LABEL_32;
      v7 = a1->m128i_u64[1];
      while ( 1 )
      {
        v29 = a1[32].m128i_i64[0];
        v30 = v7 - v29;
        if ( v30 <= 4 )
          goto LABEL_57;
LABEL_46:
        for ( j = 4; j != v30; ++j )
        {
          if ( v14[j] != v40 )
            break;
        }
        if ( j >= a1[32].m128i_i64[1] && j > 7 )
          break;
LABEL_32:
        if ( v2 )
        {
          v21 = a1[32].m128i_u64[0];
          if ( a1->m128i_i64[1] >= v21 + 9 )
          {
            if ( v21 >= v42[0] )
            {
              result = sub_80200(a1, v42);
              if ( (_DWORD)result )
                return result;
            }
            v22 = *(_QWORD *)(a1[20].m128i_i64[1] + 8 * (v9 & a1[22].m128i_i64[0] ^ (v9 >> a1[21].m128i_i64[1])));
            if ( v22 && !(unsigned int)sub_80070((__int64)a1, v22 - 1) )
            {
              result = sub_88C00(a1);
              if ( (_DWORD)result )
                return result;
              v32 = a1[38].m128i_u64[0];
              if ( v32 )
              {
                v20 = a1[32].m128i_i64[0];
                v7 = a1->m128i_u64[1];
                v6 = v32 + v20;
                if ( v32 > 5 )
                {
LABEL_69:
                  a1[32].m128i_i64[0] = v6;
                  goto LABEL_70;
                }
LABEL_60:
                if ( v7 - 2 >= v6 )
                {
                  a1[32].m128i_i64[1] = v32;
                  goto LABEL_24;
                }
                goto LABEL_69;
              }
            }
          }
        }
        while ( 2 )
        {
          if ( !v8 )
          {
LABEL_37:
            v23 = 0;
            v24 = 8 * (a1[26].m128i_i64[1] & v35 ^ ((unsigned __int64)v35 >> a1[26].m128i_i64[0]));
            v25 = (__int64 *)(v24 + a1[24].m128i_i64[0]);
            v26 = *v25;
            if ( *v25 )
            {
              v38 = (__int64 *)(v24 + a1[24].m128i_i64[0]);
              v37 = 8 * (a1[26].m128i_i64[1] & v35 ^ ((unsigned __int64)v35 >> a1[26].m128i_i64[0]));
              v31 = sub_81960(a1->m128i_i64, v26, (unsigned __int64 *)&v41);
              v25 = v38;
              v24 = v37;
              v23 = v31;
            }
            v27 = a1[24].m128i_i64[1];
            v28 = a1[32].m128i_i64[0];
            if ( v27 )
            {
              *(_QWORD *)(v27 + 8 * (v28 & a1[6].m128i_i64[0])) = v26;
              v25 = (__int64 *)(a1[24].m128i_i64[0] + v24);
            }
            *v25 = v28 + 1;
            v19 = a1[32].m128i_u64[1];
            if ( v23 < v19 )
            {
              v7 = a1->m128i_u64[1];
              goto LABEL_22;
            }
            v36 = v23;
            if ( (unsigned int)sub_88B10(a1, a1[32].m128i_i64[0], v23, v41, 0) )
              return 12;
            v20 = a1[32].m128i_i64[0];
            v32 = v36;
            v7 = a1->m128i_u64[1];
            v6 = v36 + v20;
            if ( v36 > 5 )
              goto LABEL_69;
            goto LABEL_60;
          }
          v7 = a1->m128i_u64[1];
          while ( 1 )
          {
            v19 = a1[32].m128i_u64[1];
LABEL_22:
            v20 = a1[32].m128i_i64[0];
            if ( v19 > 4 )
              a1[32].m128i_i64[1] = v19 - 1;
LABEL_24:
            if ( v20 + 4 == v7 )
              return 0;
            if ( v14[4] != v40 )
              break;
            ++j;
            if ( !v8 )
              goto LABEL_43;
            if ( v2 )
              goto LABEL_28;
            ++v14;
            a1[32].m128i_i64[0] = v20 + 1;
            if ( j == 4 )
            {
              v29 = a1[32].m128i_i64[0];
              v30 = v7 - v29;
              if ( v30 > 4 )
                goto LABEL_46;
LABEL_57:
              j = 4;
              goto LABEL_32;
            }
          }
          v40 = v14[4];
          j = 1;
          if ( v8 )
          {
            if ( !v2 )
            {
              ++v14;
              a1[32].m128i_i64[0] = v20 + 1;
              continue;
            }
LABEL_28:
            if ( v20 + 9 < v7 )
              v9 = v14[9] + 0x106689D45497FDB5LL * v9 - a1[23].m128i_i64[0] * *v14;
            ++v14;
            a1[32].m128i_i64[0] = v20 + 1;
            goto LABEL_31;
          }
          break;
        }
LABEL_43:
        v35 = 1597334677 * *(_DWORD *)(v14 + 1);
        if ( v2 )
          goto LABEL_28;
        ++v14;
        a1[32].m128i_i64[0] = v20 + 1;
        if ( j != 4 )
          goto LABEL_37;
      }
      if ( (unsigned int)sub_87E50(a1, v29, j, &v40) )
        return 12;
      v7 = a1->m128i_u64[1];
      v6 = j + a1[32].m128i_i64[0];
      a1[32].m128i_i64[0] = v6;
LABEL_70:
      if ( v7 >= v6 + 4 )
        continue;
      return 0;
    }
    break;
  }
  result = sub_80200(a1, v42);
  if ( !(_DWORD)result )
  {
    v9 = 0;
    for ( k = 0; k != 9; ++k )
    {
      v34 = *(_QWORD *)(a1[23].m128i_i64[1] + 8 * k) * v14[k];
      v9 += v34;
    }
    goto LABEL_31;
  }
  return result;
}

