unsigned __int64 __fastcall thread_t::enable_trace(unsigned int *a1)
{
  unsigned int *v1; // rbx
  unsigned int v2; // eax
  unsigned int v3; // edx
  char v4; // r12
  char v5; // al
  unsigned int v6; // eax
  char v8; // dl
  signed int v9; // edx
  const char *v10; // rsi
  __int64 v11; // rax
  const char **v12; // r15
  const char *v13; // rsi
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r14
  size_t v18; // rax
  const char *v19; // r11
  size_t v20; // r10
  __int64 v21; // rax
  void *v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r12
  int v27; // ebx
  char v28; // r14
  char v29; // r13
  _QWORD *v30; // r12
  __int64 v31; // rsi
  unsigned __int64 v32; // r9
  __int64 i; // rax
  unsigned __int64 v34; // r10
  __int64 v35; // rdx
  char v36; // r11
  bool v37; // dl
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rsi
  _QWORD *v40; // rdi
  unsigned __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  void *v48; // rdi
  void *v49; // rdx
  __int64 v50; // rdx
  unsigned __int64 v51; // r15
  __int64 j; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r14
  __int64 v56; // r13
  __int64 *v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // r14
  __int64 v61; // r13
  __int64 *v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  size_t v66; // [rsp+0h] [rbp-E0h]
  const char *v67; // [rsp+8h] [rbp-D8h]
  int v68; // [rsp+14h] [rbp-CCh]
  unsigned __int64 v69; // [rsp+18h] [rbp-C8h]
  unsigned __int64 v70; // [rsp+18h] [rbp-C8h]
  const char *src; // [rsp+20h] [rbp-C0h]
  void *srcb; // [rsp+20h] [rbp-C0h]
  _BYTE *srcd; // [rsp+20h] [rbp-C0h]
  void *srcc; // [rsp+20h] [rbp-C0h]
  __int64 v76; // [rsp+28h] [rbp-B8h]
  _BYTE v77[24]; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v78; // [rsp+58h] [rbp-88h] BYREF
  __int128 v79; // [rsp+60h] [rbp-80h]
  __int64 v80; // [rsp+70h] [rbp-70h] BYREF
  __int128 v81; // [rsp+78h] [rbp-68h]
  __int64 v82; // [rsp+88h] [rbp-58h]
  __int128 v83; // [rsp+90h] [rbp-50h]
  int v84; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v85; // [rsp+A8h] [rbp-38h]

  v85 = __readfsqword(0x28u);
  v1 = a1;
  v76 = sub_234FE0(a1[4]);
  if ( !v76 )
    return v85 - __readfsqword(0x28u);
  v2 = a1[5];
  if ( v2 == 2 )
  {
    v3 = a1[6];
    v4 = *(_BYTE *)(v76 + 153);
    if ( (v4 & 2) != 0 )
      goto LABEL_17;
    if ( !v3 )
      goto LABEL_41;
    *(_QWORD *)(v76 + 160) = -1;
    v2 = a1[5];
  }
  v3 = a1[6];
  if ( v2 != 8 )
    goto LABEL_4;
  v4 = *(_BYTE *)(v76 + 153);
  if ( (v4 & 8) != 0 )
  {
LABEL_17:
    if ( v3 )
    {
      if ( v3 != 1 )
        goto LABEL_6;
LABEL_19:
      v8 = v4 & 1;
      *(_BYTE *)(v76 + 153) = v4 & 1;
      v2 = v1[5];
LABEL_20:
      v5 = v8 | v2;
      goto LABEL_7;
    }
    goto LABEL_41;
  }
  if ( v3 )
  {
    *(_QWORD *)(v76 + 168) = -1;
    v3 = a1[6];
    v2 = a1[5];
LABEL_4:
    if ( v3 )
      goto LABEL_5;
  }
LABEL_41:
  if ( !(_QWORD)xmmword_8CC438 )
  {
    v4 = *(_BYTE *)(v76 + 153);
    goto LABEL_6;
  }
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = ~(_BYTE)v2;
  do
  {
    v30 = (_QWORD *)(qword_8CC430 + (v26 << 8));
    v31 = v30[16];
    if ( v31 )
    {
      v32 = 0;
      for ( i = 0; i != v31; ++i )
      {
        while ( 1 )
        {
          v35 = v30[15];
          v36 = *(_BYTE *)(v35 + 16 * i + 8) & v29;
          if ( !v36 )
            break;
          v34 = v32;
          ++i;
          ++v32;
          *(_BYTE *)(v35 + 16 * v34 + 8) = v36;
          if ( v31 == i )
            goto LABEL_48;
        }
        v37 = v31 - 1 == i;
        v28 |= v37;
      }
LABEL_48:
      v38 = v30[16];
      if ( v38 != v32 )
      {
        *(_QWORD *)v77 = -1;
        *(_WORD *)&v77[8] = 0;
        if ( v32 < v38 )
          goto LABEL_56;
        v39 = v30[15];
        v40 = v30 + 15;
        v41 = v30[17];
        if ( (unsigned __int64)v77 >= v39 && (unsigned __int64)v77 < v39 + 16 * v41 )
        {
          if ( v41 < v32 )
          {
            v70 = v32;
            v65 = qvector_reserve(v40, v39, v32, 16);
            v32 = v70;
            v30[15] = v65;
            v38 = v30[16];
          }
          if ( v38 < v32 )
          {
            do
            {
              v42 = v38++;
              v43 = v30[15] + 16 * v42;
              *(_QWORD *)v43 = -1;
              *(_WORD *)(v43 + 8) = 0;
            }
            while ( v32 != v38 );
          }
LABEL_56:
          v30[16] = v32;
          goto LABEL_57;
        }
        if ( v41 < v32 )
        {
          v69 = v32;
          v47 = qvector_reserve(v40, v39, v32, 16);
          v32 = v69;
          v30[15] = v47;
          v38 = v30[16];
        }
        if ( v38 >= v32 )
          goto LABEL_56;
        do
        {
          v44 = v38++;
          *(__m128i *)(v30[15] + 16 * v44) = _mm_load_si128((const __m128i *)v77);
        }
        while ( v32 != v38 );
        v30[16] = v32;
      }
    }
LABEL_57:
    if ( v28 )
    {
      v45 = v30[18];
      if ( v45 )
        sub_2369A0(v45, v30);
      v46 = v30[16];
      v30[18] = 0;
      if ( v46 )
        sub_2110C0((__int64)v30, *(int **)(v30[15] + 16 * v46 - 16));
    }
    v26 = ++v27;
  }
  while ( v27 < (unsigned __int64)xmmword_8CC438 );
  v1 = a1;
  v3 = a1[6];
  v2 = a1[5];
LABEL_5:
  v4 = *(_BYTE *)(v76 + 153);
  if ( v3 == 1 )
  {
    v8 = *(_BYTE *)(v76 + 153);
    if ( v2 == 1 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_6:
  v5 = v4 & ~(_BYTE)v2;
LABEL_7:
  *(_BYTE *)(v76 + 153) = v5;
  v6 = v1[5];
  if ( v6 == 2 || v6 == 8 )
  {
    v9 = v1[6];
    if ( !v9 )
    {
      v10 = *(const char **)(v76 + 128);
      if ( v10 )
      {
        v11 = 0;
        while ( (*(_BYTE *)(*(_QWORD *)(v76 + 120) + 16 * v11 + 8) & (unsigned __int8)v1[5]) == 0 )
        {
          v11 = ++v9;
          if ( v9 >= (unsigned __int64)v10 )
            goto LABEL_27;
        }
        goto LABEL_9;
      }
LABEL_27:
      sub_20F8D0((__int64)&unk_8CBAA0, v10);
      v6 = v1[5];
    }
    if ( v6 != 2 || v1[6] != 1 )
      goto LABEL_9;
    memset(v77, 0, sizeof(v77));
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 1;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v12 = *(const char ***)(dbg + 40);
    v13 = *v12;
    v68 = *(_DWORD *)(dbg + 48);
    if ( *v12 )
    {
      v14 = 0;
      v15 = 0;
      v16 = 0;
      while ( 1 )
      {
        if ( v15 < v16 + 1 )
        {
          v78 = qvector_reserve(&v78, v14, v16 + 1, 24);
          v16 = v79;
          v14 = v78;
        }
        ++v12;
        v17 = v14 + 24 * v16;
        *(_QWORD *)v17 = 0;
        *(_OWORD *)(v17 + 8) = 0;
        *(_QWORD *)&v79 = v79 + 1;
        if ( *(v12 - 1) && (src = *(v12 - 1), v18 = strlen(src), v19 = src, (v20 = v18) != 0) )
        {
          v48 = *(void **)v17;
          v49 = (void *)(v18 + 1);
          if ( *(_QWORD *)(v17 + 16) < v18 + 1 )
          {
            v66 = v18;
            v67 = src;
            srcc = (void *)(v18 + 1);
            v64 = qvector_reserve(v17, *(_QWORD *)v17, v49, 1);
            *(_QWORD *)v17 = v64;
            v20 = v66;
            v48 = (void *)v64;
            v19 = v67;
            v49 = srcc;
          }
          *(_QWORD *)(v17 + 8) = v49;
          srcd = (_BYTE *)v20;
          memmove(v48, v19, v20);
          srcd[*(_QWORD *)v17] = 0;
        }
        else
        {
          *(_QWORD *)(v17 + 8) = 0;
        }
        v21 = v81;
        v22 = *(void **)v17;
        v23 = v80;
        if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v81 + 1) )
        {
          srcb = *(void **)v17;
          v80 = qvector_reserve(&v80, v80, v81 + 1, 8);
          v23 = v80;
          v22 = srcb;
          v21 = v81;
        }
        *(_QWORD *)(v23 + 8 * v21) = v22;
        v24 = v81;
        v25 = v81 + 1;
        *(_QWORD *)&v81 = v81 + 1;
        if ( !*v12 )
          break;
        v15 = *((_QWORD *)&v79 + 1);
        v16 = v79;
        v14 = v78;
      }
      v50 = v24 + 2;
      v13 = (const char *)v80;
      if ( *((_QWORD *)&v81 + 1) >= (unsigned __int64)(v24 + 2) )
        goto LABEL_77;
    }
    else
    {
      v50 = 1;
    }
    v80 = qvector_reserve(&v80, v13, v50, 8);
    v25 = v81;
    v13 = (const char *)v80;
LABEL_77:
    *(_QWORD *)&v13[8 * v25] = 0;
    v51 = 0;
    *(_QWORD *)&v81 = v81 + 1;
    v84 = v68;
    for ( j = dbg; v51 < *(int *)(dbg + 64); j = dbg )
    {
      v53 = *(_QWORD *)(j + 56) + 32LL * (int)v51;
      v13 = *(const char **)v53;
      sub_20C9C0(
        (__int64 *)v77,
        *(const void **)v53,
        *(unsigned int *)(v53 + 8),
        *(unsigned __int8 *)(v53 + 13),
        *(_BYTE *)(v53 + 12),
        *(_QWORD *)(v53 + 16),
        0.0,
        *(_QWORD *)(v53 + 24));
      ++v51;
    }
    sub_210770((__int64)&unk_8CBAA0);
    v54 = v82;
    if ( v82 )
    {
      v55 = v83;
      if ( (_QWORD)v83 )
      {
        v56 = 0;
        do
        {
          v57 = (__int64 *)(v54 + 24 * v56);
          v58 = *v57;
          if ( *v57 )
          {
            v57[1] = 0;
            qfree(v58, v13);
            v54 = v82;
          }
          ++v56;
        }
        while ( v55 != v56 );
      }
      *(_QWORD *)&v83 = 0;
      qfree(v54, v13);
    }
    if ( v80 )
    {
      *(_QWORD *)&v81 = 0;
      qfree(v80, v13);
    }
    v59 = v78;
    if ( v78 )
    {
      v60 = v79;
      if ( (_QWORD)v79 )
      {
        v61 = 0;
        do
        {
          v62 = (__int64 *)(v59 + 24 * v61);
          v63 = *v62;
          if ( *v62 )
          {
            v62[1] = 0;
            qfree(v63, v13);
            v59 = v78;
          }
          ++v61;
        }
        while ( v60 != v61 );
      }
      *(_QWORD *)&v79 = 0;
      qfree(v59, v13);
    }
    if ( *(_QWORD *)v77 )
    {
      *(_QWORD *)&v77[8] = 0;
      qfree(*(_QWORD *)v77, v13);
    }
  }
LABEL_9:
  if ( *((_BYTE *)v1 + 28) && *(_BYTE *)(v76 + 153) != v4 )
    dword_8CC55C |= 3u;
  return v85 - __readfsqword(0x28u);
}
