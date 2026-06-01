__int64 __fastcall sub_21BEF00(__int64 a1, size_t a2, void *a3, size_t a4, void *a5, size_t a6)
{
  void ***v6; // rax
  unsigned __int64 v7; // r12
  size_t v8; // r13
  unsigned int *v9; // rbp
  __int64 v10; // r8
  size_t v11; // r9
  size_t v12; // r14
  __int64 v13; // rbx
  size_t v14; // rsi
  const char *v15; // r15
  size_t v16; // rax
  size_t v17; // rdx
  _OWORD *v18; // rax
  size_t v20; // rcx
  size_t v21; // rcx
  unsigned int *v22; // rax
  unsigned int *v23; // r12
  size_t v24; // r13
  unsigned int *v25; // r14
  const char *v26; // rsi
  void *v27; // rdi
  size_t v28; // rbx
  size_t v29; // rax
  char *v30; // r15
  char *v31; // rbp
  void *v32; // r12
  __m128i *v33; // rsi
  size_t v34; // r14
  _BYTE *v35; // r13
  size_t v36; // rdx
  __int64 v37; // rax
  __m128 *v38; // rcx
  char *v39; // r13
  const char *v40; // rdi
  unsigned int v41; // eax
  size_t n; // [rsp+8h] [rbp-150h] BYREF
  void *s2; // [rsp+10h] [rbp-148h]
  __int64 v44; // [rsp+18h] [rbp-140h]
  void *s1; // [rsp+20h] [rbp-138h]
  void ***v46; // [rsp+28h] [rbp-130h]
  size_t v47; // [rsp+30h] [rbp-128h]
  unsigned __int64 v48; // [rsp+38h] [rbp-120h]
  size_t v49; // [rsp+40h] [rbp-118h]
  size_t v50; // [rsp+48h] [rbp-110h]
  __int128 v51; // [rsp+50h] [rbp-108h] BYREF
  __int64 v52; // [rsp+60h] [rbp-F8h]
  void *v53; // [rsp+70h] [rbp-E8h] BYREF
  size_t v54; // [rsp+78h] [rbp-E0h]
  __m128i v55; // [rsp+80h] [rbp-D8h] BYREF
  void *ptr; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+98h] [rbp-C0h]
  char v58; // [rsp+A0h] [rbp-B8h] BYREF

  v6 = *(void ****)(a2 + 40);
  v7 = *(unsigned int *)(a2 + 72);
  v44 = a1;
  s1 = a3;
  n = a4;
  s2 = a5;
  v46 = v6;
  if ( v7 >= (unsigned __int64)v6 )
  {
LABEL_10:
    v18 = (_OWORD *)v44;
    *(_QWORD *)(v44 + 16) = 0;
    *v18 = 0;
    return v44;
  }
  v47 = a6;
  v8 = a2;
  v9 = (unsigned int *)(*(_QWORD *)(a2 + 32) + 80 * v7);
  while ( 1 )
  {
    if ( !*((_QWORD *)v9 + 9) )
      goto LABEL_9;
    v10 = *v9;
    v11 = *(_QWORD *)(v8 + 16);
    v12 = n;
    v13 = **(_QWORD **)(v8 + 8);
    if ( !(_DWORD)v10 )
    {
      v14 = 0;
      v15 = (const char *)(v13 + v9[1]);
      if ( !v15 )
      {
        v16 = 0;
        v14 = 0;
        v17 = 0;
        goto LABEL_13;
      }
LABEL_6:
      v50 = v11;
      v49 = v14;
      LODWORD(v48) = v10;
      v16 = strlen(v15);
      v11 = v50;
      v10 = (unsigned int)v48;
      goto LABEL_7;
    }
    v14 = 0;
    v40 = (const char *)(v13 + *(unsigned int *)(v11 + 4LL * (unsigned int)(v10 + 1)));
    if ( v40 )
    {
      v49 = *(_QWORD *)(v8 + 16);
      LODWORD(v48) = v10;
      v41 = strlen(v40);
      v11 = v49;
      v10 = (unsigned int)v48;
      v14 = v41;
    }
    v16 = 0;
    v15 = (const char *)(v13 + v9[1]);
    if ( v15 )
      goto LABEL_6;
LABEL_7:
    if ( v16 < v14 )
      goto LABEL_18;
    v17 = v16 - v14;
    if ( v16 - v14 > n )
      goto LABEL_9;
LABEL_13:
    v50 = v14 + n - v16;
    if ( !v17 )
      goto LABEL_18;
    v49 = v11;
    LODWORD(v48) = v10;
    if ( !memcmp((char *)s1 + v14 + n - v16, &v15[v14], v17) )
      break;
LABEL_9:
    ++v7;
    v9 += 20;
    if ( v7 >= (unsigned __int64)v46 )
      goto LABEL_10;
  }
  v20 = v50;
  v11 = v49;
  v10 = (unsigned int)v48;
  if ( n <= v50 )
    v20 = n;
  v12 = v20;
