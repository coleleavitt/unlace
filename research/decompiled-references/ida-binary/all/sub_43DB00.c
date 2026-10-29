__int64 __fastcall sub_43DB00(__int64 a1, const char *a2, _QWORD *a3, const char *a4, unsigned int a5)
{
  const char *v7; // rbx
  size_t v9; // r14
  const char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __m128i v14; // xmm0
  char *v15; // rax
  __int64 v16; // r9
  __int64 (__fastcall *v17)(_QWORD *, __int64, __int64, __int64, __int64); // rax
  __int64 v18; // rdi
  __int64 (*v19)(); // rax
  const char *v20; // r12
  const char *v21; // rsi
  char *v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rbx
  char *v25; // rax
  __int64 v26; // rdi
  unsigned int v27; // ebp
  const char *v28; // rdx
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // rdi
  char v34; // al
  void *v35; // r13
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  char *v38; // rax
  __m128i v39; // [rsp+0h] [rbp-88h] BYREF
  const char *v40; // [rsp+10h] [rbp-78h] BYREF
  __int128 v41; // [rsp+18h] [rbp-70h]
  char *v42; // [rsp+30h] [rbp-58h] BYREF
  __m128i v43; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v7 = a4;
  v44 = __readfsqword(0x28u);
  v41 = 0;
  v40 = nullptr;
  v42 = nullptr;
  v43 = 0;
  if ( !a4 )
  {
    v13 = 1;
    goto LABEL_27;
  }
  v9 = strlen(a4);
  v39.m128i_i64[0] = v9 + 1;
  v10 = v7;
  v42 = (char *)qvector_reserve(&v42, 0, v9 + 1, 1);
  v43.m128i_i64[0] = v9 + 1;
  memmove(v42, v7, v9);
  v42[v9] = 0;
  v11 = v41;
  v7 = v40;
  v12 = *((_QWORD *)&v41 + 1);
  v13 = v41 + 1;
  if ( &v42 < (char **)v40 || (v10 = &v40[24 * *((_QWORD *)&v41 + 1)], &v42 >= (char **)v10) )
  {
    if ( *((_QWORD *)&v41 + 1) >= v13 )
    {
LABEL_4:
      v14 = _mm_loadu_si128(&v43);
      v15 = (char *)&v7[24 * v11];
      *(_QWORD *)v15 = v42;
      *(__m128i *)(v15 + 8) = v14;
      *(_QWORD *)&v41 = v41 + 1;
      goto LABEL_5;
    }
LABEL_27:
    v10 = v7;
    v40 = (const char *)qvector_reserve(&v40, v7, v13, 24);
    v7 = v40;
    v11 = v41;
    goto LABEL_4;
  }
  v35 = v42;
  v36 = _mm_loadl_epi64(&v43);
  v42 = nullptr;
  v37 = _mm_loadl_epi64((const __m128i *)&v43.m128i_u64[1]);
  v43 = 0;
  if ( *((_QWORD *)&v41 + 1) < v13 )
  {
    v10 = v40;
    v39.m128i_i64[1] = v37.m128i_i64[0];
    v39.m128i_i64[0] = v36.m128i_i64[0];
    v40 = (const char *)qvector_reserve(&v40, v40, v13, 24);
    v7 = v40;
    v37 = _mm_loadl_epi64((const __m128i *)&v39.m128i_u64[1]);
    v11 = v41;
    v36 = _mm_loadl_epi64(&v39);
  }
  v38 = (char *)&v7[24 * v11];
  *(_QWORD *)v38 = v35;
  *(__m128i *)(v38 + 8) = _mm_unpacklo_epi64(v36, v37);
  *(_QWORD *)&v41 = v41 + 1;
  if ( v42 )
  {
    v43.m128i_i64[0] = 0;
    qfree(v42, v10, v13, v12);
  }
LABEL_5:
  v16 = 19;
  if ( (~a5 & 0xFFFFFFFD) == 0 )
    v16 = 3;
  v17 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*a3 + 240LL);
  if ( v17 != vault_with_events_t__::vfunc_30 )
  {
    v21 = a2;
    LODWORD(v20) = v17(a3, (__int64)a2, (__int64)&v40, a5, (unsigned int)v16);
    goto LABEL_17;
  }
  v18 = a3[1];
  if ( v18 )
  {
    v19 = *(__int64 (**)())(*(_QWORD *)v18 + 480LL);
    if ( v19 == sub_178B60 )
      goto LABEL_10;
    v39.m128i_i32[0] = v16;
    v34 = ((__int64 (__fastcall *)(__int64, const char *, __int64 (*)(), __int64))v19)(v18, v10, sub_178B60, v12);
    v16 = v39.m128i_u32[0];
    if ( !v34 )
    {
      v18 = a3[1];
LABEL_10:
      v43 = 0;
      v42 = nullptr;
      v20 = (const char *)(*(unsigned int (__fastcall **)(__int64, char **, const char *, const char **, _QWORD, __int64))(*(_QWORD *)v18 + 208LL))(
                            v18,
                            &v42,
                            a2,
                            &v40,
                            a5,
                            v16);
      v21 = v20;
      (*(void (__fastcall **)(_QWORD *, const char *, char **))(*a3 + 24LL))(a3, v20, &v42);
      v22 = v42;
      if ( v42 )
      {
        v23 = v43.m128i_i64[0];
        if ( v43.m128i_i64[0] )
        {
          v24 = 0;
          do
          {
            v25 = &v22[32 * v24];
            v26 = *((_QWORD *)v25 + 1);
            if ( v26 )
            {
              *((_QWORD *)v25 + 2) = 0;
              qfree(v26, v20);
              v22 = v42;
            }
            ++v24;
          }
          while ( v23 != v24 );
        }
        v43.m128i_i64[0] = 0;
        qfree(v22, v20);
      }
LABEL_17:
      v27 = 1;
      if ( !(_DWORD)v20 )
        goto LABEL_18;
      goto LABEL_30;
    }
  }
  LODWORD(v20) = 52;
LABEL_30:
  v21 = "File history";
  sub_416980((unsigned int)v20, (__int64)"File history");
  v27 = 0;
LABEL_18:
  v28 = v40;
  if ( v40 )
  {
    v29 = v41;
    if ( (_QWORD)v41 )
    {
      v30 = 0;
      do
      {
        v31 = (char *)&v28[24 * v30];
        v32 = *(_QWORD *)v31;
        if ( *(_QWORD *)v31 )
        {
          *((_QWORD *)v31 + 1) = 0;
          qfree(v32, v21);
          v28 = v40;
        }
        ++v30;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v41 = 0;
    qfree(v28, v21);
  }
  return v27;
}
