__m128i *__fastcall sub_2D1E80(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, double a5, double a6)
{
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 i; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i v15; // xmm0
  __m128i *v16; // rax
  __m128i *v17; // r12
  _QWORD *v18; // rax
  _QWORD *v19; // r15
  __int64 v20; // r13
  char *v21; // r10
  size_t v22; // r11
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r13
  char *v27; // r10
  size_t v28; // r11
  const void *v29; // r8
  void *v30; // rax
  char *v31; // rcx
  char *v32; // r13
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  char *v35; // rdx
  __int64 *v36; // r14
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rbp
  char *v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  const void *v44; // r8
  void *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 *v50; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD *v51; // [rsp+10h] [rbp-98h]
  char *v52; // [rsp+18h] [rbp-90h]
  size_t v53; // [rsp+20h] [rbp-88h]
  const void *v54; // [rsp+28h] [rbp-80h]
  _BYTE *v55; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v56[24]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v57; // [rsp+58h] [rbp-50h]
  int v58; // [rsp+60h] [rbp-48h]
  unsigned __int64 v59; // [rsp+68h] [rbp-40h]

  v50 = a4;
  v59 = __readfsqword(0x28u);
  v9 = a1 + 32;
  v10 = *(_QWORD *)(a1 + 32);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 40);
    if ( v11 )
    {
      for ( i = 0; i != v11; ++i )
      {
        v13 = 3 * i;
        sub_2B2600((_QWORD *)(32 * v13 + v10));
        v10 = *(_QWORD *)(a1 + 32);
      }
    }
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  sub_7D550((unsigned __int64 **)(a1 + 56));
  *(_QWORD *)(a1 + 24) = v9;
  v14 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 72) = 0;
  v15 = (__m128i)_mm_loadh_ps((const double *)&v50);
  *(__m128i *)v56 = v15;
  sub_2CFFF0(a2, v9, (__m128i *)v56, v14, nullptr, v15);
  *a3 = *(_QWORD *)v56;
  v16 = (__m128i *)qalloc(16);
  v17 = v16;
  if ( !v16 )
    sub_4D388(*(double *)v15.m128i_i64, a6);
  v16->m128i_i64[0] = 0;
  v16->m128i_i64[1] = 0;
  v18 = *(_QWORD **)(a1 + 24);
  v19 = (_QWORD *)*v18;
  v20 = 12LL * v18[1];
  v50 = (__int64 *)&v55;
  v51 = &v19[v20];
  if ( &v19[v20] != v19 )
  {
    do
    {
      *(_DWORD *)v56 = 0;
      copy_argloc(v56, v19);
      v24 = v19[2];
      v57 = a2;
      *(_QWORD *)&v56[16] = v24;
      v58 = 2;
      v55 = v56;
      v25 = sub_2D1CF0(v17, (__int64)v56, v50);
      v26 = v25 + 24;
      copy_argloc(v25 + 64, v19);
      *(_QWORD *)(v26 + 56) = v19[2];
      if ( (_QWORD *)(v26 + 64) != v19 + 3 )
      {
        v27 = (char *)v19[4];
        if ( !v27 || (v28 = (size_t)(v27 - 1), v27 == &byte_1) )
        {
          *(_QWORD *)(v26 + 72) = 0;
        }
        else
        {
          v29 = (const void *)v19[3];
          v30 = *(void **)(v26 + 64);
          if ( *(_QWORD *)(v26 + 80) < (unsigned __int64)v27 )
          {
            v46 = v19[4];
            v47 = *(_QWORD *)(v26 + 64);
            v54 = (const void *)v19[3];
            v53 = (size_t)(v27 - 1);
            v52 = v27;
            v30 = (void *)qvector_reserve(v26 + 64, v47, v46, 1);
            v29 = v54;
            v28 = v53;
            *(_QWORD *)(v26 + 64) = v30;
            v27 = v52;
          }
          *(_QWORD *)(v26 + 72) = v27;
          v52 = v27;
          memmove(v30, v29, v28);
          v52[*(_QWORD *)(v26 + 64) - 1] = 0;
        }
      }
      copy_tinfo_t(v26 + 88, v19 + 6);
      if ( (_QWORD *)(v26 + 96) != v19 + 7 )
      {
        v21 = (char *)v19[8];
        if ( v21 && (v22 = (size_t)(v21 - 1), v21 != &byte_1) )
        {
          v44 = (const void *)v19[7];
          v45 = *(void **)(v26 + 96);
          if ( *(_QWORD *)(v26 + 112) < (unsigned __int64)v21 )
          {
            v48 = v19[8];
            v49 = *(_QWORD *)(v26 + 96);
            v54 = (const void *)v19[7];
            v53 = (size_t)(v21 - 1);
            v52 = v21;
            v45 = (void *)qvector_reserve(v26 + 96, v49, v48, 1);
            v44 = v54;
            v22 = v53;
            *(_QWORD *)(v26 + 96) = v45;
            v21 = v52;
          }
          *(_QWORD *)(v26 + 104) = v21;
          v52 = v21;
          memmove(v45, v44, v22);
          v52[*(_QWORD *)(v26 + 96) - 1] = 0;
        }
        else
        {
          *(_QWORD *)(v26 + 104) = 0;
        }
      }
      v23 = v19[10];
      v19 += 12;
      *(_QWORD *)(v26 + 120) = v23;
      *(_DWORD *)(v26 + 128) = *((_DWORD *)v19 - 2);
      cleanup_argloc(v56);
    }
    while ( v51 != v19 );
    v18 = *(_QWORD **)(a1 + 24);
  }
  v31 = (char *)v18[3];
  v52 = v31;
  if ( v31 )
  {
    if ( v18[4] )
    {
      v32 = *((char **)v31 + 1);
      if ( v31 != v32 )
      {
        while ( 1 )
        {
LABEL_25:
          while ( 1 )
          {
            *(_DWORD *)v56 = 0;
            copy_argloc(v56, v32 + 24);
            v33 = *((_QWORD *)v32 + 5);
            v57 = a2;
            *(_QWORD *)&v56[16] = v33;
            v58 = 1;
            v55 = v56;
            v34 = sub_2D1CF0(v17, (__int64)v56, v50);
            v51 = (_QWORD *)(v34 + 24);
            copy_argloc(v34 + 64, v32 + 48);
            v51[7] = *((_QWORD *)v32 + 8);
            cleanup_argloc(v56);
            if ( (*(_QWORD *)v32 & 2) == 0 )
              break;
LABEL_29:
            if ( v32 == v52 )
              goto LABEL_30;
          }
          v35 = *((char **)v32 + 2);
          if ( (*v35 & 2) == 0 )
          {
            while ( (**((_BYTE **)v35 + 1) & 2) == 0 )
              v35 = *((char **)v35 + 1);
            v32 = v35;
            goto LABEL_29;
          }
          v41 = (char *)(*(_QWORD *)v32 & 0xFFFFFFFFFFFFFFFCLL);
          v42 = *(_QWORD *)v41;
          if ( (*(_QWORD *)v41 & 2) == 0 )
          {
            while ( *((char **)v41 + 2) == v32 )
            {
              v32 = v41;
              v43 = v42 & 0xFFFFFFFFFFFFFFFCLL;
              v42 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v42 & 2) != 0 )
              {
                v32 = (char *)v43;
                if ( (char *)v43 != v52 )
                  goto LABEL_25;
                goto LABEL_30;
              }
              v41 = (char *)v43;
            }
          }
          v32 = v41;
          if ( v41 == v52 )
          {
LABEL_30:
            v18 = *(_QWORD **)(a1 + 24);
            break;
          }
        }
      }
    }
  }
  v36 = v50;
  v37 = v18[5];
  v55 = v56;
  v58 = 3;
  *(_QWORD *)v56 = 0;
  v57 = 0;
  *(__m128i *)&v56[8] = _mm_load_si128((const __m128i *)&xmmword_3FA120);
  *(_QWORD *)(sub_2D1CF0(v17, (__int64)v56, v50) + 144) = v37;
  cleanup_argloc(v56);
  v38 = *(_QWORD *)(a1 + 24);
  v55 = v56;
  v39 = *(int *)(v38 + 48);
  v58 = 4;
  *(_QWORD *)v56 = 0;
  v57 = 0;
  *(__m128i *)&v56[8] = _mm_load_si128((const __m128i *)&xmmword_3FA120);
  *(_QWORD *)(sub_2D1CF0(v17, (__int64)v56, v36) + 144) = v39;
  cleanup_argloc(v56);
  return v17;
}
