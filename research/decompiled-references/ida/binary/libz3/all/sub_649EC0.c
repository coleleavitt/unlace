__int64 *__fastcall sub_649EC0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 *v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned int v7; // edx
  __int64 *v8; // rsi
  int v9; // edi
  __int64 v10; // rdx
  __int64 *v11; // r8
  __int64 *i; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  _OWORD *v15; // rax
  unsigned int v16; // edx
  __m128i *v17; // r14
  unsigned int v18; // r9d
  __int64 v19; // rcx
  __m128i *v20; // r15
  int v21; // esi
  __int64 v22; // r9
  __m128i *v23; // rdi
  __m128i *v24; // rax
  __m128i *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r15
  __int64 *v28; // rbx
  __int32 v29; // r8d
  size_t v30; // r15
  __int64 *v31; // rbp
  int v32; // ecx
  __int64 v33; // r8
  __int64 *v34; // rdi
  __int64 *result; // rax
  __int64 *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rax
  __int32 v41; // ecx
  __int64 *v42; // r14
  __int64 *v43; // r9
  __int64 v44; // rax
  __int64 *v45; // rdx
  __int64 *v46; // rax
  __int64 v47; // rdx
  __m128i *v48; // rax
  int v49; // r10d
  __m128i *v50; // r8
  const __m128i *v51; // rax
  __m128i *v52; // r11
  __int64 v53; // rdx
  __m128i *v54; // rsi
  __m128i *v55; // rdx
  __m128i v56; // [rsp+0h] [rbp-78h] BYREF
  __int64 v57; // [rsp+18h] [rbp-60h]
  __int64 v58; // [rsp+20h] [rbp-58h]
  __int64 v59; // [rsp+28h] [rbp-50h]
  int v60; // [rsp+30h] [rbp-48h]
  int v61; // [rsp+34h] [rbp-44h]
  __m128i *v62; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 40);
  v4 = *(unsigned int *)(a1 + 32);
  v5 = *(__int64 **)(a1 + 24);
  v6 = *(_QWORD *)(v3 + 16);
  v7 = v4 - 1;
  v4 *= 16;
  v8 = (__int64 *)((char *)v5 + v4);
  v9 = *(_DWORD *)(v6 + 12);
  v10 = 16LL * (v9 & v7);
  v11 = &v5[(unsigned __int64)v10 / 8];
  if ( v10 != v4 )
  {
    for ( i = &v5[(unsigned __int64)v10 / 8]; v8 != i; i += 2 )
    {
      v13 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v13 + 12) == v9 && v6 == v13 )
          goto LABEL_19;
      }
      else if ( !v13 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v11 != v5; v5 += 2 )
  {
    v38 = *v5;
    if ( (unsigned __int64)*v5 > 1 )
    {
      if ( *(_DWORD *)(v38 + 12) == v9 && v6 == v38 )
      {
        i = v5;
LABEL_19:
        v14 = i[1];
        goto LABEL_20;
      }
    }
    else if ( !v38 )
    {
      break;
    }
  }
