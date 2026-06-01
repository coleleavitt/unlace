__int64 __fastcall sub_3D7B20(__int64 a1, __int64 *a2, __int64 a3, double a4, __m128 a5)
{
  size_t v5; // rbp
  __int16 v7; // ax
  char v8; // dl
  __m128 v9; // xmm0
  const void *v10; // rbx
  size_t v11; // rax
  size_t v12; // rbp
  __int64 v14; // r14
  void *v15; // rdi
  char *v16; // rax
  __int64 v17; // r12
  void **v18; // rbx
  void *v19; // rbp
  size_t v20; // rax
  const char *v21; // rdx
  size_t v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 si128; // xmm0
  volatile signed __int32 *v29; // r15
  void **v30; // rax
  void **v31; // rcx
  void **i; // r12
  QT::QString *v33; // [rsp+0h] [rbp-110h]
  void **v34; // [rsp+8h] [rbp-108h]
  void **v35; // [rsp+10h] [rbp-100h]
  __int64 v36; // [rsp+18h] [rbp-F8h] BYREF
  __int64 v37; // [rsp+20h] [rbp-F0h]
  void *v38[2]; // [rsp+28h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+38h] [rbp-D8h]
  void *ptr[2]; // [rsp+48h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B8h]
  __m128i v42; // [rsp+68h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+78h] [rbp-98h]
  char *v44; // [rsp+88h] [rbp-88h] BYREF
  __int128 v45; // [rsp+90h] [rbp-80h]
  __int16 v46; // [rsp+A0h] [rbp-70h]
  __int64 v47; // [rsp+A8h] [rbp-68h]
  char v48; // [rsp+B0h] [rbp-60h]
  __m128i v49; // [rsp+B8h] [rbp-58h]
  unsigned __int64 v50; // [rsp+D0h] [rbp-40h]

  v5 = *(_QWORD *)(a3 + 8);
  v50 = __readfsqword(0x28u);
  v45 = 0;
  v44 = nullptr;
  if ( v5 )
  {
    v16 = (char *)qalloc_or_throw(v5);
    a2 = *(__int64 **)a3;
    *((_QWORD *)&v45 + 1) = v5;
    v44 = v16;
    memcpy(v16, a2, v5);
    *(_QWORD *)&v45 = v5;
  }
  v7 = *(_WORD *)(a3 + 24);
  v47 = *(_QWORD *)(a3 + 32);
  v8 = *(_BYTE *)(a3 + 40);
  v46 = v7;
  v48 = v8;
  v49 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  if ( v7 == 123 )
  {
    sub_4B0CB0(&v44, a1);
    if ( v46 != 2 )
      sub_4B0C20(a1, "A token is expected", 1);
    v17 = 0;
    v18 = nullptr;
    v19 = nullptr;
    do
    {
      v20 = 0;
      v21 = &s1;
      if ( (_QWORD)v45 )
      {
        v21 = v44;
        if ( v44 )
        {
          if ( *v44 )
          {
            v33 = (QT::QString *)v44;
            v22 = strlen(v44 + 1);
            v21 = (const char *)v33;
            v20 = v22 + 1;
          }
        }
      }
      QT::QString::fromLocal8Bit(&v42, v20, v21);
      v38[0] = v19;
      v38[1] = v18;
      v39 = v17;
      sub_1D5280((__m128i *)v38, v17, &v42, v23, v24, v25);
      si128 = (__m128)_mm_load_si128((const __m128i *)v38);
      v17 = v39;
      v19 = (void *)si128.m128_u64[0];
      if ( !si128.m128_u64[0]
        || (a5 = _mm_movehl_ps(a5, si128), v18 = (void **)a5.m128_u64[0], *(int *)si128.m128_u64[0] > 1) )
      {
        *(__m128 *)v38 = si128;
        sub_1B21C0((__m128i *)v38, 0, 0, 0, v26, v27);
        v19 = v38[0];
        v18 = (void **)v38[1];
        v17 = v39;
      }
      if ( v42.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v42.m128i_i64[0], 1u) )
        free((void *)v42.m128i_i64[0]);
      sub_4B0CB0(&v44, a1);
    }
    while ( v46 == 2 );
    ptr[0] = v19;
    ptr[1] = v18;
    v41 = v17;
    if ( v19 )
      _InterlockedAdd((volatile signed __int32 *)v19, 1u);
    a2 = &qword_8CC880;
    sub_2827A0(&v42, &qword_8CC880, (__int64)ptr);
    v36 = v42.m128i_i64[1];
    v29 = (volatile signed __int32 *)v42.m128i_i64[0];
    v37 = v43;
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      v30 = (void **)ptr[1];
      v31 = (void **)((char *)ptr[1] + 24 * v41);
      if ( ptr[1] != v31 )
      {
        do
        {
          if ( *v30 && !_InterlockedSub((volatile signed __int32 *)*v30, 1u) )
          {
            v35 = v31;
            v34 = v30;
            free(*v30);
            v31 = v35;
            v30 = v34;
          }
          v30 += 3;
        }
        while ( v31 != v30 );
      }
      free(ptr[0]);
    }
    if ( v19 && !_InterlockedSub((volatile signed __int32 *)v19, 1u) )
    {
      for ( i = &v18[3 * v17]; i != v18; v18 += 3 )
      {
        if ( *v18 && !_InterlockedSub((volatile signed __int32 *)*v18, 1u) )
          free(*v18);
      }
      free(v19);
    }
    if ( v46 == 125 )
    {
      v9 = _mm_loadh_ps((const double *)&v36);
      v41 = v37;
      *(__m128 *)ptr = v9;
      if ( !v29 )
        goto LABEL_6;
      _InterlockedAdd(v29, 1u);
    }
    else
    {
      a2 = nullptr;
      *(double *)v9.m128_u64 = QT::QString::fromUtf8(ptr, 0, (const char *)&unk_5C2F25);
      if ( !v29 )
        goto LABEL_6;
    }
    if ( !_InterlockedSub(v29, 1u) )
      free((void *)v29);
  }
  else if ( v7 == 125 )
  {
    v9.m128_u64[0] = 0;
    v41 = 0;
    *(_OWORD *)ptr = 0;
  }
  else
  {
    a2 = nullptr;
    *(double *)v9.m128_u64 = QT::QString::fromUtf8(ptr, 0, (const char *)&unk_5C2F25);
  }
LABEL_6:
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44, (const char *)a2, *(double *)v9.m128_u64);
  }
  if ( !v41 )
    sub_4B0C20(a1, "Default file filter definition error", 1);
  QT::QString::toUtf8_helper((QT::QString *)&v42, (const QT::QString *)ptr);
  v10 = (const void *)v42.m128i_i64[1];
  if ( (v42.m128i_i64[1] || (v10 = &QT::QByteArray::_empty) != nullptr)
    && (v11 = strlen((const char *)v10), (v12 = v11) != 0) )
  {
    v14 = v11 + 1;
    v15 = (void *)qword_8CD7A0;
    if ( *(_QWORD *)algn_8CD7B0 < v11 + 1 )
    {
      qword_8CD7A0 = qvector_reserve(&qword_8CD7A0, qword_8CD7A0, v11 + 1, 1);
      v15 = (void *)qword_8CD7A0;
    }
    qword_8CD7A8 = v14;
    memmove(v15, v10, v12);
    *(_BYTE *)(qword_8CD7A0 + v12) = 0;
  }
  else
  {
    qword_8CD7A8 = 0;
  }
  if ( v42.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v42.m128i_i64[0], 1u) )
    free((void *)v42.m128i_i64[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return 0;
}
