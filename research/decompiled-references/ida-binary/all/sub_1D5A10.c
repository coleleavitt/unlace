__m128i *__fastcall registry_persistent_t__::vfunc_6(__m128i *a1, __int64 a2, const QT::QString *a3)
{
  const char *v4; // rsi
  char v5; // bl
  __int64 v6; // r13
  __int64 v7; // rbx
  size_t v8; // rax
  const char *v9; // r15
  size_t v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 *v22; // rdx
  __int64 v23; // rdi
  __int64 v25; // [rsp+8h] [rbp-78h] BYREF
  __int128 v26; // [rsp+10h] [rbp-70h]
  __m128i ptr; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  *a1 = 0;
  a1[1].m128i_i64[0] = 0;
  v25 = 0;
  v26 = 0;
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a3);
  v4 = (const char *)ptr.m128i_i64[1];
  if ( !ptr.m128i_i64[1] )
    v4 = (const char *)&QT::QByteArray::_empty;
  v5 = reg_subkey_children(&v25, v4, 1);
  sub_17F470((void **)&ptr);
  if ( !v5 )
  {
LABEL_19:
    v18 = v25;
    v19 = v25;
    if ( !v25 )
      return a1;
    v20 = v26;
    if ( (_QWORD)v26 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v18 + 24 * v21);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v23, v4);
          v18 = v25;
        }
        ++v21;
        v19 = v18;
      }
      while ( v20 != v21 );
    }
LABEL_25:
    *(_QWORD *)&v26 = 0;
    qfree(v19, v4);
    return a1;
  }
  v6 = v26;
  if ( (_QWORD)v26 )
  {
    v7 = 0;
    while ( 1 )
    {
      v16 = v25 + 24 * v7;
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
      {
        v8 = v17 - 1;
        v9 = *(const char **)v16;
        v10 = v8 >> 63;
        if ( !*(_QWORD *)v16 )
          goto LABEL_17;
      }
      else
      {
        v9 = &s1;
        LOBYTE(v10) = 0;
        v8 = 0;
        if ( !&s1 )
        {
LABEL_17:
          v8 = 0;
          if ( v9 )
            v8 = strlen(v9);
          goto LABEL_8;
        }
      }
      if ( (_BYTE)v10 )
        goto LABEL_17;
LABEL_8:
      QT::QString::fromUtf8(&ptr, v8, v9);
      v4 = (const char *)a1[1].m128i_i64[0];
      sub_1D5280(a1, (__int64)v4, &ptr, v11, v12, v13);
      if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
      {
        v4 = nullptr;
        sub_1B21C0(a1, 0, 0, 0, v14, v15);
      }
      if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
      if ( ++v7 == v6 )
        goto LABEL_19;
    }
  }
  v19 = v25;
  if ( v25 )
    goto LABEL_25;
  return a1;
}