LABEL_8:
  v14 = sub_186B270(0x18u);
  v56 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)(unsigned __int64)v14);
  v15 = (_OWORD *)sub_186B270(0x40u);
  v16 = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(v14 + 8) = 8;
  *(_QWORD *)v14 = v15;
  *v15 = 0;
  v15[1] = 0;
  v15[2] = 0;
  v15[3] = 0;
  LODWORD(v15) = 4 * (*(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 40));
  *(_DWORD *)(v14 + 16) = 0;
  if ( 3 * v16 < (unsigned int)v15 )
  {
    LODWORD(v58) = 2 * v16;
    v57 = 32LL * v16;
    v48 = (__m128i *)sub_186B270(v57);
    v19 = v57;
    v49 = v58;
    v17 = v48;
    v50 = (__m128i *)((char *)v48 + v57);
    if ( (_DWORD)v58 )
    {
      if ( (v57 & 0x10) == 0 || (*v48 = 0, ++v48, v50 != v48) )
      {
        do
        {
          *v48 = 0;
          v48 += 2;
          v48[-1] = 0;
        }
        while ( v50 != v48 );
      }
    }
    v51 = *(const __m128i **)(a1 + 24);
    v18 = v49 - 1;
    v20 = v50;
    v52 = (__m128i *)&v51[*(unsigned int *)(a1 + 32)];
    if ( v51 != v52 )
    {
      do
      {
        if ( v51->m128i_i64[0] > 1uLL )
        {
          v53 = 16LL * (*(_DWORD *)(v51->m128i_i64[0] + 12) & v18);
          v54 = &v17[(unsigned __int64)v53 / 0x10];
          if ( v19 == v53 )
          {
LABEL_94:
            if ( v17 == v54 )
            {
LABEL_108:
              v62 = v50;
              v61 = v49;
              v59 = v19;
              v60 = v49 - 1;
              v58 = (__int64)v52;
              v57 = (__int64)v51;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v55 = v17;
            while ( v55->m128i_i64[0] )
            {
              if ( v54 == ++v55 )
                goto LABEL_108;
            }
          }
          else
          {
            v55 = &v17[(unsigned __int64)v53 / 0x10];
            while ( v55->m128i_i64[0] )
            {
              if ( v50 == ++v55 )
                goto LABEL_94;
            }
          }
          *v55 = _mm_loadu_si128(v51);
        }
        ++v51;
      }
      while ( v52 != v51 );
      v52 = *(__m128i **)(a1 + 24);
    }
    if ( v52 )
    {
      v60 = v49;
      v58 = v19;
      LODWORD(v57) = v49 - 1;
      sub_186B220(v52);
      v49 = v60;
      v19 = v58;
      v18 = v57;
    }
    *(_QWORD *)(a1 + 24) = v17;
    *(_DWORD *)(a1 + 32) = v49;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    v17 = *(__m128i **)(a1 + 24);
    v18 = v16 - 1;
    v19 = 16LL * v16;
    v20 = (__m128i *)((char *)v17 + v19);
  }
  v21 = *(_DWORD *)(v6 + 12);
  v22 = 16LL * (v21 & v18);
  v23 = &v17[(unsigned __int64)v22 / 0x10];
  if ( v22 == v19 )
  {
    v25 = nullptr;
    while ( 1 )
    {
LABEL_48:
      if ( v23 == v17 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v39 = v17->m128i_i64[0];
      if ( v17->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v39 + 12) == v21 && v6 == v39 )
        {
          *v17 = _mm_load_si128(&v56);
          goto LABEL_20;
        }
      }
      else
      {
        if ( !v39 )
        {
          if ( v25 )
            --*(_DWORD *)(a1 + 40);
          else
            v25 = v17;
          goto LABEL_105;
        }
        v25 = v17;
      }
      ++v17;
    }
  }
  v24 = &v17[(unsigned __int64)v22 / 0x10];
  v25 = nullptr;
  while ( 1 )
  {
    v26 = v24->m128i_i64[0];
    if ( v24->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v26 + 12) == v21 && v6 == v26 )
    {
      *v24 = _mm_load_si128(&v56);
      goto LABEL_20;
    }
LABEL_14:
    if ( ++v24 == v20 )
      goto LABEL_48;
  }
  if ( v26 )
  {
    v25 = v24;
    goto LABEL_14;
  }
  if ( v25 )
    --*(_DWORD *)(a1 + 40);
  else
    v25 = v24;
LABEL_105:
  *v25 = _mm_load_si128(&v56);
  ++*(_DWORD *)(a1 + 36);
