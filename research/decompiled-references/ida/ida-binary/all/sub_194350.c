__int64 __fastcall sub_194350(__int64 *a1, __int64 a2)
{
  const char *v3; // rbx
  size_t v4; // rax
  unsigned int isValid; // ebx
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  void *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  QT::QRegularExpression *v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  QT::QRegularExpression *v18; // rdi
  __int64 v19; // [rsp+8h] [rbp-80h]
  __int64 v20; // [rsp+10h] [rbp-78h]
  __int64 v21; // [rsp+18h] [rbp-70h]
  char v22[8]; // [rsp+28h] [rbp-60h] BYREF
  void *ptr[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = &s1;
  ptr[3] = (void *)__readfsqword(0x28u);
  v4 = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v3 = *(const char **)a2;
    if ( *(_QWORD *)a2 )
    {
      if ( *v3 )
        v4 = strlen(v3 + 1) + 1;
    }
  }
  QT::QString::fromUtf8(ptr, v4, v3);
  QT::QRegularExpression::QRegularExpression(v22, ptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  isValid = QT::QRegularExpression::isValid((QT::QRegularExpression *)v22);
  if ( (_BYTE)isValid )
  {
    QT::QRegularExpression::QRegularExpression((QT::QRegularExpression *)ptr, (const QT::QRegularExpression *)v22);
    v7 = a1[1];
    v8 = a1[2];
    if ( v8 < v7 + 1 )
    {
      v20 = qvector_reserve(a1, 0, v7 + 1, 8);
      v12 = v20;
      v13 = a1[2];
      v14 = (QT::QRegularExpression *)*a1;
      a1[2] = v8;
      v21 = v13;
      v15 = a1[1] - 1;
      if ( v15 >= 0 )
      {
        v16 = v20;
        do
        {
          v17 = *(_QWORD *)v14;
          v18 = v14;
          v19 = v15;
          v14 = (QT::QRegularExpression *)((char *)v14 + 8);
          *((_QWORD *)v14 - 1) = 0;
          v16 += 8;
          *(_QWORD *)(v16 - 8) = v17;
          QT::QRegularExpression::~QRegularExpression(v18);
          v15 = v19 - 1;
        }
        while ( v19 );
        v14 = (QT::QRegularExpression *)*a1;
      }
      qfree(v14, 0, v10, v12, v11);
      *a1 = v20;
      a1[2] = v21;
      v7 = a1[1];
    }
    else
    {
      v20 = *a1;
    }
    v9 = ptr[0];
    ptr[0] = nullptr;
    *(_QWORD *)(v20 + 8 * v7) = v9;
    ++a1[1];
    QT::QRegularExpression::~QRegularExpression((QT::QRegularExpression *)ptr);
  }
  QT::QRegularExpression::~QRegularExpression((QT::QRegularExpression *)v22);
  return isValid;
}
