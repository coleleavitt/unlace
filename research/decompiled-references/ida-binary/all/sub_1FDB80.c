__int64 __fastcall sub_1FDB80(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v13; // rdx
  int v14; // eax
  __int128 *v15; // rcx
  size_t v16; // r14
  char v17; // r13
  const char *v18; // r15
  __int64 v19; // rdi
  double v20; // xmm0_8
  __int64 v21; // rdi
  double v22; // xmm4_8
  double v23; // xmm5_8
  int v24; // eax
  __int64 v25; // rdi
  const char *v26; // rsi
  unsigned int v27; // ebx
  size_t v29; // rax
  size_t v30; // rbx
  void *v31; // rdx
  void *v32; // rdi
  const char *v33; // r9
  char *v34; // rax
  void *v35; // rdi
  __int64 v36; // rax
  struct _Unwind_Exception *v37; // rbx
  const char *src; // [rsp+0h] [rbp-48h]
  void *srca; // [rsp+0h] [rbp-48h]
  const char *v40; // [rsp+8h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 600);
  if ( !v10 )
    goto LABEL_23;
  v11 = *(_QWORD *)(a1 + 592);
  v13 = v11 + 80 * v10;
  if ( v11 == v13 )
    goto LABEL_23;
  while ( 1 )
  {
    v14 = *(_DWORD *)(v11 + 72);
    if ( (v14 & 4) == 0 )
      break;
    v11 += 80;
    if ( v13 == v11 )
      goto LABEL_23;
  }
  if ( v11 )
  {
    v15 = &xmmword_8BCD60;
    v16 = xmmword_8D0AA8;
    v17 = BYTE2(xmmword_8BCDC0);
    v18 = nullptr;
    BYTE2(xmmword_8BCDC0) = a2 | ((v14 & 1) == 0 ? 4 : -124);
    if ( (_QWORD)xmmword_8D0AA8 )
    {
      v34 = (char *)qalloc_or_throw(xmmword_8D0AA8);
      a2 = qword_8D0AA0;
      v18 = v34;
      memcpy(v34, (const void *)qword_8D0AA0, v16);
    }
    if ( *(_QWORD *)(v11 + 16)
      && *(_QWORD *)(v11 + 8)
      && (src = *(const char **)(v11 + 8), v29 = strlen(src), (v30 = v29) != 0) )
    {
      v31 = (void *)(v29 + 1);
      v32 = (void *)qword_8D0AA0;
      v33 = src;
      if ( *((_QWORD *)&xmmword_8D0AA8 + 1) < v29 + 1 )
      {
        srca = (void *)(v29 + 1);
        v40 = v33;
        v36 = qvector_reserve(&qword_8D0AA0, qword_8D0AA0, v31, 1);
        v33 = v40;
        v31 = srca;
        qword_8D0AA0 = v36;
        v32 = (void *)v36;
      }
      *(_QWORD *)&xmmword_8D0AA8 = v31;
      a2 = (__int64)v33;
      memmove(v32, v33, v30);
      *(_BYTE *)(qword_8D0AA0 + v30) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_8D0AA8 = 0;
    }
    v19 = *(_QWORD *)(a1 + 224);
    if ( v19 )
    {
      v20 = qfree(v19, (const char *)a2);
      *(_QWORD *)(a1 + 224) = 0;
      v21 = *(_QWORD *)(a1 + 248);
      *(_DWORD *)(a1 + 232) = 0;
      *(double *)a3.m128_u64 = qfree(v21, (const char *)a2, v20);
      *(_QWORD *)(a1 + 248) = 0;
      v19 = *(_QWORD *)(a1 + 216);
      *(_DWORD *)(a1 + 256) = 0;
      sub_1FD320(v19, *(double *)a3.m128_u64, a4, a5, a6, v22, v23, a9, a10);
    }
    if ( *(_BYTE *)(a1 + 968) )
    {
      if ( !*(_QWORD *)(a1 + 424) )
      {
        v37 = (struct _Unwind_Exception *)sub_1E69C0(*(double *)a3.m128_u64, v19, a2, v13, (__int64)v15);
        if ( v18 )
          qfree(v18, (const char *)a2);
        _Unwind_Resume(v37);
      }
      v24 = *(_DWORD *)(a1 + 416);
      if ( v24 == 2 )
      {
        v25 = *(_QWORD *)(a1 + 896);
      }
      else if ( v24 == 3 )
      {
        v25 = *(_QWORD *)(a1 + 904);
      }
      else
      {
        v25 = 0;
        if ( v24 == 1 )
          v25 = *(_QWORD *)(a1 + 888);
      }
    }
    else
    {
      v25 = 0;
    }
    v26 = (_BYTE *)(&dword_0 + 3);
    v27 = sub_1751D0(v25, 3u, a3, a4, a5, a6, a7, a8, a9, a10);
    BYTE2(xmmword_8BCDC0) = v17;
    if ( v16 > 1 )
    {
      v35 = (void *)qword_8D0AA0;
      if ( *((_QWORD *)&xmmword_8D0AA8 + 1) < v16 )
      {
        qword_8D0AA0 = qvector_reserve(&qword_8D0AA0, qword_8D0AA0, v16, 1);
        v35 = (void *)qword_8D0AA0;
      }
      v26 = v18;
      *(_QWORD *)&xmmword_8D0AA8 = v16;
      memmove(v35, v18, v16 - 1);
      *(_BYTE *)(qword_8D0AA0 + v16 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_8D0AA8 = 0;
    }
    if ( v18 )
      qfree(v18, v26);
  }
  else
  {
LABEL_23:
    v27 = 0;
  }
  sub_312330(qword_8CD748, 0);
  return v27;
}
