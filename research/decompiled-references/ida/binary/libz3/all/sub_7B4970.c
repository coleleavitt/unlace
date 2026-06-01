__int64 __fastcall sub_7B4970(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char v5; // r13
  __int32 v7; // ebx
  __int64 v8; // rcx
  const __m128i *v9; // rdx
  unsigned int v10; // eax
  const __m128i *v11; // rsi
  __int64 v12; // rax
  const __m128i *v13; // rdi
  const __m128i *v14; // rax
  __int32 v15; // ecx
  __int32 v16; // r15d
  __int32 v18; // eax
  __int32 v19; // eax
  __int64 v20; // r14
  __m128i *v21; // rbp
  unsigned int v22; // r10d
  __int64 v23; // r8
  __int64 m128i_i64; // r14
  __int64 v25; // rax
  __m128i *v26; // rsi
  __m128i *v27; // rax
  __m128i *v28; // rcx
  __int32 v29; // edx
  __int32 v30; // eax
  __m128i *v31; // rax
  int v32; // r9d
  __m128i *v33; // rdx
  const __m128i *v34; // rcx
  __m128i *v35; // r11
  __int64 v36; // rax
  __m128i *v37; // rdx
  __m128i *v38; // rax
  size_t v39; // [rsp+0h] [rbp-58h]
  unsigned int v40; // [rsp+0h] [rbp-58h]
  size_t v41; // [rsp+8h] [rbp-50h]
  int v42; // [rsp+18h] [rbp-40h]

  v5 = a4;
  v7 = a4 >> 1;
  v8 = *(unsigned int *)(a3 + 8);
  v9 = *(const __m128i **)a3;
  v10 = v8 - 1;
  v8 *= 16;
  v11 = (const __m128i *)((char *)v9 + v8);
  v12 = 16LL * (v7 & v10);
  v13 = &v9[(unsigned __int64)v12 / 0x10];
  if ( v12 != v8 )
  {
    v14 = &v9[(unsigned __int64)v12 / 0x10];
    do
    {
      v15 = v14->m128i_i32[1];
      if ( v15 == 2 )
      {
        if ( v7 == v14->m128i_i32[0] && v7 == v14->m128i_i32[2] )
          goto LABEL_8;
      }
      else if ( !v15 )
      {
        goto LABEL_18;
      }
      ++v14;
    }
    while ( v11 != v14 );
  }
  for ( ; v13 != v9; ++v9 )
  {
    v18 = v9->m128i_i32[1];
    if ( v18 == 2 )
    {
      if ( v7 == v9->m128i_i32[0] && v7 == v9->m128i_i32[2] )
      {
        v14 = v9;
LABEL_8:
        v16 = v14->m128i_i32[3];
        return (v5 & 1u) + 2 * v16;
      }
    }
    else if ( !v18 )
    {
      break;
    }
  }
LABEL_18:
  v19 = sub_11CA540(a2, 0, 1);
  v20 = *(unsigned int *)(a3 + 8);
  v16 = v19;
  if ( 3 * (int)v20 < (unsigned int)(4 * (*(_DWORD *)(a3 + 12) + *(_DWORD *)(a3 + 16))) )
  {
    v39 = 16LL * (unsigned int)(2 * v20);
    v31 = (__m128i *)sub_186B270(v39);
    v32 = 2 * v20;
    v23 = v39;
    v21 = v31;
    if ( 2 * (_DWORD)v20 )
    {
      v33 = &v31[2 * (v20 & 0x7FFFFFFF)];
      do
      {
        v31->m128i_i64[0] = 0;
        v31 += 2;
        v31[-1].m128i_i64[0] = 0;
      }
      while ( v31 != v33 );
    }
    v34 = *(const __m128i **)a3;
    v22 = v32 - 1;
    m128i_i64 = (__int64)v21[v39 / 0x10].m128i_i64;
    v35 = (__m128i *)(*(_QWORD *)a3 + 16LL * *(unsigned int *)(a3 + 8));
    if ( *(__m128i **)a3 != v35 )
    {
      do
      {
        if ( v34->m128i_i32[1] == 2 )
        {
          v36 = 16LL * (v34->m128i_i32[0] & v22);
          v37 = &v21[(unsigned __int64)v36 / 0x10];
          if ( v39 == v36 )
          {
LABEL_57:
            if ( v21 == v37 )
            {
LABEL_64:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v38 = v21;
            while ( v38->m128i_i32[1] )
            {
              if ( v37 == ++v38 )
                goto LABEL_64;
            }
          }
          else
          {
            v38 = &v21[(unsigned __int64)v36 / 0x10];
            while ( v38->m128i_i32[1] )
            {
              if ( (__m128i *)m128i_i64 == ++v38 )
                goto LABEL_57;
            }
          }
          *v38 = _mm_loadu_si128(v34);
        }
        ++v34;
      }
      while ( v35 != v34 );
      v35 = *(__m128i **)a3;
    }
    if ( v35 )
    {
      v42 = v32;
      v41 = v39;
      v40 = v32 - 1;
      sub_186B220(v35);
      v32 = v42;
      v23 = v41;
      v22 = v40;
    }
    *(_QWORD *)a3 = v21;
    *(_DWORD *)(a3 + 8) = v32;
    *(_DWORD *)(a3 + 16) = 0;
  }
  else
  {
    v21 = *(__m128i **)a3;
    v22 = v20 - 1;
    v23 = 16 * v20;
    m128i_i64 = *(_QWORD *)a3 + 16 * v20;
  }
  v25 = 16LL * (v7 & v22);
  v26 = &v21[(unsigned __int64)v25 / 0x10];
  if ( v25 != v23 )
  {
    v27 = &v21[(unsigned __int64)v25 / 0x10];
    v28 = nullptr;
    while ( 1 )
    {
      v29 = v27->m128i_i32[1];
      if ( v29 == 2 )
      {
        if ( v7 == v27->m128i_i32[0] && v7 == v27->m128i_i32[2] )
        {
          v27->m128i_i32[2] = v7;
          v27->m128i_i32[3] = v16;
          v27->m128i_i32[1] = 2;
          return (v5 & 1u) + 2 * v16;
        }
      }
      else
      {
        if ( !v29 )
        {
          if ( v28 )
            goto LABEL_38;
          v28 = v27;
          goto LABEL_39;
        }
        v28 = v27;
      }
      if ( ++v27 == (__m128i *)m128i_i64 )
        goto LABEL_32;
    }
  }
  v28 = nullptr;
  while ( 1 )
  {
LABEL_32:
    if ( v26 == v21 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v30 = v21->m128i_i32[1];
    if ( v30 != 2 )
      break;
    if ( v7 == v21->m128i_i32[0] && v7 == v21->m128i_i32[2] )
    {
      v21->m128i_i32[2] = v7;
      v21->m128i_i32[3] = v16;
      v21->m128i_i32[1] = 2;
      return (v5 & 1u) + 2 * v16;
    }
LABEL_31:
    ++v21;
  }
  if ( v30 )
  {
    v28 = v21;
    goto LABEL_31;
  }
  if ( v28 )
LABEL_38:
    --*(_DWORD *)(a3 + 16);
  else
    v28 = v21;
LABEL_39:
  v28->m128i_i32[2] = v7;
  v28->m128i_i32[3] = v16;
  v28->m128i_i32[1] = 2;
  v28->m128i_i32[0] = v7;
  ++*(_DWORD *)(a3 + 12);
  return (v5 & 1u) + 2 * v16;
}

