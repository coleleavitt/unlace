unsigned __int64 __fastcall sub_3FD560(QT::QStandardItemModel *this, QT::QObject *a2)
{
  __m128i si128; // xmm0
  void **v3; // rax
  const char **v4; // rbx
  const char **v5; // r14
  const char *v6; // r15
  size_t v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  void **v13; // rbx
  void *vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]
  __m128i ptr; // [rsp+20h] [rbp+20h] BYREF
  unsigned __int64 vars38; // [rsp+38h] [rbp+38h]

  vars38 = __readfsqword(0x28u);
  QT::QStandardItemModel::QStandardItemModel(this, a2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_BYTE *)this + 74) = 1;
  *(_QWORD *)this = &xref_unified_tree_model_t___vtable;
  *((_QWORD *)this + 5) = (char *)this + 24;
  *((_QWORD *)this + 6) = (char *)this + 24;
  *((_WORD *)this + 36) = 256;
  *(__m128i *)((char *)this + 56) = si128;
  vars10 = 0;
  *(_OWORD *)vars0 = 0;
  v3 = sub_3EEA60();
  v4 = (const char **)*v3;
  v5 = (const char **)v3[1];
  if ( v5 != *v3 )
  {
    do
    {
      v6 = *v4;
      v7 = 0;
      if ( *v4 && *v6 )
        v7 = strlen(v6 + 1) + 1;
      QT::QString::fromUtf8(&ptr, v7, v6);
      sub_1D5280((__m128i *)vars0, vars10, &ptr, v8, v9, v10);
      if ( !vars0[0] || *(int *)vars0[0] > 1 )
        sub_1B21C0((__m128i *)vars0, 0, 0, 0, v11, v12);
      if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
      ++v4;
    }
    while ( v5 != v4 );
  }
  QT::QStandardItemModel::setColumnCount(this, 4);
  QT::QStandardItemModel::setHorizontalHeaderLabels(this, vars0);
  if ( vars0[0] && !_InterlockedSub((volatile signed __int32 *)vars0[0], 1u) )
  {
    v13 = (void **)vars0[1];
    if ( vars0[1] != vars0 )
    {
      do
      {
        if ( *v13 && !_InterlockedSub((volatile signed __int32 *)*v13, 1u) )
          free(*v13);
        v13 += 3;
      }
      while ( vars0 != v13 );
    }
    free(vars0[0]);
  }
  return vars38 - __readfsqword(0x28u);
}
