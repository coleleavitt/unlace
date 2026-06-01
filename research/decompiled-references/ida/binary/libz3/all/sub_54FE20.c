__int64 __fastcall sub_54FE20(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int *v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  char *v8; // rsi
  __int64 v9; // rdx
  unsigned int *v10; // r8
  unsigned int *i; // rax
  __int16 v12; // ax
  unsigned int v13; // r12d
  __int64 v15; // rax
  _DWORD *v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // r13d
  int v23; // eax
  unsigned int v24; // esi
  unsigned int v25; // edx
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // r14d
  __m128i *v29; // r13
  unsigned int v30; // r10d
  __int64 v31; // rcx
  __m128i *v32; // r15
  int v33; // esi
  __int64 v34; // rax
  __m128i *v35; // rdi
  __m128i *v36; // rax
  __m128i *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __m128i *v40; // rax
  __m128i *v41; // r9
  __m128i *v42; // rdi
  const __m128i *v43; // r8
  const __m128i *v44; // r11
  __int64 v45; // rax
  __m128i *v46; // rdx
  __m128i *v47; // rax

  v4 = *(unsigned int *)(a1 + 80);
  v5 = *(unsigned int **)(a1 + 72);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v4 - 1;
  v4 *= 16;
  v8 = (char *)v5 + v4;
  v9 = 16LL * (v6 & v7);
  v10 = (unsigned int *)((char *)v5 + v9);
  if ( v9 != v4 )
  {
    for ( i = (unsigned int *)((char *)v5 + v9); v8 != (char *)i; i += 4 )
    {
      v9 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v9 + 12) == v6 && a2 == v9 )
          return i[2];
      }
      else if ( !v9 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v5 == v10 )
  {
LABEL_8:
    v12 = *(_WORD *)(a2 + 4);
    if ( !v12 )
      goto LABEL_23;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v15 = *(_QWORD *)v5;
    if ( *(_QWORD *)v5 <= 1u )
      break;
    if ( *(_DWORD *)(v15 + 12) == v6 && a2 == v15 )
    {
      i = v5;
      return i[2];
    }
LABEL_19:
    v5 += 4;
    if ( v10 == v5 )
      goto LABEL_8;
  }
  if ( v15 )
    goto LABEL_19;
  v12 = *(_WORD *)(a2 + 4);
  if ( v12 )
  {
LABEL_9:
    if ( v12 != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 267);
    }
    return sub_54DEE0(a1, a2);
  }
LABEL_23:
  v16 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( *(_DWORD *)(a2 + 24) )
  {
    if ( v16 )
      goto LABEL_25;
LABEL_29:
    sub_1872CE0("");
    sub_1873130(114, 270);
  }
  if ( !v16 || *v16 == -1 )
    return sub_54DEE0(a1, a2);
