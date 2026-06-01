unsigned __int64 __fastcall sub_5DDAE0(
        _QWORD *a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128 a9)
{
  const __m128i *v10; // rbx
  char v12; // r14
  char *v13; // rdi
  __int64 v14; // r12
  __int64 i; // r15
  char *v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  _QWORD **v19; // rbx
  void *v20; // rdi
  __m128 v22; // xmm0
  __int64 v23; // rax
  char *v24; // rsi
  char *v25; // rcx
  char v26; // al
  _BYTE *v27; // rdx
  size_t v28; // rax
  size_t v29; // r15
  int v30; // r12d
  __int64 v31; // r14
  __int64 v32; // r15
  void *v33; // rax
  char *v34; // rsi
  __int64 *v35; // rsi
  __int64 v36; // rax
  __int64 (__fastcall *v37)(__int64); // rax
  __int64 *v38; // rbx
  void *v39; // rax
  char *v40; // rsi
  __int64 *v41; // rsi
  _BYTE *v42; // rbx
  __int64 v43; // r15
  size_t v44; // r8
  __m128i v45; // xmm0
  void *v46; // rdx
  __m128i v47; // xmm1
  void *v48; // rdi
  size_t v49; // rdx
  __int64 v50; // [rsp+0h] [rbp-4D8h]
  size_t v51; // [rsp+0h] [rbp-4D8h]
  size_t v52; // [rsp+8h] [rbp-4D0h]
  void *src; // [rsp+10h] [rbp-4C8h] BYREF
  __m128i v54; // [rsp+18h] [rbp-4C0h] BYREF
  int v55[2]; // [rsp+30h] [rbp-4A8h] BYREF
  int v56[2]; // [rsp+38h] [rbp-4A0h]
  int v57[4]; // [rsp+40h] [rbp-498h]
  int v58[2]; // [rsp+50h] [rbp-488h]
  void *ptr; // [rsp+60h] [rbp-478h] BYREF
  void *v60[2]; // [rsp+68h] [rbp-470h] BYREF
  int v61[2]; // [rsp+78h] [rbp-460h]
  int v62[2]; // [rsp+80h] [rbp-458h]
  int v63[2]; // [rsp+88h] [rbp-450h]
  char s[1023]; // [rsp+90h] [rbp-448h] BYREF
  char v65; // [rsp+48Fh] [rbp-49h] BYREF
  _BYTE v66[8]; // [rsp+490h] [rbp-48h] BYREF
  unsigned __int64 v67; // [rsp+498h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 64) & 8) == 0 )
  {
    v10 = *(const __m128i **)(a2 + 56);
    *(_QWORD *)v61 = v60;
    *(_QWORD *)v62 = v60;
    LODWORD(v60[0]) = 0;
    v60[1] = nullptr;
    *(_QWORD *)v63 = 0;
    src = nullptr;
    *(_QWORD *)v55 = 0;
    *(_QWORD *)v56 = 0xFFFFFFFFLL;
    *(_QWORD *)v58 = -1;
    v54 = 0;
    *(_OWORD *)v57 = 0;
    if ( v10 )
    {
      *(__m128i *)(a2 + 40) = _mm_loadu_si128(v10);
      *(_QWORD *)v58 = v10->m128i_i64[0];
      v12 = func_tail_iterator_set(v55, v10, -1);
      if ( *(_QWORD *)(a2 + 24) > 1u )
        goto LABEL_4;
      get_ea_name(&src, v10->m128i_i64[0], 0, 0);
    }
    else
    {
      v22 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 40));
      v56[0] = -1;
      *(__m128 *)v57 = v22;
      *(_QWORD *)v58 = v22.m128_u64[0];
      v12 = v22.m128_u64[0] < _mm_movehl_ps(a9, v22).m128_u64[0];
      if ( *(_QWORD *)(a2 + 24) > 1u )
        goto LABEL_4;
      v23 = sub_50C8D0(a1, s, 1024, v22.m128_i64[0]);
      v24 = &s[v23];
      if ( &s[v23] >= v66 )
      {
        if ( !under_debugger )
          interr(520);
        BUG();
      }
      v25 = "..";
      if ( v23 == 1023 )
      {
LABEL_62:
        v65 = 0;
        v27 = (_BYTE *)(&dword_0 + 1);
        v24 = &v65;
      }
      else
      {
        while ( 1 )
        {
          v26 = *v25++;
          *v24 = v26;
          if ( !v26 )
            break;
          if ( ++v24 == &v65 )
            goto LABEL_62;
        }
        v27 = (_BYTE *)(v66 - v24);
      }
      sub_50C8D0(a1, v24, (__int64)v27, *(_QWORD *)(a2 + 48));
      v28 = strlen(s);
      v29 = v28;
      if ( v28 )
      {
        v48 = src;
        v49 = v28 + 1;
        if ( v54.m128i_i64[1] < v28 + 1 )
        {
          v51 = v28 + 1;
          src = (void *)qvector_reserve(&src, src, v49, 1);
          v49 = v51;
          v48 = src;
        }
        v54.m128i_i64[0] = v49;
        memmove(v48, s, v29);
        *((_BYTE *)src + v29) = 0;
      }
      else
      {
        v54.m128i_i64[0] = 0;
      }
    }
    if ( *(_QWORD *)(a2 + 24) <= 1u )
    {
      v42 = src;
      if ( v54.m128i_i64[0] )
      {
        v43 = v54.m128i_i64[0] + 9;
        v44 = v54.m128i_i64[0] - 1;
        a6 = v54.m128i_i64[0] + 8;
        if ( v54.m128i_i64[1] >= (unsigned __int64)(v54.m128i_i64[0] + 9) )
          goto LABEL_54;
      }
      else
      {
        if ( v54.m128i_i64[1] > 9uLL )
        {
          v54.m128i_i64[0] = 10;
          *((_BYTE *)src + 9) = 0;
          goto LABEL_56;
        }
        v44 = 0;
        v43 = 10;
        a6 = 9;
      }
      v52 = v44;
      v50 = a6;
      src = (void *)qvector_reserve(&src, src, v43, 1);
      v44 = v52;
      v42 = src;
      a6 = v50;
LABEL_54:
      v54.m128i_i64[0] = v43;
      v42[a6] = 0;
      v42 = src;
      if ( v44 )
        memmove((char *)src + 9, src, v44);
LABEL_56:
      v42[8] = 32;
      *(_QWORD *)v42 = 0x666F206870617247LL;
      v45 = _mm_loadu_si128((const __m128i *)(a2 + 24));
      v46 = src;
      v47 = _mm_loadu_si128(&v54);
      v13 = *(char **)(a2 + 72);
      src = *(void **)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v46;
      *(__m128i *)(a2 + 24) = v47;
      v54 = v45;
      if ( v13 )
        goto LABEL_5;
      goto LABEL_13;
    }
