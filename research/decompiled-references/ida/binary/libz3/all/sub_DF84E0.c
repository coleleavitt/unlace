__m128i *__fastcall sub_DF84E0(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 i; // rax
  int v15; // ecx
  __int64 v16; // r14
  __int64 v17; // r12
  __m128i *v19; // rbx
  unsigned int v20; // r10d
  __int64 v21; // rcx
  __m128i *v22; // r14
  unsigned __int64 v23; // rsi
  __int64 v24; // r10
  __m128i *v25; // rdi
  __m128i *result; // rax
  __m128i *v27; // rcx
  int v28; // edx
  int v29; // eax
  __m128i *v30; // rax
  int v31; // r8d
  __m128i *v32; // rdx
  const __m128i *v33; // r15
  __m128i *v34; // r11
  __int64 v35; // rax
  __m128i *v36; // rdx
  __m128i *v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // r12
  size_t v40; // [rsp+10h] [rbp-58h]
  int v41; // [rsp+18h] [rbp-50h]

  if ( !*(_QWORD *)(a1 + 320) )
  {
    v39 = sub_186B270(0x210u);
    sub_17F71C0(v39);
    *(_QWORD *)(a1 + 320) = v39;
  }
  v6 = *a2;
  ++*(_DWORD *)(a3 + 4);
  v7 = *(_QWORD *)(a1 + 592);
  v8 = *(unsigned int *)(a1 + 600);
  if ( v6 )
  {
    if ( (v6 & 7) == 1 )
      v9 = v6 >> 3;
    else
      LODWORD(v9) = *(_DWORD *)(v6 - 8);
  }
  else
  {
    LODWORD(v9) = -1640531495;
  }
  v10 = 24LL * ((unsigned int)v9 & ((_DWORD)v8 - 1));
  v11 = 24LL * (unsigned int)v8;
  v12 = v7 + v10;
  v13 = v7 + v11;
  if ( v10 != v11 )
  {
    for ( i = v7 + v10; v13 != i; i += 24 )
    {
      v15 = *(_DWORD *)(i + 4);
      if ( v15 == 2 )
      {
        if ( (_DWORD)v9 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v6 )
        {
LABEL_13:
          v16 = *(_QWORD *)(a1 + 320);
          v17 = *(_QWORD *)(i + 16);
          if ( !v16 )
          {
            v16 = sub_186B270(0x210u);
            sub_17F71C0(v16);
            *(_QWORD *)(a1 + 320) = v16;
          }
          if ( (*(_DWORD *)(v17 + 4))-- == 1 )
            sub_17F9000(v16);
          v8 = *(unsigned int *)(a1 + 600);
          v6 = *a2;
          goto LABEL_18;
        }
      }
      else if ( !v15 )
      {
        goto LABEL_18;
      }
    }
  }
  for ( ; v12 != v7; v7 += 24 )
  {
    v29 = *(_DWORD *)(v7 + 4);
    if ( v29 == 2 )
    {
      if ( (_DWORD)v9 == *(_DWORD *)v7 && *(_QWORD *)(v7 + 8) == v6 )
      {
        i = v7;
        goto LABEL_13;
      }
    }
    else if ( !v29 )
    {
      break;
    }
  }
LABEL_18:
  if ( 3 * (int)v8 < (unsigned int)(4 * (*(_DWORD *)(a1 + 604) + *(_DWORD *)(a1 + 608))) )
  {
    v41 = 2 * v8;
    v40 = 24LL * (unsigned int)(2 * v8);
    v30 = (__m128i *)sub_186B270(v40);
    v31 = v41;
    v21 = v40;
    v19 = v30;
    v32 = (__m128i *)((char *)v30 + v40);
    if ( v41 )
    {
      do
      {
        v30->m128i_i64[0] = 0;
        v30 = (__m128i *)((char *)v30 + 24);
        v30[-1].m128i_i64[0] = 0;
      }
      while ( v30 != v32 );
    }
    v33 = *(const __m128i **)(a1 + 592);
    v20 = v41 - 1;
    v22 = (__m128i *)((char *)v19 + v40);
    v34 = (__m128i *)((char *)v33 + 24 * *(unsigned int *)(a1 + 600));
    if ( v33 != v34 )
    {
      do
      {
        while ( v33->m128i_i32[1] != 2 )
        {
          v33 = (const __m128i *)((char *)v33 + 24);
          if ( v34 == v33 )
            goto LABEL_63;
        }
        v35 = 24LL * (v33->m128i_i32[0] & v20);
        v36 = (__m128i *)((char *)v19 + v35);
        if ( v35 == v40 )
        {
LABEL_69:
          if ( v36 == v19 )
          {
LABEL_76:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v37 = v19;
          while ( v37->m128i_i32[1] )
          {
            v37 = (__m128i *)((char *)v37 + 24);
            if ( v36 == v37 )
              goto LABEL_76;
          }
        }
        else
        {
          v37 = (__m128i *)((char *)v19 + v35);
          while ( v37->m128i_i32[1] )
          {
            v37 = (__m128i *)((char *)v37 + 24);
            if ( v22 == v37 )
              goto LABEL_69;
          }
        }
        v38 = _mm_loadu_si128(v33);
        v33 = (const __m128i *)((char *)v33 + 24);
        *v37 = v38;
        v37[1].m128i_i64[0] = v33[-1].m128i_i64[1];
      }
      while ( v34 != v33 );
LABEL_63:
      v34 = *(__m128i **)(a1 + 592);
    }
    if ( v34 )
    {
      sub_186B220(v34);
      v31 = v41;
      v21 = v40;
      v20 = v41 - 1;
    }
    *(_QWORD *)(a1 + 592) = v19;
    *(_DWORD *)(a1 + 600) = v31;
    *(_DWORD *)(a1 + 608) = 0;
    if ( v6 )
      goto LABEL_20;
  }
  else
  {
    v19 = *(__m128i **)(a1 + 592);
    v20 = v8 - 1;
    v21 = 24 * v8;
    v22 = (__m128i *)((char *)v19 + 24 * v8);
    if ( v6 )
    {
LABEL_20:
      if ( (v6 & 7) == 1 )
        v23 = v6 >> 3;
      else
        LODWORD(v23) = *(_DWORD *)(v6 - 8);
      goto LABEL_22;
    }
  }
  LODWORD(v23) = -1640531495;
LABEL_22:
  v24 = (unsigned int)v23 & v20;
  v25 = (__m128i *)((char *)v19 + 24 * v24);
  if ( 24 * v24 != v21 )
  {
    result = (__m128i *)((char *)v19 + 24 * v24);
    v27 = nullptr;
    while ( 1 )
    {
      v28 = result->m128i_i32[1];
      if ( v28 == 2 )
      {
        if ( (_DWORD)v23 == result->m128i_i32[0] && result->m128i_i64[1] == v6 )
        {
          result->m128i_i64[1] = v6;
          result[1].m128i_i64[0] = a3;
          result->m128i_i32[1] = 2;
          return result;
        }
      }
      else
      {
        if ( !v28 )
        {
          if ( v27 )
            goto LABEL_50;
          v27 = result;
          goto LABEL_51;
        }
        v27 = result;
      }
      result = (__m128i *)((char *)result + 24);
      if ( result == v22 )
        goto LABEL_35;
    }
  }
  v27 = nullptr;
  while ( 1 )
  {
LABEL_35:
    if ( v25 == v19 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v19->m128i_u32[1];
    if ( (_DWORD)result != 2 )
      break;
    if ( (_DWORD)v23 == v19->m128i_i32[0] && v19->m128i_i64[1] == v6 )
    {
      v19->m128i_i64[1] = v6;
      v19[1].m128i_i64[0] = a3;
      v19->m128i_i32[1] = 2;
      return result;
    }
LABEL_34:
    v19 = (__m128i *)((char *)v19 + 24);
  }
  if ( (_DWORD)result )
  {
    v27 = v19;
    goto LABEL_34;
  }
  if ( v27 )
LABEL_50:
    --*(_DWORD *)(a1 + 608);
  else
    v27 = v19;
LABEL_51:
  v27->m128i_i64[1] = v6;
  v27[1].m128i_i64[0] = a3;
  v27->m128i_i32[1] = 2;
  v27->m128i_i32[0] = v23;
  ++*(_DWORD *)(a1 + 604);
  return result;
}

