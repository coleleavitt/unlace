unsigned __int64 __fastcall sub_1BCD60(char *a1, char *a2, __int64 a3, __int64 a4)
{
  char *v4; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 *v9; // r12
  void *v10; // rdi
  char *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r9
  __int64 v15; // r11
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // r9
  __int64 v20; // r11
  __int64 v21; // rax
  unsigned int v22; // eax
  void *v23; // rdi
  char *v24; // r11
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r10
  __int64 v29; // rdx
  __int64 v30; // rax
  char *v31; // rax
  __int64 v32; // r8
  __int64 *v33; // r9
  __int64 v34; // r9
  __int64 i; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r12
  void *v40; // rbx
  __int64 v41; // rax
  unsigned int v43; // eax
  size_t v44; // r15
  void *v45; // rax
  __int64 *v46; // rax
  unsigned __int64 v47; // xmm0_8
  void *v48; // rax
  const void *v49; // rsi
  void *v50; // rax
  unsigned int v51; // edx
  unsigned int v52; // eax
  void *v53; // rax
  const void *v54; // rsi
  void *src; // [rsp+8h] [rbp-80h]
  unsigned int *v56; // [rsp+10h] [rbp-78h]
  __int64 v57; // [rsp+18h] [rbp-70h]
  void *v58; // [rsp+20h] [rbp-68h] BYREF
  __int128 v59; // [rsp+28h] [rbp-60h]
  __int64 v60; // [rsp+38h] [rbp-50h]
  unsigned __int64 v61; // [rsp+48h] [rbp-40h]

  v4 = a2;
  v57 = a3;
  v61 = __readfsqword(0x28u);
  v7 = a2 - a1;
  if ( a2 - a1 <= 64 )
    return v61 - __readfsqword(0x28u);
  v8 = *(_QWORD *)(a4 + 8);
  if ( !a3 )
    goto LABEL_42;
  while ( 2 )
  {
    v56 = (unsigned int *)&a1[4 * (v7 >> 3)];
    if ( v8 )
    {
      src = (void *)qalloc_or_throw(4 * v8);
      memcpy(src, *(const void **)a4, 4 * v8);
      v9 = *(__int64 **)(a4 + 24);
      v50 = (void *)qalloc_or_throw(4 * v8);
      v10 = memcpy(v50, src, 4 * v8);
    }
    else
    {
      src = nullptr;
      v9 = *(__int64 **)(a4 + 24);
      v10 = nullptr;
    }
    v11 = a1 + 4;
    v12 = *((int *)a1 + 1);
    v13 = *v9 + 24 * v12;
    v14 = *v9 + 24LL * (int)*v56;
    v15 = *(_QWORD *)(v14 + 8);
    v16 = *((int *)v4 - 1);
    v17 = *v9 + 24 * v16;
    if ( *(_QWORD *)(v13 + 8) )
    {
      v18 = *(_QWORD *)(v17 + 8);
      if ( !v15 )
      {
        if ( !v18 )
        {
          v51 = *(_DWORD *)a1;
          goto LABEL_57;
        }
        v20 = **(_QWORD **)v13;
        v21 = **(_QWORD **)v17;
LABEL_59:
        v51 = *(_DWORD *)a1;
        v47 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(*(_DWORD *)a1)).m128i_u64[0];
        if ( v21 <= v20 )
          goto LABEL_53;
LABEL_57:
        *(_DWORD *)a1 = v16;
        *((_DWORD *)v4 - 1) = v51;
        goto LABEL_11;
      }
      v19 = *(__int64 **)v14;
      v20 = **(_QWORD **)v13;
      if ( v20 < *v19 )
      {
        if ( !v18 )
          goto LABEL_10;
        v21 = **(_QWORD **)v17;
        if ( *v19 < v21 )
          goto LABEL_10;
        goto LABEL_59;
      }
      if ( !v18 || (v46 = *(__int64 **)v17, v20 < *v46) )
      {
        v47 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(*(_DWORD *)a1)).m128i_u64[0];
LABEL_53:
        *(_QWORD *)a1 = v47;
        goto LABEL_11;
      }
LABEL_62:
      if ( *v19 < *v46 )
      {
        v52 = *(_DWORD *)a1;
        *(_DWORD *)a1 = v16;
        *((_DWORD *)v4 - 1) = v52;
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( v15 )
    {
      if ( !*(_QWORD *)(v17 + 8) )
      {
        v43 = *(_DWORD *)a1;
        *(_DWORD *)a1 = v16;
        *((_DWORD *)v4 - 1) = v43;
        goto LABEL_11;
      }
      v19 = *(__int64 **)v14;
      v46 = *(__int64 **)v17;
      goto LABEL_62;
    }
LABEL_10:
    v22 = *(_DWORD *)a1;
    *(_DWORD *)a1 = *v56;
    *v56 = v22;
LABEL_11:
    if ( v10 )
      qfree(v10);
    v23 = nullptr;
    if ( v8 )
    {
      v44 = 4 * v8;
      v45 = (void *)qalloc_or_throw(v44);
      v23 = memcpy(v45, src, v44);
    }
    v24 = v4;
    while ( 1 )
    {
      v25 = *v9;
      v26 = *(int *)v11;
      v27 = *v9 + 24 * v26;
      v28 = *v9 + 24LL * *(int *)a1;
      v29 = *(_QWORD *)(v28 + 8);
      if ( *(_QWORD *)(v27 + 8) )
      {
        if ( v29 )
        {
          v33 = *(__int64 **)v28;
          if ( **(_QWORD **)v27 >= **(_QWORD **)v28 )
          {
LABEL_31:
            v32 = *((unsigned int *)v24 - 1);
            v31 = v24 - 4;
            goto LABEL_21;
          }
          while ( 1 )
          {
            v37 = *((int *)v11 + 1);
            v11 += 4;
            LODWORD(v26) = v37;
            v38 = v25 + 24 * v37;
            if ( !*(_QWORD *)(v38 + 8) )
              break;
            if ( **(_QWORD **)v38 >= *v33 )
              goto LABEL_31;
          }
        }
        else
        {
          do
          {
            v30 = *((int *)v11 + 1);
            v11 += 4;
            LODWORD(v26) = v30;
          }
          while ( *(_QWORD *)(v25 + 24 * v30 + 8) );
        }
      }
      v31 = v24 - 4;
      v32 = *((unsigned int *)v24 - 1);
      v24 -= 4;
      if ( !v29 )
        goto LABEL_26;
      v33 = *(__int64 **)v28;
LABEL_21:
      v34 = *v33;
      for ( i = v25 + 24LL * (int)v32; !*(_QWORD *)(i + 8) || v34 < **(_QWORD **)i; i = v25 + 24 * v36 )
      {
        v36 = *((int *)v31 - 1);
        v31 -= 4;
        v32 = v36;
      }
      v24 = v31;
LABEL_26:
      if ( v11 >= v31 )
        break;
      *(_DWORD *)v11 = v32;
      v11 += 4;
      *(_DWORD *)v31 = v26;
    }
    if ( v23 )
      qfree(v23);
    if ( src )
      qfree(src);
    v39 = *(_QWORD *)(a4 + 8);
    v58 = nullptr;
    v59 = 0;
    if ( v39 )
    {
      v48 = (void *)qalloc_or_throw(4 * v39);
      v49 = *(const void **)a4;
      *((_QWORD *)&v59 + 1) = v39;
      v58 = v48;
      memcpy(v48, v49, 4 * v39);
      *(_QWORD *)&v59 = v39;
    }
    --v57;
    v60 = *(_QWORD *)(a4 + 24);
    sub_1BCD60(v11, v4, v57, &v58, v32);
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree(v58);
    }
    v7 = v11 - a1;
    if ( v11 - a1 > 64 )
    {
      v8 = *(_QWORD *)(a4 + 8);
      v4 = v11;
      if ( !v57 )
      {
LABEL_42:
        v40 = nullptr;
        v59 = 0;
        if ( v8 )
        {
          v53 = (void *)qalloc_or_throw(4 * v8);
          v54 = *(const void **)a4;
          *((_QWORD *)&v59 + 1) = v8;
          v40 = v53;
          memcpy(v53, v54, 4 * v8);
          *(_QWORD *)&v59 = v8;
        }
        v41 = *(_QWORD *)(a4 + 24);
        v58 = v40;
        v60 = v41;
        sub_1BC950(a1, v4, (unsigned __int64)v4, (__int64)&v58);
        if ( v40 )
          qfree(v40);
        return v61 - __readfsqword(0x28u);
      }
      continue;
    }
    return v61 - __readfsqword(0x28u);
  }
}
