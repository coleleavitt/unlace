__m128 *__fastcall sub_968200(__int64 a1, _BYTE *a2)
{
  int v3; // eax
  __int64 v4; // rbp
  int v5; // r15d
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rbx
  int v12; // eax
  char v13; // al
  __m128 *result; // rax
  int v15; // eax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __m128i *v18; // rbp
  unsigned int v19; // ebx
  __int64 v20; // r14
  __m128i *v21; // r8
  int v22; // eax
  __int64 v23; // rbx
  __int32 v24; // r15d
  __m128i *v25; // r9
  __m128i *v26; // r8
  __m128i *v27; // rbx
  __m128i *v28; // r14
  int v29; // eax
  char v30; // al
  __int32 v31; // eax
  char v32; // al
  __m128i *v33; // rax
  int v34; // r9d
  __m128i *v35; // rdx
  const __m128i *v36; // rax
  __m128i *v37; // r11
  __int64 v38; // rdx
  __m128i *v39; // rsi
  __m128i *v40; // rdx
  __int64 v41; // [rsp+8h] [rbp-70h]
  __m128i *v42; // [rsp+8h] [rbp-70h]
  __m128i *v43; // [rsp+8h] [rbp-70h]
  __m128i *v44; // [rsp+8h] [rbp-70h]
  size_t v45; // [rsp+8h] [rbp-70h]
  __m128i *v46; // [rsp+10h] [rbp-68h]
  int v47; // [rsp+10h] [rbp-68h]
  _QWORD *v48; // [rsp+20h] [rbp-58h]
  int v49; // [rsp+28h] [rbp-50h]

  v3 = sub_967A60((__int64 **)(a1 + 56), (unsigned __int64)a2);
  v4 = *(_QWORD *)(a1 + 88);
  v5 = v3;
  v6 = *(unsigned int *)(a1 + 96);
  v7 = v6 - 1;
  v6 *= 24;
  v8 = v4 + v6;
  v9 = 24LL * (v5 & v7);
  v10 = v4 + v9;
  if ( v9 != v6 )
  {
    v11 = v4 + v9;
    do
    {
      v12 = *(_DWORD *)(v11 + 4);
      if ( v12 == 2 )
      {
        if ( v5 == *(_DWORD *)v11 )
        {
          v41 = v8;
          v13 = sub_967EF0((__int64 **)(a1 + 72), *(__int64 **)(v11 + 8), a2);
          v8 = v41;
          if ( v13 )
            goto LABEL_8;
        }
      }
      else if ( !v12 )
      {
        goto LABEL_17;
      }
      v11 += 24;
    }
    while ( v8 != v11 );
  }
  for ( ; v10 != v4; v4 += 24 )
  {
    v15 = *(_DWORD *)(v4 + 4);
    if ( v15 == 2 )
    {
      if ( v5 == *(_DWORD *)v4 && (unsigned __int8)sub_967EF0((__int64 **)(a1 + 72), *(__int64 **)(v4 + 8), a2) )
      {
        v11 = v4;
LABEL_8:
        result = (__m128 *)sub_180C100(a1, 16);
        *result = _mm_loadh_ps((const double *)(v11 + 16));
        *(_QWORD *)(v11 + 16) = result;
        return result;
      }
    }
    else if ( !v15 )
    {
      break;
    }
  }
LABEL_17:
  v16 = (_QWORD *)sub_180C100(a1, 16);
  v17 = *(unsigned int *)(a1 + 96);
  v48 = v16;
  *v16 = a2;
  v16[1] = 0;
  if ( 3 * (int)v17 < (unsigned int)(4 * (*(_DWORD *)(a1 + 100) + *(_DWORD *)(a1 + 104))) )
  {
    v49 = v17;
    v47 = 2 * v17;
    v45 = 24LL * (unsigned int)(2 * v17);
    v20 = v45;
    v33 = (__m128i *)sub_186B270(v45);
    v34 = v47;
    v18 = v33;
    if ( v47 )
    {
      v35 = &v33[3 * (v49 & 0x7FFFFFFF)];
      do
      {
        v33->m128i_i64[0] = 0;
        v33 += 3;
        v33[-2].m128i_i64[1] = 0;
      }
      while ( v33 != v35 );
    }
    v36 = *(const __m128i **)(a1 + 88);
    v19 = v47 - 1;
    v21 = (__m128i *)((char *)v18 + v45);
    v37 = (__m128i *)((char *)v36 + 24 * *(unsigned int *)(a1 + 96));
    if ( v36 != v37 )
    {
      do
      {
        if ( v36->m128i_i32[1] == 2 )
        {
          v38 = 24LL * (v36->m128i_i32[0] & v19);
          v39 = (__m128i *)((char *)v18 + v38);
          if ( v45 == v38 )
          {
LABEL_58:
            if ( v18 == v39 )
            {
LABEL_65:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v40 = v18;
            while ( v40->m128i_i32[1] )
            {
              v40 = (__m128i *)((char *)v40 + 24);
              if ( v39 == v40 )
                goto LABEL_65;
            }
          }
          else
          {
            v40 = (__m128i *)((char *)v18 + v38);
            while ( v40->m128i_i32[1] )
            {
              v40 = (__m128i *)((char *)v40 + 24);
              if ( v21 == v40 )
                goto LABEL_58;
            }
          }
          *v40 = _mm_loadu_si128(v36);
          v40[1].m128i_i64[0] = v36[1].m128i_i64[0];
        }
        v36 = (const __m128i *)((char *)v36 + 24);
      }
      while ( v37 != v36 );
      v37 = *(__m128i **)(a1 + 88);
    }
    if ( v37 )
    {
      sub_186B220(v37);
      v34 = v47;
      v21 = (__m128i *)((char *)v18 + v45);
    }
    *(_QWORD *)(a1 + 88) = v18;
    *(_DWORD *)(a1 + 96) = v34;
    *(_DWORD *)(a1 + 104) = 0;
  }
  else
  {
    v18 = *(__m128i **)(a1 + 88);
    v19 = v17 - 1;
    v20 = 24 * v17;
    v21 = (__m128i *)((char *)v18 + 24 * v17);
  }
  v42 = v21;
  v22 = sub_967A60((__int64 **)(a1 + 56), (unsigned __int64)a2);
  v23 = v22 & v19;
  v24 = v22;
  v25 = (__m128i *)((char *)v18 + 24 * v23);
  if ( 24 * v23 == v20 )
  {
    v28 = nullptr;
LABEL_29:
    if ( v25 == v18 )
    {
LABEL_41:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v31 = v18->m128i_i32[1];
      if ( v31 == 2 )
      {
        if ( v24 == v18->m128i_i32[0] )
        {
          v44 = v25;
          v32 = sub_967EF0((__int64 **)(a1 + 72), (__int64 *)v18->m128i_i64[1], a2);
          v25 = v44;
          if ( v32 )
          {
            v18->m128i_i64[1] = (__int64)a2;
            v18->m128i_i32[1] = 2;
            v18[1].m128i_i64[0] = (__int64)v48;
            return (__m128 *)v48;
          }
        }
      }
      else
      {
        if ( !v31 )
        {
          if ( !v28 )
          {
            v28 = v18;
            goto LABEL_40;
          }
LABEL_39:
          --*(_DWORD *)(a1 + 104);
          goto LABEL_40;
        }
        v28 = v18;
      }
      v18 = (__m128i *)((char *)v18 + 24);
      if ( v25 == v18 )
        goto LABEL_41;
    }
  }
  v26 = v42;
  v27 = (__m128i *)((char *)v18 + 24 * v23);
  v28 = nullptr;
  while ( 1 )
  {
    v29 = v27->m128i_i32[1];
    if ( v29 != 2 )
      break;
    if ( v24 == v27->m128i_i32[0] )
    {
      v46 = v26;
      v43 = v25;
      v30 = sub_967EF0((__int64 **)(a1 + 72), (__int64 *)v27->m128i_i64[1], a2);
      v25 = v43;
      v26 = v46;
      if ( v30 )
      {
        v27->m128i_i64[1] = (__int64)a2;
        v27->m128i_i32[1] = 2;
        v27[1].m128i_i64[0] = (__int64)v48;
        return (__m128 *)v48;
      }
    }
LABEL_23:
    v27 = (__m128i *)((char *)v27 + 24);
    if ( v27 == v26 )
      goto LABEL_29;
  }
  if ( v29 )
  {
    v28 = v27;
    goto LABEL_23;
  }
  if ( v28 )
    goto LABEL_39;
  v28 = v27;
LABEL_40:
  v28->m128i_i64[1] = (__int64)a2;
  v28->m128i_i32[1] = 2;
  v28[1].m128i_i64[0] = (__int64)v48;
  v28->m128i_i32[0] = v24;
  ++*(_DWORD *)(a1 + 100);
  return (__m128 *)v48;
}

