__int64 __fastcall sub_6C77C0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 *v7; // rcx
  int v8; // edi
  unsigned int v9; // edx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 *i; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // rax
  int v17; // r10d
  int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // esi
  __m128i *v21; // r12
  int v22; // r9d
  __int64 v23; // r8
  __m128i *v24; // r15
  int v25; // esi
  __int64 v26; // r9
  __m128i *v27; // rdi
  __m128i *v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rax
  const __m128i *v33; // rcx
  int v34; // edi
  unsigned int v35; // edx
  const __m128i *v36; // rsi
  __int64 v37; // rdx
  const __m128i *v38; // r8
  const __m128i *j; // rax
  __int64 v40; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r15d
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned int v49; // r10d
  __m128i *v50; // rbx
  unsigned int v51; // eax
  __int64 v52; // rcx
  __m128i *v53; // rbp
  int v54; // esi
  __int64 v55; // rax
  __m128i *v56; // rdi
  __m128i *v57; // rax
  __m128i *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rbp
  __m128i *v62; // rax
  int v63; // r10d
  __m128i *v64; // rdx
  const __m128i *v65; // r12
  __m128i *v66; // r11
  __int64 v67; // rdx
  __m128i *v68; // rsi
  __m128i *v69; // rdx
  __m128i v70; // xmm0
  __m128i *v71; // rax
  int v72; // esi
  __m128i *v73; // r10
  const __m128i *v74; // rcx
  __int64 v75; // rdi
  __m128i *v76; // r11
  __int64 v77; // rax
  __m128i *v78; // rbp
  __int64 v79; // r10
  const __m128i *v80; // rbx
  __int64 v81; // rdx
  __m128i *v82; // rsi
  __m128i *v83; // rdx
  size_t v84; // [rsp+0h] [rbp-78h]
  __int64 v85; // [rsp+0h] [rbp-78h]
  int v86; // [rsp+0h] [rbp-78h]
  int v87; // [rsp+8h] [rbp-70h]
  int v88; // [rsp+8h] [rbp-70h]
  __int64 v89; // [rsp+8h] [rbp-70h]
  __int64 v90; // [rsp+10h] [rbp-68h]
  size_t v91; // [rsp+10h] [rbp-68h]
  _QWORD v92[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a1;
  v5 = a3;
  v6 = *(unsigned int *)(a1 + 64);
  v7 = *(__int64 **)(a1 + 56);
  v8 = *(_DWORD *)(a3 + 12);
  v9 = v6 - 1;
  v6 *= 16;
  v10 = (__int64 *)((char *)v7 + v6);
  v11 = 16LL * (v8 & v9);
  v12 = &v7[(unsigned __int64)v11 / 8];
  if ( v11 != v6 )
  {
    for ( i = &v7[(unsigned __int64)v11 / 8]; v10 != i; i += 2 )
    {
      v14 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v14 + 12) == v8 && v5 == v14 )
          goto LABEL_19;
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v12 != v7; v7 += 2 )
  {
    v43 = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      if ( *(_DWORD *)(v43 + 12) == v8 && v5 == v43 )
      {
        i = v7;
LABEL_19:
        v15 = i[1];
        goto LABEL_20;
      }
    }
    else if ( !v43 )
    {
      break;
    }
  }
