unsigned __int64 __fastcall sub_3166C0(QT::QAction *this, QT::QObject *a2, __int64 a3, __int64 a4, int a5)
{
  size_t v8; // rax
  char *v9; // rbp
  unsigned __int64 v10; // rdx
  double v11; // xmm0_8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  __int64 v18; // rax
  double v19; // xmm0_8
  void *v20; // rdx
  void **v21; // rbx
  void **v22; // rbp
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rdx
  size_t v26; // rax
  const char *v27; // r12
  double v28; // xmm0_8
  const char *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  const void *v35; // r14
  void *ptr[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+10h] [rbp-A8h]
  char *s; // [rsp+20h] [rbp-98h] BYREF
  __int128 v39; // [rsp+28h] [rbp-90h]
  void *v40; // [rsp+40h] [rbp-78h] BYREF
  __int128 v41; // [rsp+48h] [rbp-70h]
  __m128i v42; // [rsp+60h] [rbp-58h] BYREF
  __int64 v43; // [rsp+70h] [rbp-48h]
  unsigned __int64 v44; // [rsp+78h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  QT::QAction::QAction(this, a2);
  *((_QWORD *)this + 2) = a4;
  *(_OWORD *)ptr = 0;
  *(_QWORD *)this = &off_872CF8;
  v37 = 0;
  s = nullptr;
  *((_DWORD *)this + 6) = a5;
  v39 = 0;
  if ( a4 && *(_QWORD *)(a4 + 728) )
  {
    (***(void (__fastcall ****)(_QWORD, char **))(a3 + 40))(*(_QWORD *)(a3 + 40), &s);
  }
  else
  {
    v24 = *(_QWORD *)(a3 + 80);
    if ( v24 <= 1 )
      goto LABEL_41;
    v35 = *(const void **)(a3 + 72);
    s = (char *)qvector_reserve(&s, 0, *(_QWORD *)(a3 + 80), 1);
    *(_QWORD *)&v39 = v24;
    memmove(s, v35, v24 - 1);
    s[v24 - 1] = 0;
  }
  if ( (_QWORD)v39 )
  {
    v8 = v39 - 1;
    v9 = s;
    v10 = (unsigned __int64)(v39 - 1) >> 63;
    goto LABEL_6;
  }
LABEL_41:
  LOBYTE(v10) = 0;
  v8 = 0;
  v9 = (char *)&s1;
LABEL_6:
  if ( !v9 || (_BYTE)v10 )
  {
    v8 = 0;
    if ( v9 )
      v8 = strlen(v9);
  }
  v11 = QT::QString::fromUtf8(&v42, v8, v9);
  sub_1D5280((__m128i *)ptr, v37, &v42, v12, v13, v14);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v15, v16);
  if ( v42.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v42.m128i_i64[0], 1u) )
    free((void *)v42.m128i_i64[0]);
  v17 = (*(__int64 (__fastcall **)(_QWORD, double))(**(_QWORD **)(a3 + 40) + 112LL))(*(_QWORD *)(a3 + 40), v11);
  if ( get_place_class(&v42, 0, v17) )
  {
    if ( (v42.m128i_i8[0] & 1) != 0 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 40) + 128LL))(*(_QWORD *)(a3 + 40));
      if ( v18 != -1 )
      {
        v40 = nullptr;
        v41 = 0;
        generate_disasm_line(&v40, v18, 4);
        if ( (_QWORD)v41 )
        {
          v26 = v41 - 1;
          v27 = (const char *)v40;
          v25 = (unsigned __int64)(v41 - 1) >> 63;
        }
        else
        {
          LOBYTE(v25) = 0;
          v26 = 0;
          v27 = &s1;
        }
        if ( !v27 || (_BYTE)v25 )
        {
          v26 = 0;
          if ( v27 )
            v26 = strlen(v27);
        }
        v28 = QT::QString::fromUtf8(&v42, v26, v27);
        v29 = (const char *)v37;
        sub_1D5280((__m128i *)ptr, v37, &v42, v30, v31, v32);
        if ( !ptr[0] || *(int *)ptr[0] > 1 )
        {
          v29 = nullptr;
          sub_1B21C0((__m128i *)ptr, 0, 0, 0, v33, v34);
        }
        if ( v42.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v42.m128i_i64[0], 1u) )
          free((void *)v42.m128i_i64[0]);
        if ( v40 )
        {
          *(_QWORD *)&v41 = 0;
          qfree(v40, v29, v28);
        }
      }
    }
  }
  v19 = QT::QString::fromUtf8(&v42, 3, ": \t");
  v20 = (void *)v42.m128i_i64[1];
  if ( !v42.m128i_i64[1] )
    v20 = &QT::QString::_empty;
  QT::QtPrivate::QStringList_join(&v40, ptr, v20, v43, v19);
  if ( v42.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v42.m128i_i64[0], 1u) )
    free((void *)v42.m128i_i64[0]);
  if ( *((__int64 *)&v41 + 1) > 100 )
  {
    QT::QString::resize((QT::QString *)&v40, 100);
    QT::QString::append(&v40, "...", 3);
  }
  QT::QAction::setText(this, (const QT::QString *)&v40);
  if ( v40 && !_InterlockedSub((volatile signed __int32 *)v40, 1u) )
    free(v40);
  if ( s )
  {
    *(_QWORD *)&v39 = 0;
    qfree(s, (const char *)&v40);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v21 = (void **)ptr[1];
    v22 = (void **)((char *)ptr[1] + 24 * v37);
    if ( ptr[1] != v22 )
    {
      do
      {
        if ( *v21 && !_InterlockedSub((volatile signed __int32 *)*v21, 1u) )
          free(*v21);
        v21 += 3;
      }
      while ( v22 != v21 );
    }
    free(ptr[0]);
  }
  return v44 - __readfsqword(0x28u);
}
