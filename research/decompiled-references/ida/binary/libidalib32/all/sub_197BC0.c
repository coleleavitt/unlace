__int64 __fastcall sub_197BC0(const __m128i *a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v6; // rax
  const void *v7; // rsi
  char v8; // r12
  __int64 *v9; // rax
  __int64 *v10; // rbp
  void *v11; // rcx
  TView *v12; // r15
  __int64 (__fastcall *v13)(__int64, size_t *); // rax
  const void *v14; // r14
  __int64 (__fastcall *v15)(__int64, __int64 **); // rax
  __int64 *v16; // rdi
  const char *v17; // r8
  size_t v18; // rax
  size_t v19; // r15
  size_t v20; // rbp
  __int64 *v21; // r15
  __int64 v22; // rbp
  __int64 v23; // r12
  char v25; // dl
  __int64 v26; // rax
  __int64 (__fastcall *v27)(const __m128i *, __int64); // rcx
  unsigned __int64 v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // rbp
  void (*v31)(); // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int32 v37; // eax
  __int64 v38; // rcx
  void (__fastcall *v39)(__int64, __int64, __int64, __int64); // rax
  void (*v40)(); // rax
  __int64 *v41; // rdi
  __int64 v42; // rbp
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 *v45; // rbp
  const char *srca; // [rsp+8h] [rbp-B0h]
  void *srcb; // [rsp+8h] [rbp-B0h]
  void *srcc; // [rsp+8h] [rbp-B0h]
  void *src; // [rsp+8h] [rbp-B0h]
  __m128i v51; // [rsp+10h] [rbp-A8h] BYREF
  size_t n; // [rsp+20h] [rbp-98h] BYREF
  __int128 v53; // [rsp+28h] [rbp-90h]
  __int64 *v54; // [rsp+40h] [rbp-78h] BYREF
  __m128i v55; // [rsp+48h] [rbp-70h]
  __int64 v56; // [rsp+58h] [rbp-60h] BYREF
  __int128 v57; // [rsp+60h] [rbp-58h]
  char v58; // [rsp+70h] [rbp-48h]
  unsigned __int64 v59; // [rsp+78h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 88LL))(TProgram::application + 136LL);
  v7 = a1;
  (*(void (__fastcall **)(__int64, const __m128i *))(*(_QWORD *)v6 + 8LL))(v6, a1);
  v8 = a1->m128i_i8[12] & 1;
  if ( !batch )
  {
    if ( v8 )
    {
      if ( (unsigned __int8)sub_192E40((__int64)a1, (__int64)a1) )
        goto LABEL_14;
      return -2;
    }
LABEL_3:
    v9 = sub_193680((const char *)a1[2].m128i_i64[1]);
    v10 = v9;
    if ( v9 )
    {
      v11 = (void *)v9[315];
      v12 = (TView *)v9[279];
      v13 = *(__int64 (__fastcall **)(__int64, size_t *))(a1->m128i_i64[0] + 24);
      if ( v13 == sub_91A40 )
      {
        n = 0;
        v14 = nullptr;
      }
      else
      {
        srcb = v11;
        v32 = v13((__int64)a1, &n);
        v11 = srcb;
        v14 = (const void *)v32;
      }
      v15 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v11 + 24LL);
      if ( (char *)v15 == (char *)sub_91A40 )
      {
        v54 = nullptr;
        v16 = nullptr;
        v7 = nullptr;
      }
      else
      {
        srcc = v11;
        v33 = v15((__int64)v11, &v54);
        v16 = v54;
        v11 = srcc;
        v7 = (const void *)v33;
      }
      if ( (__int64 *)n == v16 )
      {
        if ( n )
        {
          src = v11;
          if ( !memcmp(v14, v7, n) )
          {
            v58 = 0;
            v55 = 0;
            v34 = &v54;
            v54 = nullptr;
            v56 = 0;
            v57 = 0;
            (*(void (__fastcall **)(__int64 *, __int64 **, __int64))(*v10 + 352))(v10, &v54, 7);
            v36 = (__int64)src;
            if ( v12 )
            {
              TView::select(v12);
              v36 = (__int64)src;
            }
            v37 = a1->m128i_i32[3];
            if ( (v37 & 0x80u) != 0 )
            {
              sub_192E40(v36, (__int64)&v54);
              v39 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*v10 + 344);
              if ( v39 == sub_197930 )
              {
                sub_183000((__int64)(v10 + 20), (__int64)&v54, (__int64)sub_197930, v38);
                *((_BYTE *)v10 + 2120) = 0;
                v10[241] = -1;
              }
              else
              {
                ((void (__fastcall *)(__int64 *))v39)(v10);
              }
              v40 = *(void (**)())(*v10 + 296);
              if ( v40 == sub_1972D0 )
                nullsub_113();
              else
                ((void (__fastcall *)(__int64 *, __int64 **, _QWORD))v40)(v10, &v54, 0);
              v34 = (_QWORD *)a2;
              sub_1972E0(v10, a2, 0.0, a4, a5);
              v37 = a1->m128i_i32[3];
            }
            if ( (v37 & 2) == 0 && a1 )
              (*(void (__fastcall **)(const __m128i *, _QWORD *, __int64, __int64))(a1->m128i_i64[0] + 8))(
                a1,
                v34,
                v35,
                v36);
            sub_17E9E0(&v56);
            v41 = v54;
            if ( v54 )
            {
              v42 = v55.m128i_i64[0];
              if ( v55.m128i_i64[0] )
              {
                v43 = 0;
                do
                {
                  v44 = v43++;
                  sub_17E9E0(&v41[4 * v44]);
                  v41 = v54;
                }
                while ( v42 != v43 );
              }
              v55.m128i_i64[0] = 0;
              qfree();
            }
            return -3;
          }
        }
      }
      if ( v12 )
        (*(void (__fastcall **)(TView *, const void *))(*(_QWORD *)v12 + 184LL))(v12, v7);
    }
    if ( (unsigned __int8)sub_192E40((__int64)a1, (__int64)v7) || a1->m128i_i8[12] >= 0 )
    {
LABEL_14:
      v17 = (const char *)a1[2].m128i_i64[1];
      n = 0;
      v53 = 0;
      if ( v17 )
      {
        srca = v17;
        v18 = strlen(v17);
        v19 = v18 + 1;
        v20 = v18;
        n = qvector_reserve();
        *(_QWORD *)&v53 = v19;
        memmove((void *)n, srca, v20);
        *(_BYTE *)(n + v20) = 0;
      }
      v54 = nullptr;
      v55 = 0;
      sub_192EE0((const char **)&n, (__int64)&v54);
      v21 = v54;
      sub_1924F0(&v51, a1);
      v22 = operator new(0xC0u);
      sub_198600((TView *)v22);
      *(_BYTE *)(v22 + 168) = 1;
      sub_1972E0(*(__int64 **)(v22 + 176), a2, 0.0, a4, a5);
      if ( TFileList::getKey((TFileList *)TProgram::application, (const char *)v22) )
      {
        if ( v8 )
        {
          v23 = -1;
          if ( (unsigned int)sub_198780((TView *)v22) != 11 )
          {
            v29 = *(_QWORD *)(*(_QWORD *)(v22 + 176) + 2600LL);
            if ( *(int *)(v29 + 100) > 0 )
              v23 = *(int *)(v29 + 96);
          }
          if ( v22 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
          }
          goto LABEL_20;
        }
        sub_198810((TView *)v22);
      }
      v23 = 0;
LABEL_20:
      if ( v21 )
        qfree();
      if ( n )
      {
        *(_QWORD *)&v53 = 0;
        qfree();
      }
      return v23;
    }
    return -2;
  }
  if ( !v8 )
    goto LABEL_3;
  v25 = sub_192E40((__int64)a1, (__int64)a1);
  v26 = a1->m128i_i64[0];
  if ( !v25 )
  {
    v23 = -2;
    goto LABEL_39;
  }
  v27 = *(__int64 (__fastcall **)(const __m128i *, __int64))(v26 + 72);
  if ( (a1->m128i_i8[12] & 4) == 0 )
  {
    if ( (char *)v27 == (char *)sub_91A80 )
    {
      v23 = *(_QWORD *)a2;
    }
    else
    {
      v23 = v27(a1, a2);
      v26 = a1->m128i_i64[0];
    }
    goto LABEL_39;
  }
  v54 = nullptr;
  v55 = 0;
  if ( (char *)v27 != (char *)sub_B86D0 )
  {
    ((void (__fastcall *)(const __m128i *, __int64 **, __int64))v27)(a1, &v54, a2);
    v45 = v54;
    if ( !v55.m128i_i64[0] )
    {
      v23 = -1;
LABEL_74:
      if ( v45 )
      {
        v55.m128i_i64[0] = 0;
        qfree();
      }
      goto LABEL_32;
    }
LABEL_73:
    v23 = *v45;
    goto LABEL_74;
  }
  v23 = -1;
  v28 = *(_QWORD *)(a2 + 8);
  if ( v28 )
  {
    v45 = (__int64 *)qalloc_or_throw();
    memcpy(v45, *(const void **)a2, 8 * v28);
    v54 = v45;
    v55 = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
    goto LABEL_73;
  }
LABEL_32:
  v26 = a1->m128i_i64[0];
LABEL_39:
  v30 = (*(__int64 (__fastcall **)(const __m128i *))(v26 + 40))(a1);
  v31 = *(void (**)())(a1->m128i_i64[0] + 64);
  if ( v31 != nullsub_10 )
    ((void (__fastcall *)(const __m128i *))v31)(a1);
  if ( (a1->m128i_i8[12] & 2) == 0 && a1 )
    (*(void (__fastcall **)(const __m128i *))(a1->m128i_i64[0] + 8))(a1);
  if ( v23 >= 0 && v23 >= v30 )
    return v30 - 1;
  return v23;
}

