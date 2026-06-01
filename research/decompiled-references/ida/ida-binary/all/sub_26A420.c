unsigned __int64 __fastcall sub_26A420(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        const char *a10,
        __int64 a11,
        __int64 a12)
{
  __m128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  const char **v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // rdi
  _QWORD *v21; // r15
  __int64 i; // rbx
  __int64 v23; // rax
  const char *v24; // rax
  char *v25; // rbp
  const char *v26; // r14
  __int64 v27; // rax
  char *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  void *v31; // r13
  size_t v32; // r12
  __int64 *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r12
  __int64 v37; // rbp
  __int64 *v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r13
  __int64 j; // rbx
  __int64 *v42; // rax
  __int64 v43; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+0h] [rbp-80h]
  const char *v48; // [rsp+8h] [rbp-78h]
  const char **v49; // [rsp+8h] [rbp-78h]
  const char **v50; // [rsp+10h] [rbp-70h]
  const char **v51; // [rsp+10h] [rbp-70h]
  const void **v52; // [rsp+18h] [rbp-68h]
  __int64 v53; // [rsp+28h] [rbp-58h] BYREF
  __int128 v54; // [rsp+30h] [rbp-50h]
  unsigned __int64 v55; // [rsp+40h] [rbp-40h]

  v12 = 0;
  v55 = __readfsqword(0x28u);
  v54 = 0;
  v53 = 0;
  v13 = sub_2684C0((__int64)a10, (__int64)a10, a11, a12, 0.0);
  v20 = 0;
  v21 = (_QWORD *)v13;
  if ( v13 )
  {
    v47 = *(_QWORD *)(v13 + 8);
    if ( v47 )
    {
      for ( i = 0; i != v47; ++i )
      {
        v23 = *v21 + 16 * i;
        if ( *(_DWORD *)v23 == 4 )
        {
          v17 = *(const char ***)(v23 + 8);
          v16 = (unsigned __int64)v17[1];
          if ( v16 > 1 )
          {
            v24 = *v17;
            v14 = 0;
            a10 = &(*v17)[16 * v16];
            do
            {
              v15 = *(_DWORD *)v24 == 2;
              v24 += 16;
              v14 += v15;
            }
            while ( a10 != v24 );
            if ( v16 == v14 )
            {
              a10 = (const char *)v53;
              v14 = v20 + 1;
              if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v20 + 1) )
              {
                v49 = v17;
                v53 = qvector_reserve(&v53, v53, v14, 24);
                v20 = v54;
                a10 = (const char *)v53;
                v17 = v49;
              }
              v12 = 0;
              v25 = (char *)&a10[24 * v20];
              *(_QWORD *)v25 = 0;
              *(_OWORD *)(v25 + 8) = 0;
              v20 = v54 + 1;
              *(_QWORD *)&v54 = v54 + 1;
              v48 = v17[1];
              if ( v48 )
              {
                v26 = nullptr;
                do
                {
                  v29 = (__int64)&(*v17)[16 * (_QWORD)v26];
                  if ( *(_DWORD *)v29 != 2 )
                  {
                    if ( !under_debugger )
                      interr(1623, a10, v14, v15, *(double *)v12.m128_u64);
                    BUG();
                  }
                  v30 = *(_QWORD *)(v29 + 8);
                  v31 = nullptr;
                  v32 = *(_QWORD *)(v30 + 8);
                  if ( v32 )
                  {
                    v52 = *(const void ***)(v29 + 8);
                    v50 = v17;
                    v31 = (void *)qalloc_or_throw(*(_QWORD *)(v30 + 8));
                    memcpy(v31, *v52, v32);
                    v17 = v50;
                  }
                  v27 = *((_QWORD *)v25 + 1);
                  a10 = *(const char **)v25;
                  v14 = v27 + 1;
                  if ( *((_QWORD *)v25 + 2) < (unsigned __int64)(v27 + 1) )
                  {
                    v51 = v17;
                    v45 = qvector_reserve(v25, a10, v14, 24);
                    *(_QWORD *)v25 = v45;
                    a10 = (const char *)v45;
                    v17 = v51;
                    v27 = *((_QWORD *)v25 + 1);
                  }
                  ++v26;
                  v28 = (char *)&a10[24 * v27];
                  v12 = (__m128)_mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
                  *(_QWORD *)v28 = v31;
                  *(__m128 *)(v28 + 8) = v12;
                  ++*((_QWORD *)v25 + 1);
                }
                while ( v48 != v26 );
                v20 = v54;
              }
            }
          }
        }
      }
    }
  }
  if ( !v20 )
  {
    v35 = v53;
    if ( !v53 )
      return v55 - __readfsqword(0x28u);
    goto LABEL_34;
  }
  v33 = (__int64 *)qword_8CB508;
  if ( !qword_8CB508 )
  {
    v46 = operator new(0x18u);
    v12 = 0;
    *(_QWORD *)v46 = 0;
    v33 = (__int64 *)v46;
    qword_8CB508 = v46;
    *(_OWORD *)(v46 + 8) = 0;
  }
  a10 = (const char *)&v53;
  sub_204420(v33, (__m128i *)&v53, v14, v15, v16, (__int64)v17, v12, a2, a3, a4, v18, v19, a7, a8);
  v34 = v53;
  v35 = v53;
  if ( v53 )
  {
    v36 = v54;
    if ( (_QWORD)v54 )
    {
      v37 = 0;
      do
      {
        v38 = (__int64 *)(v34 + 24 * v37);
        v39 = *v38;
        if ( *v38 )
        {
          v40 = v38[1];
          if ( v40 )
          {
            for ( j = 0; j != v40; ++j )
            {
              v42 = (__int64 *)(v39 + 24 * j);
              v43 = *v42;
              if ( *v42 )
              {
                v42[1] = 0;
                qfree(v43, (const char *)&v53);
                v39 = *v38;
              }
            }
          }
          v38[1] = 0;
          qfree(v39, (const char *)&v53);
          v34 = v53;
        }
        ++v37;
        v35 = v34;
      }
      while ( v36 != v37 );
    }
LABEL_34:
    *(_QWORD *)&v54 = 0;
    qfree(v35, a10);
  }
  return v55 - __readfsqword(0x28u);
}
