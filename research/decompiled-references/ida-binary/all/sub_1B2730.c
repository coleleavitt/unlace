unsigned __int64 __fastcall sub_1B2730(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 v18; // rbp
  unsigned __int64 v19; // r13
  const void *v20; // rsi
  unsigned __int64 v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rsi
  void *v24; // r15
  size_t v25; // r14
  __int64 v26; // rbx
  size_t v27; // r10
  __int64 v28; // rsi
  size_t v29; // rdx
  const char *v30; // rsi
  void **v31; // rbx
  void **v32; // rbp
  void **v34; // [rsp+0h] [rbp-D8h]
  size_t v35; // [rsp+8h] [rbp-D0h]
  size_t v36; // [rsp+10h] [rbp-C8h]
  __int64 v37; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+40h] [rbp-98h] BYREF
  void *src; // [rsp+48h] [rbp-90h]
  size_t n; // [rsp+50h] [rbp-88h]
  __int64 v42; // [rsp+60h] [rbp-78h] BYREF
  __int128 v43; // [rsp+68h] [rbp-70h]
  void *v44[2]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v45; // [rsp+88h] [rbp-50h]
  unsigned __int64 v46; // [rsp+98h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v9 = *(__int64 **)(a1 + 64);
  if ( v9 )
  {
    v10 = *v9;
    v42 = 0;
    v11 = *(_QWORD *)(v10 + 16);
    v43 = 0;
    v45 = 0;
    *(_OWORD *)v44 = 0;
    sub_4F65D0(&v42, v11);
    v37 = 0;
    v38 = 0;
    if ( (int)v45 <= 0 )
      goto LABEL_22;
    v34 = v44;
    v18 = 24LL * ((int)v45 - 1);
    v19 = 24 * ((int)v45 - 1 - (unsigned __int64)(unsigned int)(v45 - 1));
    while ( 1 )
    {
      if ( !v44[0] || *(int *)v44[0] > 1 )
        sub_1B21C0((__m128i *)v44, 0, 0, 0, v14, v15);
      QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)((char *)v44[1] + v18));
      v24 = src;
      v25 = n;
      if ( !src )
        v24 = &QT::QByteArray::_empty;
      v26 = v38;
      v27 = n;
      if ( (_QWORD)v38 )
      {
        v26 = v38 - 1;
        v27 = n + v38 - 1;
      }
      v28 = v37;
      v29 = v27 + 1;
      if ( *((_QWORD *)&v38 + 1) < v27 + 1 )
      {
        v36 = v27;
        v35 = v27 + 1;
        v37 = qvector_reserve(&v37, v37, v29, 1);
        v27 = v36;
        v28 = v37;
        v29 = v35;
      }
      *(_QWORD *)&v38 = v29;
      *(_BYTE *)(v28 + v27) = 0;
      v20 = v24;
      v21 = 2;
      memmove((void *)(v26 + v37), v20, v25);
      v22 = v38;
      if ( (_QWORD)v38 )
      {
        v21 = v38 + 1;
        v22 = v38 - 1;
      }
      v23 = v37;
      if ( *((_QWORD *)&v38 + 1) < v21 )
      {
        v37 = qvector_reserve(&v37, v37, v21, 1);
        v23 = v37;
      }
      *(_QWORD *)&v38 = v21;
      *(_BYTE *)(v23 + v22) = 10;
      *(_BYTE *)(v37 + v22 + 1) = 0;
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      if ( v18 == v19 )
        break;
      v18 -= 24;
    }
    if ( (_QWORD)v38 )
      v30 = (const char *)v37;
    else
LABEL_22:
      v30 = &s1;
    sub_169700((int)"%s", (__int64)v30, v12, v13, v14, v15, (__m128)0LL, a3, a4, a5, v16, v17, a8, a9, (char)v34);
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37, v30);
    }
    if ( v44[0] && !_InterlockedSub((volatile signed __int32 *)v44[0], 1u) )
    {
      v31 = (void **)v44[1];
      v32 = (void **)((char *)v44[1] + 24 * v45);
      if ( v44[1] != v32 )
      {
        do
        {
          if ( *v31 && !_InterlockedSub((volatile signed __int32 *)*v31, 1u) )
            free(*v31);
          v31 += 3;
        }
        while ( v32 != v31 );
      }
      free(v44[0]);
    }
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42, v30);
    }
  }
  return v46 - __readfsqword(0x28u);
}
