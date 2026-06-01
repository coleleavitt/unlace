__m128i *__fastcall sub_CD9280(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __m128i *v6; // r12
  int v7; // ecx
  __int64 v8; // r14
  unsigned int v9; // edi
  int v10; // r10d
  __int64 v11; // r8
  __m128i *v12; // rbx
  __int64 v13; // rdi
  __m128i *v14; // rsi
  __m128i *i; // rax
  __int64 v16; // rdx
  __int32 v17; // r13d
  __m128i *v18; // rax
  __m128i *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rcx
  __m128i *v23; // rbx
  unsigned int v24; // r10d
  __int64 v25; // rcx
  __int64 v26; // r12
  int v27; // esi
  __int64 v28; // r10
  __m128i *v29; // rdi
  __m128i *result; // rax
  __m128i *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  __m128i *v35; // rax
  int v36; // r9d
  __m128i *v37; // r8
  const __m128i *v38; // r15
  __m128i *v39; // r11
  __int64 v40; // rax
  __m128i *v41; // rdx
  __m128i *v42; // rax
  __m128i v43; // xmm0
  __m128i *v44; // rax
  int v45; // r9d
  __m128i *v46; // r10
  const __m128i *v47; // rcx
  int v48; // eax
  __m128i *v49; // r11
  __int64 v50; // rdx
  __m128i *v51; // rsi
  __m128i *v52; // rdx
  size_t v53; // [rsp+0h] [rbp-68h]
  unsigned int v54; // [rsp+0h] [rbp-68h]
  size_t v55; // [rsp+0h] [rbp-68h]
  int v56; // [rsp+8h] [rbp-60h]
  size_t v57; // [rsp+8h] [rbp-60h]
  int v58; // [rsp+8h] [rbp-60h]
  int v59; // [rsp+10h] [rbp-58h]

  v4 = sub_15D1F10(a2);
  v5 = *((unsigned int *)a1 + 4);
  v6 = (__m128i *)a1[1];
  v7 = *(_DWORD *)(v4 + 12);
  v8 = v4;
  v9 = v5 - 1;
  v10 = *((_DWORD *)a1 + 4);
  v11 = 16 * v5;
  v12 = (__m128i *)((char *)v6 + v11);
  v13 = 16LL * (v7 & v9);
  v14 = &v6[(unsigned __int64)v13 / 0x10];
  if ( v13 != v11 )
  {
    for ( i = &v6[(unsigned __int64)v13 / 0x10]; v12 != i; ++i )
    {
      v16 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v16 + 12) == v7 && v8 == v16 )
        {
LABEL_17:
          v17 = i->m128i_i32[2];
          goto LABEL_18;
        }
      }
      else if ( !v16 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v6 != v14 )
  {
    for ( i = (__m128i *)a1[1]; v14 != i; ++i )
    {
      v33 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v33 + 12) == v7 && v8 == v33 )
          goto LABEL_17;
      }
      else if ( !v33 )
      {
        break;
      }
    }
  }
LABEL_8:
  v17 = *((_DWORD *)a1 + 8);
  *((_DWORD *)a1 + 8) = v17 + 1;
  if ( 3 * v10 < (unsigned int)(4 * (*((_DWORD *)a1 + 5) + *((_DWORD *)a1 + 6))) )
  {
    v58 = 2 * v10;
    v55 = 16LL * (unsigned int)(2 * v10);
    v44 = (__m128i *)sub_186B270(v55);
    v11 = v55;
    v45 = v58;
    v6 = v44;
    v46 = &v44[v55 / 0x10];
    if ( v58 )
    {
      do
      {
        v44->m128i_i64[0] = 0;
        ++v44;
        v44[-1].m128i_i32[2] = 0;
      }
      while ( v44 != v46 );
    }
    v47 = (const __m128i *)a1[1];
    v48 = v58 - 1;
    v12 = v46;
    v49 = (__m128i *)&v47[*((unsigned int *)a1 + 4)];
    if ( v47 != v49 )
    {
      do
      {
        if ( v47->m128i_i64[0] > 1uLL )
        {
          v50 = 16LL * (*(_DWORD *)(v47->m128i_i64[0] + 12) & (unsigned int)v48);
          v51 = &v6[(unsigned __int64)v50 / 0x10];
          if ( v55 == v50 )
          {
LABEL_90:
            if ( v6 == v51 )
            {
LABEL_104:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v52 = v6;
            while ( v52->m128i_i64[0] )
            {
              if ( v51 == ++v52 )
                goto LABEL_104;
            }
          }
          else
          {
            v52 = &v6[(unsigned __int64)v50 / 0x10];
            while ( v52->m128i_i64[0] )
            {
              if ( v46 == ++v52 )
                goto LABEL_90;
            }
          }
          *v52 = _mm_loadu_si128(v47);
        }
        ++v47;
      }
      while ( v49 != v47 );
      v49 = (__m128i *)a1[1];
    }
    if ( v49 )
    {
      sub_186B220(v49);
      v45 = v58;
      v48 = v58 - 1;
      v11 = v55;
    }
    v7 = *(_DWORD *)(v8 + 12);
    a1[1] = (__int64)v6;
    *((_DWORD *)a1 + 4) = v45;
    *((_DWORD *)a1 + 6) = 0;
    v13 = 16LL * (v7 & (unsigned int)v48);
    v14 = &v6[(unsigned __int64)v13 / 0x10];
  }
  if ( v13 != v11 )
  {
    v18 = v14;
    v19 = nullptr;
    while ( 1 )
    {
      v20 = v18->m128i_i64[0];
      if ( v18->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v20 + 12) == v7 && v8 == v20 )
        {
          v18->m128i_i64[0] = v8;
          v18->m128i_i32[2] = v17;
          goto LABEL_18;
        }
      }
      else
      {
        if ( !v20 )
        {
          if ( v19 )
            goto LABEL_101;
          v19 = v18;
          goto LABEL_102;
        }
        v19 = v18;
      }
      if ( ++v18 == v12 )
        goto LABEL_46;
    }
  }
  v19 = nullptr;
  while ( 1 )
  {
LABEL_46:
    if ( v6 == v14 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v34 = v6->m128i_i64[0];
    if ( v6->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v34 + 12) == v7 && v8 == v34 )
    {
      v6->m128i_i64[0] = v8;
      v6->m128i_i32[2] = v17;
      goto LABEL_18;
    }
LABEL_45:
    ++v6;
  }
  if ( v34 )
  {
    v19 = v6;
    goto LABEL_45;
  }
  if ( v19 )
