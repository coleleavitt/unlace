__int64 __fastcall sub_194240(__int64 *a1, __int64 a2)
{
  const char *v2; // rbx
  size_t v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  unsigned int hasMatch; // ebp
  _BYTE v8[8]; // [rsp+8h] [rbp-50h] BYREF
  void *ptr[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = &s1;
  ptr[3] = (void *)__readfsqword(0x28u);
  v3 = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v2 = *(const char **)a2;
    if ( *(_QWORD *)a2 )
    {
      if ( *v2 )
        v3 = strlen(v2 + 1) + 1;
    }
  }
  QT::QString::fromUtf8(ptr, v3, v2);
  v4 = *a1;
  v5 = *a1 + 8 * a1[1];
  if ( v5 == *a1 )
  {
LABEL_13:
    hasMatch = 0;
  }
  else
  {
    while ( 1 )
    {
      QT::QRegularExpression::match(v8, v4, ptr, 0, 0, 0);
      hasMatch = QT::QRegularExpressionMatch::hasMatch((QT::QRegularExpressionMatch *)v8);
      QT::QRegularExpressionMatch::~QRegularExpressionMatch((QT::QRegularExpressionMatch *)v8);
      if ( (_BYTE)hasMatch )
        break;
      v4 += 8;
      if ( v5 == v4 )
        goto LABEL_13;
    }
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return hasMatch;
}
