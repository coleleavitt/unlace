unsigned __int64 __fastcall sub_5C1EA0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rbx
  char v8; // r14
  char *v9; // rdi
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 i; // r15
  char *v13; // rbx
  void *v14; // rdi
  void *v15; // rdi
  _QWORD **v16; // rbx
  void *v17; // rdi
  __m128i v19; // xmm0
  unsigned int v20; // ecx
  __int64 v21; // rax
  char *v22; // rsi
  char *v23; // rcx
  char v24; // al
  _BYTE *v25; // rdx
  size_t v26; // rax
  size_t v27; // r15
  int v28; // r14d
  int v29; // ebx
  int v30; // r15d
  void *v31; // rax
  char *v32; // rsi
  int *v33; // rax
  int v34; // eax
  __int64 (__fastcall *v35)(__int64); // rax
  int *v36; // r12
  void *v37; // rax
  char *v38; // rsi
  int *v39; // rax
  _BYTE *v40; // rbx
  __int64 v41; // r15
  size_t v42; // r13
  __m128i v43; // xmm0
  void *v44; // rdx
  __m128i v45; // xmm1
  void *v46; // rdi
  __int64 v47; // r13
  __int64 v49; // [rsp+8h] [rbp-4C0h]
  void *src; // [rsp+10h] [rbp-4B8h] BYREF
  __m128i v51; // [rsp+18h] [rbp-4B0h] BYREF
  __int64 v52; // [rsp+30h] [rbp-498h] BYREF
  __int128 v53; // [rsp+38h] [rbp-490h]
  int v54; // [rsp+48h] [rbp-480h]
  void *ptr; // [rsp+50h] [rbp-478h] BYREF
  void *v56[2]; // [rsp+58h] [rbp-470h] BYREF
  void **v57; // [rsp+68h] [rbp-460h]
  void **v58; // [rsp+70h] [rbp-458h]
  __int64 v59; // [rsp+78h] [rbp-450h]
  char s[1023]; // [rsp+80h] [rbp-448h] BYREF
  char v61; // [rsp+47Fh] [rbp-49h] BYREF
  _BYTE v62[8]; // [rsp+480h] [rbp-48h] BYREF
  unsigned __int64 v63; // [rsp+488h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 56) & 8) == 0 )
  {
    v7 = *(_QWORD **)(a2 + 48);
    LODWORD(v56[0]) = 0;
    v57 = v56;
    v58 = v56;
    v56[1] = nullptr;
    v59 = 0;
    src = nullptr;
    v52 = 0;
    v53 = 0xFFFFFFFF;
    v54 = -1;
    v51 = 0;
    if ( v7 )
    {
      *(_QWORD *)(a2 + 40) = *v7;
      v54 = *(_DWORD *)v7;
      v8 = func_tail_iterator_set(&v52, v7, 0xFFFFFFFFLL);
      if ( *(_QWORD *)(a2 + 24) > 1u )
        goto LABEL_4;
      get_ea_name(&src, *(unsigned int *)v7, 0, 0);
    }
    else
    {
      v19 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
      LODWORD(v53) = -1;
      v20 = _mm_cvtsi128_si32(v19);
      v54 = v20;
      *(_QWORD *)((char *)&v53 + 4) = v19.m128i_i64[0];
      v8 = v20 < _mm_cvtsi128_si32(_mm_shuffle_epi32(v19, 229));
      if ( *(_QWORD *)(a2 + 24) > 1u )
        goto LABEL_4;
      v21 = sub_4F5210(a1, s, 1024, v20);
      v22 = &s[v21];
      if ( &s[v21] >= v62 )
      {
        if ( !under_debugger )
          interr(520);
        BUG();
      }
      v23 = "..";
      if ( v21 == 1023 )
      {
LABEL_62:
        v61 = 0;
        v25 = (_BYTE *)(&dword_0 + 1);
        v22 = &v61;
      }
      else
      {
        while ( 1 )
        {
          v24 = *v23++;
          *v22 = v24;
          if ( !v24 )
            break;
          if ( ++v22 == &v61 )
            goto LABEL_62;
        }
        v25 = (_BYTE *)(v62 - v22);
      }
      sub_4F5210(a1, v22, (__int64)v25, *(_DWORD *)(a2 + 44));
      v26 = strlen(s);
      v27 = v26;
      if ( v26 )
      {
        v46 = src;
        v47 = v26 + 1;
        if ( v51.m128i_i64[1] < v26 + 1 )
        {
          src = (void *)qvector_reserve(&src, src, v47, 1);
          v46 = src;
        }
        v51.m128i_i64[0] = v47;
        memmove(v46, s, v27);
        *((_BYTE *)src + v27) = 0;
      }
      else
      {
        v51.m128i_i64[0] = 0;
      }
    }
    if ( *(_QWORD *)(a2 + 24) <= 1u )
    {
      v40 = src;
      if ( v51.m128i_i64[0] )
      {
        v41 = v51.m128i_i64[0] + 9;
        v42 = v51.m128i_i64[0] - 1;
        a6 = v51.m128i_i64[0] + 8;
        if ( v51.m128i_i64[1] >= (unsigned __int64)(v51.m128i_i64[0] + 9) )
          goto LABEL_54;
      }
      else
      {
        if ( v51.m128i_i64[1] > 9uLL )
        {
          v51.m128i_i64[0] = 10;
          *((_BYTE *)src + 9) = 0;
          goto LABEL_56;
        }
        v42 = 0;
        v41 = 10;
        a6 = 9;
      }
      v49 = a6;
      src = (void *)qvector_reserve(&src, src, v41, 1);
      a6 = v49;
      v40 = src;
LABEL_54:
      v51.m128i_i64[0] = v41;
      v40[a6] = 0;
      v40 = src;
      if ( v42 )
        memmove((char *)src + 9, src, v42);
LABEL_56:
      v40[8] = 32;
      *(_QWORD *)v40 = 0x666F206870617247LL;
      v43 = _mm_loadu_si128((const __m128i *)(a2 + 24));
      v44 = src;
      v45 = _mm_loadu_si128(&v51);
      v9 = *(char **)(a2 + 64);
      src = *(void **)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v44;
      *(__m128i *)(a2 + 24) = v45;
      v51 = v43;
      if ( v9 )
        goto LABEL_5;
      goto LABEL_13;
    }
LABEL_4:
    v9 = *(char **)(a2 + 64);
    if ( v9 )
    {
LABEL_5:
      v10 = *(_QWORD *)(a2 + 72);
      if ( v10 )
      {
        v11 = 0;
        for ( i = 0; i != v10; ++i )
        {
          v13 = &v9[v11];
          v14 = *(void **)&v9[v11 + 32];
          if ( v14 )
          {
            *((_QWORD *)v13 + 5) = 0;
            qfree(v14);
          }
          v15 = *((void **)v13 + 1);
          if ( v15 )
          {
            *((_QWORD *)v13 + 2) = 0;
            qfree(v15);
          }
          v9 = *(char **)(a2 + 64);
          v11 += 56;
        }
      }
      *(_QWORD *)(a2 + 72) = 0;
      qfree(v9);
      *(_QWORD *)(a2 + 64) = 0;
      *(_QWORD *)(a2 + 80) = 0;
    }
LABEL_13:
    *(_DWORD *)(a2 + 88) = 0;
    if ( v8 )
      sub_5C1280(a1, a2, (__int64)&v52, &ptr, 1, a6);
    if ( v52 )
      lock_func_range(v52, 0);
    if ( src )
    {
      v51.m128i_i64[0] = 0;
      qfree(src);
    }
    v16 = (_QWORD **)v56[1];
    if ( v56[1] )
    {
      do
      {
        sub_5BCCE0(v16[3]);
        v17 = v16;
        v16 = (_QWORD **)v16[2];
        operator delete(v17, 0x28u);
      }
      while ( v16 );
    }
    return v63 - __readfsqword(0x28u);
  }
  v28 = -1;
  v29 = 0;
  ptr = nullptr;
  v30 = -1;
  *(_OWORD *)v56 = 0;
  while ( 1 )
  {
    v35 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
    if ( v35 != sub_5A9690 )
      break;
    if ( v29 >= *(_DWORD *)(a2 + 72) )
      goto LABEL_44;
LABEL_40:
    v36 = (int *)(*(_QWORD *)(a2 + 64) + 56LL * v29);
    v34 = *v36;
    if ( *v36 != v28 )
    {
      if ( v30 != -1 )
      {
        v31 = v56[0];
        v32 = (char *)ptr;
        if ( v56[1] < (char *)v56[0] + 1 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, (char *)v56[0] + 1, 8);
          v32 = (char *)ptr;
          v31 = v56[0];
        }
        v33 = (int *)&v32[8 * (_QWORD)v31];
        *v33 = v30;
        v33[1] = v28;
        ++v56[0];
        v34 = *v36;
      }
LABEL_36:
      v28 = v36[1];
      v30 = v34;
      goto LABEL_37;
    }
    if ( v30 == -1 )
      goto LABEL_36;
    v28 = v36[1];
LABEL_37:
    ++v29;
  }
  if ( v29 < (int)v35(a2) )
    goto LABEL_40;
LABEL_44:
  if ( v30 != -1 )
  {
    v37 = v56[0];
    v38 = (char *)ptr;
    if ( v56[1] < (char *)v56[0] + 1 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, (char *)v56[0] + 1, 8);
      v38 = (char *)ptr;
      v37 = v56[0];
    }
    v39 = (int *)&v38[8 * (_QWORD)v37];
    *v39 = v30;
    v39[1] = v28;
    ++v56[0];
  }
  create_multirange_qflow_chart(a2, &ptr);
  if ( ptr )
  {
    v56[0] = nullptr;
    qfree(ptr);
  }
  return v63 - __readfsqword(0x28u);
}