LABEL_8:
  v15 = sub_186B270(0x18u);
  v16 = sub_186B270(0x80u);
  v17 = *(_DWORD *)(v4 + 72);
  v18 = *(_DWORD *)(v4 + 68);
  *(_QWORD *)(v15 + 8) = 8;
  *(_QWORD *)v16 = 0;
  *(_DWORD *)(v16 + 8) = 0;
  *(_QWORD *)(v16 + 16) = 0;
  *(_DWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 32) = 0;
  *(_DWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 48) = 0;
  *(_DWORD *)(v16 + 56) = 0;
  *(_QWORD *)(v16 + 64) = 0;
  *(_DWORD *)(v16 + 72) = 0;
  *(_QWORD *)(v16 + 80) = 0;
  *(_DWORD *)(v16 + 88) = 0;
  *(_QWORD *)(v16 + 96) = 0;
  *(_DWORD *)(v16 + 104) = 0;
  *(_QWORD *)(v16 + 112) = 0;
  *(_DWORD *)(v16 + 120) = 0;
  *(_QWORD *)v15 = v16;
  v19 = *(_DWORD *)(v4 + 64);
  *(_DWORD *)(v15 + 16) = 0;
  v20 = 2 * v19;
  if ( 3 * v19 < 4 * (v17 + v18) )
  {
    v88 = 2 * v19;
    v71 = (__m128i *)sub_186B270(16LL * v20);
    v23 = 16LL * v20;
    v72 = v88;
    v21 = v71;
    v73 = (__m128i *)((char *)v71 + v23);
    if ( v88 )
    {
      if ( (v23 & 0x10) == 0 || (*v71 = 0, ++v71, v73 != v71) )
      {
        do
        {
          *v71 = 0;
          v71 += 2;
          v71[-1] = 0;
        }
        while ( v73 != v71 );
      }
    }
    v74 = *(const __m128i **)(v4 + 56);
    v22 = v88 - 1;
    v24 = v73;
    v75 = *(unsigned int *)(v4 + 64);
    v76 = (__m128i *)&v74[v75];
    if ( v74 != &v74[v75] )
    {
      v77 = v4;
      v78 = v73;
      v79 = v5;
      v80 = v74;
      do
      {
        if ( v80->m128i_i64[0] > 1uLL )
        {
          v81 = 16LL * (*(_DWORD *)(v80->m128i_i64[0] + 12) & (unsigned int)v22);
          v82 = &v21[(unsigned __int64)v81 / 0x10];
          if ( v23 == v81 )
          {
LABEL_117:
            if ( v21 == v82 )
            {
LABEL_131:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v83 = v21;
            while ( v83->m128i_i64[0] )
            {
              if ( v82 == ++v83 )
                goto LABEL_131;
            }
          }
          else
          {
            v83 = &v21[(unsigned __int64)v81 / 0x10];
            while ( v83->m128i_i64[0] )
            {
              if ( v78 == ++v83 )
                goto LABEL_117;
            }
          }
          *v83 = _mm_loadu_si128(v80);
        }
        ++v80;
      }
      while ( v76 != v80 );
      v72 = v88;
      v76 = *(__m128i **)(v77 + 56);
      v4 = v77;
      v5 = v79;
    }
    if ( v76 )
    {
      v89 = v23;
      v86 = v22;
      sub_186B220(v76);
      v23 = v89;
      v22 = v86;
    }
    *(_QWORD *)(v4 + 56) = v21;
    v17 = 0;
    *(_DWORD *)(v4 + 64) = v72;
    *(_DWORD *)(v4 + 72) = 0;
  }
  else
  {
    v21 = *(__m128i **)(v4 + 56);
    v22 = v19 - 1;
    v23 = 16LL * v19;
    v24 = (__m128i *)((char *)v21 + v23);
  }
  v25 = *(_DWORD *)(v5 + 12);
  v26 = 16LL * (v25 & (unsigned int)v22);
  v27 = &v21[(unsigned __int64)v26 / 0x10];
  if ( v26 != v23 )
  {
    v28 = &v21[(unsigned __int64)v26 / 0x10];
    v29 = nullptr;
    while ( 1 )
    {
      v30 = v28->m128i_i64[0];
      if ( v28->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v30 + 12) == v25 && v5 == v30 )
        {
          v28->m128i_i64[0] = v5;
          v28->m128i_i64[1] = v15;
          goto LABEL_54;
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( v29 )
            goto LABEL_128;
          v29 = (__int64 *)v28;
          goto LABEL_129;
        }
        v29 = (__int64 *)v28;
      }
      if ( ++v28 == v24 )
        goto LABEL_49;
    }
  }
  v29 = nullptr;
  while ( 1 )
  {
LABEL_49:
    if ( v27 == v21 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v44 = v21->m128i_i64[0];
    if ( v21->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v44 + 12) == v25 && v5 == v44 )
    {
      v21->m128i_i64[0] = v5;
      v21->m128i_i64[1] = v15;
      goto LABEL_54;
    }
LABEL_48:
    ++v21;
  }
  if ( v44 )
  {
    v29 = (__int64 *)v21;
    goto LABEL_48;
  }
  if ( v29 )
LABEL_128:
    *(_DWORD *)(v4 + 72) = v17 - 1;
  else
    v29 = (__int64 *)v21;
LABEL_129:
  *v29 = v5;
  v29[1] = v15;
  ++*(_DWORD *)(v4 + 68);
