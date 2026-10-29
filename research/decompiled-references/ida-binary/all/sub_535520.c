unsigned __int64 __fastcall sub_535520(__int64 a1, __int64 a2)
{
  double v3; // xmm0_8
  __int64 v4; // r8
  __int64 v5; // r9
  void **v6; // rbx
  __int64 v7; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rbp
  size_t v12; // rax
  size_t v13; // r14
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rbp
  size_t v17; // rax
  size_t v18; // r14
  __int64 v19; // rax
  void *v20; // rdi
  size_t v21; // r15
  void *v22; // rdi
  size_t v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i ptr; // [rsp+0h] [rbp-78h] BYREF
  __int64 v27; // [rsp+10h] [rbp-68h]
  void *v28; // [rsp+20h] [rbp-58h] BYREF
  char *s; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v3 = QT::QString::fromUtf8(&v28, 1, (const char *)&unk_5C2F24);
  QT::QString::split(&ptr, a2, &v28, 0, 1);
  if ( v28 && !_InterlockedSub((volatile signed __int32 *)v28, 1u) )
  {
    free(v28);
    if ( v27 != 3 )
      goto LABEL_4;
  }
  else if ( v27 != 3 )
  {
    goto LABEL_4;
  }
  if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
    sub_1B21C0(&ptr, 0, 0, 0, v4, v5);
  QT::QString::toUtf8_helper((QT::QString *)&v28, (const QT::QString *)ptr.m128i_i64[1]);
  v11 = s;
  if ( (s || (v11 = (char *)&QT::QByteArray::_empty) != nullptr) && (v12 = strlen(v11), (v13 = v12) != 0) )
  {
    v22 = *(void **)a1;
    v23 = v12 + 1;
    if ( *(_QWORD *)(a1 + 16) < v12 + 1 )
    {
      v25 = qvector_reserve(a1, *(_QWORD *)a1, v12 + 1, 1);
      *(_QWORD *)a1 = v25;
      v22 = (void *)v25;
    }
    *(_QWORD *)(a1 + 8) = v23;
    memmove(v22, v11, v13);
    *(_BYTE *)(*(_QWORD *)a1 + v13) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  if ( v28 && !_InterlockedSub((volatile signed __int32 *)v28, 1u) )
    free(v28);
  if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
    sub_1B21C0(&ptr, 0, 0, 0, v9, v10);
  QT::QString::toUtf8_helper((QT::QString *)&v28, (const QT::QString *)(ptr.m128i_i64[1] + 24));
  v16 = s;
  if ( (s || (v16 = (char *)&QT::QByteArray::_empty) != nullptr) && (v17 = strlen(v16), (v18 = v17) != 0) )
  {
    v20 = *(void **)(a1 + 24);
    v21 = v17 + 1;
    if ( *(_QWORD *)(a1 + 40) < v17 + 1 )
    {
      v24 = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v21, 1);
      *(_QWORD *)(a1 + 24) = v24;
      v20 = (void *)v24;
    }
    *(_QWORD *)(a1 + 32) = v21;
    memmove(v20, v16, v18);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v18) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 0;
  }
  if ( v28 && !_InterlockedSub((volatile signed __int32 *)v28, 1u) )
    free(v28);
  if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
    sub_1B21C0(&ptr, 0, 0, 0, v14, v15);
  v19 = QT::QString::toIntegral_helper(
          *(_QWORD *)(ptr.m128i_i64[1] + 64),
          *(_QWORD *)(ptr.m128i_i64[1] + 56),
          0,
          10,
          v3);
  if ( v19 != (int)v19 )
    LODWORD(v19) = 0;
  *(_DWORD *)(a1 + 48) = v19;
LABEL_4:
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
  {
    v6 = (void **)ptr.m128i_i64[1];
    v7 = ptr.m128i_i64[1] + 24 * v27;
    if ( ptr.m128i_i64[1] != v7 )
    {
      do
      {
        if ( *v6 && !_InterlockedSub((volatile signed __int32 *)*v6, 1u) )
          free(*v6);
        v6 += 3;
      }
      while ( (void **)v7 != v6 );
    }
    free((void *)ptr.m128i_i64[0]);
  }
  return v30 - __readfsqword(0x28u);
}
