unsigned __int64 __fastcall sub_40D0E0(__int64 a1)
{
  __int64 v2; // rsi
  const char *v4; // rbp
  __int32 v5; // r14d
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __m128i v10; // xmm0
  unsigned __int64 v11; // rdx
  __int64 v12; // rbp
  const char *v13; // rdx
  bool v14; // cc
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rbp
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  char *v22; // r15
  char *v23; // rbp
  __int64 v24; // r12
  const char *v25; // rcx
  const char *v26; // rsi
  char *v27; // r13
  const char *v28; // rdi
  int v29; // eax
  char *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  char *v33; // rbp
  const char *v34; // rax
  const char *v35; // rsi
  char *v36; // rax
  unsigned __int32 v37; // edx
  __int64 v38; // rax
  __int64 v39; // r12
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  char *v42; // r15
  __int64 v43; // r12
  const char *v44; // rdx
  char *v45; // r13
  const char *v46; // rsi
  const char *v47; // rdi
  int v48; // eax
  char *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  const char *v52; // rax
  const char *v53; // rsi
  _QWORD *v54; // rdx
  const char *v55; // rsi
  __int64 v56; // rax
  _QWORD *v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  void *v62; // r13
  void *v63; // rdi
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  const char *v66; // [rsp+0h] [rbp-E8h]
  const char *v67; // [rsp+0h] [rbp-E8h]
  char *s2; // [rsp+8h] [rbp-E0h]
  char *s1; // [rsp+10h] [rbp-D8h]
  char *v70; // [rsp+20h] [rbp-C8h]
  unsigned int v71; // [rsp+38h] [rbp-B0h] BYREF
  int v72; // [rsp+3Ch] [rbp-ACh] BYREF
  void **p_src; // [rsp+40h] [rbp-A8h] BYREF
  void **p_dest; // [rsp+48h] [rbp-A0h] BYREF
  __m128i v75; // [rsp+50h] [rbp-98h] BYREF
  __m128i v76; // [rsp+60h] [rbp-88h] BYREF
  void *dest; // [rsp+70h] [rbp-78h] BYREF
  __int128 v78; // [rsp+78h] [rbp-70h]
  void *src; // [rsp+90h] [rbp-58h] BYREF
  __int128 v80; // [rsp+98h] [rbp-50h]
  unsigned __int64 v81; // [rsp+A8h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 80) )
    return v81 - __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 88);
  v71 = -1;
  netnode_check(&v71, v2, 0, 1);
  dest = nullptr;
  src = nullptr;
  v78 = 0;
  v80 = 0;
  v70 = (char *)(a1 + 32);
  if ( netnode_qhashfirst(v71, &src, 72) <= 0 )
    goto LABEL_22;
  do
  {
    v4 = haystack;
    if ( (_QWORD)v80 )
      v4 = (const char *)src;
    if ( netnode_hashval(v71, v4, &v76, 4, 72) <= 0 )
    {
LABEL_18:
      v12 = v80;
      goto LABEL_19;
    }
    v5 = v76.m128i_i32[0];
    if ( !v76.m128i_i32[0] )
    {
      if ( !*(_QWORD *)(a1 + 104) )
        goto LABEL_18;
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v75.m128i_i64[0] = 0;
        v6 = 1;
        v75.m128i_i8[8] = 0;
LABEL_11:
        v7 = *(_QWORD **)a1;
        v8 = *(_QWORD *)(a1 + 16);
        if ( (unsigned __int64)&v75 < *(_QWORD *)a1 || &v75 >= (__m128i *)&v7[2 * v8] )
        {
          if ( v8 < v6 )
            *(_QWORD *)a1 = qvector_reserve(a1, v7, v6, 16);
          v9 = *(_QWORD *)(a1 + 8);
          if ( v9 < v6 )
          {
            v10 = _mm_load_si128(&v75);
            do
            {
              v11 = v9++;
              *(__m128i *)(*(_QWORD *)a1 + 16 * v11) = v10;
            }
            while ( v9 != v6 );
          }
        }
        else
        {
          if ( v8 < v6 )
            *(_QWORD *)a1 = qvector_reserve(a1, v7, v6, 16);
          v59 = *(_QWORD *)(a1 + 8);
          if ( v59 < v6 )
          {
            do
            {
              v60 = v59++;
              v61 = *(_QWORD *)a1 + 16 * v60;
              *(_QWORD *)v61 = 0;
              *(_BYTE *)(v61 + 8) = 0;
            }
            while ( v59 != v6 );
          }
        }
        v5 = v76.m128i_i32[0];
LABEL_82:
        v42 = *(char **)(a1 + 40);
        *(_QWORD *)(a1 + 8) = v6;
        if ( !v42 )
        {
LABEL_83:
          v33 = v70;
          goto LABEL_53;
        }
        goto LABEL_64;
      }
      v41 = 0;
LABEL_62:
      if ( !*(_BYTE *)(*(_QWORD *)a1 + 16 * v41 + 8) )
        goto LABEL_63;
      if ( (unsigned __int8)sub_3E2FA0((_QWORD *)(a1 + 24), v76.m128i_i32[0], v4, &v71) )
        goto LABEL_18;
      v40 = *(_QWORD *)(a1 + 8);
      v5 = v76.m128i_i32[0];
      if ( v76.m128i_u32[0] < v40 )
        goto LABEL_63;
      goto LABEL_80;
    }
    if ( v76.m128i_i32[0] > 0x400u )
      goto LABEL_18;
    v40 = *(_QWORD *)(a1 + 8);
    v41 = v76.m128i_u32[0];
    if ( v76.m128i_u32[0] < v40 )
      goto LABEL_62;
