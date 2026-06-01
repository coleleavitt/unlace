__int64 __fastcall sub_81FF40(__m128i *a1)
{
  unsigned __int64 *v2; // r12
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _DWORD *v13; // rsi
  _DWORD *v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r11
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r12
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  int v25; // edx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  unsigned __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rdx
  _QWORD *v37; // r8
  __int64 v38; // r9
  __m128i **v39; // r8
  __m128i *v40; // rax
  unsigned __int64 v41; // [rsp+0h] [rbp-48h]
  unsigned __int64 v42; // [rsp+8h] [rbp-40h]

  v2 = (unsigned __int64 *)a1[4].m128i_i64[1];
  v3 = a1[35].m128i_i64[0];
  v4 = a1[32].m128i_i64[0];
  if ( a1[34].m128i_i32[2] != 1 )
  {
LABEL_2:
    v5 = a1[38].m128i_u64[0];
    v6 = a1[38].m128i_u64[1];
    v7 = v5 + v4;
    v8 = v5 + v3;
    v9 = v2[10] & v8;
    v42 = v8 >> v2[9];
LABEL_3:
    while ( v5 < v6 )
    {
      if ( *v2 == v9 )
      {
        ++v42;
        v9 = 0;
      }
      result = sub_817030(a1, v42);
      if ( (_DWORD)result )
      {
        if ( (_DWORD)result != -17709 )
          return result;
        goto LABEL_67;
      }
      v6 = a1[38].m128i_u64[1];
      v5 = a1[38].m128i_u64[0];
      v11 = v2[5] - v9;
      if ( v11 > v6 - v5 )
        v11 = a1[38].m128i_i64[1] - v5;
      if ( v11 )
      {
        v12 = v11 >> 5;
        if ( !(v11 >> 5) )
          goto LABEL_23;
        v13 = (_DWORD *)(v9 + v2[6]);
        v14 = (_DWORD *)(v7 + a1->m128i_i64[0]);
        v15 = 0;
        v16 = 0;
        do
        {
          if ( *v13 != *v14 )
          {
            v12 = v15;
            goto LABEL_20;
          }
          if ( v13[1] != v14[1] )
          {
            v12 = v15 + 4;
            goto LABEL_20;
          }
          if ( v13[2] != v14[2] )
          {
            v12 = v15 + 8;
            goto LABEL_20;
          }
          if ( v13[3] != v14[3] )
          {
            v12 = v15 + 12;
            goto LABEL_20;
          }
          if ( v13[4] != v14[4] )
          {
            v12 = v15 + 16;
            goto LABEL_20;
          }
          if ( v13[5] != v14[5] )
          {
            v12 = v15 + 20;
            goto LABEL_20;
          }
          if ( v13[6] != v14[6] )
          {
            v12 = v15 + 24;
            goto LABEL_20;
          }
          v16 += 8LL;
          v41 = v15 + 28;
          if ( v13[7] != v14[7] )
            break;
          v15 += 32LL;
          v13 += 8;
          v14 += 8;
        }
        while ( (v11 >> 2) - 8 >= v16 );
        v12 = v41;
LABEL_20:
        if ( v12 < v11 )
        {
LABEL_23:
          while ( *(_BYTE *)(v9 + v2[6] + v12) == *(_BYTE *)(v7 + a1->m128i_i64[0] + v12) )
          {
            if ( v11 == ++v12 )
            {
              v5 += v11;
              v9 += v11;
              v7 += v11;
              a1[38].m128i_i64[0] = v5;
              goto LABEL_3;
            }
          }
        }
        v5 += v12;
        v9 += v12;
        v7 += v12;
        a1[38].m128i_i64[0] = v5;
        if ( v11 == v12 )
          continue;
      }
      goto LABEL_25;
    }
    goto LABEL_25;
  }
  v26 = a1[37].m128i_u64[0];
  v27 = v4 - v26;
  v28 = v2[10] & (v3 - v26);
  v29 = (v3 - v26) >> v2[9];
  if ( v26 >= a1[37].m128i_i64[1] )
  {
LABEL_62:
    a1[34].m128i_i32[2] = 2;
    goto LABEL_2;
  }
  while ( 1 )
  {
    if ( !v28 )
    {
      v28 = *v2;
      --v29;
    }
    result = sub_817030(a1, v29);
    if ( (_DWORD)result )
      break;
    v30 = a1[37].m128i_u64[1];
    v31 = a1[37].m128i_u64[0];
    v32 = v30 - v31;
    if ( v30 - v31 > v28 )
      v32 = v28;
    if ( v32 )
    {
      v33 = a1->m128i_i64[0];
      v34 = v27 - v32;
      v35 = v28 - v27 - 1;
      while ( 1 )
      {
        v36 = v35 + v27--;
        if ( *(_BYTE *)(v2[6] + v36) != *(_BYTE *)(v33 + v27) )
          goto LABEL_61;
        v31 = a1[37].m128i_i64[0] + 1;
        a1[37].m128i_i64[0] = v31;
        if ( v27 == v34 )
        {
          v28 = v36;
          break;
        }
      }
    }
    if ( v31 >= v30 )
      goto LABEL_61;
  }
  if ( (_DWORD)result != -17709 )
    return result;
  if ( a1[37].m128i_i64[0] )
  {
LABEL_61:
    v3 = a1[35].m128i_i64[0];
    v4 = a1[32].m128i_i64[0];
    goto LABEL_62;
  }
LABEL_67:
  v5 = a1[38].m128i_u64[0];
LABEL_25:
  a1[34].m128i_i32[2] = 3;
  if ( v5 < a1[32].m128i_i64[1] )
  {
    a1[38].m128i_i64[0] = 0;
    return 0;
  }
  v17 = a1[32].m128i_i64[0];
  v18 = a1[37].m128i_i64[0];
  v19 = a1[35].m128i_i64[0];
  v20 = v5 + v19;
  v21 = v18 + v5;
  v22 = v17 - v18;
  v23 = v19 - v18;
  if ( v18 && (__m128i *)a1[47].m128i_i64[0] != &a1[47] )
  {
    do
    {
      v40 = (__m128i *)a1[47].m128i_i64[1];
      if ( v40[-2].m128i_i64[1] < v22 )
        break;
      v37 = (_QWORD *)v40->m128i_i64[1];
      v38 = v40->m128i_i64[0];
      *(_QWORD *)(v38 + 8) = v37;
      *v37 = v38;
      v39 = (__m128i **)a1[48].m128i_i64[1];
      a1[48].m128i_i64[1] = (__int64)v40;
      *v39 = v40;
      *v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&a1[48], (__m128i)(unsigned __int64)v39);
      --a1[95].m128i_i64[1];
    }
    while ( (__m128i *)a1[47].m128i_i64[0] != &a1[47] );
  }
  v24 = a1[36].m128i_u64[1];
  a1[37].m128i_i64[0] = 0;
  if ( !v24 || v23 < a1[36].m128i_i64[0] )
    a1[36].m128i_i64[0] = v23;
  if ( v24 < v20 )
    a1[36].m128i_i64[1] = v20;
  if ( a1[39].m128i_i64[0] < v20 )
    a1[39].m128i_i64[0] = v20;
  v25 = sub_81FE50(a1, v22, v21, v23, 1);
  result = 12;
  if ( !v25 )
  {
    if ( v5 + v17 == a1->m128i_i64[1] )
    {
      a1[34].m128i_i32[2] = 0;
      a1[35].m128i_i64[0] = v20;
    }
    return 0;
  }
  return result;
}