LABEL_54:
  ++*(_DWORD *)(v5 + 8);
  v92[0] = v5;
  sub_6C01B0((_QWORD *)(v4 + 248), v92);
  v92[0] = 0;
  sub_6DE9C0(v4 + 96, v5, v92);
  v45 = v92[0];
  v46 = 0;
  if ( !v92[0] )
    goto LABEL_20;
  while ( 2 )
  {
    if ( v46 >= *(_DWORD *)(v45 - 4) )
    {
      sub_186B220((void *)(v45 - 8));
      break;
    }
    v47 = *(unsigned int *)(v15 + 8);
    v48 = *(_QWORD *)(v45 + 8LL * v46);
    v49 = 2 * v47;
    if ( 3 * (int)v47 < (unsigned int)(4 * (*(_DWORD *)(v15 + 12) + *(_DWORD *)(v15 + 16))) )
    {
      v61 = v49;
      v90 = *(_QWORD *)(v45 + 8LL * v46);
      v87 = 2 * v47;
      v84 = 16LL * v49;
      v62 = (__m128i *)sub_186B270(v84);
      v63 = v87;
      v52 = v84;
      v50 = v62;
      v48 = v90;
      v64 = &v62[v61];
      if ( v87 )
      {
        do
        {
          v62->m128i_i64[0] = 0;
          ++v62;
          v62[-1].m128i_i32[2] = 0;
        }
        while ( v62 != v64 );
      }
      v65 = *(const __m128i **)v15;
      v51 = v87 - 1;
      v53 = &v50[v84 / 0x10];
      v66 = (__m128i *)(*(_QWORD *)v15 + 16LL * *(unsigned int *)(v15 + 8));
      if ( *(__m128i **)v15 != v66 )
      {
        do
        {
          while ( v65->m128i_i64[0] <= 1uLL )
          {
            if ( v66 == ++v65 )
              goto LABEL_87;
          }
          v67 = 16LL * (*(_DWORD *)(v65->m128i_i64[0] + 12) & v51);
          v68 = &v50[(unsigned __int64)v67 / 0x10];
          if ( v84 == v67 )
          {
LABEL_91:
            if ( v50 == v68 )
            {
LABEL_99:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v69 = v50;
            while ( v69->m128i_i64[0] )
            {
              if ( v68 == ++v69 )
                goto LABEL_99;
            }
          }
          else
          {
            v69 = &v50[(unsigned __int64)v67 / 0x10];
            while ( v69->m128i_i64[0] )
            {
              if ( v53 == ++v69 )
                goto LABEL_91;
            }
          }
          v70 = _mm_loadu_si128(v65++);
          *v69 = v70;
        }
        while ( v66 != v65 );
LABEL_87:
        v66 = *(__m128i **)v15;
      }
      if ( v66 )
      {
        v91 = v84;
        v85 = v48;
        sub_186B220(v66);
        v63 = v87;
        v52 = v91;
        v51 = v87 - 1;
        v48 = v85;
      }
      *(_QWORD *)v15 = v50;
      *(_DWORD *)(v15 + 8) = v63;
      *(_DWORD *)(v15 + 16) = 0;
    }
    else
    {
      v50 = *(__m128i **)v15;
      v51 = v47 - 1;
      v52 = 16 * v47;
      v53 = (__m128i *)(*(_QWORD *)v15 + v52);
    }
    v54 = *(_DWORD *)(v48 + 12);
    v55 = 16LL * (v54 & v51);
    v56 = &v50[(unsigned __int64)v55 / 0x10];
    if ( v55 != v52 )
    {
      v57 = &v50[(unsigned __int64)v55 / 0x10];
      v58 = nullptr;
      while ( 1 )
      {
        v59 = v57->m128i_i64[0];
        if ( v57->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v59 + 12) == v54 && v48 == v59 )
          {
            v57->m128i_i64[0] = v48;
            v57->m128i_i32[2] = 100;
            goto LABEL_74;
          }
        }
        else
        {
          if ( !v59 )
          {
            if ( v58 )
              goto LABEL_97;
            v58 = v57;
            goto LABEL_98;
          }
          v58 = v57;
        }
        if ( ++v57 == v53 )
          goto LABEL_69;
      }
    }
    v58 = nullptr;
LABEL_69:
    while ( 2 )
    {
      if ( v56 == v50 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v60 = v50->m128i_i64[0];
      if ( v50->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v60 + 12) == v54 && v48 == v60 )
        {
          v50->m128i_i64[0] = v48;
          v50->m128i_i32[2] = 100;
          goto LABEL_74;
        }
        goto LABEL_68;
      }
      if ( v60 )
      {
        v58 = v50;
LABEL_68:
        ++v50;
        continue;
      }
      break;
    }
    if ( v58 )
LABEL_97:
      --*(_DWORD *)(v15 + 16);
    else
      v58 = v50;
LABEL_98:
    v58->m128i_i64[0] = v48;
    v58->m128i_i32[2] = 100;
    ++*(_DWORD *)(v15 + 12);
LABEL_74:
    v45 = v92[0];
    ++v46;
    if ( v92[0] )
      continue;
    break;
  }
LABEL_20:
  v31 = *a2;
  v32 = *(unsigned int *)(v15 + 8);
  v33 = *(const __m128i **)v15;
  v34 = *(_DWORD *)(*a2 + 12);
  v35 = v32 - 1;
  v32 *= 16;
  v36 = (const __m128i *)(*(_QWORD *)v15 + v32);
  v37 = 16LL * (v34 & v35);
  v38 = (const __m128i *)(*(_QWORD *)v15 + v37);
  if ( v37 != v32 )
  {
    for ( j = (const __m128i *)(*(_QWORD *)v15 + v37); v36 != j; ++j )
    {
      v40 = j->m128i_i64[0];
      if ( j->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v40 + 12) == v34 && v31 == v40 )
          return j->m128i_u32[2];
      }
      else if ( !v40 )
      {
        return 0xFFFFFFFFLL;
      }
    }
  }
  for ( ; v38 != v33; ++v33 )
  {
    v42 = v33->m128i_i64[0];
    if ( v33->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v42 + 12) == v34 && v31 == v42 )
      {
        j = v33;
        return j->m128i_u32[2];
      }
    }
    else if ( !v42 )
    {
      return 0xFFFFFFFFLL;
    }
  }
  return 0xFFFFFFFFLL;
}

