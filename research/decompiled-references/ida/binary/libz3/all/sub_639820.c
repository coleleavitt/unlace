__int64 __fastcall sub_639820(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  int v5; // edi
  const __m128i *v6; // rbx
  unsigned int v7; // r8d
  size_t v8; // r15
  const __m128i *v9; // rbp
  int v10; // ecx
  __int64 v11; // rax
  const __m128i *v12; // rsi
  const __m128i *v13; // rax
  __int64 *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rax
  const __m128i *v17; // rax
  int v18; // r9d
  __m128i *v19; // rcx
  const __m128i *v20; // r12
  __m128i *v21; // r10
  __int64 v22; // rax
  __m128i *v23; // rdx
  __m128i *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rbp
  _OWORD *v27; // rax
  int v29; // [rsp+8h] [rbp-50h]

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 16);
  if ( 3 * (int)v4 < (unsigned int)(4 * (v5 + *(_DWORD *)(a1 + 12))) )
  {
    v29 = 2 * v4;
    v8 = 16LL * (unsigned int)(2 * v4);
    v17 = (const __m128i *)sub_186B270(v8);
    v18 = v29;
    v6 = v17;
    v19 = (__m128i *)&v17[v8 / 0x10];
    if ( v29 )
    {
      if ( (v8 & 0x10) == 0 || (*v17 = 0, ++v17, v17 != v19) )
      {
        do
        {
          *v17 = 0;
          v17 += 2;
          v17[-1] = 0;
        }
        while ( v17 != v19 );
      }
    }
    v20 = *(const __m128i **)a1;
    v7 = v29 - 1;
    v9 = v19;
    v21 = (__m128i *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v21 )
    {
      do
      {
        while ( v20->m128i_i64[0] <= 1uLL )
        {
          if ( v21 == ++v20 )
            goto LABEL_31;
        }
        v22 = 16LL * (*(_DWORD *)(v20->m128i_i64[0] + 12) & v7);
        v23 = (__m128i *)&v6[(unsigned __int64)v22 / 0x10];
        if ( v8 == v22 )
        {
LABEL_35:
          if ( v6 == v23 )
          {
LABEL_45:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v24 = (__m128i *)v6;
          while ( v24->m128i_i64[0] )
          {
            if ( v23 == ++v24 )
              goto LABEL_45;
          }
        }
        else
        {
          v24 = (__m128i *)&v6[(unsigned __int64)v22 / 0x10];
          while ( v24->m128i_i64[0] )
          {
            if ( v19 == ++v24 )
              goto LABEL_35;
          }
        }
        v25 = _mm_loadu_si128(v20++);
        *v24 = v25;
      }
      while ( v21 != v20 );
LABEL_31:
      v21 = *(__m128i **)a1;
    }
    if ( v21 )
    {
      sub_186B220(v21);
      v18 = v29;
      v7 = v29 - 1;
    }
    *(_QWORD *)a1 = v6;
    v5 = 0;
    *(_DWORD *)(a1 + 8) = v18;
    *(_DWORD *)(a1 + 16) = 0;
  }
  else
  {
    v6 = *(const __m128i **)a1;
    v7 = v4 - 1;
    v8 = 16 * v4;
    v9 = (const __m128i *)(*(_QWORD *)a1 + v8);
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
          v26 = v13->m128i_i64[1];
          goto LABEL_49;
        }
      }
      else
      {
        if ( !v15 )
        {
          if ( v14 )
            goto LABEL_41;
          v14 = (__int64 *)v13;
          goto LABEL_42;
        }
        v14 = (__int64 *)v13;
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
      sub_1873130(114, 461);
    }
    v16 = v6->m128i_i64[0];
    if ( v6->m128i_i64[0] > 1uLL )
      break;
    if ( !v16 )
    {
      if ( v14 )
LABEL_41:
        *(_DWORD *)(a1 + 16) = v5 - 1;
      else
        v14 = (__int64 *)v6;
LABEL_42:
      *v14 = a2;
      v14[1] = 0;
      ++*(_DWORD *)(a1 + 12);
      goto LABEL_43;
    }
    v14 = (__int64 *)v6;
LABEL_13:
    ++v6;
  }
  if ( *(_DWORD *)(v16 + 12) != v10 || a2 != v16 )
    goto LABEL_13;
  v26 = v6->m128i_i64[1];
  v13 = v6;
LABEL_49:
  if ( !v26 )
  {
    v14 = (__int64 *)v13;
LABEL_43:
    v26 = sub_186B270(0x18u);
    v27 = (_OWORD *)sub_186B270(0x40u);
    *(_QWORD *)(v26 + 8) = 8;
    *(_QWORD *)v26 = v27;
    *(_DWORD *)(v26 + 16) = 0;
    *v27 = 0;
    v27[1] = 0;
    v27[2] = 0;
    v27[3] = 0;
    v14[1] = v26;
  }
  return v26;
}

