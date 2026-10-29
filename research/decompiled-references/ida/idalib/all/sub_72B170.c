unsigned __int64 __fastcall sub_72B170(
        __m128i *a1,
        _QWORD *a2,
        __int64 a3,
        const char *a4,
        size_t a5,
        unsigned int a6,
        const __m128i *a7)
{
  int v8; // r12d
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __m128i v13; // xmm0
  size_t v14; // r14
  __int64 v15; // rbp
  char *v16; // r14
  __int64 v17; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  void *v21; // rdi
  __int64 v22; // rax
  void *src; // [rsp+10h] [rbp-88h] BYREF
  __int128 v25; // [rsp+18h] [rbp-80h]
  __m128i v26; // [rsp+30h] [rbp-68h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v8 = a5;
  v27 = __readfsqword(0x28u);
  a1->m128i_i64[0] = (__int64)off_2B38410;
  v11 = a7[1].m128i_i64[0];
  v12 = a7[1].m128i_u64[1];
  if ( v11 )
  {
    v13 = _mm_loadu_si128(a7);
    a7[1] = 0;
    a1[1].m128i_i64[0] = (__int64)a2;
    a1[1].m128i_i64[1] = a3;
    a1->m128i_i64[1] = (__int64)&off_2B383D8;
    a1[3].m128i_i64[1] = v12;
    a1[3].m128i_i64[0] = v11;
    v26 = v13;
    a1[2] = v13;
  }
  else
  {
    a1[1].m128i_i64[0] = (__int64)a2;
    a1[1].m128i_i64[1] = a3;
    a1->m128i_i64[1] = (__int64)&off_2B383D8;
    a1[3].m128i_i64[0] = 0;
    a1[3].m128i_i64[1] = v12;
    a1[2] = 0;
  }
  a1[4].m128i_i64[1] = (__int64)a4;
  a1[4].m128i_i64[0] = 0;
  src = nullptr;
  v25 = 0;
  if ( a4 )
  {
    v14 = strlen(a4);
    v12 = (unsigned __int64)a4;
    src = (void *)qvector_reserve(&src, 0, v14 + 1, 1);
    *(_QWORD *)&v25 = v14 + 1;
    memmove(src, a4, v14);
    *((_BYTE *)src + v14) = 0;
    v15 = v25;
    v16 = (char *)src;
    if ( (_QWORD)v25 && (a5 = v25 - 1, (_QWORD)v25 != 1) )
    {
      v21 = (void *)a2[3];
      if ( a2[5] < (unsigned __int64)v25 )
      {
        v22 = qvector_reserve(a2 + 3, a2[3], v25, 1);
        a2[3] = v22;
        a5 = v15 - 1;
        v21 = (void *)v22;
      }
      a2[4] = v15;
      v12 = (unsigned __int64)v16;
      memmove(v21, v16, a5);
      *(_BYTE *)(a2[3] + v15 - 1) = 0;
      v16 = (char *)src;
    }
    else
    {
      a2[4] = 0;
    }
    if ( v16 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v16);
    }
    if ( v8 != 2 )
      goto LABEL_10;
LABEL_16:
    v12 = a6;
    v19 = sub_836360(&a1->m128i_u64[1], a6, a3, v11, a5);
    goto LABEL_17;
  }
  a2[4] = 0;
  if ( (_DWORD)a5 == 2 )
    goto LABEL_16;
LABEL_10:
  if ( v8 != 3 )
  {
LABEL_11:
    v17 = a1[4].m128i_i64[0];
    goto LABEL_12;
  }
  v12 = a6;
  v19 = sub_84F130(&a1->m128i_u64[1], a6, a3, v11, a5);
LABEL_17:
  v17 = v19;
  v20 = a1[4].m128i_i64[0];
  a1[4].m128i_i64[0] = v17;
  if ( v20 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    goto LABEL_11;
  }
LABEL_12:
  if ( v17 )
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64, __int64, size_t))(*(_QWORD *)v17 + 24LL))(
      v17,
      v12,
      a3,
      v11,
      a5);
  return v27 - __readfsqword(0x28u);
}
