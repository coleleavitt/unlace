__int64 __fastcall sub_52EAB0(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax
  size_t v5; // rax
  const char *v6; // r13
  size_t v7; // rdx
  double v8; // xmm0_8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  size_t v15; // rax
  const char *v16; // rbx
  size_t v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  double v23; // xmm0_8
  void *v24; // rdx
  void **v25; // rbx
  void **v26; // r12
  __int64 v28; // rax
  size_t v29; // rdx
  size_t v30; // rax
  const char *v31; // r15
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  void *ptr[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v38; // [rsp+10h] [rbp-68h]
  __m128i v39; // [rsp+20h] [rbp-58h] BYREF
  __int64 v40; // [rsp+30h] [rbp-48h]
  unsigned __int64 v41; // [rsp+38h] [rbp-40h]

  v3 = a2[4];
  v41 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v38 = 0;
  if ( v3 )
  {
    v5 = v3 - 1;
    v6 = (const char *)a2[3];
    v7 = v5 >> 63;
  }
  else
  {
    LOBYTE(v7) = 0;
    v5 = 0;
    v6 = &s1;
  }
  if ( !v6 || (_BYTE)v7 )
  {
    v5 = 0;
    if ( v6 )
      v5 = strlen(v6);
  }
  v8 = QT::QString::fromUtf8(&v39, v5, v6);
  sub_1D5280((__m128i *)ptr, v38, &v39, v9, v10, v11);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v12, v13);
  if ( v39.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v39.m128i_i64[0], 1u) )
  {
    free((void *)v39.m128i_i64[0]);
    if ( (a3 & 1) == 0 )
      goto LABEL_11;
  }
  else if ( (a3 & 1) == 0 )
  {
    goto LABEL_11;
  }
  v28 = a2[7];
  if ( v28 )
  {
    v30 = v28 - 1;
    v31 = (const char *)a2[6];
    v29 = v30 >> 63;
  }
  else
  {
    LOBYTE(v29) = 0;
    v30 = 0;
    v31 = &s1;
  }
  if ( !v31 || (_BYTE)v29 )
  {
    v30 = 0;
    if ( v31 )
      v30 = strlen(v31);
  }
  v8 = QT::QString::fromUtf8(&v39, v30, v31, v8);
  sub_1D5280((__m128i *)ptr, v38, &v39, v32, v33, v34);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v35, v36);
  if ( v39.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v39.m128i_i64[0], 1u) )
    free((void *)v39.m128i_i64[0]);
LABEL_11:
  if ( (a3 & 2) == 0 )
    goto LABEL_21;
  v14 = a2[10];
  if ( v14 )
  {
    v15 = v14 - 1;
    v16 = (const char *)a2[9];
    v17 = v15 >> 63;
    if ( !v16 )
      goto LABEL_50;
  }
  else
  {
    v16 = &s1;
    LOBYTE(v17) = 0;
    v15 = 0;
    if ( !&s1 )
    {
LABEL_50:
      v15 = 0;
      if ( v16 )
        v15 = strlen(v16);
      goto LABEL_15;
    }
  }
  if ( (_BYTE)v17 )
    goto LABEL_50;
LABEL_15:
  v8 = QT::QString::fromUtf8(&v39, v15, v16, v8);
  sub_1D5280((__m128i *)ptr, v38, &v39, v18, v19, v20);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v21, v22);
  if ( v39.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v39.m128i_i64[0], 1u) )
    free((void *)v39.m128i_i64[0]);
LABEL_21:
  v23 = QT::QString::fromUtf8(&v39, 1, "\n", v8);
  v24 = (void *)v39.m128i_i64[1];
  if ( !v39.m128i_i64[1] )
    v24 = &QT::QString::_empty;
  QT::QtPrivate::QStringList_join(a1, ptr, v24, v40, v23);
  if ( v39.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v39.m128i_i64[0], 1u) )
    free((void *)v39.m128i_i64[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v25 = (void **)ptr[1];
    v26 = (void **)((char *)ptr[1] + 24 * v38);
    if ( ptr[1] != v26 )
    {
      do
      {
        if ( *v25 && !_InterlockedSub((volatile signed __int32 *)*v25, 1u) )
          free(*v25);
        v25 += 3;
      }
      while ( v26 != v25 );
    }
    free(ptr[0]);
  }
  return a1;
}