LABEL_25:
  v17 = v16[1];
  if ( v17 != 6 )
  {
    if ( v17 > 6 )
    {
      if ( v17 == 8 )
      {
        v18 = sub_54FE20(a1, *(_QWORD *)(a2 + 32), v9, v5, v10);
        v13 = v18 + 1;
        if ( (v18 & 1) != 0 )
          return (unsigned int)(v18 - 1);
        return v13;
      }
    }
    else
    {
      v13 = 1;
      if ( !v17 )
        return v13;
      if ( v17 == 1 )
        return 0;
    }
    goto LABEL_29;
  }
  v13 = sub_54FE20(a1, *(_QWORD *)(a2 + 32), v9, v5, v10);
  if ( *(_DWORD *)(a2 + 24) > 1u )
  {
    v22 = 1;
    do
    {
      v23 = sub_54FE20(a1, *(_QWORD *)(a2 + 8LL * v22 + 32), v19, v20, v21);
      v24 = v13 + 1;
      v25 = v23 + 1;
      if ( (v23 & 1) != 0 )
        v25 = v23 - 1;
      if ( (v13 & 1) != 0 )
        v24 = v13 - 1;
      v26 = sub_54FB50(a1, v24, v25);
      v19 = (unsigned int)(v26 - 1);
      v13 = v26 + 1;
      if ( (v26 & 1) != 0 )
        v13 = v26 - 1;
      ++v22;
    }
    while ( v22 < *(_DWORD *)(a2 + 24) );
  }
  v27 = *(unsigned int *)(a1 + 80);
  v28 = 2 * v27;
  if ( 3 * (int)v27 < (unsigned int)(4 * (*(_DWORD *)(a1 + 84) + *(_DWORD *)(a1 + 88))) )
  {
    v40 = (__m128i *)sub_186B270(16LL * v28);
    v31 = 16LL * v28;
    v29 = v40;
    v41 = &v40[(unsigned __int64)v31 / 0x10];
    if ( v28 )
    {
      do
      {
        v40->m128i_i64[0] = 0;
        ++v40;
        v40[-1].m128i_i32[2] = 0;
      }
      while ( v40 != v41 );
    }
    v42 = *(__m128i **)(a1 + 72);
    v30 = v28 - 1;
    v32 = v41;
    v43 = v42;
    v44 = &v42[*(unsigned int *)(a1 + 80)];
    if ( v42 != v44 )
    {
      do
      {
        if ( v43->m128i_i64[0] > 1uLL )
        {
          v45 = 16LL * (*(_DWORD *)(v43->m128i_i64[0] + 12) & v30);
          v46 = &v29[(unsigned __int64)v45 / 0x10];
          if ( v31 == v45 )
          {
LABEL_75:
            if ( v29 == v46 )
            {
LABEL_87:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v47 = v29;
            while ( v47->m128i_i64[0] )
            {
              if ( v46 == ++v47 )
                goto LABEL_87;
            }
          }
          else
          {
            v47 = &v29[(unsigned __int64)v45 / 0x10];
            while ( v47->m128i_i64[0] )
            {
              if ( v41 == ++v47 )
                goto LABEL_75;
            }
          }
          *v47 = _mm_loadu_si128(v43);
        }
        ++v43;
      }
      while ( v44 != v43 );
      v42 = *(__m128i **)(a1 + 72);
    }
    if ( v42 )
    {
      sub_186B220(v42);
      v31 = 16LL * v28;
      v30 = v28 - 1;
    }
    *(_QWORD *)(a1 + 72) = v29;
    *(_DWORD *)(a1 + 80) = v28;
    *(_DWORD *)(a1 + 88) = 0;
  }
  else
  {
    v29 = *(__m128i **)(a1 + 72);
    v30 = v27 - 1;
    v31 = 16 * v27;
    v32 = &v29[v27];
  }
  v33 = *(_DWORD *)(a2 + 12);
  v34 = 16LL * (v33 & v30);
  v35 = &v29[(unsigned __int64)v34 / 0x10];
  if ( v34 != v31 )
  {
    v36 = &v29[(unsigned __int64)v34 / 0x10];
    v37 = nullptr;
    while ( 1 )
    {
      v38 = v36->m128i_i64[0];
      if ( v36->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v38 + 12) == v33 && a2 == v38 )
        {
          v36->m128i_i64[0] = a2;
          v36->m128i_i32[2] = v13;
          return v13;
        }
      }
      else
      {
        if ( !v38 )
        {
          if ( v37 )
            --*(_DWORD *)(a1 + 88);
          else
            v37 = v36;
          v37->m128i_i64[0] = a2;
          v37->m128i_i32[2] = v13;
          ++*(_DWORD *)(a1 + 84);
          return v13;
        }
        v37 = v36;
      }
      if ( ++v36 == v32 )
        goto LABEL_59;
    }
  }
  v37 = nullptr;
LABEL_59:
  while ( 2 )
  {
    if ( v35 == v29 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v39 = v29->m128i_i64[0];
    if ( v29->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v39 + 12) == v33 && a2 == v39 )
      {
        v29->m128i_i64[0] = a2;
        v29->m128i_i32[2] = v13;
        return v13;
      }
      goto LABEL_58;
    }
    if ( v39 )
    {
      v37 = v29;
LABEL_58:
      ++v29;
      continue;
    }
    break;
  }
  if ( v37 )
  {
    --*(_DWORD *)(a1 + 88);
    v29 = v37;
  }
  v29->m128i_i64[0] = a2;
  v29->m128i_i32[2] = v13;
  ++*(_DWORD *)(a1 + 84);
  return v13;
}

