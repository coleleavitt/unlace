__int64 __fastcall sub_CD9900(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r14
  unsigned int v4; // eax
  int v5; // r8d
  const __m128i *v6; // rbx
  int v7; // r10d
  __int64 v8; // rcx
  __m128i *v9; // r12
  int v10; // esi
  __int64 v11; // rax
  const __m128i *v12; // rdi
  __m128i *v13; // rax
  __m128i *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // r14
  __int64 result; // rax
  __int64 v19; // rbp
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // r9
  int v23; // edi
  unsigned int v24; // esi
  __int64 *v25; // rbx
  unsigned int v26; // r11d
  __int64 v27; // r9
  __int64 v28; // r12
  int v29; // esi
  __int64 v30; // r11
  __int64 *v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 *v34; // rax
  __m128i *v35; // r10
  __int64 v36; // rsi
  __m128i *v37; // r8
  const __m128i *v38; // r12
  __int64 *v39; // r8
  __int64 v40; // r14
  __int64 *v41; // r13
  const __m128i *v42; // rbx
  __int64 v43; // rax
  __m128i *v44; // rdx
  __m128i *v45; // rax
  __m128i v46; // xmm0
  const __m128i *v47; // rax
  int v48; // r9d
  __m128i *v49; // r8
  const __m128i *v50; // r15
  __m128i *v51; // r11
  __int64 v52; // rax
  __m128i *v53; // rdx
  __m128i *v54; // rax
  __m128i v55; // xmm0
  int v56; // [rsp+8h] [rbp-70h]
  size_t v57; // [rsp+8h] [rbp-70h]
  int v58; // [rsp+8h] [rbp-70h]
  int v60; // [rsp+18h] [rbp-60h]
  size_t v61; // [rsp+18h] [rbp-60h]
  __int64 v62; // [rsp+20h] [rbp-58h]
  int v63; // [rsp+20h] [rbp-58h]

  v2 = a2;
  v3 = *a1;
  v4 = *(_DWORD *)(*a1 + 8);
  v5 = *(_DWORD *)(*a1 + 16);
  if ( 3 * v4 < 4 * (v5 + *(_DWORD *)(*a1 + 12)) )
  {
    v60 = 2 * v4;
    v57 = 32LL * v4;
    v47 = (const __m128i *)sub_186B270(v57);
    v8 = v57;
    v48 = v60;
    v6 = v47;
    v49 = (__m128i *)&v47[v57 / 0x10];
    if ( v60 )
    {
      do
      {
        v47->m128i_i64[0] = 0;
        ++v47;
        v47[-1].m128i_i32[2] = 0;
      }
      while ( v47 != v49 );
    }
    v50 = *(const __m128i **)v3;
    v7 = v60 - 1;
    v9 = v49;
    v51 = (__m128i *)(*(_QWORD *)v3 + 16LL * *(unsigned int *)(v3 + 8));
    if ( *(__m128i **)v3 != v51 )
    {
      do
      {
        while ( v50->m128i_i64[0] <= 1uLL )
        {
          if ( v51 == ++v50 )
            goto LABEL_82;
        }
        v52 = 16LL * (*(_DWORD *)(v50->m128i_i64[0] + 12) & (unsigned int)v7);
        v53 = (__m128i *)&v6[(unsigned __int64)v52 / 0x10];
        if ( v57 == v52 )
        {
LABEL_86:
          if ( v6 == v53 )
          {
LABEL_93:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v54 = (__m128i *)v6;
          while ( v54->m128i_i64[0] )
          {
            if ( v53 == ++v54 )
              goto LABEL_93;
          }
        }
        else
        {
          v54 = (__m128i *)&v6[(unsigned __int64)v52 / 0x10];
          while ( v54->m128i_i64[0] )
          {
            if ( v49 == ++v54 )
              goto LABEL_86;
          }
        }
        v55 = _mm_loadu_si128(v50++);
        *v54 = v55;
      }
      while ( v51 != v50 );
LABEL_82:
      v51 = *(__m128i **)v3;
      v2 = a2;
    }
    if ( v51 )
    {
      v63 = v60;
      v61 = v57;
      v58 = v48 - 1;
      sub_186B220(v51);
      v48 = v63;
      v8 = v61;
      v7 = v58;
    }
    *(_QWORD *)v3 = v6;
    v5 = 0;
    *(_DWORD *)(v3 + 8) = v48;
    *(_DWORD *)(v3 + 16) = 0;
  }
  else
  {
    v6 = *(const __m128i **)v3;
    v7 = v4 - 1;
    v8 = 16LL * v4;
    v9 = (__m128i *)(*(_QWORD *)v3 + v8);
  }
  v10 = *(_DWORD *)(v2 + 12);
  v11 = 16LL * (v10 & (unsigned int)v7);
  v12 = &v6[(unsigned __int64)v11 / 0x10];
  if ( v11 != v8 )
  {
    v13 = (__m128i *)&v6[(unsigned __int64)v11 / 0x10];
    v14 = nullptr;
    while ( 1 )
    {
      v15 = v13->m128i_i64[0];
      if ( v13->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v15 + 12) == v10 && v2 == v15 )
          goto LABEL_21;
      }
      else
      {
        if ( !v15 )
        {
          if ( v14 )
            goto LABEL_19;
          v14 = v13;
          goto LABEL_20;
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
      sub_1873130(114, 461);
    }
    v16 = v6->m128i_i64[0];
    if ( v6->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v16 + 12) == v10 && v2 == v16 )
      goto LABEL_21;
LABEL_13:
    ++v6;
  }
  if ( v16 )
  {
    v14 = (__m128i *)v6;
    goto LABEL_13;
  }
  if ( v14 )
LABEL_19:
    *(_DWORD *)(v3 + 16) = v5 - 1;
  else
    v14 = (__m128i *)v6;
LABEL_20:
  v14->m128i_i64[0] = v2;
  v14->m128i_i32[2] = 0;
  ++*(_DWORD *)(v3 + 12);
LABEL_21:
  v17 = (__int64 *)(v2 + 32);
  result = 8LL * *(unsigned int *)(v2 + 24);
  v19 = v2 + 32 + result;
  if ( !result )
    return result;
  while ( 2 )
  {
    v20 = *v17;
    if ( *(_WORD *)(*v17 + 4) )
      goto LABEL_23;
    v21 = *a1;
    v22 = *(unsigned int *)(*a1 + 8);
    v23 = *(_DWORD *)(*a1 + 16);
    v24 = 2 * v22;
    v56 = 2 * v22;
    if ( 3 * (int)v22 < (unsigned int)(4 * (v23 + *(_DWORD *)(*a1 + 12))) )
    {
      v34 = (__int64 *)sub_186B270(16LL * v24);
      v27 = 16LL * v24;
      v25 = v34;
      v35 = (__m128i *)((char *)v34 + v27);
      if ( v24 )
      {
        do
        {
          *v34 = 0;
          v34 += 2;
          *((_DWORD *)v34 - 2) = 0;
        }
        while ( v34 != (__int64 *)v35 );
      }
      v28 = (__int64)v35;
      v36 = 16LL * *(unsigned int *)(v21 + 8);
      v37 = (__m128i *)(*(_QWORD *)v21 + v36);
      v26 = v56 - 1;
      if ( *(__m128i **)v21 != v37 )
      {
        v38 = (const __m128i *)(*(_QWORD *)v21 + v36);
        v39 = v17;
        v40 = v20;
        v41 = v25;
        v42 = *(const __m128i **)v21;
        do
        {
          while ( v42->m128i_i64[0] <= 1uLL )
          {
            if ( v38 == ++v42 )
              goto LABEL_54;
          }
          v43 = 16LL * (*(_DWORD *)(v42->m128i_i64[0] + 12) & v26);
          v44 = (__m128i *)&v41[(unsigned __int64)v43 / 8];
          if ( v27 == v43 )
          {
LABEL_58:
            if ( v41 == (__int64 *)v44 )
            {
LABEL_67:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v45 = (__m128i *)v41;
            while ( v45->m128i_i64[0] )
            {
              if ( v44 == ++v45 )
                goto LABEL_67;
            }
          }
          else
          {
            v45 = (__m128i *)&v41[(unsigned __int64)v43 / 8];
            while ( v45->m128i_i64[0] )
            {
              if ( v35 == ++v45 )
                goto LABEL_58;
            }
          }
          v46 = _mm_loadu_si128(v42++);
          *v45 = v46;
        }
        while ( v38 != v42 );
LABEL_54:
        v25 = v41;
        v20 = v40;
        v17 = v39;
        v37 = *(__m128i **)v21;
        v28 = (__int64)v35;
      }
      if ( v37 )
      {
        v62 = v27;
        sub_186B220(v37);
        v27 = v62;
        v26 = v56 - 1;
      }
      *(_QWORD *)v21 = v25;
      v23 = 0;
      *(_DWORD *)(v21 + 16) = 0;
      *(_DWORD *)(v21 + 8) = v56;
    }
    else
    {
      v25 = *(__int64 **)v21;
      v26 = v22 - 1;
      v27 = 16 * v22;
      v28 = *(_QWORD *)v21 + v27;
    }
    v29 = *(_DWORD *)(v20 + 12);
    v30 = 16LL * (v29 & v26);
    v31 = &v25[(unsigned __int64)v30 / 8];
    if ( v30 != v27 )
    {
      result = (__int64)&v25[(unsigned __int64)v30 / 8];
      v32 = 0;
      while ( 1 )
      {
        v33 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v33 + 12) == v29 && v20 == v33 )
          {
            v32 = result;
            goto LABEL_66;
          }
        }
        else
        {
          if ( !v33 )
          {
            if ( v32 )
              goto LABEL_64;
            v32 = result;
            goto LABEL_65;
          }
          v32 = result;
        }
        result += 16;
        if ( result == v28 )
          goto LABEL_38;
      }
    }
    v32 = 0;
LABEL_38:
    while ( 2 )
    {
      if ( v31 == v25 )
      {
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      result = *v25;
      if ( (unsigned __int64)*v25 > 1 )
      {
        if ( *(_DWORD *)(result + 12) == v29 && v20 == result )
        {
          v32 = (__int64)v25;
          goto LABEL_66;
        }
        goto LABEL_37;
      }
      if ( result )
      {
        v32 = (__int64)v25;
LABEL_37:
        v25 += 2;
        continue;
      }
      break;
    }
    if ( v32 )
LABEL_64:
      *(_DWORD *)(v21 + 16) = v23 - 1;
    else
      v32 = (__int64)v25;
LABEL_65:
    *(_QWORD *)v32 = v20;
    *(_DWORD *)(v32 + 8) = 0;
    ++*(_DWORD *)(v21 + 12);
LABEL_66:
    ++*(_DWORD *)(v32 + 8);
LABEL_23:
    if ( (__int64 *)v19 != ++v17 )
      continue;
    return result;
  }
}

