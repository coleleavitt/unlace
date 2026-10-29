__int64 __fastcall sub_C2AB80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v8; // r8
  unsigned int v9; // esi
  __m128i *v10; // rbx
  unsigned int v11; // r10d
  __int64 v12; // r8
  __int64 *v13; // r15
  int v14; // esi
  __int64 v15; // rax
  __m128i *v16; // rdi
  __int64 *m128i_i64; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rbx
  __int64 result; // rax
  __m128i *v23; // rax
  int v24; // esi
  __m128i *v25; // r9
  const __m128i *v26; // rcx
  __int64 v27; // rdi
  __m128i *v28; // r11
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r14
  const __m128i *v32; // r12
  __m128i *v33; // r13
  const __m128i *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __m128i *v37; // rsi
  __m128i *v38; // rdx
  __m128i v39; // xmm0
  unsigned int v40; // ecx
  __m128i *v41; // r14
  __int64 v42; // r9
  __int64 *v43; // rcx
  int v44; // esi
  __int64 v45; // r11
  __m128i *v46; // r8
  __m128i *v47; // rax
  __int64 *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rax
  __m128i *v51; // rax
  int v52; // edx
  __m128i *v53; // r10
  const __m128i *v54; // r8
  __int64 v55; // rsi
  __m128i *v56; // r11
  __int64 v57; // rax
  const __m128i *v58; // r12
  __int64 v59; // r15
  _QWORD *v60; // r13
  const __m128i *v61; // rbx
  __int64 v62; // rdx
  __m128i *v63; // rsi
  __m128i *v64; // rdx
  unsigned int v65; // [rsp+8h] [rbp-80h]
  int v66; // [rsp+8h] [rbp-80h]
  size_t v67; // [rsp+8h] [rbp-80h]
  int v68; // [rsp+10h] [rbp-78h]
  __int64 v69; // [rsp+10h] [rbp-78h]
  int v70; // [rsp+10h] [rbp-78h]
  __int64 v71; // [rsp+10h] [rbp-78h]
  __int64 *v72; // [rsp+18h] [rbp-70h]
  int v73; // [rsp+20h] [rbp-68h]
  _QWORD v74[8]; // [rsp+48h] [rbp-40h] BYREF

  v5 = a1;
  v8 = *(unsigned int *)(a1 + 40);
  v9 = 2 * v8;
  if ( 3 * (int)v8 < (unsigned int)(4 * (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 48))) )
  {
    v68 = 2 * v8;
    v23 = (__m128i *)sub_186B270(16LL * v9);
    v12 = 16LL * v9;
    v24 = v68;
    v10 = v23;
    v25 = (__m128i *)((char *)v23 + v12);
    if ( v68 )
    {
      if ( (v12 & 0x10) == 0 || (*v23 = 0, ++v23, v25 != v23) )
      {
        do
        {
          *v23 = 0;
          v23 += 2;
          v23[-1] = 0;
        }
        while ( v25 != v23 );
      }
    }
    v26 = *(const __m128i **)(a1 + 32);
    v11 = v68 - 1;
    v13 = (__int64 *)v25;
    v27 = *(unsigned int *)(a1 + 40);
    v28 = (__m128i *)&v26[v27];
    if ( v26 != &v26[v27] )
    {
      v29 = a3;
      v30 = a2;
      v31 = v5;
      v32 = &v26[v27];
      v33 = v10;
      v34 = v26;
      v35 = v29;
      do
      {
        while ( v34->m128i_i64[0] <= 1uLL )
        {
          if ( v32 == ++v34 )
            goto LABEL_36;
        }
        v36 = 16LL * (*(_DWORD *)(v34->m128i_i64[0] + 12) & v11);
        v37 = &v33[(unsigned __int64)v36 / 0x10];
        if ( v12 == v36 )
        {
LABEL_40:
          if ( v33 == v37 )
          {
LABEL_65:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v38 = v33;
          while ( v38->m128i_i64[0] )
          {
            if ( v37 == ++v38 )
              goto LABEL_65;
          }
        }
        else
        {
          v38 = &v33[(unsigned __int64)v36 / 0x10];
          while ( v38->m128i_i64[0] )
          {
            if ( v25 == ++v38 )
              goto LABEL_40;
          }
        }
        v39 = _mm_loadu_si128(v34++);
        *v38 = v39;
      }
      while ( v32 != v34 );
LABEL_36:
      v10 = v33;
      v5 = v31;
      v24 = v68;
      a2 = v30;
      v28 = *(__m128i **)(v31 + 32);
      a3 = v35;
    }
    if ( v28 )
    {
      v69 = v12;
      v65 = v11;
      sub_186B220(v28);
      v12 = v69;
      v11 = v65;
    }
    *(_QWORD *)(v5 + 32) = v10;
    *(_DWORD *)(v5 + 40) = v24;
    *(_DWORD *)(v5 + 48) = 0;
  }
  else
  {
    v10 = *(__m128i **)(a1 + 32);
    v11 = v8 - 1;
    v12 = 16 * v8;
    v13 = (__int64 *)((char *)v10->m128i_i64 + v12);
  }
  v14 = *(_DWORD *)(a2 + 12);
  v15 = 16LL * (v14 & v11);
  v16 = &v10[(unsigned __int64)v15 / 0x10];
  if ( v15 != v12 )
  {
    m128i_i64 = v10[(unsigned __int64)v15 / 0x10].m128i_i64;
    v18 = nullptr;
    while ( 1 )
    {
      v19 = *m128i_i64;
      if ( (unsigned __int64)*m128i_i64 > 1 )
      {
        if ( *(_DWORD *)(v19 + 12) == v14 && a2 == v19 )
        {
          *m128i_i64 = a2;
          m128i_i64[1] = a3;
          goto LABEL_19;
        }
      }
      else
      {
        if ( !v19 )
        {
          if ( v18 )
            goto LABEL_63;
          v18 = m128i_i64;
          goto LABEL_64;
        }
        v18 = m128i_i64;
      }
      m128i_i64 += 2;
      if ( m128i_i64 == v13 )
        goto LABEL_14;
    }
  }
  v18 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v16 == v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v20 = v10->m128i_i64[0];
    if ( v10->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v20 + 12) == v14 && a2 == v20 )
    {
      v10->m128i_i64[0] = a2;
      v10->m128i_i64[1] = a3;
      goto LABEL_19;
    }
