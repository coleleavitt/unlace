__m128i *__fastcall registry_persistent_t__::vfunc_7(__m128i *a1, __int64 *a2, const QT::QString *a3)
{
  __int64 v4; // rax
  const char *v6; // rsi
  char v7; // bl
  __int64 v8; // r13
  __int64 v9; // rbx
  size_t v10; // rax
  const char *v11; // r15
  size_t v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rbx
  __int64 *v24; // rdx
  __int64 v25; // rdi
  __int64 v27; // [rsp+10h] [rbp-78h] BYREF
  __int128 v28; // [rsp+18h] [rbp-70h]
  __m128i ptr; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v4 = *a2;
  v30 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__m128i *, __int64 *, const QT::QString *))(v4 + 48))(a1, a2, a3);
  v27 = 0;
  v28 = 0;
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a3);
  v6 = (const char *)ptr.m128i_i64[1];
  if ( !ptr.m128i_i64[1] )
    v6 = (const char *)&QT::QByteArray::_empty;
  v7 = reg_subkey_children(&v27, v6, 0);
  sub_17F470((void **)&ptr);
  if ( !v7 )
  {
LABEL_19:
    v20 = v27;
    v21 = v27;
    if ( !v27 )
      return a1;
    v22 = v28;
    if ( (_QWORD)v28 )
    {
      v23 = 0;
      do
      {
        v24 = (__int64 *)(v20 + 24 * v23);
        v25 = *v24;
        if ( *v24 )
        {
          v24[1] = 0;
          qfree(v25, v6);
          v20 = v27;
        }
        ++v23;
        v21 = v20;
      }
      while ( v22 != v23 );
    }
LABEL_25:
    *(_QWORD *)&v28 = 0;
    qfree(v21, v6);
    return a1;
  }
  v8 = v28;
  if ( (_QWORD)v28 )
  {
    v9 = 0;
    while ( 1 )
    {
      v18 = v27 + 24 * v9;
      v19 = *(_QWORD *)(v18 + 8);
      if ( v19 )
      {
        v10 = v19 - 1;
        v11 = *(const char **)v18;
        v12 = v10 >> 63;
        if ( !*(_QWORD *)v18 )
          goto LABEL_17;
      }
      else
      {
        v11 = &s1;
        LOBYTE(v12) = 0;
        v10 = 0;
        if ( !&s1 )
        {
LABEL_17:
          v10 = 0;
          if ( v11 )
            v10 = strlen(v11);
          goto LABEL_8;
        }
      }
      if ( (_BYTE)v12 )
        goto LABEL_17;
LABEL_8:
      QT::QString::fromUtf8(&ptr, v10, v11);
      v6 = (const char *)a1[1].m128i_i64[0];
      sub_1D5280(a1, (__int64)v6, &ptr, v13, v14, v15);
      if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
      {
        v6 = nullptr;
        sub_1B21C0(a1, 0, 0, 0, v16, v17);
      }
      if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
        free((void *)ptr.m128i_i64[0]);
      if ( ++v9 == v8 )
        goto LABEL_19;
    }
  }
  v21 = v27;
  if ( v27 )
    goto LABEL_25;
  return a1;
}
