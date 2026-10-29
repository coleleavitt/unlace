unsigned __int64 __fastcall sub_1B94B0(_QWORD *a1, __int64 a2, char a3)
{
  char *v5; // rbx
  size_t v6; // r14
  __int64 v7; // r15
  char *v8; // rbx
  char *v9; // r15
  char *v10; // rsi
  char *v11; // r15
  char *v12; // r14
  char *v13; // rax
  char *v14; // r8
  char *v15; // r10
  char *v16; // rdx
  char *v17; // rbx
  size_t v18; // rax
  size_t v19; // r12
  size_t v20; // r14
  char *v21; // rdx
  char *v22; // rdi
  __m128i v23; // xmm0
  char *v24; // rbx
  char *src; // [rsp+0h] [rbp-B8h]
  char *v26; // [rsp+8h] [rbp-B0h]
  char *v27; // [rsp+10h] [rbp-A8h]
  char *v28; // [rsp+18h] [rbp-A0h]
  char *s1; // [rsp+20h] [rbp-98h] BYREF
  __m128i v30; // [rsp+28h] [rbp-90h]
  void *v31[4]; // [rsp+40h] [rbp-78h] BYREF
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  char *s[2]; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( !a3 )
    return v34 - __readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)v31);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v31);
  v5 = s[0];
  s1 = nullptr;
  v30 = 0;
  if ( s[0] )
  {
    v6 = strlen(s[0]);
    v7 = v6 + 1;
  }
  else
  {
    v5 = (char *)&QT::QByteArray::_empty;
    if ( !&QT::QByteArray::_empty )
      goto LABEL_6;
    v7 = 1;
    v6 = 0;
  }
  s1 = (char *)qvector_reserve(&s1, 0, v7, 1);
  v30.m128i_i64[0] = v7;
  memmove(s1, v5, v6);
  s1[v6] = 0;
LABEL_6:
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( v31[0] && !_InterlockedSub((volatile signed __int32 *)v31[0], 1u) )
    free(v31[0]);
  v8 = nullptr;
  ptr = nullptr;
  src = (char *)&::s1;
  *(_OWORD *)s = 0;
  if ( v30.m128i_i64[0] )
  {
    src = s1;
    v8 = strstr(s1, "sampleview_t_");
  }
  v9 = src;
  v10 = nullptr;
  while ( v8 )
  {
    if ( v8 != v9 )
    {
      v14 = s[0];
      v15 = (char *)(v8 - v9);
      if ( s[0] )
      {
        v14 = s[0] - 1;
        v15 = &s[0][v8 - v9 - 1];
      }
      v16 = v15 + 1;
      if ( s[1] < v15 + 1 )
      {
        v28 = v14;
        v27 = v15;
        v26 = v15 + 1;
        ptr = (void *)qvector_reserve(&ptr, v10, v16, 1);
        v14 = v28;
        v10 = (char *)ptr;
        v15 = v27;
        v16 = v26;
      }
      s[0] = v16;
      v15[(_QWORD)v10] = 0;
      memmove((char *)ptr + (_QWORD)v14, v9, v8 - v9);
      v10 = (char *)ptr;
    }
    v11 = s[0];
    v12 = (_BYTE *)(&dword_0 + 1);
    if ( s[0] )
    {
      v12 = s[0];
      v11 = s[0] - 1;
    }
    if ( s[1] < v12 )
    {
      ptr = (void *)qvector_reserve(&ptr, v10, v12, 1);
      v10 = (char *)ptr;
    }
    s[0] = v12;
    v11[(_QWORD)v10] = 0;
    v9 = v8 + 13;
    v13 = strstr(v8 + 13, "sampleview_t_");
    v10 = (char *)ptr;
    v8 = v13;
  }
  if ( v9 == src )
  {
    v22 = v10;
  }
  else
  {
    if ( *v9 && v9 )
    {
      v17 = s[0];
      v18 = strlen(v9);
      v19 = v18;
      v20 = v18;
      if ( v17 )
      {
        --v17;
        v20 = (size_t)&v17[v18];
      }
      v21 = (char *)(v20 + 1);
      if ( s[1] < (char *)(v20 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, v10, v21, 1);
        v21 = (char *)(v20 + 1);
        v10 = (char *)ptr;
      }
      s[0] = v21;
      v10[v20] = 0;
      memmove(&v17[(_QWORD)ptr], v9, v19);
      v10 = (char *)ptr;
    }
    v22 = s1;
    s1 = v10;
    v23 = _mm_loadu_si128((const __m128i *)s);
    ptr = v22;
    s[1] = (char *)v30.m128i_i64[1];
    v30 = v23;
  }
  if ( v22 )
  {
    s[0] = nullptr;
    qfree(v22, v10);
  }
  v24 = s1;
  if ( !v30.m128i_i64[0] )
    goto LABEL_44;
  if ( !strcmp(s1, "default") )
  {
    v10 = (char *)a1[33];
    goto LABEL_42;
  }
  if ( !strcmp(v24, "debugging") )
  {
    v10 = (char *)a1[34];
    goto LABEL_42;
  }
  v10 = (char *)"hints";
  if ( !strcmp(v24, "hints") )
  {
    v10 = (char *)a1[35];
LABEL_42:
    if ( v10 )
    {
      QT::QStackedWidget::setCurrentWidget(*(QT::QStackedWidget **)(a1[32] + 176LL), (QT::QWidget *)v10);
      v24 = s1;
    }
  }
LABEL_44:
  if ( v24 )
  {
    v30.m128i_i64[0] = 0;
    qfree(v24, v10);
  }
  return v34 - __readfsqword(0x28u);
}