LABEL_13:
    ++v10;
  }
  if ( v20 )
  {
    v18 = (__int64 *)v10;
    goto LABEL_13;
  }
  if ( v18 )
LABEL_63:
    --*(_DWORD *)(v5 + 48);
  else
    v18 = (__int64 *)v10;
LABEL_64:
  *v18 = a2;
  v18[1] = a3;
  ++*(_DWORD *)(v5 + 44);
LABEL_19:
  ++*(_DWORD *)(a2 + 8);
  v21 = (_QWORD *)(v5 + 88);
  v74[0] = a2;
  sub_C28530((_QWORD *)(v5 + 88), v74);
  v74[0] = a3;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  sub_C28530((_QWORD *)(v5 + 88), v74);
  result = *(_QWORD *)v5;
  if ( !*(_BYTE *)(*(_QWORD *)v5 + 16LL) )
    return result;
  v40 = *(_DWORD *)(v5 + 64);
  if ( 3 * v40 < 4 * (*(_DWORD *)(v5 + 68) + *(_DWORD *)(v5 + 72)) )
  {
    v70 = 2 * v40;
    v67 = 32LL * v40;
    v51 = (__m128i *)sub_186B270(v67);
    v42 = v67;
    v52 = v70;
    v41 = v51;
    v53 = &v51[v67 / 0x10];
    if ( v70 )
    {
      if ( (v67 & 0x10) == 0 || (*v51 = 0, ++v51, v53 != v51) )
      {
        do
        {
          *v51 = 0;
          v51 += 2;
          v51[-1] = 0;
        }
        while ( v53 != v51 );
      }
    }
    v54 = *(const __m128i **)(v5 + 56);
    v43 = (__int64 *)v53;
    v66 = v70 - 1;
    v55 = *(unsigned int *)(v5 + 64);
    v56 = (__m128i *)&v54[v55];
    if ( v54 != &v54[v55] )
    {
      v57 = a2;
      v58 = &v54[v55];
      v59 = v5;
      v60 = (_QWORD *)(v5 + 88);
      v61 = v54;
      do
      {
        if ( v61->m128i_i64[0] > 1uLL )
        {
          v62 = 16LL * (*(_DWORD *)(v61->m128i_i64[0] + 12) & (unsigned int)v66);
          v63 = &v41[(unsigned __int64)v62 / 0x10];
          if ( v42 == v62 )
          {
LABEL_85:
            if ( v41 == v63 )
            {
LABEL_99:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v64 = v41;
            while ( v64->m128i_i64[0] )
            {
              if ( v63 == ++v64 )
                goto LABEL_99;
            }
          }
          else
          {
            v64 = &v41[(unsigned __int64)v62 / 0x10];
            while ( v64->m128i_i64[0] )
            {
              if ( v53 == ++v64 )
                goto LABEL_85;
            }
          }
          *v64 = _mm_loadu_si128(v61);
        }
        ++v61;
      }
      while ( v58 != v61 );
      v21 = v60;
      v5 = v59;
      a2 = v57;
      v56 = *(__m128i **)(v59 + 56);
      v52 = v70;
    }
    if ( v56 )
    {
      v73 = v52;
      v72 = (__int64 *)v53;
      v71 = v42;
      sub_186B220(v56);
      v52 = v73;
      v43 = v72;
      v42 = v71;
    }
    *(_QWORD *)(v5 + 56) = v41;
    *(_DWORD *)(v5 + 64) = v52;
    *(_DWORD *)(v5 + 72) = 0;
  }
  else
  {
    v41 = *(__m128i **)(v5 + 56);
    v66 = v40 - 1;
    v42 = 16LL * v40;
    v43 = (__int64 *)((char *)v41->m128i_i64 + v42);
  }
  v44 = *(_DWORD *)(a2 + 12);
  v45 = 16LL * (v44 & (unsigned int)v66);
  v46 = &v41[(unsigned __int64)v45 / 0x10];
  if ( v45 != v42 )
  {
    v47 = &v41[(unsigned __int64)v45 / 0x10];
    v48 = nullptr;
    while ( 1 )
    {
      v49 = v47->m128i_i64[0];
      if ( v47->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v49 + 12) == v44 && a2 == v49 )
        {
          v47->m128i_i64[0] = a2;
          v47->m128i_i64[1] = a4;
          goto LABEL_69;
        }
      }
      else
      {
        if ( !v49 )
        {
          if ( v48 )
            goto LABEL_96;
          v48 = (__int64 *)v47;
          goto LABEL_97;
        }
        v48 = (__int64 *)v47;
      }
      if ( ++v47 == (__m128i *)v43 )
        goto LABEL_58;
    }
  }
  v48 = nullptr;
LABEL_58:
  while ( 2 )
  {
    if ( v46 == v41 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v50 = v41->m128i_i64[0];
    if ( v41->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v50 + 12) == v44 && a2 == v50 )
      {
        v41->m128i_i64[0] = a2;
        v41->m128i_i64[1] = a4;
        goto LABEL_69;
      }
      goto LABEL_57;
    }
    if ( v50 )
    {
      v48 = (__int64 *)v41;
LABEL_57:
      ++v41;
      continue;
    }
    break;
  }
  if ( v48 )
LABEL_96:
    --*(_DWORD *)(v5 + 72);
  else
    v48 = (__int64 *)v41;
LABEL_97:
  *v48 = a2;
  v48[1] = a4;
  ++*(_DWORD *)(v5 + 68);
LABEL_69:
  v74[0] = a4;
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  return sub_C28530(v21, v74);
}

