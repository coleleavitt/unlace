unsigned __int64 __fastcall sub_4934C0(unsigned int a1, QT::QPersistentModelIndex **a2, int a3, char a4)
{
  const char *v4; // rdi
  QT::QPersistentModelIndex **v5; // rax
  bool v7; // zf
  signed __int64 v8; // rax
  signed __int64 v9; // rbx
  size_t v10; // r8
  char *v11; // rax
  QT::QAbstractItemView **v12; // rbx
  __int64 v13; // rax
  const char *v14; // rdx
  unsigned __int64 v15; // rcx
  volatile signed __int32 *v16; // r8
  char v17; // al
  QT::QAbstractItemView *v18; // rbp
  size_t v19; // rax
  const char *v20; // rsi
  const char *v21; // rax
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r13
  QT::QPersistentModelIndex *v26; // rax
  QT::QPersistentModelIndex *v27; // rsi
  QT::QPersistentModelIndex *v28; // rbx
  __int64 v29; // rax
  const char **v30; // rsi
  __int64 v31; // rbp
  __int64 *v32; // rdi
  QT::QPersistentModelIndex *v33; // rbp
  QT::QPersistentModelIndex *v34; // r12
  QT::QPersistentModelIndex *v35; // rdi
  size_t v36; // [rsp+0h] [rbp-D0h]
  QT::QAbstractItemView **v37; // [rsp+8h] [rbp-C8h]
  const char *v38; // [rsp+10h] [rbp-C0h]
  char v39; // [rsp+18h] [rbp-B8h]
  char v40; // [rsp+18h] [rbp-B8h]
  volatile signed __int32 *v41; // [rsp+18h] [rbp-B8h]
  char *v44; // [rsp+28h] [rbp-A8h] BYREF
  char *v45; // [rsp+30h] [rbp-A0h]
  void *dest; // [rsp+38h] [rbp-98h] BYREF
  __int128 v47; // [rsp+40h] [rbp-90h]
  void *ptr; // [rsp+58h] [rbp-78h] BYREF
  __m128i v49; // [rsp+60h] [rbp-70h]
  QT::QPersistentModelIndex *v50[3]; // [rsp+78h] [rbp-58h] BYREF
  unsigned __int64 v51; // [rsp+90h] [rbp-40h]

  v4 = (char *)a2 + a1;
  v51 = __readfsqword(0x28u);
  v45 = (char *)v4;
  v5 = a2;
  dest = nullptr;
  v47 = 0;
  do
  {
    if ( v5 >= (QT::QPersistentModelIndex **)v4 )
      return v51 - __readfsqword(0x28u);
    v5 = (QT::QPersistentModelIndex **)((char *)v5 + 1);
  }
  while ( *((_BYTE *)v5 - 1) );
  v44 = (char *)v5;
  if ( !a2 )
    return v51 - __readfsqword(0x28u);
  v8 = (char *)v5 - (char *)a2;
  v7 = v8 == 0;
  v9 = v8;
  v10 = v8 - 1;
  v11 = nullptr;
  if ( !v7 )
  {
    v36 = v10;
    v11 = (char *)qvector_reserve(&dest, 0, v9, 1);
    dest = v11;
    v10 = v36;
  }
  *(_QWORD *)&v47 = v9;
  v11[v9 - 1] = 0;
  memmove(dest, a2, v10);
  v12 = (QT::QAbstractItemView **)qword_8D17F0;
  v37 = (QT::QAbstractItemView **)(qword_8D17F0 + 8 * xmmword_8D17F8);
  if ( (QT::QAbstractItemView **)qword_8D17F0 == v37 )
    goto LABEL_31;
  while ( 1 )
  {
    v18 = *v12;
    if ( (_QWORD)v47 )
    {
      v13 = v47 - 1;
      v14 = (const char *)dest;
      v15 = (unsigned __int64)(v47 - 1) >> 63;
      if ( !dest )
        goto LABEL_24;
    }
    else
    {
      v14 = &s1;
      LOBYTE(v15) = 0;
      v13 = 0;
      if ( !&s1 )
        goto LABEL_24;
    }
    if ( !(_BYTE)v15 )
      goto LABEL_12;
LABEL_24:
    v13 = 0;
    if ( !v14 )
    {
LABEL_12:
      QT::QString::fromUtf8(v50, v13, v14);
      goto LABEL_13;
    }
    v38 = v14;
    v19 = strlen(v14);
    QT::QString::fromUtf8(v50, v19, v38);
LABEL_13:
    a2 = (QT::QPersistentModelIndex **)v18;
    QT::QWidget::windowTitle((QT::QWidget *)&ptr);
    v16 = (volatile signed __int32 *)ptr;
    if ( v50[2] == (QT::QPersistentModelIndex *)v49.m128i_i64[1] )
      break;
    v17 = 0;
    if ( ptr )
      goto LABEL_15;
    if ( !v50[0] || _InterlockedSub((volatile signed __int32 *)v50[0], 1u) )
    {
LABEL_21:
      if ( v37 == ++v12 )
        goto LABEL_31;
    }
    else
    {
      ++v12;
      free(v50[0]);
      if ( v37 == v12 )
        goto LABEL_31;
    }
  }
  a2 = (QT::QPersistentModelIndex **)v49.m128i_i64[0];
  v41 = (volatile signed __int32 *)ptr;
  v17 = QT::QtPrivate::equalStrings(v50[2], v49.m128i_i64[0], v50[2], v50[1]);
  v16 = v41;
  if ( !v41 )
    goto LABEL_17;
LABEL_15:
  if ( !_InterlockedSub(v16, 1u) )
  {
    v39 = v17;
    free(ptr);
    v17 = v39;
  }
LABEL_17:
  if ( v50[0] && !_InterlockedSub((volatile signed __int32 *)v50[0], 1u) )
  {
    v40 = v17;
    free(v50[0]);
    v17 = v40;
  }
  if ( !v17 )
    goto LABEL_21;
  if ( v18 )
  {
    v20 = v45;
    v21 = v44;
    memset(v50, 0, sizeof(v50));
    v49 = 0;
    if ( v45 != v44 )
    {
      v50[0] = (QT::QPersistentModelIndex *)qvector_reserve(v50, 0, v45 - v44, 16);
      v20 = v45;
      v21 = v44;
    }
    if ( v21 < v20 )
    {
      while ( 1 )
      {
        v23 = unpack_dq(&v44, v20);
        a2 = (QT::QPersistentModelIndex **)v45;
        v24 = v23;
        if ( v44 >= v45 )
          break;
        v25 = unpack_dq(&v44, v45);
        v26 = v50[1];
        v27 = v50[0];
        if ( v50[2] < (QT::QPersistentModelIndex *)((char *)v50[1] + 1) )
        {
          v50[0] = (QT::QPersistentModelIndex *)qvector_reserve(v50, v50[0], (char *)v50[1] + 1, 16);
          v27 = v50[0];
          v26 = v50[1];
        }
        v22 = (char *)v27 + 16 * (_QWORD)v26;
        *(_OWORD *)v22 = -1;
        ++v50[1];
        *(_QWORD *)v22 = v24;
        *((_QWORD *)v22 + 1) = v25;
        v20 = v45;
        if ( v44 >= v45 )
          goto LABEL_42;
      }
      if ( v50[0] )
      {
        v50[1] = nullptr;
        qfree(v50[0], v45);
      }
    }
    else
    {
LABEL_42:
      v28 = v50[0];
      v49 = _mm_loadu_si128((const __m128i *)&v50[1]);
      v29 = QT::QAbstractItemView::model(v18);
      v30 = *(const char ***)(v29 + 216);
      v31 = v29;
      v32 = (__int64 *)(v29 + 136);
      if ( a4 == (a3 == 0) )
      {
        if ( !v30 )
          v30 = *(const char ***)(v29 + 208);
        ptr = v28;
        sub_48A3C0((__int64)v32, (__int64)v30, (__int64)&ptr);
      }
      else
      {
        if ( !v30 )
          v30 = *(const char ***)(v29 + 208);
        ptr = v28;
        sub_48A1D0(v32, v30, (__int64)&ptr);
      }
      a2 = v50;
      memset(v50, 0, sizeof(v50));
      QT::QAbstractItemModel::layoutChanged(v31, v50, 0);
      if ( v50[0] && !_InterlockedSub((volatile signed __int32 *)v50[0], 1u) )
      {
        v33 = v50[1];
        v34 = (QT::QPersistentModelIndex *)((char *)v50[1] + 8 * (__int64)v50[2]);
        if ( v50[1] != v34 )
        {
          do
          {
            v35 = v33;
            v33 = (QT::QPersistentModelIndex *)((char *)v33 + 8);
            QT::QPersistentModelIndex::~QPersistentModelIndex(v35);
          }
          while ( v34 != v33 );
        }
        free(v50[0]);
      }
      if ( v28 )
        qfree(v28, (const char *)v50);
    }
  }
LABEL_31:
  if ( dest )
  {
    *(_QWORD *)&v47 = 0;
    qfree(dest, (const char *)a2);
  }
  return v51 - __readfsqword(0x28u);
}