LABEL_4:
    v13 = *(char **)(a2 + 72);
    if ( v13 )
    {
LABEL_5:
      v14 = *(_QWORD *)(a2 + 80);
      if ( v14 )
      {
        for ( i = 0; i != v14; ++i )
        {
          v16 = &v13[64 * i];
          v17 = *((void **)v16 + 5);
          if ( v17 )
          {
            *((_QWORD *)v16 + 6) = 0;
            qfree(v17);
          }
          v18 = *((void **)v16 + 2);
          if ( v18 )
          {
            *((_QWORD *)v16 + 3) = 0;
            qfree(v18);
          }
          v13 = *(char **)(a2 + 72);
        }
      }
      *(_QWORD *)(a2 + 80) = 0;
      qfree(v13);
      *(_QWORD *)(a2 + 72) = 0;
      *(_QWORD *)(a2 + 88) = 0;
    }
LABEL_13:
    *(_DWORD *)(a2 + 96) = 0;
    if ( v12 )
      sub_5DCEC0(a1, a2, (__int64)v55, &ptr, 1, a6);
    if ( *(_QWORD *)v55 )
      lock_func_range(*(_QWORD *)v55, 0);
    if ( src )
    {
      v54.m128i_i64[0] = 0;
      qfree(src);
    }
    v19 = (_QWORD **)v60[1];
    if ( v60[1] )
    {
      do
      {
        sub_5D8770(v19[3]);
        v20 = v19;
        v19 = (_QWORD **)v19[2];
        operator delete(v20, 0x30u);
      }
      while ( v19 );
    }
    return v67 - __readfsqword(0x28u);
  }
  v30 = 0;
  ptr = nullptr;
  v31 = -1;
  v32 = -1;
  *(_OWORD *)v60 = 0;
  while ( 1 )
  {
    v37 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
    if ( v37 != sub_5C3F10 )
      break;
    if ( v30 >= *(_DWORD *)(a2 + 80) )
      goto LABEL_44;
LABEL_40:
    v38 = (__int64 *)(*(_QWORD *)(a2 + 72) + ((__int64)v30 << 6));
    v36 = *v38;
    if ( *v38 != v31 )
    {
      if ( v32 != -1 )
      {
        v33 = v60[0];
        v34 = (char *)ptr;
        a3 = (char *)v60[0] + 1;
        if ( v60[1] < (char *)v60[0] + 1 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, a3, 16);
          v34 = (char *)ptr;
          v33 = v60[0];
        }
        v35 = (__int64 *)&v34[16 * (_QWORD)v33];
        *v35 = v32;
        v35[1] = v31;
        ++v60[0];
        v36 = *v38;
      }
LABEL_36:
      v31 = v38[1];
      v32 = v36;
      goto LABEL_37;
    }
    if ( v32 == -1 )
      goto LABEL_36;
    v31 = v38[1];
LABEL_37:
    ++v30;
  }
  if ( v30 < (int)v37(a2) )
    goto LABEL_40;
LABEL_44:
  if ( v32 != -1 )
  {
    v39 = v60[0];
    v40 = (char *)ptr;
    a3 = (char *)v60[0] + 1;
    if ( v60[1] < (char *)v60[0] + 1 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, a3, 16);
      v40 = (char *)ptr;
      v39 = v60[0];
    }
    v41 = (__int64 *)&v40[16 * (_QWORD)v39];
    *v41 = v32;
    v41[1] = v31;
    ++v60[0];
  }
  create_multirange_qflow_chart(a2, &ptr, 0.0, a8, a9, (__int64)a3, a4, a5, a6);
  if ( ptr )
  {
    v60[0] = nullptr;
    qfree(ptr);
  }
  return v67 - __readfsqword(0x28u);
}
