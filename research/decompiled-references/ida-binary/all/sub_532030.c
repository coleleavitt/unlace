__int64 __fastcall sub_532030(QT::QString *a1, const QT::QString *a2)
{
  unsigned __int8 *v2; // rbp
  unsigned __int8 *v3; // rdi
  unsigned int v4; // ebx
  void *v6; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 *v7; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 *v9; // [rsp+28h] [rbp-30h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
  v2 = v9;
  if ( !v9 )
    v2 = (unsigned __int8 *)&QT::QByteArray::_empty;
  QT::QString::toUtf8_helper((QT::QString *)&v6, a1);
  v3 = v7;
  if ( !v7 )
    v3 = (unsigned __int8 *)&QT::QByteArray::_empty;
  v4 = sub_531B70(v3, v2);
  if ( v6 && !_InterlockedSub((volatile signed __int32 *)v6, 1u) )
    free(v6);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v4;
}