LABEL_20:
  v27 = *(unsigned int *)(v14 + 8);
  if ( 3 * (int)v27 < (unsigned int)(4 * (*(_DWORD *)(v14 + 12) + *(_DWORD *)(v14 + 16))) )
  {
    v56.m128i_i32[0] = 2 * v27;
    v30 = 8LL * (unsigned int)(2 * v27);
    v40 = (__int64 *)sub_186B270(v30);
    v41 = v56.m128i_i32[0];
    v28 = v40;
    if ( v56.m128i_i32[0] )
    {
      memset(v40, 0, v30);
      v41 = v56.m128i_i32[0];
    }
    v42 = *(__int64 **)v14;
    v29 = v41 - 1;
    v31 = &v28[v30 / 8];
    v43 = (__int64 *)(*(_QWORD *)v14 + 8LL * *(unsigned int *)(v14 + 8));
    if ( *(__int64 **)v14 != v43 )
    {
      do
      {
        while ( (unsigned __int64)*v42 <= 1 )
        {
          if ( v43 == ++v42 )
            goto LABEL_64;
        }
        v44 = 8LL * (*(_DWORD *)(*v42 + 12) & (unsigned int)v29);
        v45 = &v28[(unsigned __int64)v44 / 8];
        if ( v30 == v44 )
        {
LABEL_68:
          if ( v28 == v45 )
          {
LABEL_76:
            LODWORD(v58) = v41;
            LODWORD(v57) = v41 - 1;
            v56.m128i_i64[0] = (__int64)v43;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v46 = v28;
          while ( *v46 )
          {
            if ( v45 == ++v46 )
              goto LABEL_76;
          }
        }
        else
        {
          v46 = &v28[(unsigned __int64)v44 / 8];
          while ( *v46 )
          {
            if ( v31 == ++v46 )
              goto LABEL_68;
          }
        }
        v47 = *v42++;
        *v46 = v47;
      }
      while ( v43 != v42 );
LABEL_64:
      v43 = *(__int64 **)v14;
    }
    if ( v43 )
    {
      LODWORD(v57) = v41;
      v56.m128i_i32[0] = v41 - 1;
      sub_186B220(v43);
      v41 = v57;
      v29 = v56.m128i_i32[0];
    }
    *(_QWORD *)v14 = v28;
    *(_DWORD *)(v14 + 8) = v41;
    *(_DWORD *)(v14 + 16) = 0;
  }
  else
  {
    v28 = *(__int64 **)v14;
    v29 = v27 - 1;
    v30 = 8 * v27;
    v31 = (__int64 *)(*(_QWORD *)v14 + v30);
  }
  v32 = *(_DWORD *)(v3 + 12);
  v33 = v32 & (unsigned int)v29;
  v34 = &v28[v33];
  if ( 8 * v33 != v30 )
  {
    result = &v28[v33];
    v36 = nullptr;
    while ( 1 )
    {
      v37 = *result;
      if ( (unsigned __int64)*result > 1 )
      {
        if ( *(_DWORD *)(v37 + 12) == v32 && v3 == v37 )
        {
          *result = v3;
          return result;
        }
      }
      else
      {
        if ( !v37 )
        {
          if ( v36 )
            goto LABEL_74;
          v36 = result;
          goto LABEL_75;
        }
        v36 = result;
      }
      if ( ++result == v31 )
        goto LABEL_33;
    }
  }
  v36 = nullptr;
LABEL_33:
  while ( 2 )
  {
    if ( v34 == v28 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__int64 *)*v28;
    if ( (unsigned __int64)*v28 > 1 )
    {
      if ( *((_DWORD *)result + 3) == v32 && (__int64 *)v3 == result )
      {
        *v28 = v3;
        return result;
      }
      goto LABEL_32;
    }
    if ( result )
    {
      v36 = v28;
LABEL_32:
      ++v28;
      continue;
    }
    break;
  }
  if ( v36 )
LABEL_74:
    --*(_DWORD *)(v14 + 16);
  else
    v36 = v28;
LABEL_75:
  *v36 = v3;
  ++*(_DWORD *)(v14 + 12);
  return result;
}

