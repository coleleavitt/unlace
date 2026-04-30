QT::QString *__fastcall sub_2DA120(
        QT::QString *a1,
        QT::QAccessibleWidget *this,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int *a6,
        double a7,
        _DWORD *a8)
{
  unsigned int v8; // r10d
  QT::QAccessibleWidget *v11; // rbx
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int v17; // edx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  int v20; // eax
  char *v21; // rcx
  int v22; // r14d
  void *v23; // r8
  char *v24; // rcx
  unsigned int v25; // [rsp+8h] [rbp-58h]
  int v26; // [rsp+Ch] [rbp-54h]
  void *ptr; // [rsp+10h] [rbp-50h] BYREF
  __int64 v28; // [rsp+18h] [rbp-48h]
  unsigned __int64 v29; // [rsp+28h] [rbp-38h]

  v8 = a4;
  v11 = this;
  v26 = a3;
  v29 = __readfsqword(0x28u);
  if ( (debug & 0x80000) != 0 && (::a6[0] & 0x10) != 0 )
  {
    v25 = a4;
    v20 = sub_4F7B50(a5);
    v21 = "Before";
    if ( v26 != 1 )
    {
      v21 = "After";
      if ( v26 != 2 )
      {
        v21 = "At";
        if ( v26 )
          v21 = "UNKNOWN";
      }
    }
    this = (QT::QAccessibleWidget *)"%s IDAMemoAccessible::text%sOffset(offset=%d, boundaryType=%s)\n";
    sub_4F7CB0(
      16,
      (unsigned int)"%s IDAMemoAccessible::text%sOffset(offset=%d, boundaryType=%s)\n",
      (unsigned int)&unk_5C2F25,
      (_DWORD)v21,
      v25,
      v20);
    v8 = v25;
  }
  if ( !a6 )
  {
LABEL_31:
    if ( !under_debugger )
      interr(40261, this, a3, a4, a7);
LABEL_33:
    BUG();
  }
  if ( !a8 )
  {
    if ( under_debugger )
      goto LABEL_33;
    interr(40262, this, a3, a4, a7);
    goto LABEL_31;
  }
  v12 = v8;
  v13 = sub_2D8ED0(v11, (const char *)v8, a5, a7);
  v14 = (unsigned int)v13;
  if ( v26 == 1 )
  {
    v18 = (unsigned int)(v13 - 1);
    v17 = a5;
    goto LABEL_12;
  }
  v15 = HIDWORD(v13);
  if ( v26 == 2 )
  {
    v17 = a5;
    v18 = (unsigned int)v15;
LABEL_12:
    v19 = sub_2D8ED0(v11, (const char *)v18, v17, a7);
    LODWORD(v14) = v19;
    v15 = HIDWORD(v19);
    goto LABEL_8;
  }
  if ( v26 )
  {
    if ( !under_debugger )
      interr(40354, v12, v14, v15, a7);
    goto LABEL_33;
  }
LABEL_8:
  *a6 = v14;
  *a8 = v15;
  (*(void (__fastcall **)(QT::QString *, QT::QAccessibleWidget *))(*(_QWORD *)v11 + 248LL))(a1, v11);
  if ( (debug & 0x80000) != 0 && (::a6[0] & 0x10) != 0 )
  {
    v22 = *a6;
    QT::QString::toUtf8_helper((QT::QString *)&ptr, a1);
    LODWORD(v23) = v28;
    if ( !v28 )
      v23 = &QT::QByteArray::_empty;
    v24 = "Before";
    if ( v26 != 1 )
    {
      v24 = "After";
      if ( v26 != 2 )
        v24 = "At";
    }
    sub_4F7CB0(
      16,
      (unsigned int)"%s IDAMemoAccessible::text%sOffset() => text=%s, startOffset=%d, endOffset=%d\n",
      (unsigned int)&unk_5C2F25,
      (_DWORD)v24,
      (_DWORD)v23,
      v22);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
  }
  return a1;
}