LABEL_18:
  if ( !(_DWORD)v10 )
    goto LABEL_9;
  v21 = v11 + 4LL * (unsigned int)(v10 + 1);
  v22 = (unsigned int *)(v21 + 4LL * *(unsigned int *)(v11 + 4 * v10));
  if ( (unsigned int *)v21 == v22 )
    goto LABEL_9;
  v48 = v7;
  v23 = (unsigned int *)(v11 + 4LL * (unsigned int)(v10 + 1));
  v49 = v8;
  v24 = v12;
  v25 = v22;
  while ( 2 )
  {
    v26 = (const char *)(v13 + *v23);
    if ( !v26 )
    {
      if ( !v24 )
        goto LABEL_28;
LABEL_25:
      if ( v25 == ++v23 )
      {
        v7 = v48;
        v8 = v49;
        goto LABEL_9;
      }
      continue;
    }
    break;
  }
  if ( v24 != strlen(v26) || v24 && memcmp(s1, v26, v24) )
    goto LABEL_25;
LABEL_28:
  v27 = *((void **)v9 + 9);
  v28 = v47;
  s1 = &ptr;
  ptr = &v58;
  v57 = 0x800000000LL;
  v29 = 0;
  v53 = v27;
  if ( v27 )
    v29 = strlen((const char *)v27);
  v54 = v29;
  n = (size_t)&v53;
  sub_22471D0(&v53, s1, ",", 1, 0xFFFFFFFFLL, 0);
  v30 = (char *)ptr;
  v51 = 0;
  v52 = 0;
  v31 = (char *)ptr + 16 * (unsigned int)v57;
  if ( ptr == v31 )
  {
    v37 = 0;
    v36 = 0;
    goto LABEL_45;
  }
  v46 = (void ***)&v51;
  while ( 2 )
  {
    while ( 2 )
    {
      v34 = *((_QWORD *)v30 + 1);
      if ( v34 < v28 )
      {
LABEL_39:
        v30 += 16;
        if ( v31 == v30 )
          goto LABEL_44;
        continue;
      }
      break;
    }
    v35 = *(_BYTE **)v30;
    if ( v28 )
    {
      if ( memcmp(*(const void **)v30, s2, v28) || v34 == v28 && !memcmp(s2, v35, v28) )
        goto LABEL_39;
      goto LABEL_35;
    }
    if ( v34 )
    {
LABEL_35:
      v32 = (void *)(n + 16);
      v53 = (void *)(n + 16);
      sub_21BA8F0((_QWORD *)n, v35, (__int64)&v35[v34]);
      v33 = *((__m128i **)&v51 + 1);
      if ( *((_QWORD *)&v51 + 1) == v52 )
      {
        sub_A82970(v46, *((const __m128i **)&v51 + 1), (__m128i *)n);
        if ( v53 != v32 )
          operator delete(v53);
      }
      else
      {
        **((_QWORD **)&v51 + 1) = *((_QWORD *)&v51 + 1) + 16LL;
        if ( v53 == v32 )
        {
          v33[1] = _mm_load_si128(&v55);
        }
        else
        {
          v33->m128i_i64[0] = (__int64)v53;
          v33[1].m128i_i64[0] = v55.m128i_i64[0];
        }
        v33->m128i_i64[1] = v54;
        *((_QWORD *)&v51 + 1) += 32LL;
      }
      goto LABEL_39;
    }
    v30 += 16;
    if ( v31 != v30 )
      continue;
    break;
  }
LABEL_44:
  v31 = (char *)ptr;
  v36 = *((_QWORD *)&v51 + 1);
  v37 = v52;
LABEL_45:
  v38 = (__m128 *)v44;
  n = v36;
  v39 = (char *)s1 + 16;
  *(_QWORD *)(v44 + 16) = v37;
  *v38 = _mm_loadh_ps((const double *)&n);
  if ( v31 != v39 )
    free(v31);
  return v44;
}