LABEL_101:
    --*((_DWORD *)a1 + 6);
  else
    v19 = v6;
LABEL_102:
  v19->m128i_i64[0] = v8;
  v19->m128i_i32[2] = v17;
  ++*((_DWORD *)a1 + 5);
LABEL_18:
  v21 = *a1;
  v22 = *(unsigned int *)(*a1 + 8);
  if ( 3 * (int)v22 < (unsigned int)(4 * (*(_DWORD *)(*a1 + 12) + *(_DWORD *)(*a1 + 16))) )
  {
    v56 = 2 * v22;
    v53 = 16LL * (unsigned int)(2 * v22);
    v35 = (__m128i *)sub_186B270(v53);
    v25 = v53;
    v36 = v56;
    v23 = v35;
    v37 = &v35[v53 / 0x10];
    if ( v56 )
    {
      do
      {
        v35->m128i_i64[0] = 0;
        ++v35;
        v35[-1].m128i_i32[2] = 0;
      }
      while ( v35 != v37 );
    }
    v38 = *(const __m128i **)v21;
    v24 = v56 - 1;
    v26 = (__int64)v37;
    v39 = (__m128i *)(*(_QWORD *)v21 + 16LL * *(unsigned int *)(v21 + 8));
    if ( *(__m128i **)v21 != v39 )
    {
      do
      {
        while ( v38->m128i_i64[0] <= 1uLL )
        {
          if ( v39 == ++v38 )
            goto LABEL_62;
        }
        v40 = 16LL * (*(_DWORD *)(v38->m128i_i64[0] + 12) & v24);
        v41 = &v23[(unsigned __int64)v40 / 0x10];
        if ( v53 == v40 )
        {
LABEL_66:
          if ( v23 == v41 )
          {
LABEL_74:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v42 = v23;
          while ( v42->m128i_i64[0] )
          {
            if ( v41 == ++v42 )
              goto LABEL_74;
          }
        }
        else
        {
          v42 = &v23[(unsigned __int64)v40 / 0x10];
          while ( v42->m128i_i64[0] )
          {
            if ( v37 == ++v42 )
              goto LABEL_66;
          }
        }
        v43 = _mm_loadu_si128(v38++);
        *v42 = v43;
      }
      while ( v39 != v38 );
LABEL_62:
      v39 = *(__m128i **)v21;
    }
    if ( v39 )
    {
      v59 = v56;
      v57 = v53;
      v54 = v36 - 1;
      sub_186B220(v39);
      v36 = v59;
      v25 = v57;
      v24 = v54;
    }
    *(_QWORD *)v21 = v23;
    *(_DWORD *)(v21 + 8) = v36;
    *(_DWORD *)(v21 + 16) = 0;
  }
  else
  {
    v23 = *(__m128i **)v21;
    v24 = v22 - 1;
    v25 = 16 * v22;
    v26 = *(_QWORD *)v21 + v25;
  }
  v27 = *(_DWORD *)(a2 + 12);
  v28 = 16LL * (v27 & v24);
  v29 = &v23[(unsigned __int64)v28 / 0x10];
  if ( v28 != v25 )
  {
    result = &v23[(unsigned __int64)v28 / 0x10];
    v31 = nullptr;
    while ( 1 )
    {
      v32 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v32 + 12) == v27 && a2 == v32 )
        {
          result->m128i_i64[0] = a2;
          result->m128i_i32[2] = v17;
          return result;
        }
      }
      else
      {
        if ( !v32 )
        {
          if ( v31 )
            goto LABEL_72;
          v31 = result;
          goto LABEL_73;
        }
        v31 = result;
      }
      if ( ++result == (__m128i *)v26 )
        goto LABEL_31;
    }
  }
  v31 = nullptr;
LABEL_31:
  while ( 2 )
  {
    if ( v29 == v23 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v23->m128i_i64[0];
    if ( v23->m128i_i64[0] > 1uLL )
    {
      if ( result->m128i_i32[3] == v27 && (__m128i *)a2 == result )
      {
        v23->m128i_i64[0] = a2;
        v23->m128i_i32[2] = v17;
        return result;
      }
      goto LABEL_30;
    }
    if ( result )
    {
      v31 = v23;
LABEL_30:
      ++v23;
      continue;
    }
    break;
  }
  if ( v31 )
LABEL_72:
    --*(_DWORD *)(v21 + 16);
  else
    v31 = v23;
LABEL_73:
  v31->m128i_i64[0] = a2;
  v31->m128i_i32[2] = v17;
  ++*(_DWORD *)(v21 + 12);
  return result;
}