LABEL_80:
    v6 = (unsigned int)(v5 + 1);
    if ( v6 != v40 )
    {
      v75.m128i_i64[0] = 0;
      v75.m128i_i8[8] = 0;
      if ( v6 < v40 )
        goto LABEL_82;
      goto LABEL_11;
    }
LABEL_63:
    v42 = *(char **)(a1 + 40);
    if ( !v42 )
      goto LABEL_83;
LABEL_64:
    v43 = v80;
    v44 = haystack;
    v33 = v70;
    s1 = (char *)src;
    if ( (_QWORD)v80 )
      v44 = (const char *)src;
    v67 = v44;
    while ( 1 )
    {
      v50 = *((_QWORD *)v42 + 5);
      if ( !v43 )
        break;
      v45 = v42;
      if ( v50 )
        goto LABEL_77;
      v46 = s1;
      v47 = haystack;
LABEL_69:
      v48 = strcmp(v47, v46);
      v49 = *((char **)v42 + 2);
      v42 = *((char **)v42 + 3);
      if ( v48 >= 0 )
      {
        v33 = v45;
        v42 = v49;
      }
      if ( !v42 )
        goto LABEL_47;
    }
    if ( v50 )
    {
LABEL_76:
      v45 = v42;
LABEL_77:
      v47 = *((const char **)v42 + 4);
      v46 = v67;
      goto LABEL_69;
    }
    while ( 1 )
    {
      v51 = *((_QWORD *)v42 + 2);
      if ( !v51 )
        break;
      v33 = v42;
      v42 = *((char **)v42 + 2);
      if ( *(_QWORD *)(v51 + 40) )
        goto LABEL_76;
    }
    v33 = v42;
LABEL_47:
    if ( v70 == v33 )
      goto LABEL_53;
    if ( !*((_QWORD *)v33 + 5) )
    {
      v35 = haystack;
      if ( v43 )
        goto LABEL_52;
LABEL_85:
      v37 = v5;
      goto LABEL_54;
    }
    v34 = haystack;
    if ( v43 )
      v34 = s1;
    v35 = *((const char **)v33 + 4);
    s1 = (char *)v34;
LABEL_52:
    if ( strcmp(s1, v35) >= 0 )
      goto LABEL_85;
LABEL_53:
    p_src = &src;
    v36 = (char *)sub_40CF70((_QWORD *)(a1 + 24), v33, (__int64 *)&p_src);
    v37 = v76.m128i_i32[0];
    v33 = v36;
LABEL_54:
    *((_DWORD *)v33 + 14) = v5;
    v38 = *(_QWORD *)a1 + 16LL * v37;
    *(_QWORD *)v38 = 0;
    *(_BYTE *)(v38 + 8) = 1;
    v12 = v80;
    if ( v37 || !*(_QWORD *)(a1 + 104) )
      goto LABEL_19;
    if ( !(_QWORD)v80 )
    {
      *(_QWORD *)&v78 = 0;
LABEL_20:
      v13 = haystack;
      continue;
    }
    v39 = v80 - 1;
    if ( (_QWORD)v80 != 1 )
    {
      v62 = src;
      v63 = dest;
      if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)v80 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v80, 1);
        v63 = dest;
      }
      *(_QWORD *)&v78 = v12;
      memmove(v63, v62, v12 - 1);
      *((_BYTE *)dest + v39) = 0;
      v12 = v80;
LABEL_19:
      if ( v12 )
        goto LABEL_59;
      goto LABEL_20;
    }
    *(_QWORD *)&v78 = 0;
LABEL_59:
    v13 = (const char *)src;
  }
  while ( netnode_qhashnext(v71, &src, v13, 72) > 0 );
