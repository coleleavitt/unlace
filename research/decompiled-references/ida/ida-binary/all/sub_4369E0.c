__int64 __fastcall sub_4369E0(unsigned __int64 *a1, const char *a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rax
  unsigned __int64 i; // rbp
  void *v5; // r14
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  char *v8; // rax
  const char *v9; // r12
  size_t v10; // rax
  __int64 v11; // r13
  size_t v12; // r14
  __m128i v13; // xmm0
  char *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r13
  __int64 (__fastcall *v17)(_QWORD *, __int64, unsigned int); // rax
  __int64 v18; // rdi
  __int64 (*v19)(); // rax
  const char *v20; // rbp
  const char *v21; // rsi
  char *v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rbx
  char *v25; // rax
  __int64 v26; // rdi
  const char *v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // rbx
  const char *v30; // rax
  __int64 v31; // rdi
  __int64 v33; // rax
  __m128i v34; // [rsp+0h] [rbp-88h] BYREF
  const char *v35; // [rsp+10h] [rbp-78h] BYREF
  __int128 v36; // [rsp+18h] [rbp-70h]
  char *v37; // [rsp+30h] [rbp-58h] BYREF
  __m128i v38; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]

  v2 = *a1;
  v39 = __readfsqword(0x28u);
  v3 = a1[1];
  v36 = 0;
  v35 = nullptr;
  for ( i = v2 + 48 * v3; i != v2; *(_QWORD *)&v36 = v36 + 1 )
  {
    while ( 1 )
    {
      v9 = &s1;
      if ( *(_QWORD *)(v2 + 8) )
        v9 = *(const char **)v2;
      v37 = nullptr;
      v38 = 0;
      if ( v9 )
      {
        v10 = strlen(v9);
        v11 = v10 + 1;
        v12 = v10;
        v37 = (char *)qvector_reserve(&v37, 0, v10 + 1, 1);
        v38.m128i_i64[0] = v11;
        memmove(v37, v9, v12);
        v37[v12] = 0;
      }
      v33 = v36;
      a2 = v35;
      a1 = (unsigned __int64 *)(v36 + 1);
      if ( &v37 < (char **)v35 || &v37 >= (char **)&v35[24 * *((_QWORD *)&v36 + 1)] )
        break;
      v5 = v37;
      v6 = _mm_loadl_epi64(&v38);
      v37 = nullptr;
      v7 = _mm_loadl_epi64((const __m128i *)&v38.m128i_u64[1]);
      v38 = 0;
      if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)a1 )
      {
        v34.m128i_i64[1] = v7.m128i_i64[0];
        v34.m128i_i64[0] = v6.m128i_i64[0];
        v35 = (const char *)qvector_reserve(&v35, v35, v36 + 1, 24);
        a2 = v35;
        v7 = _mm_loadl_epi64((const __m128i *)&v34.m128i_u64[1]);
        v33 = v36;
        v6 = _mm_loadl_epi64(&v34);
      }
      v8 = (char *)&a2[24 * v33];
      *(_QWORD *)v8 = v5;
      *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v6, v7);
      a1 = (unsigned __int64 *)v37;
      *(_QWORD *)&v36 = v36 + 1;
      if ( v37 )
      {
        v38.m128i_i64[0] = 0;
        qfree(v37, a2);
      }
      v2 += 48LL;
      if ( i == v2 )
        goto LABEL_17;
    }
    if ( *((_QWORD *)&v36 + 1) < (unsigned __int64)a1 )
    {
      a1 = (unsigned __int64 *)&v35;
      v35 = (const char *)qvector_reserve(&v35, v35, v36 + 1, 24);
      a2 = v35;
      v33 = v36;
    }
    v13 = _mm_loadu_si128(&v38);
    v2 += 48LL;
    v14 = (char *)&a2[24 * v33];
    *(_QWORD *)v14 = v37;
    *(__m128i *)(v14 + 8) = v13;
  }
LABEL_17:
  v15 = sub_426230(a1, a2);
  v16 = (_QWORD *)sub_417080((__int64)v15);
  v17 = *(__int64 (__fastcall **)(_QWORD *, __int64, unsigned int))(*v16 + 328LL);
  if ( v17 != sub_419540 )
  {
    v21 = (const char *)&v35;
    LODWORD(v20) = v17(v16, (__int64)&v35, 1u);
    goto LABEL_27;
  }
  v18 = v16[1];
  if ( v18 )
  {
    v19 = *(__int64 (**)())(*(_QWORD *)v18 + 480LL);
    if ( v19 == sub_178B60 || !(unsigned __int8)v19() )
    {
      v37 = nullptr;
      v38 = 0;
      v20 = (const char *)(*(unsigned int (__fastcall **)(_QWORD, char **, const char **, __int64))(*(_QWORD *)v16[1]
                                                                                                  + 296LL))(
                            v16[1],
                            &v37,
                            &v35,
                            1);
      v21 = v20;
      (*(void (__fastcall **)(_QWORD *, const char *, char **))(*v16 + 24LL))(v16, v20, &v37);
      v22 = v37;
      if ( v37 )
      {
        v23 = v38.m128i_i64[0];
        if ( v38.m128i_i64[0] )
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
              v22 = v37;
            }
            ++v24;
          }
          while ( v23 != v24 );
        }
        v38.m128i_i64[0] = 0;
        qfree(v22, v20);
      }
LABEL_27:
      if ( !(_DWORD)v20 )
        goto LABEL_28;
      goto LABEL_38;
    }
  }
  LODWORD(v20) = 52;
LABEL_38:
  v21 = "Failed to delete file";
  sub_416980((unsigned int)v20, (__int64)"Failed to delete file");
LABEL_28:
  v27 = v35;
  if ( v35 )
  {
    v28 = v36;
    if ( (_QWORD)v36 )
    {
      v29 = 0;
      do
      {
        v30 = &v27[24 * v29];
        v31 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 )
        {
          *((_QWORD *)v30 + 1) = 0;
          qfree(v31, v21);
          v27 = v35;
        }
        ++v29;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v36 = 0;
    qfree(v27, v21);
  }
  return 1;
}
