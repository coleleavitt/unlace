__int64 __fastcall sub_540D00(_QWORD *a1, const QT::QString *a2, const QT::QString *a3, double a4, __m128 a5)
{
  void *v7; // r14
  size_t v8; // rbx
  double v9; // xmm0_8
  const char *p_ptr; // rsi
  unsigned int v11; // ebx
  void *v13; // rdi
  size_t v14; // rdx
  char *v15; // r15
  char *v16; // r13
  size_t v17; // r14
  const char *v18; // rcx
  const char *v19; // rsi
  const char *v20; // rdi
  int v21; // eax
  char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  const char *v25; // rax
  __int64 v26; // rax
  size_t v27; // r15
  __int64 v28; // r14
  char *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rdi
  void *v33; // rax
  void *v34; // rsi
  const char *v35; // rsi
  const char *v36; // rdi
  unsigned int v37; // eax
  char *v38; // [rsp+0h] [rbp-C0h]
  __int64 v39; // [rsp+0h] [rbp-C0h]
  const char *v40; // [rsp+8h] [rbp-B8h]
  char *s2; // [rsp+10h] [rbp-B0h]
  int v42; // [rsp+1Ch] [rbp-A4h]
  char *v43; // [rsp+20h] [rbp-A0h]
  void *v44; // [rsp+28h] [rbp-98h] BYREF
  size_t v45[3]; // [rsp+30h] [rbp-90h]
  __int64 v46; // [rsp+48h] [rbp-78h] BYREF
  __int128 v47; // [rsp+50h] [rbp-70h]
  void *ptr; // [rsp+68h] [rbp-58h] BYREF
  void *src; // [rsp+70h] [rbp-50h]
  size_t n; // [rsp+78h] [rbp-48h]
  unsigned __int64 v51; // [rsp+80h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  *(_OWORD *)v45 = 0;
  v44 = nullptr;
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
  v7 = src;
  v8 = n;
  if ( !src )
    v7 = &QT::QByteArray::_empty;
  v9 = 0.0;
  v46 = 0;
  v47 = 0;
  if ( n )
  {
    v13 = nullptr;
    v14 = n + 1;
    if ( n != -1 )
    {
      v46 = qvector_reserve(&v46, 0, v14, 1);
      v14 = v8 + 1;
      v13 = (void *)v46;
    }
    *(_QWORD *)&v47 = v14;
    memmove(v13, v7, v8);
    *(_BYTE *)(v46 + v8) = 0;
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  p_ptr = (const char *)&v46;
  v11 = sub_53BCA0((__int64 *)&v44, (__int64)&v46);
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    v9 = qfree(v46, (const char *)&v46);
  }
  if ( !(_BYTE)v11 )
    goto LABEL_10;
  p_ptr = (const char *)a3;
  QT::QIcon::QIcon((QT::QIcon *)&ptr, a3);
  if ( (unsigned __int8)QT::QIcon::isNull((QT::QIcon *)&ptr) )
    goto LABEL_48;
  p_ptr = (const char *)&ptr;
  v42 = sub_481B70((__int64)QT::QCoreApplication::self, (const QT::QIcon *)&ptr, (__int64)&v44, v9, a5);
  if ( v42 < 0 )
    goto LABEL_48;
  v15 = (char *)a1[14];
  v16 = (char *)(a1 + 13);
  v43 = (char *)(a1 + 13);
  if ( !v15 )
  {
    v16 = (char *)(a1 + 13);
    goto LABEL_40;
  }
  v17 = v45[0];
  v18 = &s1;
  s2 = (char *)v44;
  if ( v45[0] )
    v18 = (const char *)v44;
  v40 = v18;
  while ( 1 )
  {
    v23 = *((_QWORD *)v15 + 5);
    if ( !v17 )
      break;
    v38 = v15;
    if ( v23 )
      goto LABEL_32;
    v19 = s2;
    v20 = &s1;
LABEL_24:
    v21 = strcmp(v20, v19);
    v22 = *((char **)v15 + 2);
    v15 = *((char **)v15 + 3);
    if ( v21 >= 0 )
    {
      v16 = v38;
      v15 = v22;
    }
    if ( !v15 )
      goto LABEL_34;
  }
  if ( v23 )
  {
LABEL_31:
    v38 = v15;
LABEL_32:
    v20 = *((const char **)v15 + 4);
    v19 = v40;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v24 = *((_QWORD *)v15 + 2);
    if ( !v24 )
      break;
    v16 = v15;
    v15 = *((char **)v15 + 2);
    if ( *(_QWORD *)(v24 + 40) )
      goto LABEL_31;
  }
  v16 = v15;
LABEL_34:
  if ( v43 == v16 )
    goto LABEL_40;
  if ( *((_QWORD *)v16 + 5) )
  {
    v25 = &s1;
    if ( v17 )
      v25 = s2;
    p_ptr = *((const char **)v16 + 4);
    s2 = (char *)v25;
LABEL_39:
    if ( strcmp(s2, p_ptr) < 0 )
    {
LABEL_40:
      v26 = operator new(0x40u);
      v27 = v45[0];
      *(_QWORD *)(v26 + 32) = 0;
      v28 = v26;
      *(_OWORD *)(v26 + 40) = 0;
      if ( v27 )
      {
        v33 = (void *)qalloc_or_throw(v27);
        *(_QWORD *)(v28 + 32) = v33;
        v34 = v44;
        *(_QWORD *)(v28 + 48) = v27;
        memcpy(v33, v34, v27);
        *(_QWORD *)(v28 + 40) = v27;
      }
      *(_DWORD *)(v28 + 56) = 0;
      p_ptr = v16;
      v29 = (char *)sub_47E870(a1 + 12, v16, v28 + 32);
      v16 = v29;
      if ( v30 )
      {
        if ( v43 == (char *)v30 || v29 )
        {
          v31 = 1;
        }
        else
        {
          v35 = &s1;
          if ( *(_QWORD *)(v30 + 40) )
            v35 = *(const char **)(v30 + 32);
          v36 = &s1;
          if ( *(_QWORD *)(v28 + 40) )
            v36 = *(const char **)(v28 + 32);
          v39 = v30;
          v37 = strcmp(v36, v35);
          v30 = v39;
          v31 = v37 >> 31;
        }
        p_ptr = (const char *)v28;
        v16 = (char *)v28;
        std::_Rb_tree_insert_and_rebalance(v31, v28, v30, v43);
        ++a1[17];
      }
      else if ( v28 )
      {
        v32 = *(_QWORD *)(v28 + 32);
        if ( v32 )
        {
          *(_QWORD *)(v28 + 40) = 0;
          qfree(v32, p_ptr);
        }
        p_ptr = (_BYTE *)dword_40;
        operator delete((void *)v28, 0x40u);
      }
    }
  }
  else
  {
    p_ptr = &s1;
    if ( v17 )
      goto LABEL_39;
  }
  *((_DWORD *)v16 + 14) = v42;
LABEL_48:
  QT::QIcon::~QIcon((QT::QIcon *)&ptr);
LABEL_10:
  if ( v44 )
  {
    v45[0] = 0;
    qfree(v44, p_ptr);
  }
  return v11;
}