LABEL_22:
  v14 = (unsigned __int64)v78 <= 1;
  *(_BYTE *)(a1 + 80) = 1;
  if ( v14 )
    goto LABEL_97;
  v15 = *(_QWORD *)(a1 + 8);
  v16 = (unsigned int)(v15 + 1);
  if ( v16 != v15 )
  {
    v76.m128i_i64[0] = 0;
    v76.m128i_i8[8] = 0;
    if ( v16 >= v15 )
    {
      v17 = *(_QWORD **)a1;
      v18 = *(_QWORD *)(a1 + 16);
      if ( (unsigned __int64)&v76 < *(_QWORD *)a1 || &v76 >= (__m128i *)&v17[2 * v18] )
      {
        v64 = v15;
        if ( v18 < v16 )
        {
          *(_QWORD *)a1 = qvector_reserve(a1, v17, (unsigned int)(v15 + 1), 16);
          v64 = *(_QWORD *)(a1 + 8);
        }
        if ( v64 < v16 )
        {
          do
          {
            v65 = v64++;
            *(__m128i *)(*(_QWORD *)a1 + 16 * v65) = _mm_load_si128(&v76);
          }
          while ( v16 != v64 );
        }
      }
      else
      {
        v19 = v15;
        if ( v18 < v16 )
        {
          *(_QWORD *)a1 = qvector_reserve(a1, v17, (unsigned int)(v15 + 1), 16);
          v19 = *(_QWORD *)(a1 + 8);
        }
        if ( v19 < v16 )
        {
          do
          {
            v20 = v19++;
            v21 = *(_QWORD *)a1 + 16 * v20;
            *(_QWORD *)v21 = 0;
            *(_BYTE *)(v21 + 8) = 0;
          }
          while ( v16 != v19 );
        }
      }
    }
    *(_QWORD *)(a1 + 8) = v16;
  }
  v22 = *(char **)(a1 + 40);
  v23 = (char *)(a1 + 32);
  if ( !v22 )
  {
    v23 = (char *)(a1 + 32);
    goto LABEL_93;
  }
  v24 = v78;
  v25 = haystack;
  s2 = (char *)dest;
  if ( (_QWORD)v78 )
    v25 = (const char *)dest;
  v66 = v25;
  while ( 2 )
  {
    v31 = *((_QWORD *)v22 + 5);
    if ( v24 )
    {
      if ( !v31 )
      {
        v26 = s2;
        v27 = v22;
        v28 = haystack;
        goto LABEL_38;
      }
LABEL_45:
      v28 = *((const char **)v22 + 4);
      v26 = v66;
      v27 = v22;
LABEL_38:
      v29 = strcmp(v28, v26);
      v30 = *((char **)v22 + 2);
      v22 = *((char **)v22 + 3);
      if ( v29 >= 0 )
      {
        v23 = v27;
        v22 = v30;
      }
      if ( !v22 )
        goto LABEL_87;
      continue;
    }
    break;
  }
  if ( v31 )
    goto LABEL_45;
  while ( 1 )
  {
    v32 = *((_QWORD *)v22 + 2);
    if ( !v32 )
      break;
    v23 = v22;
    v22 = *((char **)v22 + 2);
    if ( *(_QWORD *)(v32 + 40) )
      goto LABEL_45;
  }
  v23 = v22;
LABEL_87:
  if ( (char *)(a1 + 32) == v23 )
    goto LABEL_93;
  if ( *((_QWORD *)v23 + 5) )
  {
    v52 = haystack;
    if ( v24 )
      v52 = s2;
    v53 = *((const char **)v23 + 4);
    s2 = (char *)v52;
LABEL_92:
    if ( strcmp(s2, v53) < 0 )
    {
LABEL_93:
      p_dest = &dest;
      v23 = (char *)sub_40CF70((_QWORD *)(a1 + 24), v23, (__int64 *)&p_dest);
    }
  }
  else
  {
    v53 = haystack;
    if ( v24 )
      goto LABEL_92;
  }
  *((_DWORD *)v23 + 14) = v15;
  v54 = *(_QWORD **)a1;
  v55 = haystack;
  v56 = 2LL * (unsigned int)v15;
  v54[v56] = **(_QWORD **)a1;
  LOBYTE(v54[v56 + 1]) = *((_BYTE *)v54 + 8);
  v57 = *(_QWORD **)a1;
  *v57 = 0;
  *((_BYTE *)v57 + 8) = 0;
  v58 = *(_QWORD *)a1 + v56 * 8;
  if ( (_QWORD)v78 )
    v55 = (const char *)dest;
  *(_BYTE *)(v58 + 8) = 1;
  v72 = v15;
  netnode_hashset(v71, v55, &v72, 4, 72);
  **(_DWORD **)(a1 + 104) = v15;
LABEL_97:
  if ( src )
  {
    *(_QWORD *)&v80 = 0;
    qfree(src);
  }
  if ( dest )
  {
    *(_QWORD *)&v78 = 0;
    qfree(dest);
  }
  return v81 - __readfsqword(0x28u);
}

