__int64 __fastcall sub_54DBB0(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rcx
  __m128i *v6; // rbx
  unsigned int v7; // r10d
  __int64 v8; // rcx
  __m128i *v9; // rbp
  int v10; // esi
  __int64 v11; // r10
  __m128i *v12; // rdi
  __m128i *v13; // rax
  __m128i *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i *v18; // rax
  int v19; // r9d
  __m128i *v20; // r8
  const __m128i *v21; // r15
  __m128i *v22; // r11
  __int64 v23; // rax
  __m128i *v24; // rdx
  __m128i *v25; // rax
  __m128i v26; // xmm0
  size_t v27; // [rsp+8h] [rbp-60h]
  unsigned int v28; // [rsp+8h] [rbp-60h]
  int v29; // [rsp+10h] [rbp-58h]
  size_t v30; // [rsp+10h] [rbp-58h]
  int v31; // [rsp+18h] [rbp-50h]

  v4 = *(_DWORD *)(a1 + 96);
  v5 = *(unsigned int *)(a1 + 80);
  *(_DWORD *)(a1 + 96) = v4 + 2;
  if ( 3 * (int)v5 < (unsigned int)(4 * (*(_DWORD *)(a1 + 84) + *(_DWORD *)(a1 + 88))) )
  {
    v29 = 2 * v5;
    v27 = 16LL * (unsigned int)(2 * v5);
    v18 = (__m128i *)sub_186B270(v27);
    v8 = v27;
    v19 = v29;
    v6 = v18;
    v20 = &v18[v27 / 0x10];
    if ( v29 )
    {
      do
      {
        v18->m128i_i64[0] = 0;
        ++v18;
        v18[-1].m128i_i32[2] = 0;
      }
      while ( v18 != v20 );
    }
    v21 = *(const __m128i **)(a1 + 72);
    v7 = v29 - 1;
    v9 = v20;
    v22 = (__m128i *)&v21[*(unsigned int *)(a1 + 80)];
    if ( v21 != v22 )
    {
      do
      {
        while ( v21->m128i_i64[0] <= 1uLL )
        {
          if ( v22 == ++v21 )
            goto LABEL_31;
        }
        v23 = 16LL * (*(_DWORD *)(v21->m128i_i64[0] + 12) & v7);
        v24 = &v6[(unsigned __int64)v23 / 0x10];
        if ( v27 == v23 )
        {
LABEL_35:
          if ( v6 == v24 )
          {
LABEL_43:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v25 = v6;
          while ( v25->m128i_i64[0] )
          {
            if ( v24 == ++v25 )
              goto LABEL_43;
          }
        }
        else
        {
          v25 = &v6[(unsigned __int64)v23 / 0x10];
          while ( v25->m128i_i64[0] )
          {
            if ( v20 == ++v25 )
              goto LABEL_35;
          }
        }
        v26 = _mm_loadu_si128(v21++);
        *v25 = v26;
      }
      while ( v22 != v21 );
LABEL_31:
      v22 = *(__m128i **)(a1 + 72);
    }
    if ( v22 )
    {
      v31 = v29;
      v30 = v27;
      v28 = v19 - 1;
      sub_186B220(v22);
      v19 = v31;
      v8 = v30;
      v7 = v28;
    }
    *(_QWORD *)(a1 + 72) = v6;
    *(_DWORD *)(a1 + 80) = v19;
    *(_DWORD *)(a1 + 88) = 0;
  }
  else
  {
    v6 = *(__m128i **)(a1 + 72);
    v7 = v5 - 1;
    v8 = 16 * v5;
    v9 = (__m128i *)((char *)v6 + v8);
  }
  v10 = *(_DWORD *)(a2 + 12);
  v11 = 16LL * (v10 & v7);
  v12 = &v6[(unsigned __int64)v11 / 0x10];
  if ( v11 != v8 )
  {
    v13 = &v6[(unsigned __int64)v11 / 0x10];
    v14 = nullptr;
    while ( 1 )
    {
      v15 = v13->m128i_i64[0];
      if ( v13->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v15 + 12) == v10 && a2 == v15 )
        {
          v13->m128i_i64[0] = a2;
          v13->m128i_i32[2] = v4;
          return v4;
        }
      }
      else
      {
        if ( !v15 )
        {
          if ( v14 )
            goto LABEL_41;
          v14 = v13;
          goto LABEL_42;
        }
        v14 = v13;
      }
      if ( ++v13 == v9 )
        goto LABEL_14;
    }
  }
  v14 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v12 == v6 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v16 = v6->m128i_i64[0];
    if ( v6->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v16 + 12) == v10 && a2 == v16 )
    {
      v6->m128i_i64[0] = a2;
      v6->m128i_i32[2] = v4;
      return v4;
    }
LABEL_13:
    ++v6;
  }
  if ( v16 )
  {
    v14 = v6;
    goto LABEL_13;
  }
  if ( v14 )
LABEL_41:
    --*(_DWORD *)(a1 + 88);
  else
    v14 = v6;
LABEL_42:
  v14->m128i_i64[0] = a2;
  v14->m128i_i32[2] = v4;
  ++*(_DWORD *)(a1 + 84);
  return v4;
}

